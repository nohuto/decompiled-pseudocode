/*
 * XREFs of ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18000F01C
 * Callers:
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x18000BA80 (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18000BD50 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x18000BF18 (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18000C088 (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCbCopyW(char *a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v3; // rdx
  signed int v4; // r9d
  unsigned __int64 v5; // r10
  signed __int64 v6; // r8
  unsigned __int16 v7; // ax
  unsigned __int16 *v8; // rax

  v3 = a2 >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( v3 )
      *(_WORD *)a1 = 0;
  }
  else
  {
    if ( v3 )
    {
      v5 = 2147483646 - v3;
      v6 = a3 - a1;
      do
      {
        if ( !(v5 + v3) )
          break;
        v7 = *(_WORD *)&a1[v6];
        if ( !v7 )
          break;
        *(_WORD *)a1 = v7;
        a1 += 2;
        --v3;
      }
      while ( v3 );
    }
    v8 = (unsigned __int16 *)(a1 - 2);
    if ( v3 )
      v8 = (unsigned __int16 *)a1;
    v4 = v3 == 0 ? 0x8007007A : 0;
    *v8 = 0;
  }
  return (unsigned int)v4;
}
