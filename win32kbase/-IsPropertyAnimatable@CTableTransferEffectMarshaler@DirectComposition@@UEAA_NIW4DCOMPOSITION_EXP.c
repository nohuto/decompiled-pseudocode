char __fastcall DirectComposition::CTableTransferEffectMarshaler::IsPropertyAnimatable(
        DirectComposition::CResourceMarshaler *a1,
        unsigned int a2,
        int a3)
{
  unsigned int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF

  if ( (int)DirectComposition::CTableTransferEffectMarshaler::PropertyIdToColorChannelAndIndex(a1, a2, v7, &v8) < 0 )
    return DirectComposition::CResourceMarshaler::IsPropertyAnimatable(a1, a2);
  else
    return a3 == 18;
}
