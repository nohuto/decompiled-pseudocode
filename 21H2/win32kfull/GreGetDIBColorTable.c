/*
 * XREFs of GreGetDIBColorTable @ 0x1C008A670
 * Callers:
 *     <none>
 * Callees:
 *     ?vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0026464 (-vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002BB4C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C008A7DC (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C008AE30 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetDIBColorTable(HDC a1, unsigned int a2, int a3, struct tagRGBQUAD *a4)
{
  unsigned int v5; // ebx
  int v8; // edi
  SURFACE *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // edi
  ULONG v12; // ecx
  _QWORD v14[2]; // [rsp+28h] [rbp-59h] BYREF
  _BYTE v15[32]; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v16[32]; // [rsp+58h] [rbp-29h] BYREF
  _QWORD v17[2]; // [rsp+78h] [rbp-9h] BYREF
  _BYTE v18[64]; // [rsp+88h] [rbp+7h] BYREF
  __int64 v19; // [rsp+100h] [rbp+7Fh] BYREF

  v5 = 0;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  if ( !a4 )
  {
    v12 = 87;
    goto LABEL_19;
  }
  if ( !v14[0] )
  {
    v12 = 6;
LABEL_19:
    EngSetLastError(v12);
LABEL_20:
    v5 = v8;
    goto LABEL_21;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v16);
  DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v16, (struct XDCOBJ *)v14);
  v9 = XDCOBJ::pSurfaceEff((XDCOBJ *)v14);
  if ( !(unsigned int)SURFACE::bDIBSection(v9) && !*(_QWORD *)(v10 + 128)
    || (unsigned int)(*(_DWORD *)(v10 + 96) - 1) > 2 )
  {
    EngSetLastError(6u);
LABEL_14:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v16);
    if ( v17[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v17);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v18);
    goto LABEL_20;
  }
  v19 = *(_QWORD *)(v10 + 128);
  v11 = *(_DWORD *)(v19 + 28);
  if ( a2 < v11 )
  {
    if ( a2 + a3 <= v11 )
      v11 = a2 + a3;
    v8 = v11 - a2;
    XEPALOBJ::vFill_rgbquads((XEPALOBJ *)&v19, a4, a2, v8);
    goto LABEL_14;
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v16);
  if ( v17[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v17);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v18);
LABEL_21:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v14);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v15);
  return v5;
}
