/*
 * XREFs of sub_1800454C0 @ 0x1800454C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800454C0(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 64) + 48LL))(
         *(_QWORD *)(a1 + 64),
         *(_QWORD *)(a1 + 56));
  v3 = v2;
  if ( v2 >= 0 || v2 == -2147023174 || v2 == -2147023170 )
  {
    *(_BYTE *)(a1 + 224) = 0;
    return 0LL;
  }
  else
  {
    sub_18004BD84(retaddr, 410LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", (unsigned int)v2);
    return v3;
  }
}
