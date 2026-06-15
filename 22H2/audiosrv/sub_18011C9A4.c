/*
 * XREFs of sub_18011C9A4 @ 0x18011C9A4
 * Callers:
 *     sub_18011F15C @ 0x18011F15C (sub_18011F15C.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18011C9A4(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // edx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v10 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 24LL))(v4, &unk_180173700, 1LL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v10 + 32LL))(
           v10,
           *(_QWORD *)(a1 + 16),
           0LL,
           a2);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 7621;
  }
  else
  {
    v7 = 7619;
  }
  sub_18004BD84(
    (int)retaddr,
    v7,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    v5);
LABEL_7:
  sub_18000F708(&v10);
  return v6;
}
