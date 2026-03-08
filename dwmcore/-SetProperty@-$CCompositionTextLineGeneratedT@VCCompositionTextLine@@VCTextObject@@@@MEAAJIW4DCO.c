/*
 * XREFs of ?SetProperty@?$CCompositionTextLineGeneratedT@VCCompositionTextLine@@VCTextObject@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801C57A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionTextLineGeneratedT<CCompositionTextLine,CTextObject>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        _DWORD *a4)
{
  int v4; // edx
  int v5; // edx
  unsigned int v6; // ebx
  __int64 v7; // rax
  unsigned int v9; // [rsp+20h] [rbp-18h]

  if ( a3 == 18 )
  {
    v4 = a2 - 3;
    if ( !v4 )
    {
      if ( *(float *)a4 != *(float *)(a1 + 88) )
      {
        v7 = *(_QWORD *)a1;
        *(_DWORD *)(a1 + 88) = *a4;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v7 + 72))(a1, 0LL, 0LL);
      }
      return 0;
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
      {
        v9 = 6816;
        goto LABEL_7;
      }
      if ( *(float *)a4 == *(float *)(a1 + 96) )
        return 0;
      *(_DWORD *)(a1 + 96) = *a4;
    }
    else
    {
      if ( *(float *)a4 == *(float *)(a1 + 92) )
        return 0;
      *(_DWORD *)(a1 + 92) = *a4;
    }
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
    return 0;
  }
  v9 = 6821;
LABEL_7:
  v6 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, v9, 0LL);
  return v6;
}
