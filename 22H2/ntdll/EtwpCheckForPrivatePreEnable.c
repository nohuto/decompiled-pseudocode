/*
 * XREFs of EtwpCheckForPrivatePreEnable @ 0x180043280
 * Callers:
 *     EtwNotificationRegister @ 0x180043040 (EtwNotificationRegister.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     EtwpFindGuidEntry @ 0x180043394 (EtwpFindGuidEntry.c)
 *     EtwpRegisterGuidsApiCallback @ 0x180046630 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpPopulatePrivateEnableInfoFromGuidEntry @ 0x180083938 (EtwpPopulatePrivateEnableInfoFromGuidEntry.c)
 *     EtwpPreEnableEventApiCallback @ 0x1800855F8 (EtwpPreEnableEventApiCallback.c)
 *     EtwpGetUmProcessImageInfo @ 0x1800878A4 (EtwpGetUmProcessImageInfo.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

signed __int64 __fastcall EtwpCheckForPrivatePreEnable(__int64 a1)
{
  char v2; // r14
  signed __int64 result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  signed __int64 v7; // rsi
  volatile signed __int64 *v8; // rdi
  unsigned __int8 *v9; // rbp
  __int64 v10; // r15
  __int128 v11; // xmm0
  __int64 v12; // r8
  _QWORD v13[15]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = 0;
  result = EtwpFindGuidEntry((void *)(a1 + 32));
  v7 = result;
  if ( result )
  {
    v8 = (volatile signed __int64 *)(result + 40);
    RtlAcquireSRWLockShared((volatile signed __int64 *)(result + 40), v4, v5, v6);
    *(_QWORD *)(a1 + 248) = v7;
    EtwpPopulatePrivateEnableInfoFromGuidEntry(a1);
    v9 = (unsigned __int8 *)(a1 + 150);
    v10 = 4LL;
    do
    {
      if ( *(v9 - 2) )
      {
        if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 || *(__int16 *)(a1 + 98) < 0 )
          EtwpGetUmProcessImageInfo(*v9, a1);
        v2 = 1;
      }
      v9 += 24;
      --v10;
    }
    while ( v10 );
    if ( v2 )
    {
      if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 )
      {
        memset(v13, 0, sizeof(v13));
        v11 = *(_OWORD *)(v7 + 24);
        v13[13] = *(_QWORD *)(v7 + 152);
        LODWORD(v13[14]) = *(_DWORD *)(v7 + 160);
        *(_OWORD *)&v13[5] = v11;
        RtlReleaseSRWLockShared(v8);
        LOBYTE(v12) = 1;
        return EtwpRegisterGuidsApiCallback(v13, a1, v12);
      }
      else
      {
        RtlReleaseSRWLockShared(v8);
        return EtwpPreEnableEventApiCallback(a1);
      }
    }
    else
    {
      return RtlReleaseSRWLockShared(v8);
    }
  }
  return result;
}
