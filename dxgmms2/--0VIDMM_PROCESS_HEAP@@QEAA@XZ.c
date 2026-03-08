/*
 * XREFs of ??0VIDMM_PROCESS_HEAP@@QEAA@XZ @ 0x1C01030D4
 * Callers:
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0094260 (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

VIDMM_PROCESS_HEAP *__fastcall VIDMM_PROCESS_HEAP::VIDMM_PROCESS_HEAP(VIDMM_PROCESS_HEAP *this)
{
  *(_QWORD *)this = &VIDMM_PROCESS_HEAP::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 15;
  *((_DWORD *)this + 14) = 66;
  *((_QWORD *)this + 25) = (char *)this + 192;
  *((_QWORD *)this + 24) = (char *)this + 192;
  *((_QWORD *)this + 27) = (char *)this + 208;
  *((_QWORD *)this + 26) = (char *)this + 208;
  *((_QWORD *)this + 29) = (char *)this + 224;
  *((_QWORD *)this + 28) = (char *)this + 224;
  *((_QWORD *)this + 31) = (char *)this + 240;
  *((_QWORD *)this + 30) = (char *)this + 240;
  *((_QWORD *)this + 33) = (char *)this + 256;
  *((_QWORD *)this + 32) = (char *)this + 256;
  *((_QWORD *)this + 35) = (char *)this + 272;
  *((_QWORD *)this + 34) = (char *)this + 272;
  ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 64), 0LL, 0LL, 0, 0x70uLL, 0x32316956u, 0);
  return this;
}
