/*
 * XREFs of KeVerifyContextXStateCetU @ 0x1403649C8
 * Callers:
 *     KiContinuePreviousModeUser @ 0x1403647F4 (KiContinuePreviousModeUser.c)
 *     KyRaiseException @ 0x140576670 (KyRaiseException.c)
 *     PspGetSetContextInternal @ 0x1406EA840 (PspGetSetContextInternal.c)
 * Callees:
 *     KiVerifyContextXStateCetUEnabled @ 0x140457B0C (KiVerifyContextXStateCetUEnabled.c)
 *     RtlLocateExtendedFeature2 @ 0x14045BC40 (RtlLocateExtendedFeature2.c)
 */

__int64 __fastcall KeVerifyContextXStateCetU(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 result; // rax
  _QWORD *ExtendedFeature2; // r8
  __int64 v8; // r10
  unsigned __int64 v9; // rax
  __int64 v10; // r9

  if ( (*(_DWORD *)(a2 + 48) & 0x100040) != 0x100040 )
    return 0LL;
  ExtendedFeature2 = (_QWORD *)RtlLocateExtendedFeature2(a2 + 1232, 11LL, 0xFFFFF780000003D8uLL, 0LL);
  if ( !ExtendedFeature2 )
    return 0LL;
  v8 = *(int *)(a2 + 1248);
  v9 = __readmsr(0x6A7u);
  *a3 = v9;
  v10 = *(_QWORD *)(v8 + a2 + 1232) & 0x800LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x100000) != 0 )
  {
    if ( !v10 )
    {
      *(_QWORD *)(v8 + a2 + 1232) |= 0x800uLL;
      *ExtendedFeature2 = 1LL;
      ExtendedFeature2[1] = v9;
      return 0LL;
    }
    result = KiVerifyContextXStateCetUEnabled(ExtendedFeature2, v9);
    if ( (int)result >= 0 )
      return 0LL;
  }
  else
  {
    if ( !v10 )
      return 0LL;
    if ( *ExtendedFeature2 )
      return 3221227018LL;
    else
      return ExtendedFeature2[1] != 0LL ? 0xC000060A : 0;
  }
  return result;
}
