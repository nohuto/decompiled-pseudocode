/*
 * XREFs of GrePolylineTo @ 0x1C0136880
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0134298 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0137840 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0137C34 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C01388BC (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GrePolylineTo(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  POINTL *v5; // rcx
  unsigned int v6; // ebx
  POINTL v7; // rdx
  int v8; // edi
  int v9; // edi
  struct _POINTFIX Current; // rax
  POINTL *v11; // r9
  __int64 v12; // r8
  POINTL *v14[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v15[32]; // [rsp+40h] [rbp-C0h] BYREF
  struct _XFORMOBJ v16; // [rsp+60h] [rbp-A0h] BYREF
  PATHOBJ ppo; // [rsp+80h] [rbp-80h] BYREF
  __int64 v18; // [rsp+88h] [rbp-78h]

  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  v5 = v14[0];
  v6 = 0;
  if ( !v14[0] || (v14[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v9 = 0;
    goto LABEL_17;
  }
  v7 = v14[0][122];
  v8 = *(_DWORD *)(*(_QWORD *)&v7 + 152LL);
  if ( (v8 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v14[0], *(_QWORD *)(*(_QWORD *)&v7 + 160LL));
    v5 = v14[0];
  }
  if ( (v8 & 0x2000) != 0 )
    GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)&v5[122] + 168LL));
  if ( !a3 )
  {
    v9 = 1;
LABEL_17:
    v6 = v9;
    goto LABEL_18;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v16, (struct XDCOBJ *)v14, 516);
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (struct XDCOBJ *)v14, 1);
  if ( v18 )
  {
    if ( EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v16, a2, a3) )
    {
      Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo);
      v11 = v14[0];
      v12 = a3 - 1;
      *(_DWORD *)(*(_QWORD *)&v14[0][122] + 152LL) &= 0xFFFFFCFF;
      *(_DWORD *)(*(_QWORD *)&v11[122] + 216LL) = a2[v12].x;
      *(_DWORD *)(*(_QWORD *)&v11[122] + 220LL) = a2[v12].y;
      *(_DWORD *)(*(_QWORD *)&v11[122] + 8LL) = *(_DWORD *)Current.x;
      *(_DWORD *)(*(_QWORD *)&v11[122] + 12LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
      if ( (v14[0][31].x & 1) != 0
        || (unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v14, (LINEATTRS *)&v14[0][26], &v16, 1u) )
      {
        v6 = 1;
      }
    }
  }
  else
  {
    EngSetLastError(8u);
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_18:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v14);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v15);
  return v6;
}
