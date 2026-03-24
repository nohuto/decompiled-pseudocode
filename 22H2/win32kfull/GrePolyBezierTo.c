/*
 * XREFs of GrePolyBezierTo @ 0x1C0144380
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FD8F4 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0144B70 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C0145870 (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C01468E4 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GrePolyBezierTo(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // ebx
  unsigned int v8; // ebx
  struct _POINTFIX Current; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  ULONG v12; // ecx
  _QWORD v14[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v15[32]; // [rsp+40h] [rbp-C0h] BYREF
  struct _XFORMOBJ v16; // [rsp+60h] [rbp-A0h] BYREF
  PATHOBJ ppo; // [rsp+80h] [rbp-80h] BYREF
  __int64 v18; // [rsp+88h] [rbp-78h]
  _BYTE v19[32]; // [rsp+D0h] [rbp-30h] BYREF
  int v20; // [rsp+F0h] [rbp-10h]

  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  v5 = v14[0];
  if ( !v14[0] || (*(_DWORD *)(v14[0] + 36LL) & 0x10000) != 0 )
  {
    v12 = 6;
    goto LABEL_19;
  }
  if ( a3 < 3 || a3 != 3 * (a3 / 3) )
  {
    v12 = 87;
LABEL_19:
    EngSetLastError(v12);
    v8 = 0;
    goto LABEL_20;
  }
  v6 = *(_QWORD *)(v14[0] + 976LL);
  v7 = *(_DWORD *)(v6 + 152);
  if ( (v7 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v14[0], *(_QWORD *)(v6 + 160));
    v5 = v14[0];
  }
  if ( (v7 & 0x2000) != 0 )
    GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)(v5 + 976) + 168LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v16, (struct XDCOBJ *)v14, 516);
  v8 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (struct XDCOBJ *)v14, 1);
  if ( !v18 )
  {
    EngSetLastError(8u);
LABEL_14:
    v8 = 0;
    goto LABEL_15;
  }
  if ( !EPATHOBJ::bPolyBezierTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v16, a2, a3) )
    goto LABEL_14;
  Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo);
  v10 = v14[0];
  v11 = a3 - 1;
  *(_DWORD *)(*(_QWORD *)(v14[0] + 976LL) + 152LL) &= 0xFFFFFCFF;
  *(_DWORD *)(*(_QWORD *)(v10 + 976) + 216LL) = a2[v11].x;
  *(_DWORD *)(*(_QWORD *)(v10 + 976) + 220LL) = a2[v11].y;
  *(_DWORD *)(*(_QWORD *)(v10 + 976) + 8LL) = *(_DWORD *)Current.x;
  *(_DWORD *)(*(_QWORD *)(v10 + 976) + 12LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
  if ( (*(_DWORD *)(v14[0] + 248LL) & 1) == 0
    && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v14, (LINEATTRS *)(v14[0] + 208LL), &v16, 1u) )
  {
    goto LABEL_14;
  }
LABEL_15:
  EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
  if ( v20 )
  {
    PopThreadGuardedObject(v19);
    v20 = 0;
  }
LABEL_20:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v14);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v15);
  return v8;
}
