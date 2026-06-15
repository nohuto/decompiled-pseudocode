/*
 * XREFs of sub_1800E4B90 @ 0x1800E4B90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E2B6C @ 0x1800E2B6C (sub_1800E2B6C.c)
 */

__int64 __fastcall sub_1800E4B90(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _DWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 184LL))(a2);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v9 = (_DWORD *)sub_180008448(v6, sub_1800B6240)[1];
    if ( *v9 > 4u )
    {
      v13 = a3;
      v14 = a2;
      sub_1800E2B6C((__int64)v9, byte_18016773F, v10, v11, (__int64)&v14, (__int64)&v13);
    }
    return 0LL;
  }
  else
  {
    sub_18004BD84((int)retaddr, 2501, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", v5);
    return v7;
  }
}
