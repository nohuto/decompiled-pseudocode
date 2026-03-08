/*
 * XREFs of ?SetProperty@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801C6050
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetProperty(
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
    if ( !a2 )
    {
      if ( *(float *)a4 != *(float *)(a1 + 160) )
      {
        v7 = *(_QWORD *)a1;
        *(_DWORD *)(a1 + 160) = *a4;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v7 + 72))(a1, 0LL, 0LL);
      }
      return 0;
    }
    v4 = a2 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 != 1 )
        {
          v9 = 8015;
          goto LABEL_8;
        }
        if ( *(float *)a4 == *(float *)(a1 + 172) )
          return 0;
        *(_DWORD *)(a1 + 172) = *a4;
      }
      else
      {
        if ( *(float *)a4 == *(float *)(a1 + 168) )
          return 0;
        *(_DWORD *)(a1 + 168) = *a4;
      }
    }
    else
    {
      if ( *(float *)a4 == *(float *)(a1 + 164) )
        return 0;
      *(_DWORD *)(a1 + 164) = *a4;
    }
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
    return 0;
  }
  v9 = 8020;
LABEL_8:
  v6 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, v9, 0LL);
  return v6;
}
