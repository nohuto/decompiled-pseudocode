/*
 * XREFs of PfSnCaptureParamBlockString @ 0x1407E5060
 * Callers:
 *     PfSnScanCommandLine @ 0x1407E4F40 (PfSnScanCommandLine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnCaptureParamBlockString(__int64 a1, _OWORD *a2, __int64 a3)
{
  __int64 v3; // r9
  unsigned int v4; // edx

  *(_OWORD *)a3 = *a2;
  v3 = *(_QWORD *)(a3 + 8);
  v4 = 0;
  if ( v3 && *(_WORD *)a3 )
  {
    if ( (*(_DWORD *)(a1 + 8) & 1) == 0 )
      *(_QWORD *)(a3 + 8) = v3 + a1;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v4;
}
