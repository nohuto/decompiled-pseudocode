/*
 * XREFs of sub_1800D74D0 @ 0x1800D74D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180047278 @ 0x180047278 (sub_180047278.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1801259DC @ 0x1801259DC (sub_1801259DC.c)
 *     sub_180135FC8 @ 0x180135FC8 (sub_180135FC8.c)
 */

__int64 __fastcall sub_1800D74D0(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 )
  {
    v9 = 0LL;
    sub_180047278(&v9);
    v6 = sub_1801259DC(&v9);
    v5 = v6;
    if ( v6 >= 0 )
    {
      if ( v9 )
      {
        *a3 = sub_180135FC8(v9, a2);
        v5 = 0;
      }
      else
      {
        v5 = -2147418113;
      }
    }
    else
    {
      sub_18004BD84((int)retaddr, 128, (int)"avcore\\audiocore\\server\\lib\\spatialsettings\\SpatialProviders.h", v6);
    }
    sub_180047278(&v9);
  }
  else
  {
    v5 = -2147467261;
    sub_18004BD84((int)retaddr, 2738, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", -2147467261);
  }
  return v5;
}
