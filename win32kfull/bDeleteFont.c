__int64 __fastcall bDeleteFont(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx
  int v5; // eax
  __int64 v6; // rax
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v3 = 1;
  LOBYTE(a2) = 10;
  v8 = 1;
  if ( (unsigned int)HmgMarkLazyDelete(a1, a2, &v8) )
  {
    v5 = v8;
  }
  else
  {
    v3 = 0;
    v5 = 0;
    v8 = 0;
  }
  if ( !v5 && v3 )
  {
    v6 = HmgRemoveObject(a1, 0LL, 0LL, v2, 10, 0LL);
    if ( v6 )
    {
      FreeObject(v6, 10LL);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
