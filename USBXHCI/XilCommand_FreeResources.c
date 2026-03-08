/*
 * XREFs of XilCommand_FreeResources @ 0x1C00316D4
 * Callers:
 *     Command_PrepareHardware @ 0x1C0072DA0 (Command_PrepareHardware.c)
 *     Command_ReleaseHardware @ 0x1C0077ED0 (Command_ReleaseHardware.c)
 * Callees:
 *     XilCommand_FreeSecureResources @ 0x1C0031700 (XilCommand_FreeSecureResources.c)
 *     XilCoreCommand_FreeResources @ 0x1C0052ACC (XilCoreCommand_FreeResources.c)
 */

__int64 __fastcall XilCommand_FreeResources(__int64 a1)
{
  _BYTE *v1; // rcx

  v1 = (_BYTE *)(a1 + 136);
  if ( *v1 )
    return XilCommand_FreeSecureResources();
  else
    return XilCoreCommand_FreeResources(v1 + 32);
}
