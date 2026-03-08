/*
 * XREFs of ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1C00F5FD4
 * Callers:
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00A9EA8 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?MapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K1H@Z @ 0x1C00F64F0 (-MapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K1H@Z.c)
 *     ?ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ @ 0x1C00F6938 (-ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ.c)
 * Callees:
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0086210 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

void *__fastcall VIDMM_RECYCLE_MULTIRANGE::Map(
        VIDMM_RECYCLE_MULTIRANGE *this,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  __int64 v5; // r11
  signed __int64 v6; // rcx
  void *v8; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int8 v9; // [rsp+60h] [rbp+8h] BYREF
  void *v10; // [rsp+68h] [rbp+10h] BYREF

  v8 = 0LL;
  v10 = 0LL;
  v5 = *((_QWORD *)this + 10);
  v9 = 0;
  if ( (int)VidMmRecycleHeapMapSection(
              *(PVOID *)(v5 + 56),
              *((_QWORD *)this + 6) + a2,
              a3,
              ((**(_DWORD **)(v5 + 32) - 4) & 0xFFFFFFFD) == 0,
              &v10,
              &v8,
              a4,
              &v9) >= 0 )
  {
    if ( v9 )
      *((_BYTE *)this + 153) = 1;
    else
      *((_BYTE *)this + 152) = 1;
    v6 = (_BYTE *)v10 - (_BYTE *)v8;
    *((_QWORD *)this + 20) = v8;
    *((_QWORD *)this + 21) = v6;
  }
  return v10;
}
