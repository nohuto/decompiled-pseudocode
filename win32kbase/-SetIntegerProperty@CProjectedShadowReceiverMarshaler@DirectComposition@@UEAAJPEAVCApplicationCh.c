__int64 __fastcall DirectComposition::CProjectedShadowReceiverMarshaler::SetIntegerProperty(
        DirectComposition::CProjectedShadowReceiverMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 result; // rax

  *a5 = 0;
  if ( a3 != 1 )
    return DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  *((_DWORD *)this + 4) |= 0x100u;
  *((_DWORD *)this + 20) = a4;
  result = 0LL;
  *a5 = 1;
  return result;
}
