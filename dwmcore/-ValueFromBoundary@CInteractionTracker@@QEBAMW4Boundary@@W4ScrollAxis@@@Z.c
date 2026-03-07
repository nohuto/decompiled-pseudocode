float __fastcall CInteractionTracker::ValueFromBoundary(_DWORD *a1, __int64 a2, int a3)
{
  float result; // xmm0_4
  int v4; // r10d
  int v5; // r10d
  int v6; // r10d
  float v7; // [rsp+38h] [rbp+10h] BYREF
  float v8; // [rsp+48h] [rbp+20h] BYREF

  CInteractionTracker::GetScrollRange(a1, a3, &v8, &v7);
  result = 0.0;
  v5 = v4 - 1;
  if ( !v5 )
    return v8;
  v6 = v5 - 1;
  if ( !v6 )
    return v7;
  if ( v6 == 1 )
    return v8;
  return result;
}
