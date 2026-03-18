/*
 * XREFs of ?EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z @ 0x1C0215F34
 * Callers:
 *     ?EmitUpdateCommands@CGaussianBlurEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0215A40 (-EmitUpdateCommands@CGaussianBlurEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0215C50 (-EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CBrightnessEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02164F0 (-EmitUpdateCommands@CBrightnessEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CColorMatrixEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0216850 (-EmitUpdateCommands@CColorMatrixEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CShadowEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0216D60 (-EmitUpdateCommands@CShadowEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CHueRotationEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0217090 (-EmitUpdateCommands@CHueRotationEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CSaturationEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0217180 (-EmitUpdateCommands@CSaturationEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CTurbulenceEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02172F0 (-EmitUpdateCommands@CTurbulenceEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CFloodEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02175D0 (-EmitUpdateCommands@CFloodEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CLinearTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0217830 (-EmitUpdateCommands@CLinearTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0217F10 (-EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CCompositeEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0218440 (-EmitUpdateCommands@CCompositeEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CBlendEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02197B0 (-EmitUpdateCommands@CBlendEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CArithmeticCompositeEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02198E0 (-EmitUpdateCommands@CArithmeticCompositeEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitUpdateCommands@CAffineTransform2DEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0219AD0 (-EmitUpdateCommands@CAffineTransform2DEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C000B6D8 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CEffectInputSet::EmitUpdateCommands(
        __int64 a1,
        __int64 a2,
        int a3,
        struct DirectComposition::CBatch ***a4)
{
  void *v7; // r8
  unsigned __int64 v8; // rbp
  char *v9; // r8
  unsigned int v10; // edx
  _DWORD *v11; // r8
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // rcx
  int v15; // eax
  void *v17; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 32) < *(_DWORD *)a1 )
  {
    do
    {
      v7 = (void *)(4096LL - *((_QWORD *)(*a4)[17] + 5));
      v17 = v7;
      if ( (unsigned __int64)v7 < 0x30 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a4, (unsigned __int64 *)&v17) )
          return *(_DWORD *)(a1 + 32) == *(_DWORD *)a1;
        v7 = v17;
      }
      v8 = (unsigned int)(*(_DWORD *)a1 - *(_DWORD *)(a1 + 32));
      if ( v8 >= ((unsigned __int64)v7 - 20) / 0x1C )
        LODWORD(v8) = ((unsigned __int64)v7 - 20) / 0x1C;
      v17 = 0LL;
      DirectComposition::CBatch::EnsureBatchBuffer(a4, (unsigned int)(28 * v8 + 20), &v17);
      v9 = (char *)v17;
      *(_DWORD *)v17 = 28 * v8 + 20;
      *(_OWORD *)(v9 + 4) = 0LL;
      *((_DWORD *)v9 + 1) = 146;
      *((_DWORD *)v9 + 2) = a3;
      *((_DWORD *)v9 + 4) = v8;
      v10 = *(_DWORD *)(a1 + 32);
      if ( (_DWORD)v8 )
      {
        v11 = v9 + 44;
        v12 = (unsigned int)v8;
        do
        {
          *(v11 - 6) = v10;
          v13 = v10;
          v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * v10);
          if ( v14 )
            v15 = *(_DWORD *)(v14 + 32);
          else
            v15 = 0;
          *(v11 - 5) = v15;
          ++v10;
          *v11 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v13);
          *((_OWORD *)v11 - 1) = *(_OWORD *)(*(_QWORD *)(a1 + 24) + 16 * v13);
          v11 += 7;
          --v12;
        }
        while ( v12 );
        v10 = *(_DWORD *)(a1 + 32);
      }
      *(_DWORD *)(a1 + 32) = v10 + v8;
    }
    while ( v10 + (unsigned int)v8 < *(_DWORD *)a1 );
  }
  return *(_DWORD *)(a1 + 32) == *(_DWORD *)a1;
}
