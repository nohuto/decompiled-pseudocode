/*
 * XREFs of ?hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z @ 0x1C02B6F9C
 * Callers:
 *     GreExtCreatePen @ 0x1C00262A0 (GreExtCreatePen.c)
 *     NtGdiCreateHatchBrushInternal @ 0x1C02B7060 (NtGdiCreateHatchBrushInternal.c)
 * Callees:
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C015D778 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall hCreateHatchBrushInternal(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  _QWORD v6[6]; // [rsp+30h] [rbp-48h] BYREF
  int v7; // [rsp+60h] [rbp-18h]

  v3 = 0LL;
  if ( a1 <= 0xB )
  {
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, a2, a1, a3, 0);
    if ( v6[0] )
    {
      v7 = 1;
      v3 = *(_QWORD *)v6[0];
    }
    BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, v4);
  }
  return v3;
}
