/*
 * XREFs of ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C016DBF8
 * Callers:
 *     UnlockDesktopMenu @ 0x1C0136510 (UnlockDesktopMenu.c)
 *     GreDeleteServerMetaFile @ 0x1C02B8C84 (GreDeleteServerMetaFile.c)
 *     NtGdiGetServerMetaFileBits @ 0x1C02B8E40 (NtGdiGetServerMetaFileBits.c)
 * Callees:
 *     <none>
 */

bool __fastcall HmgLockResultBase<META>::operator bool(_QWORD *a1)
{
  return *a1 != 0LL;
}
