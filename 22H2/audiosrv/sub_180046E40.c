/*
 * XREFs of sub_180046E40 @ 0x180046E40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180046E40(__int64 a1, bool *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)(a1 - 8) + 176LL))(a1 - 8, &v7);
  v4 = v3;
  if ( v3 < 0 )
  {
    sub_18004BD84(retaddr, 4793LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", (unsigned int)v3);
    return v4;
  }
  else
  {
    *a2 = v7 != 0;
    return 0LL;
  }
}
