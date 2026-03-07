__int64 __fastcall SeDuplicateTokenAndAddOriginClaim(int a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  int v7; // ebx
  __int64 v8; // r9
  void *v10; // rcx
  void *v11; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v12[3]; // [rsp+48h] [rbp-38h] BYREF
  int v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+64h] [rbp-1Ch]
  __int128 v15; // [rsp+68h] [rbp-18h]

  v11 = 0LL;
  v14 = 0;
  v12[1] = 0LL;
  v13 = 0;
  v12[2] = 0LL;
  v12[0] = 48LL;
  v15 = 0LL;
  v7 = SepDuplicateToken(a1, (unsigned int)v12, 0, 1, 0, 0, 0, (__int64)&v11);
  if ( v7 < 0 )
  {
    v10 = 0LL;
    v11 = 0LL;
  }
  else
  {
    LOBYTE(v8) = 1;
    v7 = SepAddTokenOriginClaim(a2, a3, v11, v8);
    if ( v7 >= 0 )
    {
      *a4 = v11;
      return (unsigned int)v7;
    }
    v10 = v11;
  }
  if ( v10 )
    ObfDereferenceObject(v10);
  return (unsigned int)v7;
}
