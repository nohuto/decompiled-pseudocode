/*
 * XREFs of ?CollectDbgInfo@ADAPTER_DISPLAY@@QEAAJPEAUDXGADAPTERDBGINFO@@@Z @ 0x1C02B66F4
 * Callers:
 *     ?CollectDbgInfo@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1C02B0DF4 (-CollectDbgInfo@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::CollectDbgInfo(ADAPTER_DISPLAY *this, struct DXGADAPTERDBGINFO *a2)
{
  __int64 i; // r10
  __int64 v4; // rdx
  __int64 v5; // r8

  for ( i = 0LL;
        (unsigned int)i < *((_DWORD *)this + 24);
        *(_OWORD *)((char *)a2 + 8 * v5 + 824) = *(_OWORD *)(*((_QWORD *)this + 16) + v4 + 628) )
  {
    v4 = 4000LL * (unsigned int)i;
    v5 = 2LL * (unsigned int)i;
    *((_QWORD *)a2 + i + 75) = *(_QWORD *)(*((_QWORD *)this + 16) + v4 + 728);
    *((_DWORD *)a2 + i + 182) = *(_DWORD *)(*((_QWORD *)this + 16) + v4 + 736);
    i = (unsigned int)(i + 1);
  }
  return 0LL;
}
