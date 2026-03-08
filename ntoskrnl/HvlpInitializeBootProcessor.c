/*
 * XREFs of HvlpInitializeBootProcessor @ 0x14053ECAC
 * Callers:
 *     HvlPhase0Initialize @ 0x14080D7C8 (HvlPhase0Initialize.c)
 * Callees:
 *     HvlEnlightenProcessor @ 0x14037F430 (HvlEnlightenProcessor.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvlpMapStatisticsPage @ 0x14053EE40 (HvlpMapStatisticsPage.c)
 */

__int64 __fastcall HvlpInitializeBootProcessor(__int64 a1)
{
  __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v4; // rax
  void *v6; // rax
  void *v7; // rsi
  signed __int32 v8[12]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v1 = 0LL;
  if ( HvlHypervisorConnected )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedOr(v8, 0);
    v11 = 0LL;
    v12 = 0LL;
    v10 = 0LL;
    if ( (HvlpFlags & 0x80000) != 0 && (HvlpFlags & 2) == 0 )
    {
      v4 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))qword_140C01B28)(a1, 1LL, &v11, 4LL);
      if ( !v4 )
        return 3221225626LL;
      CurrentPrcb->VirtualApicAssist = (void *)v4;
    }
    if ( (HvlpFlags & 2) == 0 && (HvlpFlags & 0x8000) != 0 )
    {
      v6 = (void *)((__int64 (__fastcall *)(__int64, __int64, __int64 *))qword_140C01B28)(a1, 1LL, &v12);
      v7 = v6;
      if ( v6 )
      {
        memset(v6, 0, 0x80uLL);
        CurrentPrcb->SchedulerAssist = v7;
      }
    }
    if ( (HvlpRootFlags & 0x10) != 0 )
    {
      v9 = 0LL;
      if ( (int)HvlpMapStatisticsPage(2LL, &v9, &v10) >= 0 )
        v1 = ((__int64 (__fastcall *)(__int64, __int64, __int64))qword_140C01B30)(v10, 1LL, 4LL);
      CurrentPrcb->StatisticsPage = (unsigned __int64 *)v1;
    }
    HvlEnlightenProcessor(0);
  }
  return 0LL;
}
