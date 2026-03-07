__int64 __fastcall HalpInitializeCmciVector(__int64 a1)
{
  bool v2; // zf
  unsigned int v4; // [rsp+70h] [rbp+10h] BYREF
  int v5; // [rsp+74h] [rbp+14h]

  v2 = *(_DWORD *)(a1 + 240) == 2;
  v4 = *(_DWORD *)(a1 + 256);
  v5 = -7;
  if ( !v2 || !HalpInterruptFindLines(&v4) )
    return 0LL;
  HalpInterruptGetPriority(a1);
  return HalpInterruptSetLineStateInternal(a1, &v4);
}
