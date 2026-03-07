__int64 __fastcall IommupHvFlushDeviceDomainVaList(int a1, char a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  if ( !a2 )
    return 3221225659LL;
  LODWORD(v5) = a1;
  BYTE4(v5) = a2;
  return ((__int64 (__fastcall *)(__int64 *, _QWORD, __int64))qword_140C62328)(&v5, a3, a4);
}
