/*
 * XREFs of sub_1800D2C10 @ 0x1800D2C10
 * Callers:
 *     sub_1800DD3E0 @ 0x1800DD3E0 (sub_1800DD3E0.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D2C10(__int64 a1)
{
  __int64 v1; // rcx
  int v3; // edi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 216);
  if ( v1 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1);
    if ( v3 == -2005139384 )
      v3 = -2147024809;
    if ( v3 >= 0 )
    {
      return 0LL;
    }
    else
    {
      sub_18004BD84((int)retaddr, 551, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", v3);
      return (unsigned int)v3;
    }
  }
  else
  {
    sub_18004BD84((int)retaddr, 541, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", -2147024809);
    return 2147942487LL;
  }
}
