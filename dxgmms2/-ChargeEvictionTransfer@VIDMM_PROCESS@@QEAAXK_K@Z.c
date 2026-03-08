/*
 * XREFs of ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C00EEF2C
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00E4E54 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C00E5604 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 * Callees:
 *     McTemplateK0ppqqxqq_EtwWriteTransfer @ 0x1C002F8AC (McTemplateK0ppqqxqq_EtwWriteTransfer.c)
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1C00C4290 (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 */

void __fastcall VIDMM_PROCESS::ChargeEvictionTransfer(VIDMM_PROCESS *this, unsigned int a2, __int64 a3)
{
  _QWORD *v3; // r9
  int v4; // eax
  bool v5; // zf
  __int64 v6; // rdx
  __int64 IsActive; // rcx
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // r11

  v3 = *(_QWORD **)(*((_QWORD *)this + 2) + 8LL * a2);
  v4 = *(_DWORD *)(*v3 + 8LL);
  if ( v4 != 102 && v4 != 110 )
  {
    v3[62] += a3;
    if ( v3[62] >= (unsigned __int64)(unsigned int)dword_1C007634C
      && (((unsigned __int8)(*((_DWORD *)v3 + 118) >> 2) ^ (unsigned __int8)~(*((_DWORD *)v3 + 118) >> 1)) & 1) != 0 )
    {
      v5 = bTracingEnabled == 0;
      *((_DWORD *)v3 + 118) ^= ((unsigned __int8)*((_DWORD *)v3 + 118) ^ (unsigned __int8)~(2 * *((_DWORD *)v3 + 118))) & 4;
      if ( !v5 )
      {
        IsActive = (int)VIDMM_POLICY::IsActive((VIDMM_POLICY *)(v3 + 59));
        if ( (byte_1C00769C1 & 1) != 0 )
          McTemplateK0ppqqxqq_EtwWriteTransfer(IsActive, v6, v8, *(_QWORD *)(v9 + 8), *(_QWORD *)(v10 + 24));
      }
    }
  }
}
