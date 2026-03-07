char __fastcall RtlpTestMemoryRandomUp(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdx

  v4 = a1 + 512;
  while ( 1 )
  {
    if ( a1 >= v4 )
      return 1;
    if ( *a1 != a3 )
      break;
    ++a1;
    a3 = *(_QWORD *)(a4 + 8 * (a3 & 0xF)) ^ (a3 >> 4);
  }
  return 0;
}
