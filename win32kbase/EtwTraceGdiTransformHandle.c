/*
 * XREFs of EtwTraceGdiTransformHandle @ 0x1C001D41C
 * Callers:
 *     HmgModifyHandleType @ 0x1C001D300 (HmgModifyHandleType.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C00542B0 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C0274CF0 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 * Callees:
 *     McTemplateK0ppqqq_EtwWriteTransfer @ 0x1C00EE512 (McTemplateK0ppqqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceGdiTransformHandle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  char v5; // di
  char v6; // si
  int v7; // ebp
  _DWORD *v8; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
  {
    v8 = (_DWORD *)SGDGetUserSessionState(a1, a2, a3, a4);
    McTemplateK0ppqqq_EtwWriteTransfer(v10, v9, v11, v7, v6, v5, *v8, v4);
  }
}
