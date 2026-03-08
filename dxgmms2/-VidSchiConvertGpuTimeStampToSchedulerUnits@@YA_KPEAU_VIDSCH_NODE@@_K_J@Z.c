/*
 * XREFs of ?VidSchiConvertGpuTimeStampToSchedulerUnits@@YA_KPEAU_VIDSCH_NODE@@_K_J@Z @ 0x1C001CBA6
 * Callers:
 *     ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C001D8B2 (-VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VidSchiConvertGpuTimeStampToSchedulerUnits(
        struct _VIDSCH_NODE *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // r10
  __int64 v5; // r8
  unsigned __int64 v7; // rcx

  v3 = *((_QWORD *)a1 + 1403);
  v5 = *((_QWORD *)a1 + 1404);
  if ( v5 == v3 )
    return 0LL;
  v7 = *((_QWORD *)a1 + 1401) + (a2 - v3) * (*((_QWORD *)a1 + 1402) - *((_QWORD *)a1 + 1401)) / (v5 - v3);
  if ( is_mul_ok(v7, 0x989680uLL) )
    return v7 * (unsigned __int128)0x989680uLL / a3;
  else
    return 10000000 * (v7 / a3) + 10000000 * (v7 % a3) / a3;
}
