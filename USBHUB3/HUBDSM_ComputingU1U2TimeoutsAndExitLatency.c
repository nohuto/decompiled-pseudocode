/*
 * XREFs of HUBDSM_ComputingU1U2TimeoutsAndExitLatency @ 0x1C0025070
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_ComputeU1Timeout @ 0x1C003081C (HUBMISC_ComputeU1Timeout.c)
 *     HUBMISC_ComputeU2Timeout @ 0x1C0030ADC (HUBMISC_ComputeU2Timeout.c)
 */

__int64 __fastcall HUBDSM_ComputingU1U2TimeoutsAndExitLatency(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // r9
  _DWORD *v3; // rcx
  unsigned int v4; // edx
  char v5; // r8
  bool v6; // r9
  char v7; // r10
  unsigned __int16 v8; // ax
  unsigned int v9; // edx
  int v10; // ecx
  int v11; // eax

  v1 = *(_QWORD *)(a1 + 960);
  HUBMISC_ComputeU1Timeout(v1);
  HUBMISC_ComputeU2Timeout(v1);
  v2 = *(_BYTE *)(v1 + 2214);
  v3 = (_DWORD *)(v1 + 2216);
  LOWORD(v4) = 0;
  v5 = 1;
  v6 = v2 && ((*v3 & 0x10) != 0 || v2 != -1);
  v7 = *(_BYTE *)(v1 + 2215);
  if ( !v7 || (*v3 & 0x20) == 0 && v7 == -1 )
    v5 = 0;
  if ( v6 || v5 )
  {
    if ( v5 )
      v8 = *(_WORD *)(v1 + 2204);
    else
      v8 = *(_WORD *)(v1 + 2202);
    v9 = 1000 * v8;
    v11 = 2100;
    if ( v9 > 0x834 )
      v11 = v9;
    v10 = *(unsigned __int16 *)(v1 + 2582)
        + *(unsigned __int16 *)(*(_QWORD *)v1 + 1188LL)
        + *(unsigned __int16 *)(*(_QWORD *)v1 + 2492LL);
    v4 = (v11 + 2 * (v10 + 200) + (v11 + 2 * (v10 + 200)) * (unsigned int)*(unsigned __int8 *)(v1 + 2206) / 0x64 + 500)
       / 0x3E8;
  }
  *(_WORD *)(v1 + 2210) = v4;
  return 4077LL;
}
