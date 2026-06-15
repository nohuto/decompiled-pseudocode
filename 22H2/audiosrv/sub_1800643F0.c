/*
 * XREFs of sub_1800643F0 @ 0x1800643F0
 * Callers:
 *     sub_180063460 @ 0x180063460 (sub_180063460.c)
 * Callees:
 *     sub_18002AD80 @ 0x18002AD80 (sub_18002AD80.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180064438 @ 0x180064438 (sub_180064438.c)
 */

__int64 sub_1800643F0()
{
  __int64 v0; // rcx
  int v1; // eax
  unsigned int v2; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v0 = qword_18019EF58;
  qword_18019EF58 = 0LL;
  if ( v0 )
    sub_18002AD80(v0);
  v1 = sub_180064438(&qword_18019EF58);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  sub_18004BD84((int)retaddr, 403, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp", v1);
  return v2;
}
