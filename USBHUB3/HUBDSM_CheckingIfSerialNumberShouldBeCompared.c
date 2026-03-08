/*
 * XREFs of HUBDSM_CheckingIfSerialNumberShouldBeCompared @ 0x1C00236B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfSerialNumberShouldBeCompared(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 960);
  if ( (*(_DWORD *)(v1 + 1632) & 0x40) != 0
    && (*(_WORD *)(v1 + 1990) > 0x200u || (*(_DWORD *)(*(_QWORD *)(v1 + 16) + 32LL) & 0x20) != 0) )
  {
    return 4089LL;
  }
  else
  {
    return 4061LL;
  }
}
