/*
 * XREFs of SeCheckForCriticalAceRemoval @ 0x1406E7260
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1406E5AEC (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025F340 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     PsGetCurrentThreadProcess @ 0x140316F60 (PsGetCurrentThreadProcess.c)
 *     SepCheckForCriticalAceRemoval @ 0x140347FBC (SepCheckForCriticalAceRemoval.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14062F1D8 (PsGetAllocatedFullProcessImageNameEx.c)
 */

char __fastcall SeCheckForCriticalAceRemoval(void *a1, void *a2, __int64 *a3, _BYTE *a4)
{
  int AllocatedFullProcessImageName; // eax
  _KPROCESS *CurrentThreadProcess; // rax
  int v7; // r8d
  __int64 v8; // rdx
  char v10; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v11[15]; // [rsp+31h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+40h] [rbp-9h] BYREF
  _DWORD *v13; // [rsp+60h] [rbp+17h]
  int v14; // [rsp+68h] [rbp+1Fh]
  int v15; // [rsp+6Ch] [rbp+23h]
  __int64 v16; // [rsp+70h] [rbp+27h]
  _DWORD v17[2]; // [rsp+78h] [rbp+2Fh] BYREF

  *(_QWORD *)&v11[7] = 0LL;
  v10 = 0;
  v11[0] = 0;
  LOBYTE(AllocatedFullProcessImageName) = SepCheckForCriticalAceRemoval(a1, a2, a3, &v10, v11);
  if ( v10 )
  {
    if ( !v11[0] )
    {
      CurrentThreadProcess = PsGetCurrentThreadProcess();
      AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(
                                        (__int64)CurrentThreadProcess,
                                        (__int64)&v11[7]);
      if ( AllocatedFullProcessImageName >= 0 && (unsigned int)dword_140C02B70 > 5 )
      {
        LOBYTE(AllocatedFullProcessImageName) = tlgKeywordOn((__int64)&dword_140C02B70, 0x200000000000LL);
        if ( (_BYTE)AllocatedFullProcessImageName )
        {
          v7 = (unsigned __int16)**(_WORD **)&v11[7];
          v8 = *(_QWORD *)(*(_QWORD *)&v11[7] + 8LL);
          v15 = 0;
          v17[1] = 0;
          v13 = v17;
          v16 = v8;
          v17[0] = v7;
          v14 = 2;
          LOBYTE(AllocatedFullProcessImageName) = tlgWriteTransfer_EtwWriteTransfer(
                                                    (__int64)&dword_140C02B70,
                                                    (unsigned __int8 *)&word_14002C316,
                                                    0LL,
                                                    0LL,
                                                    4u,
                                                    &v12);
        }
      }
    }
  }
  *a4 = 0;
  return AllocatedFullProcessImageName;
}
