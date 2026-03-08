/*
 * XREFs of ??4WARPDrawListEntryBitmapDesc@@QEAAAEAU0@AEBU0@@Z @ 0x1801FC9E0
 * Callers:
 *     ??0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z @ 0x1801FC838 (--0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z.c)
 * Callees:
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x1800942A0 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall WARPDrawListEntryBitmapDesc::operator=(__int64 a1, __int64 a2)
{
  CDrawListBitmap::operator=((__int64 *)a1, (__int64 *)a2);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  *(_BYTE *)(a1 + 76) = *(_BYTE *)(a2 + 76);
  return a1;
}
