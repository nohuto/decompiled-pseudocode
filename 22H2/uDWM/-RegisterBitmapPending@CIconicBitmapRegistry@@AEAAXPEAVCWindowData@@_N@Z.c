/*
 * XREFs of ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x180045AEC
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18001437C (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x180045AAC (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x180089AEC (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 * Callees:
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180057000 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 */

void __fastcall CIconicBitmapRegistry::RegisterBitmapPending(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2,
        char a3)
{
  char v6; // al

  if ( !*((_QWORD *)a2 + 47) && !IsWindowTab(a2) )
  {
    v6 = *((_BYTE *)a2 + 610) & 0x10;
    if ( a3 )
    {
      if ( !v6 )
        ++*((_DWORD *)this + 21);
    }
    else if ( v6 )
    {
      --*((_DWORD *)this + 21);
    }
  }
  *((_BYTE *)a2 + 610) &= ~0x10u;
  *((_BYTE *)a2 + 610) |= 16 * a3;
}
