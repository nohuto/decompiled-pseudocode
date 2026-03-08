/*
 * XREFs of ?SetProperty@CTableTransferEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180251600
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PropertyIdToColorChannelAndIndex@CTableTransferEffect@@QEBA_NIPEAI0@Z @ 0x18025129C (-PropertyIdToColorChannelAndIndex@CTableTransferEffect@@QEBA_NIPEAI0@Z.c)
 */

__int64 __fastcall CTableTransferEffect::SetProperty(__int64 a1, unsigned int a2, int a3, float *a4)
{
  float v4; // xmm1_4
  __int64 v5; // r11
  float *v6; // rbx
  unsigned int v7; // ebx
  unsigned int v9[6]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 == 18
    && (v4 = *a4, CTableTransferEffect::PropertyIdToColorChannelAndIndex((CTableTransferEffect *)a1, a2, &v10, v9))
    && (a1 = v9[0], (v6 = (float *)(*(_QWORD *)(v5 + 40LL * v10 + 184) + 4LL * v9[0])) != 0LL) )
  {
    if ( *v6 != v4 )
    {
      *v6 = v4;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 72LL))(v5, 0LL, 0LL);
    }
    return v6 == 0LL ? 0x80070057 : 0;
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x8Fu, 0LL);
  }
  return v7;
}
