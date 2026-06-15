/*
 * XREFs of sub_18010EF40 @ 0x18010EF40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_18010F908 @ 0x18010F908 (sub_18010F908.c)
 *     sub_18011020C @ 0x18011020C (sub_18011020C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18010EF40(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // edx
  __int64 v5; // rdi
  int v6; // ebx
  int v7; // r9d
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 72));
  if ( !*(_QWORD *)(a1 + 128) )
  {
    v2 = -2147418113;
    sub_18004BD84(
      (int)retaddr,
      534,
      (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
      -2147418113);
    goto LABEL_14;
  }
  v12 = 0LL;
  sub_1800CB144(&v12);
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
         qword_18019E618,
         0LL,
         &v12);
  v2 = v3;
  if ( v3 < 0 )
  {
    v4 = 537;
LABEL_10:
    v7 = v3;
    goto LABEL_11;
  }
  v5 = *(_QWORD *)(a1 + 128);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 40LL))(v12);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5) == v6 )
  {
    if ( !*(_DWORD *)(a1 + 60) || (*(_DWORD *)(a1 + 60) = 0, v3 = sub_18010F908(a1 - 8), v2 = v3, v3 >= 0) )
    {
      sub_18011020C(a1 - 8, 0LL, 0LL);
      sub_18011020C(a1 - 8, 1LL, 0LL);
      v2 = 0;
      goto LABEL_13;
    }
    v4 = 546;
    goto LABEL_10;
  }
  v2 = -2147418113;
  v7 = -2147418113;
  v4 = 538;
LABEL_11:
  sub_18004BD84(
    (int)retaddr,
    v4,
    (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
    v7);
LABEL_13:
  sub_18000F708(&v12);
LABEL_14:
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
