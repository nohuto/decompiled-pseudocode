__int64 __fastcall PopNetSetResiliencyPhaseBias(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 v4; // rcx

  v3 = a1;
  PopReleasePolicyLock(a1, a2, a3);
  if ( qword_140C6ABE0 )
  {
    LOBYTE(v4) = v3;
    qword_140C6ABE0(v4);
  }
  return PopAcquirePolicyLock(v4);
}
