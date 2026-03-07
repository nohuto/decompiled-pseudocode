__int64 __fastcall CDirtyRegion::Add(__int64 a1, __int64 a2)
{
  __int64 i; // rax
  float v4[4]; // [rsp+20h] [rbp-28h] BYREF

  for ( i = 0LL; i < 4; ++i )
    v4[i] = (float)*(int *)(a2 + 4 * i);
  return CDirtyRegion::Add(a1, v4);
}
