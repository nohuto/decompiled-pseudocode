/*
 * XREFs of sub_180068CE0 @ 0x180068CE0
 * Callers:
 *     sub_180055130 @ 0x180055130 (sub_180055130.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_180056854 @ 0x180056854 (sub_180056854.c)
 *     sub_180065FC8 @ 0x180065FC8 (sub_180065FC8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180068CE0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  LPVOID v4; // rax
  char *v5; // rdi
  int v6; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (a1 + 24) & -(__int64)(a1 != 0);
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 48) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = sub_180055F40(0x148uLL);
  if ( v4 )
    v5 = (char *)sub_180056854((__int64)v4);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v6 = sub_180065FC8(v5, v2);
    if ( v6 < 0 )
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
    else
      *(_QWORD *)(a1 + 48) = v5;
    if ( v6 >= 0 )
      return 0LL;
  }
  else
  {
    v6 = -2147024882;
  }
  sub_18004BD84((int)retaddr, 989, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v6);
  return (unsigned int)v6;
}
