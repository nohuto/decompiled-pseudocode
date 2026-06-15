/*
 * XREFs of sub_180065030 @ 0x180065030
 * Callers:
 *     sub_180063460 @ 0x180063460 (sub_180063460.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800556DC @ 0x1800556DC (sub_1800556DC.c)
 *     sub_18005579C @ 0x18005579C (sub_18005579C.c)
 *     sub_180065074 @ 0x180065074 (sub_180065074.c)
 */

__int64 sub_180065030()
{
  int v0; // ebx
  int v2; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v0 = sub_18005579C();
  if ( v0 < 0 )
  {
    v2 = 2289;
  }
  else
  {
    v0 = sub_1800556DC();
    if ( v0 < 0 )
    {
      v2 = 2292;
    }
    else
    {
      v0 = sub_180065074();
      if ( v0 >= 0 )
        return 0LL;
      v2 = 2295;
    }
  }
  sub_18004BD84((int)retaddr, v2, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", v0);
  return (unsigned int)v0;
}
