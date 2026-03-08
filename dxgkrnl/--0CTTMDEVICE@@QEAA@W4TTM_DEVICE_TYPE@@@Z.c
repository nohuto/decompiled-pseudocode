/*
 * XREFs of ??0CTTMDEVICE@@QEAA@W4TTM_DEVICE_TYPE@@@Z @ 0x1C0201E6C
 * Callers:
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEBGPEAPEAX@Z @ 0x1C0201D68 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTTMDEVICE::CTTMDEVICE(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 624) = 0;
  *(_QWORD *)(a1 + 888) = 0LL;
  *(_QWORD *)(a1 + 896) = 0LL;
  *(_DWORD *)(a1 + 904) = 0;
  *(_DWORD *)(a1 + 908) = 1;
  *(_WORD *)(a1 + 912) = 0;
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)a1 = a1;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)(a1 + 48));
  return a1;
}
