/*
 * XREFs of ?SetProperty@CShadowEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801F6390
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShadowEffect::SetProperty(float *a1, int a2, int a3, float *a4)
{
  float *v4; // r10
  float v5; // xmm1_4
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ebx

  v4 = a1;
  if ( a3 != 18 )
    goto LABEL_16;
  v5 = *a4;
  if ( a2 )
  {
    v6 = a2 - 2;
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
LABEL_16:
            v11 = -2147024809;
            MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0x5Eu, 0LL);
            return v11;
          }
          v9 = 168LL;
        }
        else
        {
          v9 = 164LL;
        }
      }
      else
      {
        v9 = 160LL;
      }
    }
    else
    {
      v9 = 156LL;
    }
  }
  else
  {
    v9 = 152LL;
    v5 = fmaxf(0.0, v5);
  }
  a1 = (float *)((char *)a1 + v9);
  if ( !a1 )
    goto LABEL_16;
  if ( *a1 != v5 )
  {
    v10 = *(_QWORD *)v4;
    *a1 = v5;
    (*(void (__fastcall **)(float *, _QWORD, _QWORD))(v10 + 72))(v4, 0LL, 0LL);
  }
  return 0;
}
