/*
 * XREFs of ?Initialize@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C024EDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C024D3E0 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CLinearTransferEffectMarshaler::Initialize(
        DirectComposition::CLinearTransferEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    *((_BYTE *)this + 144) &= 0xE0u;
    *(_QWORD *)((char *)this + 116) = 1065353216LL;
    result = 0LL;
    *(_QWORD *)((char *)this + 124) = 1065353216LL;
    *(_QWORD *)((char *)this + 132) = 1065353216LL;
    *((_DWORD *)this + 35) = 1065353216;
    *((_DWORD *)this + 28) = 0;
  }
  return result;
}
