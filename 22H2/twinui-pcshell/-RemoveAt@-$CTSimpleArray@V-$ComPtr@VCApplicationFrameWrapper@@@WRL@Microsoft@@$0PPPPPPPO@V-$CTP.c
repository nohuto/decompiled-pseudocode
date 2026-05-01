/*
 * XREFs of ?RemoveAt@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18000E05C
 * Callers:
 *     ?GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z @ 0x18000DCA0 (-GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ?DestroyFrame@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x1801E4AD0 (-DestroyFrame@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z.c)
 *     ?EndFrameRecovery@CApplicationFrameService@@UEAAXXZ @ 0x1801E4C60 (-EndFrameRecovery@CApplicationFrameService@@UEAAXXZ.c)
 *     ?_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z @ 0x1801E76C4 (-_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000E400 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$ChainInterfaces.c)
 *     memmove_0 @ 0x180091313 (memmove_0.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::RemoveAt(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v5; // rax
  __int64 v6; // rcx

  v2 = a1[1];
  if ( a2 >= v2 )
    return 2147650721LL;
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 8 * a2);
  if ( v6 )
  {
    *(_QWORD *)(v5 + 8 * a2) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::Release(v6);
    v2 = a1[1];
  }
  if ( a2 != v2 - 1 )
  {
    memmove_0((void *)(*a1 + 8 * a2), (const void *)(*a1 + 8 * a2 + 8), 8 * (v2 - a2) - 8);
    v2 = a1[1];
  }
  a1[1] = v2 - 1;
  return 0LL;
}
