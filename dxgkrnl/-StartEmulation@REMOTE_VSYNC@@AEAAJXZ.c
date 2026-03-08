/*
 * XREFs of ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C01C6A40
 * Callers:
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1C01C6940 (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x1C0056428 (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 *     ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1C01C6B18 (--0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C01C6F04 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 *     ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1C01C71B8 (-UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C01C73A4 (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall REMOTE_VSYNC::StartEmulation(REMOTE_VSYNC *this)
{
  unsigned int v2; // ebx
  BLTQUEUE *v3; // rax
  int v4; // eax
  __int64 v5; // rsi
  int v6; // ecx
  BLTQUEUE *v8; // rcx

  v2 = 64;
  v3 = (BLTQUEUE *)operator new[](0xB68uLL, 0x4B677844u, 64LL);
  if ( v3 )
    v3 = BLTQUEUE::BLTQUEUE(v3, 0LL, 0xFFFFFFFF, (struct _KEVENT *)((char *)this + 16), 0);
  *((_QWORD *)this + 1) = v3;
  if ( v3 )
  {
    v4 = BLTQUEUE::Startup(v3);
    v5 = v4;
    if ( v4 < 0 )
    {
      WdLogSingleEntry1(2LL, v4);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to start remote VSync emulation, status 0x%I64x",
        v5,
        0LL,
        0LL,
        0LL,
        0LL);
      v8 = (BLTQUEUE *)*((_QWORD *)this + 1);
      if ( v8 )
      {
        BLTQUEUE::`scalar deleting destructor'(v8, 1);
        *((_QWORD *)this + 1) = 0LL;
      }
    }
    else
    {
      BLTQUEUE::EnableVSync(*((BLTQUEUE **)this + 1));
      if ( !*((_BYTE *)this + 1) )
      {
        v6 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 76194);
        if ( !v6 || (v2 = 0x3E8u / (v6 + 1)) == 0 )
          v2 = 32;
      }
      BLTQUEUE::UpdateDisplayModeInfo(*((BLTQUEUE **)this + 1), (struct _D3DDDI_RATIONAL)(v2 | 0x100000000LL), 0x300u);
    }
    return (unsigned int)v5;
  }
  else
  {
    WdLogSingleEntry1(6LL, 43LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to create remote VSync emulation class",
      43LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
