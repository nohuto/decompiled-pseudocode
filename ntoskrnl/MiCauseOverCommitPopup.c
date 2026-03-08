/*
 * XREFs of MiCauseOverCommitPopup @ 0x140653D38
 * Callers:
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 *     MiPageFileNoFreeSpace @ 0x140638D04 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     IoRaiseInformationalHardError @ 0x140554960 (IoRaiseInformationalHardError.c)
 */

char __fastcall MiCauseOverCommitPopup(__int64 a1)
{
  int v1; // eax
  NTSTATUS v2; // ecx

  if ( *(_QWORD *)(a1 + 17816) != *(_QWORD *)(a1 + 16392) )
  {
    v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 16404));
    if ( v1 > 1 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 16404));
      return v1;
    }
    v2 = -1073741112;
LABEL_8:
    LOBYTE(v1) = IoRaiseInformationalHardError(v2, 0LL, 0LL);
    return v1;
  }
  v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 16400));
  if ( v1 <= 1 )
  {
    v2 = -1073741523;
    goto LABEL_8;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 16400));
  return v1;
}
