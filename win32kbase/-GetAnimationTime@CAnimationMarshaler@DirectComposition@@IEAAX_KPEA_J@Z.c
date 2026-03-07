void __fastcall DirectComposition::CAnimationMarshaler::GetAnimationTime(
        DirectComposition::CAnimationMarshaler *this,
        unsigned __int64 a2,
        __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF
  bool v7; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v6[0] = 0LL;
  v8 = 0LL;
  v7 = 0;
  DirectComposition::CAnimationMarshaler::GetAnimationTimeState(this, &v7, v6, &v8);
  if ( v7 || a2 <= v8 )
    v5 = v6[0];
  else
    v5 = a2 - v8 + v6[0];
  *a3 = v5;
}
