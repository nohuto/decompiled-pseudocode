/*
 * XREFs of hCreateSolidBrushInternal @ 0x1C001D000
 * Callers:
 *     SetSysColor @ 0x1C0020850 (SetSysColor.c)
 *     GreCreateSolidBrush @ 0x1C00B6D20 (GreCreateSolidBrush.c)
 * Callees:
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C001D070 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001D0C0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C001DCA0 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 */

HBRUSH __fastcall hCreateSolidBrushInternal(unsigned int a1, int a2, HBRUSH a3, int a4)
{
  __int64 v4; // rbx
  _QWORD v7[6]; // [rsp+30h] [rbp-48h] BYREF
  int v8; // [rsp+60h] [rbp-18h]

  v4 = 0LL;
  if ( a3 )
  {
    if ( (unsigned int)GreSetSolidBrushInternal(a3, a1, a2, 0) )
      return a3;
  }
  else
  {
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v7, a1, 7u, a2, a4);
    if ( v7[0] )
    {
      v8 = 1;
      *(_DWORD *)(v7[0] + 40LL) |= 4u;
      v4 = *(_QWORD *)v7[0];
    }
    BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v7);
  }
  return (HBRUSH)v4;
}
