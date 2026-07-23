/*
 * XREFs of RtlpComputeEpilogueOffset @ 0x1403EBCD4
 * Callers:
 *     PopThermalZoneDpc @ 0x1402010F0 (PopThermalZoneDpc.c)
 *     CmpLazyFlushDpcRoutine @ 0x140249710 (CmpLazyFlushDpcRoutine.c)
 *     ExpTimerDpcRoutine @ 0x14024C260 (ExpTimerDpcRoutine.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1402A4770 (ExpTimeRefreshDpcRoutine.c)
 *     IopTimerDispatch @ 0x1405010B0 (IopTimerDispatch.c)
 *     FsRtlTruncateSmallMcb @ 0x1405BF8F0 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KeExitRetpoline @ 0x1402A37B8 (KeExitRetpoline.c)
 *     sub_140A10D10 @ 0x140A10D10 (sub_140A10D10.c)
 *     KeGuardDispatchICall @ 0x140A12330 (KeGuardDispatchICall.c)
 */

__int64 __fastcall RtlpComputeEpilogueOffset(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  _QWORD *v3; // rbx
  unsigned int i; // eax
  __int64 v6; // rcx
  _QWORD *v7; // r9
  unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  for ( i = 0; i < 0x19; ++i )
    *a2++ ^= a3;
  *(_DWORD *)v3 ^= a3;
  v6 = *((int *)v3 + 49);
  if ( a3 && (_DWORD)v6 )
  {
    v7 = &a2[v6 - 1];
    while ( 1 )
    {
      *v7-- ^= a3;
      v9 = __ROR8__(a3, v6);
      a3 = v9 & 0x3F;
      _bittestandcomplement64((signed __int64 *)&v9, a3);
      v6 = (unsigned int)(v6 - 1);
      if ( !(_DWORD)v6 )
        break;
      a3 = v9;
    }
  }
  if ( (*((_DWORD *)v3 + 613) & 0x100000) != 0 )
    KeExitRetpoline(v6, a2, a3);
  else
    _mm_lfence();
  sub_140A10D10(a1, v3, 0LL, 0LL);
  return ((__int64 (__fastcall *)(_QWORD *, __int64))v3[34])(v3 + 243, 1LL);
}
