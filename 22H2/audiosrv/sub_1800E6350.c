/*
 * XREFs of sub_1800E6350 @ 0x1800E6350
 * Callers:
 *     sub_1800E6510 @ 0x1800E6510 (sub_1800E6510.c)
 * Callees:
 *     sub_18002A0F0 @ 0x18002A0F0 (sub_18002A0F0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB868 @ 0x1800BB868 (sub_1800BB868.c)
 *     sub_1800E3360 @ 0x1800E3360 (sub_1800E3360.c)
 */

__int64 __fastcall sub_1800E6350(__int64 a1, __int64 a2, int a3)
{
  char *v3; // r15
  unsigned __int64 v4; // rsi
  unsigned __int64 v8; // rbp
  int v9; // ebx
  char *v10; // rax
  __int64 v11; // rsi
  int v12; // edx
  __int64 v13; // rcx
  LPVOID v14; // rax
  __int64 v15; // rax
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *(char **)a2;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)&v3[2 * v4] );
  v8 = v4 + 1;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v4 + 1 < v4 )
  {
    v9 = -2147024362;
    goto LABEL_22;
  }
  if ( is_mul_ok(v8, 2uLL) )
  {
    v10 = (char *)CoTaskMemAlloc(2 * v8);
    *(_QWORD *)(a1 + 48) = v10;
    if ( !v10 )
    {
      v9 = -2147024882;
      goto LABEL_22;
    }
    v9 = 0;
    sub_18002A0F0(v10, v4 + 1, v3, v4);
  }
  else
  {
    v9 = -2147024362;
  }
  if ( v9 < 0 )
  {
LABEL_22:
    v12 = 213;
    goto LABEL_23;
  }
  v11 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 16) + 16LL);
  v9 = sub_1800BB868(a1, 1, v11 + 18, (void **)(a1 + 40));
  if ( v9 >= 0 )
  {
    memcpy(*(void **)(a1 + 40), *(const void **)(a2 + 16), v11 + 18);
    v13 = *(_QWORD *)(a2 + 56);
    if ( v13 && (v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 8LL))(v13, a1 + 64), v9 < 0) )
    {
      v12 = 221;
    }
    else
    {
      *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 32);
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 24);
      *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 8);
      *(_QWORD *)(a1 + 136) = 0LL;
      *(_DWORD *)(a1 + 144) = 0;
      *(_BYTE *)(a1 + 56) = *(_BYTE *)(a2 + 49);
      *(_BYTE *)(a1 + 57) = *(_BYTE *)(a2 + 50);
      v14 = sub_18006A18C(0x40uLL);
      if ( v14 )
        v15 = sub_1800E3360((__int64)v14, a3);
      else
        v15 = 0LL;
      *(_QWORD *)(a1 + 72) = v15;
      if ( v15 )
        return 0LL;
      v9 = -2147024882;
      v12 = 233;
    }
  }
  else
  {
    v12 = 216;
  }
LABEL_23:
  sub_18004BD84((int)retaddr, v12, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", v9);
  return (unsigned int)v9;
}
