/*
 * XREFs of ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C00DF5B4
 * Callers:
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1C00DF510 (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x1C0048E7C (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 *     ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1C00DF688 (-UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C00DF6D4 (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1C01637A4 (--0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C016C4D8 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 */

__int64 __fastcall REMOTE_VSYNC::StartEmulation(REMOTE_VSYNC *this)
{
  BLTQUEUE *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ecx
  unsigned int v14; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  BLTQUEUE *v18; // rcx

  v2 = (BLTQUEUE *)operator new[](0xB58uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v2 )
    v2 = BLTQUEUE::BLTQUEUE(v2, 0LL, 0xFFFFFFFF, (struct _KEVENT *)((char *)this + 16), 0);
  *((_QWORD *)this + 1) = v2;
  if ( v2 )
  {
    v7 = BLTQUEUE::Startup(v2);
    v10 = v7;
    if ( v7 < 0 )
    {
      v17 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v17 + 24) = v10;
      WdLogEvent5_WdError(v17);
    }
    else
    {
      BLTQUEUE::EnableVSync(*((BLTQUEUE **)this + 1));
      if ( *((_BYTE *)this + 1) )
      {
        v14 = 64;
      }
      else
      {
        v13 = *((_DWORD *)DXGGLOBAL::GetGlobal(v12, v11) + 76140);
        if ( v13 )
          v14 = 0x3E8u / (v13 + 1);
        else
          v14 = 0;
        if ( !v14 )
          v14 = 32;
      }
      BLTQUEUE::UpdateDisplayModeInfo(*((BLTQUEUE **)this + 1), (struct _D3DDDI_RATIONAL)(v14 | 0x100000000LL), 0x300u);
    }
    if ( (int)v10 < 0 )
    {
      v18 = (BLTQUEUE *)*((_QWORD *)this + 1);
      if ( v18 )
      {
        BLTQUEUE::`scalar deleting destructor'(v18, 1);
        *((_QWORD *)this + 1) = 0LL;
      }
    }
    return (unsigned int)v10;
  }
  else
  {
    v16 = WdLogNewEntry5_WdLowResource(v4, v3, v5, v6);
    *(_QWORD *)(v16 + 24) = 43LL;
    WdLogEvent5_WdLowResource(v16);
    return 3221225495LL;
  }
}
