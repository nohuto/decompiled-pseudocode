/*
 * XREFs of ?hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z @ 0x1C02D2CD4
 * Callers:
 *     GreExtCreatePen @ 0x1C00E8994 (GreExtCreatePen.c)
 *     NtGdiCreateHatchBrushInternal @ 0x1C02D31D0 (NtGdiCreateHatchBrushInternal.c)
 * Callees:
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C02D2C88 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall hCreateHatchBrushInternal(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  _QWORD v5[2]; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+40h] [rbp-18h]

  v3 = 0LL;
  if ( a1 <= 0xB )
  {
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v5, a2, a1, a3, 0);
    if ( v5[0] )
    {
      v6 = 1;
      v3 = *(_QWORD *)v5[0];
    }
    BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v5);
  }
  return v3;
}
