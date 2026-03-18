/*
 * XREFs of GreMoveTo @ 0x1C029EBA8
 * Callers:
 *     NtGdiMoveTo @ 0x1C02AE220 (NtGdiMoveTo.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall GreMoveTo(HDC a1, int a2, int a3, _QWORD *a4)
{
  __int64 v7; // r10
  unsigned int v8; // ebx
  _QWORD v10[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v11[6]; // [rsp+30h] [rbp-30h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v7 = v11[0];
  v8 = 0;
  if ( !v11[0] || (*(_DWORD *)(v11[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_12;
  }
  if ( a4 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v11[0] + 976LL) + 152LL) & 0x100) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v10, (struct XDCOBJ *)v11, 1026);
      if ( !v10[0] )
        goto LABEL_12;
      EXFORMOBJ::bXform(
        (EXFORMOBJ *)v10,
        (struct _POINTFIX *)(*(_QWORD *)(v11[0] + 976LL) + 8LL),
        (struct _POINTL *)(*(_QWORD *)(v11[0] + 976LL) + 216LL),
        1uLL);
      v7 = v11[0];
    }
    *a4 = *(_QWORD *)(*(_QWORD *)(v7 + 976) + 216LL);
  }
  *(_DWORD *)(*(_QWORD *)(v7 + 976) + 216LL) = a2;
  *(_DWORD *)(*(_QWORD *)(v11[0] + 976LL) + 220LL) = a3;
  *(_DWORD *)(*(_QWORD *)(v11[0] + 976LL) + 152LL) |= 0x200u;
  *(_DWORD *)(*(_QWORD *)(v11[0] + 976LL) + 152LL) &= ~0x100u;
  if ( (*(_DWORD *)(v11[0] + 248LL) & 1) == 0 )
    *(_DWORD *)(v11[0] + 240LL) = 0;
  v8 = 1;
LABEL_12:
  DCOBJ::~DCOBJ((DCOBJ *)v11);
  return v8;
}
