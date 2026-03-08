/*
 * XREFs of ExpQueryNumaProximityNode @ 0x1409F42A8
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExpQueryNumaProximityNode(unsigned int *a1, unsigned int a2, _DWORD *a3)
{
  int v5; // r9d
  __int64 v6; // rcx
  unsigned __int16 v7; // r8
  unsigned __int16 v9; // [rsp+58h] [rbp+10h] BYREF
  _DWORD *v10; // [rsp+60h] [rbp+18h]

  v10 = a3;
  if ( a2 >= 8 )
  {
    v6 = *a1;
    v5 = 0;
    v9 = 0;
    if ( PnpQueryProximityNode )
    {
      v5 = PnpQueryProximityNode(v6, &v9, a3, 0LL);
      if ( v5 >= 0 )
      {
        v7 = 0;
        if ( KeNumberNodes )
        {
          while ( *(_WORD *)KeNodeBlock[v7] != v9 )
          {
            if ( ++v7 >= (unsigned __int16)KeNumberNodes )
              goto LABEL_10;
          }
          v9 = v7;
        }
LABEL_10:
        if ( v7 >= (unsigned __int16)KeNumberNodes )
          v5 = -1073741595;
      }
    }
    if ( v5 >= 0 )
      *((_WORD *)a1 + 2) = v9;
  }
  else
  {
    v5 = -1073741820;
  }
  if ( a3 )
    *a3 = 8;
  return (unsigned int)v5;
}
