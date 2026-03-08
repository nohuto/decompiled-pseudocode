/*
 * XREFs of ?GetProcessWorkingSetInformation@VIDMM_PROCESS@@QEAAXPEAVVIDMM_SEGMENT@@PEA_K1@Z @ 0x1C00EF340
 * Callers:
 *     ?QueryProcessSegmentStatistics@VIDMM_GLOBAL@@QEAAJGIPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION@@@Z @ 0x1C00EE944 (-QueryProcessSegmentStatistics@VIDMM_GLOBAL@@QEAAJGIPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTI.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PROCESS::GetProcessWorkingSetInformation(
        VIDMM_PROCESS *this,
        struct VIDMM_SEGMENT *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx

  if ( (*((_DWORD *)this + 24) & 1) != 0 )
  {
    *a3 = *((_QWORD *)a2 + 13);
    v6 = *((_QWORD *)a2 + 14);
  }
  else
  {
    v7 = *((unsigned int *)this + 25);
    v6 = 0LL;
    if ( (_DWORD)v7 )
      v8 = 100LL * *((_QWORD *)a2 + 6) / v7;
    else
      v8 = 0LL;
    *a3 = v8;
    v9 = *((unsigned int *)this + 26);
    if ( (_DWORD)v9 )
      v6 = 100LL * *((_QWORD *)a2 + 6) / v9;
  }
  *a4 = v6;
}
