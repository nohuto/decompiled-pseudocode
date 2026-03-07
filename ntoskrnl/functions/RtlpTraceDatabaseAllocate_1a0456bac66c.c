__int64 __fastcall RtlpTraceDatabaseAllocate(__int64 a1, char a2, __int64 a3)
{
  bool v3; // zf
  __int64 v5; // rcx

  v3 = (a2 & 4) == 0;
  v5 = 64LL;
  if ( v3 )
    v5 = 256LL;
  return ExAllocatePool2(v5, a1, a3);
}
