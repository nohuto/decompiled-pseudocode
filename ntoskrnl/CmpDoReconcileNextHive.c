/*
 * XREFs of CmpDoReconcileNextHive @ 0x140732AC0
 * Callers:
 *     <none>
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     CmpGetNextActiveHive @ 0x1406BD940 (CmpGetNextActiveHive.c)
 *     CmpFlushHive @ 0x1406BEA70 (CmpFlushHive.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x140730814 (HvGetEffectiveLogSizeCapForHive.c)
 *     CmpIsHiveEligibleForLazyReconcile @ 0x140732BD4 (CmpIsHiveEligibleForLazyReconcile.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x1407333FC (CmpFlushUnsupportedOperationTelemetry.c)
 */

char __fastcall CmpDoReconcileNextHive(_BYTE *a1, unsigned __int64 *a2)
{
  char v2; // bp
  unsigned __int64 v3; // rsi
  struct _EX_RUNDOWN_REF *v6; // rcx
  __int64 *NextActiveHive; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 UnbiasedInterruptTime; // r14
  unsigned __int64 v10; // rcx
  unsigned int EffectiveLogSizeCapForHive; // eax

  v2 = 0;
  v3 = 10000000LL * (unsigned int)dword_140C02004;
  if ( !BYTE1(NlsMbOemCodePageTag) )
  {
    v6 = 0LL;
    while ( 1 )
    {
      NextActiveHive = CmpGetNextActiveHive(v6);
      if ( !NextActiveHive )
        break;
      v8 = -1LL;
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      if ( (unsigned __int8)CmpIsHiveEligibleForLazyReconcile(NextActiveHive) )
      {
        EffectiveLogSizeCapForHive = HvGetEffectiveLogSizeCapForHive((unsigned int *)NextActiveHive);
        if ( (int)CmpFlushHive(
                    (ULONG_PTR)NextActiveHive,
                    *((_DWORD *)NextActiveHive + 45) < EffectiveLogSizeCapForHive ? 22 : 6) < 0 )
        {
          *a1 = 1;
          v8 = UnbiasedInterruptTime + 10000000LL * (unsigned int)dword_140C0200C;
        }
      }
      else if ( *((_DWORD *)NextActiveHive + 32) )
      {
        if ( (NextActiveHive[20] & 0x8001) == 0 )
        {
          v2 = 1;
          v10 = NextActiveHive[518] + 10000000LL * (unsigned int)dword_140C02000;
          if ( UnbiasedInterruptTime < v10 )
            v8 = v10 - UnbiasedInterruptTime;
        }
      }
      v6 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( v8 >= v3 )
        v8 = v3;
      v3 = v8;
    }
    CmpFlushUnsupportedOperationTelemetry();
    if ( v2 )
      *a2 = v3;
  }
  return v2;
}
