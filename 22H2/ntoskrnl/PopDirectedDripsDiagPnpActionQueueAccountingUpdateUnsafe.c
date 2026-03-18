/*
 * XREFs of PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe @ 0x1405A057C
 * Callers:
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdate @ 0x1405A04D8 (PopDirectedDripsDiagPnpActionQueueAccountingUpdate.c)
 *     PopDirectedDripsDiagQueryAndResetPnpAccounting @ 0x1405A0640 (PopDirectedDripsDiagQueryAndResetPnpAccounting.c)
 * Callees:
 *     <none>
 */

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
    if ( dword_140C38EFC != 28 )
      qword_140C38F88 = MEMORY[0xFFFFF78000000008];
    if ( dword_140C38EF8 )
      qword_140C38F80 = MEMORY[0xFFFFF78000000008];
    v6 = &xmmword_140C39070;
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
    if ( dword_140C38EFC != 28 )
    {
      qword_140C38F90[dword_140C38EFC] += MEMORY[0xFFFFF78000000008] - qword_140C38F88;
      qword_140C38F88 = 0LL;
    }
    if ( dword_140C38EF8 )
    {
      qword_140C38F78 += v2 - qword_140C38F80;
      qword_140C38F80 = 0LL;
    }
    v4 = &xmmword_140C39070;
    do
    {
      result = *((unsigned int *)v4 - 92);
      *(_DWORD *)v4 -= result;
      v4 = (__int128 *)((char *)v4 + 4);
      --v3;
    }
    while ( v3 );
  }
  byte_140C38F70 = a2;
  return result;
}
