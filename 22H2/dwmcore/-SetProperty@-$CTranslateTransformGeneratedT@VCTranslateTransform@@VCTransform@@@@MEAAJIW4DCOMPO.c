/*
 * XREFs of ?SetProperty@?$CTranslateTransformGeneratedT@VCTranslateTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800D8CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTranslateTransformGeneratedT<CTranslateTransform,CTransform>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        float *a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-18h]

  if ( a3 != 18 )
  {
    v6 = 6589;
LABEL_13:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, v6, 0LL);
    return v4;
  }
  if ( !a2 )
  {
    if ( *a4 == *(float *)(a1 + 152) )
      return 0;
    *(float *)(a1 + 152) = *a4;
    goto LABEL_6;
  }
  if ( a2 != 1 )
  {
    v6 = 6584;
    goto LABEL_13;
  }
  if ( *a4 != *(float *)(a1 + 156) )
  {
    *(float *)(a1 + 156) = *a4;
LABEL_6:
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
  }
  return 0;
}
