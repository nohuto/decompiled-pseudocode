/*
 * XREFs of ?SetProperty@CArithmeticCompositeEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180254A00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CArithmeticCompositeEffect::SetProperty(__int64 *a1, int a2, int a3, float *a4)
{
  float v4; // xmm1_4
  int v5; // edx
  int v6; // edx
  int v7; // edx
  __int64 v8; // rax
  float *v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // ebx

  if ( a3 != 18 )
    goto LABEL_14;
  v4 = *a4;
  v5 = a2 - 2;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
        {
LABEL_14:
          v11 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0x4Au, 0LL);
          return v11;
        }
        v8 = 188LL;
      }
      else
      {
        v8 = 184LL;
      }
    }
    else
    {
      v8 = 180LL;
    }
  }
  else
  {
    v8 = 176LL;
  }
  v9 = (float *)((char *)a1 + v8);
  if ( !(__int64 *)((char *)a1 + v8) )
    goto LABEL_14;
  if ( *v9 != v4 )
  {
    v10 = *a1;
    *v9 = v4;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v10 + 72))(a1, 0LL, 0LL);
  }
  return v9 == 0LL ? 0x80070057 : 0;
}
