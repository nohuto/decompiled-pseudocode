/*
 * XREFs of ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x180089E7C
 * Callers:
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x1800456BC (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x180045B5C (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x180013E28 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180026DB0 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x1800570B0 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?Find@?$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z @ 0x1800899D4 (-Find@-$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z.c)
 */

void __fastcall CIconicBitmapRegistry::RegisterBitmapInUse(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2,
        char a3)
{
  __int64 *v5; // rcx
  __int64 v6; // r11
  struct CWindowData *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( !IsWindowTab(a2) )
  {
    v5 = (__int64 *)((char *)this + 16);
    if ( a3 )
    {
      ++*((_DWORD *)this + 20);
      DynArray<CWindowData *,0>::Remove(v5, &v7);
    }
    else if ( !(unsigned int)DynArray<HMONITOR__ *,0>::Find((__int64)v5, &v7) )
    {
      --*((_DWORD *)this + 20);
      DynArray<CWindowData *,0>::AddMultipleAndSet(v6, &v7);
    }
  }
}
