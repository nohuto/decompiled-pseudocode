/*
 * XREFs of ?AddAndSet@?$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z @ 0x1800C149C
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800561C0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800BF040 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ @ 0x1800C058C (-EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800271F4 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1FE0 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall DynArray<CExpressionValue,1>::AddAndSet(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // esi
  __int64 *v8; // rbx
  __int64 v9; // r14
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v3 = 5LL;
  v5 = DynArrayImpl<1>::AddMultiple(a1, 80, 5, &v11);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xE5u, 0LL);
  }
  else
  {
    v8 = (__int64 *)(v11 + 64);
    do
    {
      *((_OWORD *)v8 - 4) = *(_OWORD *)a3;
      *((_OWORD *)v8 - 3) = *(_OWORD *)(a3 + 16);
      *((_OWORD *)v8 - 2) = *(_OWORD *)(a3 + 32);
      *((_OWORD *)v8 - 1) = *(_OWORD *)(a3 + 48);
      v9 = *(_QWORD *)(a3 + 64);
      if ( *v8 != v9 )
      {
        v11 = *(_QWORD *)(a3 + 64);
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v11);
        v11 = *v8;
        *v8 = v9;
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v11);
      }
      *((_DWORD *)v8 + 2) = *(_DWORD *)(a3 + 72);
      *((_BYTE *)v8 + 12) = *(_BYTE *)(a3 + 76);
      v8 += 10;
      --v3;
    }
    while ( v3 );
  }
  return v7;
}
