/*
 * XREFs of GreMoveTo @ 0x1C02ABE70
 * Callers:
 *     NtGdiMoveTo @ 0x1C02C3F50 (NtGdiMoveTo.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreMoveTo(HDC a1, int a2, int a3, _QWORD *a4)
{
  __int64 v7; // r10
  unsigned int v8; // ebx
  _QWORD v10[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v12[32]; // [rsp+40h] [rbp-20h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v7 = v11[0];
  v8 = 0;
  if ( v11[0] && (*(_DWORD *)(v11[0] + 36LL) & 0x10000) == 0 )
  {
    if ( a4 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v11[0] + 976LL) + 152LL) & 0x100) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v10, (struct XDCOBJ *)v11, 1026);
        if ( !v10[0] )
        {
LABEL_11:
          DCOBJ::~DCOBJ((DCOBJ *)v11);
          return v8;
        }
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
    goto LABEL_11;
  }
  EngSetLastError(6u);
  if ( v11[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v11);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v12);
  return 0LL;
}
