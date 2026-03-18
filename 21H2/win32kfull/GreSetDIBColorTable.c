/*
 * XREFs of GreSetDIBColorTable @ 0x1C02B6140
 * Callers:
 *     <none>
 * Callees:
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002BB4C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C008A7DC (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C008AE30 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C00E3768 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetDIBColorTable(HDC a1, unsigned int a2, int a3, struct tagRGBQUAD *a4)
{
  unsigned int v7; // ebx
  SURFACE *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ecx
  int v12; // ebx
  __int64 v14; // [rsp+28h] [rbp-59h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-51h] BYREF
  _BYTE v16[40]; // [rsp+40h] [rbp-41h] BYREF
  _BYTE v17[32]; // [rsp+68h] [rbp-19h] BYREF
  __int64 v18; // [rsp+88h] [rbp+7h] BYREF
  _BYTE v19[64]; // [rsp+98h] [rbp+17h] BYREF

  v7 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  if ( v15[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v17);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v17, (struct XDCOBJ *)v15);
    v8 = XDCOBJ::pSurfaceEff((XDCOBJ *)v15);
    if ( (unsigned int)SURFACE::bDIBSection(v8) && (unsigned int)(*(_DWORD *)(v10 + 96) - 1) <= 2 )
    {
      *(_DWORD *)(*(_QWORD *)(v15[0] + 976LL) + 152LL) |= 0xFu;
      v14 = *(_QWORD *)(v9 + 128);
      v11 = *(_DWORD *)(v14 + 28);
      if ( a2 < v11 )
      {
        v12 = *(_DWORD *)(v14 + 28);
        if ( a2 + a3 <= v11 )
          v12 = a2 + a3;
        v7 = v12 - a2;
        XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v14, a4, a2, v7);
      }
    }
    else
    {
      EngSetLastError(6u);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v17);
    if ( v18 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v18);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v19);
  }
  else
  {
    EngSetLastError(6u);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v15);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v16);
  return v7;
}
