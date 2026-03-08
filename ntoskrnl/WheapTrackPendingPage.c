/*
 * XREFs of WheapTrackPendingPage @ 0x140A06FC8
 * Callers:
 *     WheapLogPageOfflineAttemptEvent @ 0x140A05BE0 (WheapLogPageOfflineAttemptEvent.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x14037D610 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExInterlockedPushEntryList @ 0x14060A750 (ExInterlockedPushEntryList.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

int __fastcall WheapTrackPendingPage(struct _SINGLE_LIST_ENTRY *a1)
{
  unsigned int v2; // eax
  struct _SINGLE_LIST_ENTRY *Pool2; // rax
  _DWORD Src[8]; // [rsp+20h] [rbp-38h] BYREF

  v2 = WheapPolicyPendingPageListSz << 12;
  if ( (unsigned int)(WheapPolicyPendingPageListSz << 12) > 0xA00000 )
    v2 = 10485760;
  if ( 16LL * dword_140C2A4C0 >= (unsigned __int64)v2 )
  {
    Src[7] = 0;
    Src[0] = 1733060695;
    Src[1] = 1;
    Src[2] = 32;
    Src[3] = 1;
    Src[5] = -2147483597;
    Src[4] = 1280201291;
    Src[6] = 2;
    LODWORD(Pool2) = WheaLogInternalEvent(Src);
  }
  else
  {
    Pool2 = (struct _SINGLE_LIST_ENTRY *)ExAllocatePool2(64LL, 16LL, 1634035799LL);
    if ( Pool2 )
    {
      _InterlockedIncrement(&dword_140C2A4C0);
      Pool2[1].Next = a1;
      LODWORD(Pool2) = (unsigned int)ExInterlockedPushEntryList(
                                       (PSINGLE_LIST_ENTRY)&WheapOfflineChecker,
                                       Pool2,
                                       &qword_140C2A4A8);
      _InterlockedIncrement(&dword_140C2A4B0);
    }
  }
  return (int)Pool2;
}
