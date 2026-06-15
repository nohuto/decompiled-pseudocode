/*
 * XREFs of sub_1800D2810 @ 0x1800D2810
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D2810(__int64 a1)
{
  _DWORD *v2; // rdi
  int v3; // eax
  __int64 v4; // rcx
  bool v5; // al
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  unsigned int v10; // ebx
  int v12; // [rsp+38h] [rbp-59h] BYREF
  __int64 v13; // [rsp+40h] [rbp-51h] BYREF
  _DWORD v14[12]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v15; // [rsp+78h] [rbp-19h]
  __int16 v16; // [rsp+90h] [rbp-1h]
  _BYTE v17[32]; // [rsp+98h] [rbp+7h] BYREF
  __int64 *v18; // [rsp+B8h] [rbp+27h]
  __int64 v19; // [rsp+C0h] [rbp+2Fh]
  int *v20; // [rsp+C8h] [rbp+37h]
  __int64 v21; // [rsp+D0h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+5Fh]

  v2 = (_DWORD *)sub_180008448(a1, sub_1800B6240)[1];
  if ( *v2 > 4u )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 72) + 40LL))(*(_QWORD *)(a1 + 72));
    v21 = 4LL;
    v12 = v3;
    v13 = *(_QWORD *)(a1 + 320);
    v19 = 8LL;
    v20 = &v12;
    v18 = &v13;
    sub_1800521E8((__int64)v2, byte_180166CD7, 0LL, 0LL, 4, (__int64)v17);
  }
  v4 = *(_QWORD *)(a1 + 72);
  v5 = *(_BYTE *)(a1 + 120) != 0;
  v14[0] = 80;
  *(_BYTE *)(a1 + 424) = v5;
  v15 = *(_QWORD *)(a1 + 320);
  v14[6] = 2;
  v14[1] = 0x8000;
  v16 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
  v9 = MMDevAPI_12(v14, v6, v7, v8);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  sub_18004BD84((int)retaddr, 1435, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", v9);
  return v10;
}
