/*
 * XREFs of CmpCmdHiveOpen @ 0x140603588
 * Callers:
 *     CmLoadKey @ 0x14069DA54 (CmLoadKey.c)
 *     CmLoadAppKey @ 0x1406E8CDC (CmLoadAppKey.c)
 *     CmReplaceKey @ 0x14086DA18 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140870F90 (CmpFlushBackupHive.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x14024FB60 (IoSetThreadHardErrorMode.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025F340 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     RtlImpersonateSelfEx @ 0x140694588 (RtlImpersonateSelfEx.c)
 *     PsReferenceImpersonationTokenEx @ 0x1406CF720 (PsReferenceImpersonationTokenEx.c)
 *     PsImpersonateClient @ 0x1406D3C60 (PsImpersonateClient.c)
 *     CmpInitHiveFromFile @ 0x1406E9D98 (CmpInitHiveFromFile.c)
 */

__int64 __fastcall CmpCmdHiveOpen(
        const UNICODE_STRING *a1,
        char a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  NTSTATUS inited; // eax
  NTSTATUS v12; // ebx
  unsigned int v13; // eax
  int v14; // ecx
  struct _DMA_ADAPTER *v15; // rdi
  NTSTATUS v16; // eax
  struct _KTHREAD *CurrentThread; // rcx
  BOOLEAN v19; // [rsp+50h] [rbp-69h] BYREF
  BOOLEAN v20; // [rsp+51h] [rbp-68h] BYREF
  BOOLEAN EnableHardErrors; // [rsp+52h] [rbp-67h]
  _QWORD ImpersonationLevel[4]; // [rsp+58h] [rbp-61h] BYREF
  __int64 v23; // [rsp+78h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+80h] [rbp-39h] BYREF
  __int64 *v25; // [rsp+A0h] [rbp-19h]
  __int64 v26; // [rsp+A8h] [rbp-11h]

  ImpersonationLevel[0] = a7;
  ImpersonationLevel[2] = a8;
  ImpersonationLevel[1] = a9;
  ImpersonationLevel[3] = a4;
  EnableHardErrors = IoSetThreadHardErrorMode(0);
  inited = CmpInitHiveFromFile(a1, a5, a7);
  v12 = inited;
  if ( !a7 && a2 && (a6 & 0x20) == 0 )
  {
    if ( inited == -1073741790
      || (v13 = inited + 1073741724, v13 <= 0xE) && (v14 = 17473, _bittest(&v14, v13))
      || v12 == -1073741421 )
    {
      v20 = 0;
      v19 = 0;
      LODWORD(ImpersonationLevel[0]) = 0;
      v15 = (struct _DMA_ADAPTER *)PsReferenceImpersonationTokenEx(
                                     (unsigned int)KeGetCurrentThread(),
                                     1,
                                     (unsigned int)&v20,
                                     (unsigned int)&v19,
                                     (__int64)ImpersonationLevel,
                                     0LL);
      v12 = RtlImpersonateSelfEx(SecurityImpersonation, 0, 0LL);
      if ( v12 >= 0 )
      {
        v16 = CmpInitHiveFromFile(a1, a5, 0LL);
        CurrentThread = KeGetCurrentThread();
        v12 = v16;
        if ( v15 )
          PsImpersonateClient(CurrentThread, v15, v20, v19, ImpersonationLevel[0]);
        else
          PsImpersonateClient(CurrentThread, 0LL, 0, 0, SecurityImpersonation);
        if ( v12 >= 0
          && (a5 & 0x2000000) != 0
          && (unsigned int)dword_140C02130 > 5
          && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
        {
          v23 = 0x1000000LL;
          v25 = &v23;
          v26 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C02130,
            (unsigned __int8 *)&unk_140023B60,
            0LL,
            0LL,
            3u,
            &v24);
        }
      }
      if ( v15 )
        HalPutDmaAdapter(v15);
    }
  }
  IoSetThreadHardErrorMode(EnableHardErrors);
  return (unsigned int)v12;
}
