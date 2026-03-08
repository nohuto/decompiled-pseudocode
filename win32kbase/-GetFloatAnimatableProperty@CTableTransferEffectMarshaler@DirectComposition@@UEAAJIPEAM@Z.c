/*
 * XREFs of ?GetFloatAnimatableProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C024F450
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C024C0F0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?PropertyIdToColorChannelAndIndex@CTableTransferEffectMarshaler@DirectComposition@@IEBAJIPEAI0@Z @ 0x1C024F518 (-PropertyIdToColorChannelAndIndex@CTableTransferEffectMarshaler@DirectComposition@@IEBAJIPEAI0@Z.c)
 */

__int64 __fastcall DirectComposition::CTableTransferEffectMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CTableTransferEffectMarshaler *this,
        unsigned int a2,
        float *a3)
{
  __int64 result; // rax
  unsigned int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0;
  v7[0] = 0;
  result = DirectComposition::CTableTransferEffectMarshaler::PropertyIdToColorChannelAndIndex(this, a2, &v8, v7);
  if ( (int)result < 0 )
    return DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(this, a2, a3);
  *a3 = *(float *)(*((_QWORD *)this + 2 * v8 + 14) + 4LL * v7[0]);
  return result;
}
