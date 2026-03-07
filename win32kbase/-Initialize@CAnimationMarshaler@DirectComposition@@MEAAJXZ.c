__int64 __fastcall DirectComposition::CAnimationMarshaler::Initialize(DirectComposition::CAnimationMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CAnimationMarshaler::EnsureTimeListEntry((DirectComposition::CAnimationMarshaler *)((char *)this - 16));
  if ( (int)result >= 0 )
    *(_DWORD *)(*((_QWORD *)this + 8) + 24LL) |= 4u;
  return result;
}
