/*
 * XREFs of ?UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z @ 0x1C00A41E4
 * Callers:
 *     ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z @ 0x1C00D0688 (-EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C00A11BC (GetDPIMETRICSForDpi.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 */

__int64 __fastcall UpdateFrameControlMetricsSize(struct OEMBITMAPSET *a1, unsigned int a2)
{
  unsigned __int16 *v2; // r14
  __int16 v3; // bp
  _WORD *v4; // r12
  unsigned int v5; // r15d
  int v7; // ebx
  unsigned __int16 v8; // dx
  int DpiDependentMetric; // eax
  unsigned int v10; // esi
  __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax

  v2 = (unsigned __int16 *)&unk_1C03184E0;
  v3 = 0;
  v4 = (_WORD *)((char *)a1 + 22);
  v5 = 0;
  do
  {
    v7 = 0;
    v8 = v2[1];
    LOWORD(DpiDependentMetric) = 0;
    switch ( *v2 )
    {
      case 1u:
        if ( (v8 & 0x80u) != 0 )
        {
          v10 = 24;
          v11 = 23LL;
        }
        else if ( (v8 & 0x40) != 0 )
        {
          v10 = 26;
          v11 = 25LL;
        }
        else
        {
          v10 = 13;
          v11 = 12LL;
        }
        v7 = GetDpiDependentMetric(v11, a2) - 2;
        LOWORD(DpiDependentMetric) = GetDpiDependentMetric(v10, a2) - 4;
        goto LABEL_18;
      case 2u:
LABEL_28:
        if ( (v8 & 0x18) != 0 )
        {
          DpiDependentMetric = *(_DWORD *)(GetDPIMETRICSForDpi() + 28);
        }
        else
        {
          v13 = a2;
          v14 = 28LL;
LABEL_16:
          DpiDependentMetric = GetDpiDependentMetric(v14, v13);
        }
LABEL_17:
        v7 = DpiDependentMetric;
        goto LABEL_18;
      case 3u:
        if ( (v8 & 8) != 0 )
        {
          v16 = 1;
        }
        else
        {
          if ( (v8 & 2) != 0 )
          {
            v16 = 1;
            v17 = 11LL;
            goto LABEL_26;
          }
          v16 = 10;
        }
        v17 = 0LL;
LABEL_26:
        v7 = GetDpiDependentMetric(v17, a2);
        v18 = v16;
LABEL_27:
        LOWORD(DpiDependentMetric) = GetDpiDependentMetric(v18, a2);
        goto LABEL_18;
    }
    if ( *v2 != 4 )
    {
      if ( *v2 == 5 )
        goto LABEL_28;
      if ( *v2 != 0xFFFF )
        goto LABEL_18;
      v12 = (v8 & 1) == 0;
      v13 = a2;
      if ( v12 )
      {
        v14 = 13LL;
        goto LABEL_16;
      }
      v19 = GetDpiDependentMetric(12LL, a2);
      v18 = 13LL;
      v7 = 4 * v19;
      goto LABEL_27;
    }
    if ( (v8 & 0x408) != 8 )
    {
      DpiDependentMetric = (a2 >> 3) + 1;
      goto LABEL_17;
    }
    LOWORD(DpiDependentMetric) = v5 - 8;
LABEL_18:
    *(v4 - 1) = v7;
    *v4 = DpiDependentMetric;
    if ( v7 <= v3 )
      LOWORD(v7) = v3;
    ++v5;
    v2 += 2;
    v4 += 4;
    v3 = v7;
  }
  while ( v5 < 0x5D );
  return (unsigned __int16)v7;
}
