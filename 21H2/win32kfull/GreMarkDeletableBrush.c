/*
 * XREFs of GreMarkDeletableBrush @ 0x1C00F2A7C
 * Callers:
 *     SetDesktopPattern @ 0x1C00F2908 (SetDesktopPattern.c)
 *     RecolorDeskPattern @ 0x1C0121FE0 (RecolorDeskPattern.c)
 * Callees:
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00F2EEC (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00F2F78 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 */

void __fastcall GreMarkDeletableBrush(HBRUSH a1)
{
  __int64 v2; // rdx
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF

  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v3, a1);
  if ( v3[0] && (*(_DWORD *)(v3[0] + 40LL) & 0x200) == 0 && a1 )
  {
    LOBYTE(v2) = 16;
    HmgMarkDeletable(a1, v2);
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v3);
}
