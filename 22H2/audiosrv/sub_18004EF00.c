/*
 * XREFs of sub_18004EF00 @ 0x18004EF00
 * Callers:
 *     sub_180074870 @ 0x180074870 (sub_180074870.c)
 * Callees:
 *     sub_18004F040 @ 0x18004F040 (sub_18004F040.c)
 *     ?setSBUpLow@@YAXPEAUthreadmbcinfostruct@@@Z @ 0x18004F1D0 (-setSBUpLow@@YAXPEAUthreadmbcinfostruct@@@Z.c)
 *     sub_18004F260 @ 0x18004F260 (sub_18004F260.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006D208 @ 0x18006D208 (sub_18006D208.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18004EF00(__int64 a1, char a2)
{
  struct threadmbcinfostruct *v4; // rdi
  __int64 v5; // rcx
  void *v6; // rcx
  __int64 v7; // r10

  *(_QWORD *)a1 = off_18014A418;
  v4 = (struct threadmbcinfostruct *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = off_18014A6A0;
  *(_QWORD *)(a1 + 248) = off_18014A268;
  *(_QWORD *)(a1 + 256) = off_18014A238;
  if ( *(_QWORD *)(a1 + 96) )
    sub_18004F260(a1 + 8);
  setSBUpLow(v4);
  v5 = *(_QWORD *)(a1 + 1608);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 1608) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *(void **)(a1 + 1600);
  if ( v6 )
    CoTaskMemFree(v6);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 288));
  if ( *(__int64 *)(a1 + 272) < 0 && !(unsigned int)sub_18006D208(2LL * *(_QWORD *)(a1 + 272) + 12) )
  {
    if ( v7 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 32LL))(v7, 1LL);
    if ( qword_18019E418 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 16LL))(qword_18019E418);
  }
  sub_18004F040(v4);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1, 1616LL);
  return a1;
}
