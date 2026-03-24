/*
 * XREFs of GrePolylineTo @ 0x1C0143CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FDC44 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0145120 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C0145E20 (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0146E94 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GrePolylineTo(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // ebx
  unsigned int v8; // ebx
  struct _POINTFIX Current; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  _QWORD v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v14[32]; // [rsp+40h] [rbp-C0h] BYREF
  struct _XFORMOBJ v15; // [rsp+60h] [rbp-A0h] BYREF
  PATHOBJ ppo; // [rsp+80h] [rbp-80h] BYREF
  __int64 v17; // [rsp+88h] [rbp-78h]
  _BYTE v18[32]; // [rsp+D0h] [rbp-30h] BYREF
  int v19; // [rsp+F0h] [rbp-10h]

  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v5 = v13[0];
  if ( !v13[0] || (*(_DWORD *)(v13[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v8 = 0;
    goto LABEL_18;
  }
  v6 = *(_QWORD *)(v13[0] + 976LL);
  v7 = *(_DWORD *)(v6 + 152);
  if ( (v7 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v13[0], *(_QWORD *)(v6 + 160));
    v5 = v13[0];
  }
  if ( (v7 & 0x2000) != 0 )
    GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)(v5 + 976) + 168LL));
  if ( !a3 )
  {
    v8 = 1;
    goto LABEL_18;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v15, (struct XDCOBJ *)v13, 516);
  v8 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (struct XDCOBJ *)v13, 1);
  if ( !v17 )
  {
    EngSetLastError(8u);
LABEL_14:
    v8 = 0;
    goto LABEL_15;
  }
  if ( !EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v15, a2, a3) )
    goto LABEL_14;
  Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo);
  v10 = v13[0];
  v11 = a3 - 1;
  *(_DWORD *)(*(_QWORD *)(v13[0] + 976LL) + 152LL) &= 0xFFFFFCFF;
  *(_DWORD *)(*(_QWORD *)(v10 + 976) + 216LL) = a2[v11].x;
  *(_DWORD *)(*(_QWORD *)(v10 + 976) + 220LL) = a2[v11].y;
  *(_DWORD *)(*(_QWORD *)(v10 + 976) + 8LL) = *(_DWORD *)Current.x;
  *(_DWORD *)(*(_QWORD *)(v10 + 976) + 12LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
  if ( (*(_DWORD *)(v13[0] + 248LL) & 1) == 0
    && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v13, (LINEATTRS *)(v13[0] + 208LL), &v15, 1u) )
  {
    goto LABEL_14;
  }
LABEL_15:
  EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
  if ( v19 )
  {
    PopThreadGuardedObject(v18);
    v19 = 0;
  }
LABEL_18:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v13);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v14);
  return v8;
}
