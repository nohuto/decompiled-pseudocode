/*
 * XREFs of ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x18000D0EC
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000F570 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180011440 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001903C (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericSet<CWindowData *>::Add(struct _RTL_GENERIC_TABLE *a1, __int64 a2)
{
  __int64 Buffer; // [rsp+30h] [rbp+8h] BYREF

  Buffer = a2;
  return RtlInsertElementGenericTable(a1, &Buffer, 8u, 0LL) == 0LL ? 0x8007000E : 0;
}
