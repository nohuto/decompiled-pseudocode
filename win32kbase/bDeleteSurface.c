__int64 __fastcall bDeleteSurface(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // edx
  unsigned int v4; // ebx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(a2) = 5;
  v2 = HmgShareLockCheckIgnoreStockBit(a1, a2);
  v6 = v2;
  if ( v2 )
  {
    v4 = SURFREF::bDeleteSurface((SURFREF *)&v6, v3);
    v2 = v6;
  }
  else
  {
    v4 = 0;
  }
  if ( v2 )
    HmgDecrementShareReferenceCountEx(v2, 0LL);
  return v4;
}
