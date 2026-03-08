/*
 * XREFs of GreGetObjectBitmapHandle @ 0x1C02D3058
 * Callers:
 *     NtGdiGetObjectBitmapHandle @ 0x1C02C5BB0 (NtGdiGetObjectBitmapHandle.c)
 * Callees:
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00E8C20 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00E8CA0 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetObjectBitmapHandle(HBRUSH a1, int *a2)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v6, a1);
  v3 = 0LL;
  if ( v6[0] )
  {
    v3 = *(_QWORD *)(v6[0] + 24LL);
    v4 = *(_DWORD *)(v6[0] + 40LL);
    if ( (v4 & 0x1000) != 0 )
      *a2 = 1;
    else
      *a2 = (v4 >> 12) & 2;
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v6);
  return v3;
}
