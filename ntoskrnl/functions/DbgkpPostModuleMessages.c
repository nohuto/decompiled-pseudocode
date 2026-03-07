void __fastcall DbgkpPostModuleMessages(__int64 a1, void *a2, struct _KEVENT *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rax
  unsigned int v11; // r9d
  unsigned int v12; // eax
  unsigned int v13; // r14d
  char *v14; // r15
  __int64 v15; // rcx
  __int16 v16; // ax
  unsigned int *v18; // rdx
  unsigned int *v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rax
  unsigned int v22; // r9d
  unsigned int v23; // ecx
  int i; // [rsp+30h] [rbp-58h]
  int j; // [rsp+30h] [rbp-58h]
  void *v26; // [rsp+38h] [rbp-50h]
  __int64 v27; // [rsp+38h] [rbp-50h]
  _QWORD *v28; // [rsp+40h] [rbp-48h]
  _QWORD *v29; // [rsp+48h] [rbp-40h]
  PVOID P; // [rsp+50h] [rbp-38h] BYREF
  unsigned int *v31; // [rsp+90h] [rbp+8h]
  unsigned int *v32; // [rsp+A8h] [rbp+20h] BYREF

  P = 0LL;
  LODWORD(v32) = 0;
  if ( (*(_BYTE *)(a1 + 992) & 1) != 0 )
  {
    VslSendDebugAttachNotifications();
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 1360);
    if ( v6 )
    {
      v29 = (_QWORD *)(*(_QWORD *)(v6 + 24) + 16LL);
      v7 = v29;
      v8 = (_QWORD *)*v29;
      v9 = 0;
      for ( i = 0; ; ++i )
      {
        v28 = v8;
        if ( v8 == v7 || v9 >= DbgkpMaxModuleMsgs )
          break;
        if ( v9 > 1 )
        {
          v26 = (void *)v8[6];
          v10 = RtlImageNtHeader((__int64)v26);
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
          DbgkPostModuleMessage((PVOID)a1, a2, v26, v11, v12, a3);
        }
        v8 = (_QWORD *)*v28;
        v9 = i + 1;
        v7 = v29;
      }
    }
    if ( (int)PsGetProcessEnclaveModuleInfo(a1, (char **)&P, (unsigned int *)&v32) >= 0 )
    {
      v13 = 0;
      v14 = (char *)P;
      while ( v13 < (unsigned int)v32 )
      {
        DbgkPostEnclaveModuleMessages((void *)a1, a2, a3, *(_QWORD *)&v14[16 * v13], *(_DWORD *)&v14[16 * v13 + 8]);
        ++v13;
      }
      PsFreeEnclaveModuleInfo(v14, (int)v32);
    }
    v15 = *(_QWORD *)(a1 + 1408);
    if ( v15 )
    {
      v16 = *(_WORD *)(a1 + 2412);
      if ( v16 == 332 || v16 == 452 )
      {
        v32 = (unsigned int *)(*(unsigned int *)(*(_QWORD *)v15 + 12LL) + 12LL);
        v18 = v32;
        v19 = (unsigned int *)*v32;
        v20 = 0;
        for ( j = 0; ; ++j )
        {
          v31 = v19;
          if ( v19 == v18 || v20 >= DbgkpMaxModuleMsgs )
            break;
          if ( v20 > 1 )
          {
            v27 = v19[6];
            v21 = RtlImageNtHeader(v27);
            if ( v21 )
            {
              v22 = *(_DWORD *)(v21 + 12);
              v23 = *(_DWORD *)(v21 + 16);
            }
            else
            {
              v22 = 0;
              v23 = 0;
            }
            DbgkPostModuleMessage((PVOID)a1, a2, (void *)v27, v22, v23, a3);
          }
          v19 = (unsigned int *)*v31;
          v20 = j + 1;
          v18 = v32;
        }
      }
    }
  }
}
