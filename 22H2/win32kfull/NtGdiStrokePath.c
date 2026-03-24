/*
 * XREFs of NtGdiStrokePath @ 0x1C02AD6B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FD8F4 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C014475C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C01447BC (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C01457E4 (-bInactive@DC@@QEBAHXZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C01468E4 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiStrokePath(HDC a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r8
  ULONG v3; // ecx
  __int64 v4; // rdx
  DC *v5; // rcx
  DC *v7[2]; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v8[32]; // [rsp+40h] [rbp-59h] BYREF
  struct _XFORMOBJ v9; // [rsp+60h] [rbp-39h] BYREF
  PATHOBJ ppo; // [rsp+70h] [rbp-29h] BYREF
  __int64 v11; // [rsp+78h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  v1 = 0;
  if ( !v7[0] || (*((_DWORD *)v7[0] + 9) & 0x10000) != 0 )
  {
    v3 = 87;
    goto LABEL_12;
  }
  if ( !(unsigned int)DC::bInactive(v7[0]) )
  {
    v3 = 1003;
LABEL_12:
    EngSetLastError(v3);
    goto LABEL_13;
  }
  v4 = *(_QWORD *)(v2 + 976);
  if ( (*(_DWORD *)(v4 + 152) & 0x2000) != 0 )
    GreDCSelectPen(v2, *(_QWORD *)(v4 + 168));
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&ppo, v7);
  if ( v11 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v9, (struct XDCOBJ *)v7, 516);
    v1 = EPATHOBJ::bStrokeAndOrFill(&ppo, (POINTL **)v7, (LINEATTRS *)((char *)v7[0] + 208), &v9, 1u);
  }
  else
  {
    EngSetLastError(8u);
  }
  v5 = v7[0];
  *((_DWORD *)v7[0] + 62) &= ~1u;
  DC::hpath(v5, 0LL);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_13:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v7);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v8);
  return v1;
}
