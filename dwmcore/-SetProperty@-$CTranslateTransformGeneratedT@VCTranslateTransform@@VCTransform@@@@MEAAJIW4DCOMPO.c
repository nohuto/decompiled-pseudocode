/*
 * XREFs of ?SetProperty@?$CTranslateTransformGeneratedT@VCTranslateTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18001AF00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTranslateTransformGeneratedT<CTranslateTransform,CTransform>::SetProperty(
        __int64 *a1,
        int a2,
        int a3,
        _DWORD *a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // rax
  unsigned int v8; // [rsp+20h] [rbp-18h]

  if ( a3 != 18 )
  {
    v8 = 8564;
LABEL_12:
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2147024809, v8, 0LL);
    return v5;
  }
  if ( !a2 )
  {
    if ( *(float *)a4 != *((float *)a1 + 40) )
    {
      v7 = *a1;
      *((_DWORD *)a1 + 40) = *a4;
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v7 + 72))(a1, 0LL, 0LL);
    }
    return 0;
  }
  if ( a2 != 1 )
  {
    v8 = 8559;
    goto LABEL_12;
  }
  if ( *(float *)a4 != *((float *)a1 + 41) )
  {
    v4 = *a1;
    *((_DWORD *)a1 + 41) = *a4;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v4 + 72))(a1, 0LL, 0LL);
  }
  return 0;
}
