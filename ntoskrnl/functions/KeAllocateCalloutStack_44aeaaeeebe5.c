__int64 __fastcall KeAllocateCalloutStack(char a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  LOBYTE(a2) = 1;
  v2 = KeAllocateCalloutStackEx(a1 != 0, a2, 0LL, &v5);
  v3 = v5;
  if ( v2 < 0 )
    return 0LL;
  return v3;
}
