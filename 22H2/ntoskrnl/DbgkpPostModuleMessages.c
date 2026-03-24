/*
 * XREFs of DbgkpPostModuleMessages @ 0x1408852F0
 * Callers:
 *     DbgkCreateThread @ 0x1406C01E0 (DbgkCreateThread.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x140884E1C (DbgkpPostFakeProcessCreateMessages.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14029CFE0 (RtlImageNtHeader.c)
 *     DbgkPostEnclaveModuleMessages @ 0x1404EDE30 (DbgkPostEnclaveModuleMessages.c)
 *     DbgkPostModuleMessage @ 0x1404EDEAC (DbgkPostModuleMessage.c)
 *     PsFreeEnclaveModuleInfo @ 0x1405845F0 (PsFreeEnclaveModuleInfo.c)
 *     PsGetProcessEnclaveModuleInfo @ 0x14058464C (PsGetProcessEnclaveModuleInfo.c)
 *     VslSendDebugAttachNotifications @ 0x1408902B4 (VslSendDebugAttachNotifications.c)
 *     MmPostHotPatchDbgModuleMessages @ 0x1408CEA50 (MmPostHotPatchDbgModuleMessages.c)
 */

__int64 __fastcall DbgkpPostModuleMessages(_BYTE *Object, PVOID a2, PRKEVENT a3)
{
  __int64 result; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rax
  unsigned int v11; // r9d
  unsigned int v12; // eax
  unsigned int v13; // r14d
  char *v14; // r15
  __int16 v15; // cx
  unsigned int *v16; // rdx
  unsigned int *v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // r9d
  unsigned int v20; // ecx
  int i; // [rsp+30h] [rbp-68h]
  int j; // [rsp+30h] [rbp-68h]
  void *v23; // [rsp+38h] [rbp-60h]
  __int64 v24; // [rsp+38h] [rbp-60h]
  _QWORD *v25; // [rsp+40h] [rbp-58h]
  unsigned int *v26; // [rsp+48h] [rbp-50h]
  _QWORD *v27; // [rsp+50h] [rbp-48h]
  PVOID P; // [rsp+58h] [rbp-40h] BYREF
  unsigned int *v29; // [rsp+60h] [rbp-38h]
  unsigned int v30; // [rsp+B8h] [rbp+20h] BYREF

  P = 0LL;
  v30 = 0;
  if ( (Object[992] & 1) != 0 )
    return VslSendDebugAttachNotifications();
  v27 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 170) + 24LL) + 16LL);
  v7 = v27;
  v8 = (_QWORD *)*v27;
  v9 = 0;
  for ( i = 0; ; ++i )
  {
    v25 = v8;
    if ( v8 == v7 || v9 >= DbgkpMaxModuleMsgs )
      break;
    if ( v9 > 1 )
    {
      v23 = (void *)v8[6];
      v10 = RtlImageNtHeader((__int64)v23);
      if ( v10 )
      {
        v11 = *(_DWORD *)(v10 + 12);
        v12 = *(_DWORD *)(v10 + 16);
      }
      else
      {
        v11 = 0;
        v12 = 0;
      }
      DbgkPostModuleMessage(Object, a2, v23, v11, v12, a3);
    }
    v8 = (_QWORD *)*v25;
    v9 = i + 1;
    v7 = v27;
  }
  if ( (int)PsGetProcessEnclaveModuleInfo((__int64)Object, (char **)&P, &v30) >= 0 )
  {
    v13 = 0;
    v14 = (char *)P;
    while ( v13 < v30 )
    {
      DbgkPostEnclaveModuleMessages(Object, a2, a3, *(_QWORD *)&v14[16 * v13], *(_DWORD *)&v14[16 * v13 + 8]);
      ++v13;
    }
    PsFreeEnclaveModuleInfo(v14, v30);
  }
  MmPostHotPatchDbgModuleMessages(Object, a2, a3);
  result = *((_QWORD *)Object + 176);
  if ( result )
  {
    v15 = *(_WORD *)(result + 8);
    if ( v15 == 332 || v15 == 452 )
    {
      v29 = (unsigned int *)(*(unsigned int *)(*(_QWORD *)result + 12LL) + 12LL);
      v16 = v29;
      v17 = (unsigned int *)*v29;
      result = 0LL;
      for ( j = 0; ; ++j )
      {
        v26 = v17;
        if ( v17 == v16 || (unsigned int)result >= DbgkpMaxModuleMsgs )
          break;
        if ( (unsigned int)result > 1 )
        {
          v24 = v17[6];
          v18 = RtlImageNtHeader(v24);
          if ( v18 )
          {
            v19 = *(_DWORD *)(v18 + 12);
            v20 = *(_DWORD *)(v18 + 16);
          }
          else
          {
            v19 = 0;
            v20 = 0;
          }
          DbgkPostModuleMessage(Object, a2, (void *)v24, v19, v20, a3);
        }
        v17 = (unsigned int *)*v26;
        result = (unsigned int)(j + 1);
        v16 = v29;
      }
    }
  }
  return result;
}
