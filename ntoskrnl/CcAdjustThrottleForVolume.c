/*
 * XREFs of CcAdjustThrottleForVolume @ 0x1402EAC74
 * Callers:
 *     CcLazyWriteScanVolume @ 0x140218810 (CcLazyWriteScanVolume.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CcAdjustThrottleForVolume(__int64 a1)
{
  char v1; // dl
  unsigned int v3; // ecx
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 result; // rax

  v1 = dword_140D1D1EC;
  v3 = *(_DWORD *)(a1 + 1272);
  if ( v3 < 0x200 )
    v3 = 512;
  if ( *(_QWORD *)(a1 + 1096) )
    *(_QWORD *)(a1 + 1096) = 0LL;
  v4 = *(_DWORD *)(a1 + 1536) * v3;
  LODWORD(v5) = *(_DWORD *)(a1 + 1540) * v3;
  if ( EnableFeatureServicing_45016043 )
  {
    v6 = *(_QWORD *)(a1 + 1016) >> 2;
    v7 = *(_QWORD *)(a1 + 1016) - v6;
    if ( v4 < v7 )
    {
      v4 = *(_QWORD *)(a1 + 1016) - v6;
      v5 = v7 >> 1;
    }
  }
  v8 = (*(_QWORD *)(a1 + 1080) + *(_QWORD *)(a1 + 1088)) >> 3;
  if ( v1 )
    v8 = (*(_QWORD *)(a1 + 1080) + *(_QWORD *)(a1 + 1088)) >> 1;
  v9 = 4 * v8;
  result = 0xCCCCCCCCCCCCCCCDuLL * v9;
  if ( v4 >= v9 / 5 )
  {
    v4 = v9 / 5;
    if ( EnableFeatureServicing_45016043 )
      v5 = v9 / 0xA;
  }
  *(_QWORD *)(a1 + 1016) = v4;
  *(_DWORD *)(a1 + 1040) = v5;
  return result;
}
