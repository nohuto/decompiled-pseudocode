/*
 * XREFs of ?Initialize@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0217920
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C0215C70 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CLinearTransferEffectMarshaler::Initialize(
        DirectComposition::CLinearTransferEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    *((_BYTE *)this + 152) &= 0xE0u;
    *(_QWORD *)((char *)this + 124) = 1065353216LL;
    result = 0LL;
    *(_QWORD *)((char *)this + 132) = 1065353216LL;
    *(_QWORD *)((char *)this + 140) = 1065353216LL;
    *((_DWORD *)this + 37) = 1065353216;
    *((_DWORD *)this + 30) = 0;
  }
  return result;
}
