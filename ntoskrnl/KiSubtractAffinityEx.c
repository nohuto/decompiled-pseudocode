/*
 * XREFs of KiSubtractAffinityEx @ 0x1402D4CBC
 * Callers:
 *     KiIpiSetTargetAffinity @ 0x140233704 (KiIpiSetTargetAffinity.c)
 *     PpmParkSteerInterrupts @ 0x1402341D0 (PpmParkSteerInterrupts.c)
 *     PpmCheckContinueExecution @ 0x140236E60 (PpmCheckContinueExecution.c)
 *     PpmParkReportParkedCores @ 0x1402E3AE0 (PpmParkReportParkedCores.c)
 *     PpmParkReportUnparkedCores @ 0x1402EAA30 (PpmParkReportUnparkedCores.c)
 *     PpmIdleSelectStates @ 0x1403B2150 (PpmIdleSelectStates.c)
 *     KeSubtractAffinityEx @ 0x140457950 (KeSubtractAffinityEx.c)
 *     HalpRemoveProfileSourceFromList @ 0x140505E80 (HalpRemoveProfileSourceFromList.c)
 *     KeSubtractAffinityEx2 @ 0x14056CED0 (KeSubtractAffinityEx2.c)
 *     KiStartProfileTarget @ 0x140571FC0 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x140572310 (KiStopProfileTarget.c)
 *     KeCpuPartitionMoveCpus @ 0x140572954 (KeCpuPartitionMoveCpus.c)
 *     RtlUpdateSwapReference @ 0x140818560 (RtlUpdateSwapReference.c)
 *     PpmCheckInitProcessors @ 0x140827DA4 (PpmCheckInitProcessors.c)
 *     PpmPostProcessMediaBuffering @ 0x14099A314 (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall KiSubtractAffinityEx(unsigned __int16 *a1, char *a2, _BYTE *a3, unsigned __int16 a4)
{
  unsigned __int16 v8; // ax
  _BYTE *v9; // r9
  unsigned __int16 v10; // r11
  unsigned int v11; // r10d
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // r8
  unsigned __int16 v14; // ax
  signed __int64 v15; // r14
  __int64 v16; // rbx
  _QWORD *v17; // rcx
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v21; // rcx
  _BYTE v22[272]; // [rsp+20h] [rbp-138h] BYREF

  memset(v22, 0, 0x108uLL);
  v8 = *(_WORD *)a2;
  v9 = v22;
  v10 = *a1;
  v11 = 0;
  v12 = 0;
  if ( a3 )
    v9 = a3;
  v13 = 32;
  if ( a3 )
    v13 = a4;
  *((_WORD *)v9 + 1) = v13;
  if ( v10 >= v8 )
    v10 = v8;
  v14 = *a1;
  if ( *a1 > v13 )
    v14 = v13;
  *(_WORD *)v9 = v14;
  if ( v10 > v13 )
    v10 = v13;
  if ( v10 )
  {
    v15 = a2 - (char *)a1;
    v16 = v10;
    v17 = a1 + 4;
    v12 = v10;
    do
    {
      v18 = (*v17 & ~*(_QWORD *)((char *)v17 + v15)) == 0LL;
      *(_QWORD *)((char *)v17 + v9 - (_BYTE *)a1) = *v17 & ~*(_QWORD *)((char *)v17 + v15);
      ++v17;
      if ( !v18 )
        v11 = 1;
      --v16;
    }
    while ( v16 );
  }
  while ( v12 < *(_WORD *)v9 )
  {
    v21 = *(_QWORD *)&a1[4 * v12 + 4];
    *(_QWORD *)&v9[8 * v12 + 8] = v21;
    if ( v21 )
      v11 = 1;
    ++v12;
  }
  if ( v9 != v22 )
  {
    *((_DWORD *)v9 + 1) = 0;
    while ( v12 < *((_WORD *)v9 + 1) )
    {
      v19 = v12++;
      *(_QWORD *)&v9[8 * v19 + 8] = 0LL;
    }
  }
  return v11;
}
