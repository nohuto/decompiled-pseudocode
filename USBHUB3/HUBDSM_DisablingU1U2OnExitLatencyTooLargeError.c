/*
 * XREFs of HUBDSM_DisablingU1U2OnExitLatencyTooLargeError @ 0x1C0025250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_DisablingU1U2OnExitLatencyTooLargeError(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  if ( *(_BYTE *)(v1 + 2215) )
  {
    _InterlockedOr((volatile signed __int32 *)(v1 + 2216), 0x80u);
  }
  else if ( *(_BYTE *)(v1 + 2214) )
  {
    _InterlockedOr((volatile signed __int32 *)(v1 + 2216), 0x40u);
  }
  else
  {
    return 4065;
  }
  return v2;
}
