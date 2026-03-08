/*
 * XREFs of MiFillLogProcessInfo @ 0x140224D68
 * Callers:
 *     MiAgeWorkingSet @ 0x1402248A0 (MiAgeWorkingSet.c)
 *     MiLogTrimWs @ 0x1402F0ADC (MiLogTrimWs.c)
 *     MiLogWsEmptyControl @ 0x140650470 (MiLogWsEmptyControl.c)
 *     MiLogHotPatchOperation @ 0x140A35E3C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140A36298 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchRundown @ 0x140A36A34 (MiLogHotPatchRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFillLogProcessInfo(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  int v4; // ecx

  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7u) < 2 )
    {
      v4 = *(_DWORD *)(a1 - 184);
      result = 0LL;
    }
    else
    {
      result = 0LL;
      v4 = 0;
    }
  }
  else
  {
    result = a1 - 216;
    v4 = *(_DWORD *)(a1 - 576);
  }
  *a2 = v4;
  *a3 = result;
  return result;
}
