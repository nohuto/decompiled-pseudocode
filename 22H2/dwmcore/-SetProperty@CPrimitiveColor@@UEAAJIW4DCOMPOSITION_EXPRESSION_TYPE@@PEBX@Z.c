/*
 * XREFs of ?SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801E2C80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnColorChanged@CPrimitiveColor@@AEAAXXZ @ 0x1801E2AE4 (-OnColorChanged@CPrimitiveColor@@AEAAXXZ.c)
 */

__int64 __fastcall CPrimitiveColor::SetProperty(float *a1, int a2, int a3, float *a4)
{
  CPrimitiveColor *v4; // r10
  float v5; // xmm1_4
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 v9; // rax
  unsigned int v10; // ebx

  v4 = (CPrimitiveColor *)a1;
  if ( a3 != 18 )
    goto LABEL_14;
  v5 = *a4;
  v6 = a2 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
LABEL_14:
          v10 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0x47u, 0LL);
          return v10;
        }
        v9 = 124LL;
      }
      else
      {
        v9 = 120LL;
      }
    }
    else
    {
      v9 = 116LL;
    }
  }
  else
  {
    v9 = 112LL;
  }
  a1 = (float *)((char *)a1 + v9);
  if ( !a1 )
    goto LABEL_14;
  if ( *a1 != v5 )
  {
    *a1 = v5;
    CPrimitiveColor::OnColorChanged(v4);
  }
  return 0;
}
