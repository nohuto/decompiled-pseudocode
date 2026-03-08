/*
 * XREFs of ??0VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C00BAC98
 * Callers:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C00BA7D0 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 *     ?InitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ @ 0x1C00BE6E8 (-InitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ.c)
 *     ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@E@Z @ 0x1C0103AD4 (-AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_.c)
 * Callees:
 *     <none>
 */

VIDMM_LINEAR_POOL *__fastcall VIDMM_LINEAR_POOL::VIDMM_LINEAR_POOL(VIDMM_LINEAR_POOL *this)
{
  *((_QWORD *)this + 6) = (char *)this + 40;
  *((_QWORD *)this + 5) = (char *)this + 40;
  *((_QWORD *)this + 8) = (char *)this + 56;
  *((_QWORD *)this + 7) = (char *)this + 56;
  *((_QWORD *)this + 10) = (char *)this + 72;
  *((_QWORD *)this + 9) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 88;
  *((_QWORD *)this + 11) = (char *)this + 88;
  *((_QWORD *)this + 14) = (char *)this + 104;
  *((_QWORD *)this + 13) = (char *)this + 104;
  *((_QWORD *)this + 16) = (char *)this + 120;
  *((_QWORD *)this + 15) = (char *)this + 120;
  *(_BYTE *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 18) = (char *)this + 136;
  *((_QWORD *)this + 17) = (char *)this + 136;
  ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192), 0LL, 0LL, 0, 0x40uLL, 0x38316956u, 0);
  return this;
}
