/*
 * XREFs of sub_18013F258 @ 0x18013F258
 * Callers:
 *     sub_180140200 @ 0x180140200 (sub_180140200.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18010983C @ 0x18010983C (sub_18010983C.c)
 *     sub_180140028 @ 0x180140028 (sub_180140028.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18013F258(__int64 a1, int *a2, unsigned int a3)
{
  char v6; // al
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned int v9; // edi
  int v10; // r9d
  int v11; // edx
  _DWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  int v16; // eax
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-18h] BYREF
  char v20; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v22; // [rsp+80h] [rbp+20h] BYREF
  int v23; // [rsp+88h] [rbp+28h] BYREF
  int v24; // [rsp+98h] [rbp+38h] BYREF

  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 136));
  v18 = 0LL;
  v6 = sub_180140028(a1 + 184, (unsigned int)a2[1], &v18);
  v8 = v18;
  if ( !v6 )
  {
    v9 = -2147024809;
    v10 = -2147024809;
    v11 = 389;
LABEL_7:
    sub_18004BD84(
      (int)retaddr,
      v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\phonetopology.cpp",
      v10);
    goto LABEL_9;
  }
  v12 = (_DWORD *)sub_180008448(v7, sub_1800B6240)[1];
  if ( *v12 > 4u )
  {
    v15 = *a2;
    v22 = a3;
    v23 = v15;
    v24 = a2[1];
    sub_18010983C((__int64)v12, byte_18016CE01, v13, v14, (__int64)&v24, (__int64)&v23, (__int64)&v22);
  }
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 48LL))(v8, a3);
  v9 = v16;
  if ( v16 < 0 )
  {
    v10 = v16;
    v11 = 398;
    goto LABEL_7;
  }
  v9 = 0;
LABEL_9:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v20 )
    LeaveCriticalSection(lpCriticalSection);
  return v9;
}
