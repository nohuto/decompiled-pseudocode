/*
 * XREFs of ?HrCalcRequiredBufferSizeWorker@@YAJIIIIPEAI@Z @ 0x18005949C
 * Callers:
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x18003C020 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x18003D428 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall HrCalcRequiredBufferSizeWorker(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int *a5)
{
  unsigned int v5; // r10d
  __int64 v6; // r11
  __int64 v7; // rdx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v5 = 0;
  v6 = a2;
  if ( !a4 )
    goto LABEL_7;
  v7 = (unsigned int)(a4 - 1);
  v8 = a3 * (unsigned __int64)a1;
  if ( v8 > 0xFFFFFFFF )
  {
    v12 = 1612;
    goto LABEL_14;
  }
  a1 = v8 + 7;
  if ( (int)v8 + 7 < (unsigned int)v8 )
  {
    v12 = 1613;
    goto LABEL_14;
  }
  a1 >>= 3;
  if ( (unsigned int)v6 < a1 )
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x652u, 0LL);
    return v10;
  }
  v9 = v6 * v7;
  if ( v9 > 0xFFFFFFFF )
  {
    v12 = 1621;
    goto LABEL_14;
  }
  v5 = a1 + v9;
  if ( a1 + (unsigned int)v9 < (unsigned int)v9 )
  {
    v12 = 1622;
LABEL_14:
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, v12, 0LL);
    return v10;
  }
LABEL_7:
  v10 = 0;
  *a5 = v5;
  return v10;
}
