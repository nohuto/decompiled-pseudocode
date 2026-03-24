/*
 * XREFs of HmgFree @ 0x1C007B180
 * Callers:
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C007B060 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C013E5B0 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     FreeObject @ 0x1C002A7D0 (FreeObject.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002F590 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002FE60 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0030210 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0031DB0 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0038C20 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0038D70 (GreAcquireHmgrSemaphore.c)
 *     ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C00C926C (-FreePaletteMemory@XEPALOBJ@@QEAAXXZ.c)
 */

void __fastcall HmgFree(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  unsigned __int8 v5; // si
  _DWORD *v6; // rbx
  struct OBJECT *EntryObject; // rax
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // r8d
  _DWORD *v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1;
  v4 = 0LL;
  v5 = 0;
  GreAcquireHmgrSemaphore(a1, a2, a3);
  v11 = 0LL;
  v12 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v11, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v12 )
  {
    v6 = v11;
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *v11 & 0xFFFFFF);
    v5 = *((_BYTE *)v6 + 14);
    v4 = (__int64)EntryObject;
    HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v11);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v11);
  GreReleaseHmgrSemaphore(v9, v8, v10);
  if ( v4 )
  {
    if ( v5 == 8 )
    {
      v13 = v4;
      XEPALOBJ::FreePaletteMemory((XEPALOBJ *)&v13);
    }
    else
    {
      FreeObject(v4, v5);
    }
  }
}
