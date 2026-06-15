/*
 * XREFs of sub_18006DA9C @ 0x18006DA9C
 * Callers:
 *     sub_1800465C0 @ 0x1800465C0 (sub_1800465C0.c)
 * Callees:
 *     sub_180023350 @ 0x180023350 (sub_180023350.c)
 *     sub_180023370 @ 0x180023370 (sub_180023370.c)
 *     sub_18002E440 @ 0x18002E440 (sub_18002E440.c)
 *     sub_180046038 @ 0x180046038 (sub_180046038.c)
 *     unknown_libname_208 @ 0x1800464A8 (unknown_libname_208.c)
 *     sub_180046F70 @ 0x180046F70 (sub_180046F70.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800743A0 (_alloca_probe.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800CB170 @ 0x1800CB170 (sub_1800CB170.c)
 *     sub_1800CB290 @ 0x1800CB290 (sub_1800CB290.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006DA9C(__int64 *a1, __int64 a2, int a3)
{
  __int128 **v4; // rax
  __int128 *v5; // rdx
  unsigned int v6; // r14d
  size_t v7; // rsi
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  void *v10; // rsp
  void **v11; // rdx
  _DWORD *v12; // rax
  void *v13; // rbx
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int *v17; // rdx
  struct _RTL_CRITICAL_SECTION *v18; // r8
  int v19; // r8d
  int v20; // xmm6_4
  int v21; // esi
  int v22; // ecx
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned int v25; // ecx
  _DWORD v27[10]; // [rsp+0h] [rbp-40h] BYREF
  void *v28; // [rsp+28h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+30h] [rbp-10h]
  int v30; // [rsp+40h] [rbp+0h] BYREF
  int v31; // [rsp+44h] [rbp+4h] BYREF
  struct _RTL_CRITICAL_SECTION *v32; // [rsp+48h] [rbp+8h] BYREF
  void *v33; // [rsp+50h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v34; // [rsp+58h] [rbp+18h] BYREF
  __int64 (__fastcall **v35)(); // [rsp+60h] [rbp+20h] BYREF
  __int64 v36; // [rsp+68h] [rbp+28h]
  void *v37; // [rsp+70h] [rbp+30h]
  unsigned __int64 v38; // [rsp+78h] [rbp+38h]
  __int64 v39; // [rsp+80h] [rbp+40h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+68h]

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 5u )
  {
    v4 = (__int128 **)a1[1];
    v5 = &xmmword_18015B730;
    if ( *v4 )
      v5 = *v4;
    sub_1800CB170(*((_QWORD *)off_18019C348 + 2), (_DWORD)v5, a3, *(_QWORD *)(*a1 + 728), (__int64)v5);
  }
  LOBYTE(v30) = 0;
  v31 = 1065353216;
  v32 = 0LL;
  sub_180046038(*a1, (bool *)&v30, &v31, &v32);
  v33 = 0LL;
  sub_180023370((struct _RTL_CRITICAL_SECTION *)(*a1 + 808), &v34);
  v6 = *(_DWORD *)(*a1 + 960);
  v7 = 4LL * v6;
  v8 = (v7 + 16) & -(__int64)(v7 < v7 + 16);
  if ( v8 )
  {
    if ( v8 > 0x400 )
    {
      v12 = (_DWORD *)o_malloc(v8);
      if ( v12 )
      {
        *v12 = 56797;
        v12 += 4;
      }
      v11 = (void **)v12;
    }
    else
    {
      v9 = v8 + 15;
      if ( v8 + 15 < v8 )
        v9 = 0xFFFFFFFFFFFFFF0LL;
      v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = (void **)&v30;
      if ( v27 != (_DWORD *)-64LL )
      {
        v30 = 52428;
        v11 = &v33;
      }
    }
  }
  else
  {
    v11 = 0LL;
  }
  unknown_libname_208((__int64 *)&v33, (__int64)v11);
  v13 = v33;
  if ( !v33 )
  {
    v14 = -2147024882;
    sub_18004BD84((int)retaddr, 4065, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", -2147024882);
    sub_180023350(&v34);
    goto LABEL_35;
  }
  memcpy(v33, *(const void **)(*a1 + 968), v7);
  sub_180023350(&v34);
  if ( !*(_BYTE *)a1[2] )
  {
    v15 = *a1;
    v16 = *(_QWORD *)*a1;
    v17 = (unsigned int *)a1[3];
    v18 = v32;
    v29 = v32;
    v28 = v13;
    v27[8] = v6;
    LOBYTE(v18) = v30;
    (*(void (__fastcall **)(__int64, _QWORD, struct _RTL_CRITICAL_SECTION *))(v16 + 496))(v15, *v17, v18);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
  sub_180023370((struct _RTL_CRITICAL_SECTION *)(*a1 + 808), &v32);
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 5u )
  {
    sub_1800CB290(
      *((_QWORD *)off_18019C348 + 2),
      75,
      v19,
      *(_QWORD *)(*a1 + 728),
      *(_OWORD *)&_mm_cvtps_pd((__m128)*(unsigned int *)(*a1 + 848)));
  }
  v20 = *(_DWORD *)(*a1 + 848);
  v21 = *(_DWORD *)(*a1 + 852);
  sub_180023350(&v32);
  v22 = *(_DWORD *)a1[3];
  if ( v22 )
  {
    if ( v22 != 1 )
      goto LABEL_30;
    v24 = *(_QWORD *)a1[1];
    v25 = *(_DWORD *)a1[4];
    v35 = off_180154F70;
    v37 = v13;
    v38 = __PAIR64__(v25, v6);
    v39 = v24;
  }
  else
  {
    v23 = *(_QWORD *)a1[1];
    v35 = off_180154F78;
    LODWORD(v37) = v20;
    BYTE4(v37) = v21 != 0;
    v38 = v23;
  }
  v36 = *a1;
  sub_18002E440((LPCRITICAL_SECTION)(v36 + 496), (void (__fastcall ***)(_QWORD, __int64 *))&v35);
LABEL_30:
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 5u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 76LL, &unk_18015DEF0, *(_QWORD *)(*a1 + 728));
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
  v14 = 0;
LABEL_35:
  if ( v13 )
    sub_180046F70((__int64)v13);
  return v14;
}
