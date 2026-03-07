void __fastcall NSInstrumentation::CPointerHashTable::InsertWithHash(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        const void *a4)
{
  unsigned __int64 v4; // r10
  __int64 v5; // rdx

  v4 = a2 >> (64 - (unsigned __int8)*((_DWORD *)this + 11));
  if ( (*((_BYTE *)this + 52) & 1) != 0 )
    *a3 = a2;
  while ( 1 )
  {
    while ( (unsigned int)v4 >= *((_DWORD *)this + 10) )
      LODWORD(v4) = 0;
    v5 = *((_QWORD *)this + 4);
    if ( !*(_QWORD *)(v5 + 16LL * (unsigned int)v4)
      && !_InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 16LL * (unsigned int)v4), -1LL, 0LL) )
    {
      break;
    }
    LODWORD(v4) = v4 + 1;
  }
  *(_QWORD *)(*((_QWORD *)this + 4) + 16LL * (unsigned int)v4 + 8) = a4;
  *(_QWORD *)(*((_QWORD *)this + 4) + 16LL * (unsigned int)v4) = a3;
}
