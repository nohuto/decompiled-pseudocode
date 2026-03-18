/*
 * XREFs of ?LogBoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x18023331C
 * Callers:
 *     ?BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x1802313FC (-BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800BB1F8 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BB2A0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 */

void __fastcall CInteractionTracker::LogBoostCompositorClock(CInteractionTracker *this)
{
  __int64 v1; // rcx
  int v2; // r9d
  int v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1803E3798 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1803E3798, 2LL) )
    {
      v7 = 0;
      v5 = &v3;
      v3 = v2;
      v6 = 4;
      tlgWriteTransfer_EventWriteTransfer(v1, (unsigned __int8 *)dword_180380C5A, 0LL, 0LL, 3u, &v4);
    }
  }
}
