__int64 __fastcall DirectComposition::CTableTransferEffectMarshaler::SetFloatProperty(
        DirectComposition::CTableTransferEffectMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  bool v4; // bl
  __int64 result; // rax
  __int64 v9; // r8
  unsigned int v10; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v11[5]; // [rsp+24h] [rbp-14h] BYREF

  v4 = 0;
  v10 = 0;
  v11[0] = 0;
  result = DirectComposition::CTableTransferEffectMarshaler::PropertyIdToColorChannelAndIndex(this, a2, &v10, v11);
  if ( (int)result < 0 )
    return DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  v9 = *((_QWORD *)this + 2 * v10 + 14);
  if ( *(float *)(v9 + 4LL * v11[0]) != a3 )
  {
    *(float *)(v9 + 4LL * v11[0]) = a3;
    v4 = 1;
  }
  *a4 = v4;
  return result;
}
