/*
 * XREFs of sub_180045A90 @ 0x180045A90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180045A90(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 64) + 40LL))(
         *(_QWORD *)(a1 + 64),
         *(_QWORD *)(a1 + 56));
  v3 = v2;
  if ( v2 < 0 )
  {
    sub_18004BD84(retaddr, 397LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", (unsigned int)v2);
    return v3;
  }
  else
  {
    *(_BYTE *)(a1 + 224) = 1;
    return 0LL;
  }
}
