__int64 __fastcall PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(__int64 a1, char a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int128 *v4; // rcx
  __int64 result; // rax
  __int128 *v6; // rcx

  v2 = MEMORY[0xFFFFF78000000008];
  v3 = 28LL;
  if ( a2 )
  {
    if ( dword_140C38ADC != 28 )
      qword_140C38B68 = MEMORY[0xFFFFF78000000008];
    if ( dword_140C38AD8 )
      qword_140C38B60 = MEMORY[0xFFFFF78000000008];
    v6 = &xmmword_140C38C50;
    do
    {
      result = *((unsigned int *)v6 - 92);
      *(_DWORD *)v6 += result;
      v6 = (__int128 *)((char *)v6 + 4);
      --v3;
    }
    while ( v3 );
  }
  else
  {
    if ( dword_140C38ADC != 28 )
    {
      qword_140C38B70[dword_140C38ADC] += MEMORY[0xFFFFF78000000008] - qword_140C38B68;
      qword_140C38B68 = 0LL;
    }
    if ( dword_140C38AD8 )
    {
      qword_140C38B58 += v2 - qword_140C38B60;
      qword_140C38B60 = 0LL;
    }
    v4 = &xmmword_140C38C50;
    do
    {
      result = *((unsigned int *)v4 - 92);
      *(_DWORD *)v4 -= result;
      v4 = (__int128 *)((char *)v4 + 4);
      --v3;
    }
    while ( v3 );
  }
  byte_140C38B50 = a2;
  return result;
}
