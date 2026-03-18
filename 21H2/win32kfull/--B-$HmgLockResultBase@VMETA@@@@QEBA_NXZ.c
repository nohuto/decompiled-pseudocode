/*
 * XREFs of ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C015F320
 * Callers:
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 *     GreSelectFont @ 0x1C00E8510 (GreSelectFont.c)
 *     GreDeleteServerMetaFile @ 0x1C02B6DA0 (GreDeleteServerMetaFile.c)
 *     NtGdiGetServerMetaFileBits @ 0x1C02B6FB0 (NtGdiGetServerMetaFileBits.c)
 * Callees:
 *     <none>
 */

bool __fastcall HmgLockResultBase<META>::operator bool(_QWORD *a1)
{
  return *a1 != 0LL;
}
