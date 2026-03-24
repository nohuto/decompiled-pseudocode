/*
 * XREFs of MiFillLogProcessInfo @ 0x1403182E0
 * Callers:
 *     MiLogWsEmptyControl @ 0x140317F80 (MiLogWsEmptyControl.c)
 *     MiLogTrimWs @ 0x140318224 (MiLogTrimWs.c)
 *     MiLogHotPatchOperation @ 0x1408CB7A8 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1408CBA90 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchRundown @ 0x1408CC00C (MiLogHotPatchRundown.c)
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
      v4 = *(_DWORD *)(a1 - 248);
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
