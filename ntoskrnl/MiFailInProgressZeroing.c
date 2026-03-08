/*
 * XREFs of MiFailInProgressZeroing @ 0x140652850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiFailInProgressZeroing(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  unsigned __int64 *v6; // rcx
  __int64 v7; // r9

  result = (unsigned __int16)KeNumberNodes;
  if ( KeNumberNodes )
  {
    v3 = 0LL;
    v4 = (unsigned __int16)KeNumberNodes;
    do
    {
      result = *(_QWORD *)(a1 + 16);
      v5 = *(_QWORD *)(result + v3 + 23152);
      if ( v5 )
      {
        v6 = (unsigned __int64 *)(v5 + 280);
        v7 = 3LL;
        do
        {
          for ( result = *v6; (unsigned __int64 *)result != v6; result = *(_QWORD *)result )
          {
            if ( *(_BYTE *)(result - 99) )
              *(_BYTE *)(result - 97) = 1;
          }
          v6 += 37;
          --v7;
        }
        while ( v7 );
      }
      v3 += 25408LL;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
