/*
 * XREFs of ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1C01D587C
 * Callers:
 *     ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1C01D5C4C (-CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C01D57F8 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 */

struct HTOUCHINPUT__ *__fastcall AllocTouchInputInfo(
        struct tagTHREADINFO *a1,
        unsigned int a2,
        const struct tagTOUCHINPUT *a3,
        int a4)
{
  unsigned __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v10; // r8
  __int64 v11; // rbx
  struct HTOUCHINPUT__ *result; // rax
  ULONG v13; // eax
  __int64 v14; // rdx
  tagDomLock *v15; // [rsp+20h] [rbp-68h] BYREF
  char v16; // [rsp+28h] [rbp-60h]
  char v17; // [rsp+48h] [rbp-40h]
  char v18; // [rsp+50h] [rbp-38h]

  if ( a2
    && (v8 = 48LL * (a2 - 1), v8 <= 0xFFFFFFFF)
    && (unsigned int)v8 < 0xFFFFFFB0
    && (v9 = 48 * a2, 48 * (unsigned __int64)a2 <= 0xFFFFFFFF) )
  {
    SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>((__int64)&v15);
    LOBYTE(v10) = 20;
    v11 = HMAllocObject(a1, 0LL, v10);
    if ( v18 && v17 )
    {
      if ( v15 )
      {
        if ( v16 )
          tagDomLock::UnLockExclusive(v15);
        else
          tagDomLock::UnLockShared(v15);
      }
      v17 = 0;
    }
    if ( v11 )
    {
      *(_DWORD *)(v11 + 24) = a2;
      memmove((void *)(v11 + 32), a3, v9);
      result = *(struct HTOUCHINPUT__ **)v11;
      *(_DWORD *)(v11 + 28) = a4;
      return result;
    }
  }
  else
  {
    v13 = RtlNtStatusToDosError(-1073741675);
    UserSetLastError(v13, v14);
  }
  return 0LL;
}
