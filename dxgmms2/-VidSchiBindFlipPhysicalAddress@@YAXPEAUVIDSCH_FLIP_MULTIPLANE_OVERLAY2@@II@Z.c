/*
 * XREFs of ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x1C0035200
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000BE30 (VidSchiExecuteMmIoFlip.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiBindFlipPhysicalAddress(
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a1,
        unsigned int a2,
        unsigned int a3)
{
  int v3; // r10d
  __int64 v5; // rbx
  unsigned __int64 v6; // r8
  char *v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rcx

  v3 = *((_DWORD *)a1 + 1);
  v5 = a3;
  v6 = (unsigned __int64)(a2 + v3 * a3) << 6;
  v7 = (char *)a1 + v3 * ((8 * *((_DWORD *)a1 + 2) + 231) & 0xFFFFFFF8);
  v8 = *(_QWORD *)&v7[v6 + 48];
  *(_QWORD *)&v7[v6 + 40] = *(_QWORD *)(*(_QWORD *)(v8 + 96) + 32LL);
  *(_WORD *)((char *)a1
           + 64 * (unsigned __int64)(a2 + (_DWORD)v5 * *((_DWORD *)a1 + 1))
           + *((_DWORD *)a1 + 1) * ((8 * *((_DWORD *)a1 + 2) + 231) & 0xFFFFFFF8)
           + 32) = *(_WORD *)(*(_QWORD *)(v8 + 96) + 6LL);
  v9 = *(unsigned int *)(*(_QWORD *)(v8 + 96) + 12LL);
  if ( !(_DWORD)v9 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(v9, 281LL, 0x4000LL, a2, v5, 0LL);
    __debugbreak();
  }
}
