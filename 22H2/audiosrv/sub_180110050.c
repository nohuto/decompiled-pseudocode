/*
 * XREFs of sub_180110050 @ 0x180110050
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C64A4 @ 0x1800C64A4 (sub_1800C64A4.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_18010EAF0 @ 0x18010EAF0 (sub_18010EAF0.c)
 *     sub_18010ED94 @ 0x18010ED94 (sub_18010ED94.c)
 *     sub_18010F970 @ 0x18010F970 (sub_18010F970.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180110050(__int64 a1, int a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 **v6; // rbx
  __int64 v7; // rsi
  __int64 *v8; // rcx
  __int64 v9; // rax
  char v10; // bl
  __int64 v11; // rdx
  int v12; // eax
  int v13; // edx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  char v16; // [rsp+28h] [rbp-30h]
  __int64 v17; // [rsp+30h] [rbp-28h]
  char v18; // [rsp+38h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 72));
  v20 = 0LL;
  sub_1800CB144(&v20);
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
         qword_18019E618,
         0LL,
         &v20);
  v5 = v4;
  if ( v4 < 0 )
  {
    sub_18004BD84(
      (int)retaddr,
      495,
      (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
      v4);
    goto LABEL_13;
  }
  v6 = (__int64 **)(a1 + 128);
  v7 = a1 - 8;
  if ( *(_QWORD *)(a1 + 128) )
  {
    sub_18010EAF0((_QWORD *)(a1 - 8));
    (*(void (__fastcall **)(__int64 *, _QWORD))(**v6 + 480))(*v6, 0LL);
    sub_1800CB144((__int64 *)(a1 + 128));
  }
  sub_1800C64A4((__int64 *)(a1 + 128), v20);
  v8 = *v6;
  v9 = **v6;
  v10 = 1;
  LOBYTE(v11) = 1;
  (*(void (__fastcall **)(__int64 *, __int64))(v9 + 480))(v8, v11);
  v17 = a1 - 8;
  v18 = 1;
  *(_DWORD *)(a1 + 60) = 1;
  v12 = sub_18010ED94(a1 - 8, a2);
  v5 = v12;
  if ( v12 < 0 )
  {
    v13 = 519;
LABEL_9:
    sub_18004BD84(
      (int)retaddr,
      v13,
      (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
      v12);
    goto LABEL_11;
  }
  v12 = sub_18010F970(a1 - 8);
  v5 = v12;
  if ( v12 < 0 )
  {
    v13 = 522;
    goto LABEL_9;
  }
  v5 = 0;
  v10 = 0;
LABEL_11:
  if ( v10 )
  {
    sub_18010EAF0((_QWORD *)(a1 - 8));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 136) + 480LL))(*(_QWORD *)(v7 + 136), 0LL);
    sub_1800CB144((__int64 *)(v7 + 136));
    *(_DWORD *)(v7 + 68) = 0;
  }
LABEL_13:
  sub_18000F708(&v20);
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
