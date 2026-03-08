/*
 * XREFs of ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C004DD9C
 * Callers:
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C00149D0 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0051480 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C026E7B0 (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C02A5A50 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02A8DD8 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(DEVLOCKBLTOBJ *this)
{
  struct XDCOBJ *v1; // rdi
  int v3; // eax
  struct DC *v4; // r8
  SURFACE *v5; // rcx

  v1 = (DEVLOCKBLTOBJ *)((char *)this + 120);
  if ( *((_QWORD *)this + 15) && *((_BYTE *)this + 137) )
  {
    v3 = *((_DWORD *)this + 28);
    if ( (v3 & 0x400) != 0 )
    {
      bUnHookRedir((DEVLOCKBLTOBJ *)((char *)this + 120));
      *((_DWORD *)this + 28) &= ~0x400u;
      v3 = *((_DWORD *)this + 28);
    }
    if ( (v3 & 0x2000) != 0 )
    {
      bUnHookBmpDrv(v1);
      *((_DWORD *)this + 28) &= ~0x2000u;
      v3 = *((_DWORD *)this + 28);
    }
    if ( (v3 & 0x1000) != 0 )
    {
      v4 = *(struct DC **)v1;
      if ( (*(_DWORD *)(*(_QWORD *)v1 + 44LL) & 1) == 0 )
      {
        v5 = (SURFACE *)*((_QWORD *)v4 + 62);
        if ( v5 )
          SURFACE::bUnMap(v5, this, v4);
      }
      *(_DWORD *)(*(_QWORD *)v1 + 44LL) &= ~1u;
    }
  }
  return 1LL;
}
