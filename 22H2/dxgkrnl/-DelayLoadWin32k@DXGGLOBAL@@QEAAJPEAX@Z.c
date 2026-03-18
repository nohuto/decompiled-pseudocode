/*
 * XREFs of ?DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z @ 0x1C0015AD4
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1C01E30C0 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?CreateWin32kImportTable@@YAJPEAXPEAPEAVDXGKW32KIMPORTS@@@Z @ 0x1C0020EFC (-CreateWin32kImportTable@@YAJPEAXPEAPEAVDXGKW32KIMPORTS@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::DelayLoadWin32k(struct DXGKW32KIMPORTS **this, void *a2)
{
  unsigned int Win32kImportTable; // edi
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  Win32kImportTable = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (struct DXGFASTMUTEX *const)(this + 38070), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  if ( !this[38069] )
    Win32kImportTable = CreateWin32kImportTable(a2, this + 38069);
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
  return Win32kImportTable;
}
