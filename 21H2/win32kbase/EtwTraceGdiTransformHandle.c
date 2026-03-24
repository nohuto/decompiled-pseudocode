/*
 * XREFs of EtwTraceGdiTransformHandle @ 0x1C001616C
 * Callers:
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C0015EF8 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     HmgModifyHandleType @ 0x1C0016060 (HmgModifyHandleType.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C0034CB0 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 * Callees:
 *     McTemplateK0ppqqq_EtwWriteTransfer @ 0x1C0125BF4 (McTemplateK0ppqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceGdiTransformHandle(int a1, int a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
    return McTemplateK0ppqqq_EtwWriteTransfer(a1, a2, a3, a1, a2, a3);
  return result;
}
