/*
 * XREFs of sub_1800DEF80 @ 0x1800DEF80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000CBF0 @ 0x18000CBF0 (sub_18000CBF0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180043F70 @ 0x180043F70 (sub_180043F70.c)
 *     sub_18004AE9C @ 0x18004AE9C (sub_18004AE9C.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006E5E0 @ 0x18006E5E0 (sub_18006E5E0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D5E18 @ 0x1800D5E18 (sub_1800D5E18.c)
 *     sub_1800DD7D0 @ 0x1800DD7D0 (sub_1800DD7D0.c)
 */

__int64 __fastcall sub_1800DEF80(
        __int64 a1,
        const wchar_t *a2,
        __int64 a3,
        void *Src,
        int a5,
        int *a6,
        int *a7,
        int *a8,
        int *a9)
{
  __int128 v9; // xmm0
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // r8
  int v17; // eax
  int v18; // ebx
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  void *v21; // rcx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  __int128 v25; // xmm6
  unsigned int v26; // edx
  void *v27; // rcx
  int *v28; // r14
  int *v29; // r15
  int v30; // edx
  int v31; // eax
  void *v32; // r9
  int v33; // r8d
  int v34; // edx
  __int64 v35; // r9
  __int64 v36; // r9
  __int64 v37; // r9
  void *v38; // rcx
  int v40; // [rsp+30h] [rbp-D0h]
  unsigned __int64 *v41; // [rsp+80h] [rbp-80h] BYREF
  LPVOID pv; // [rsp+88h] [rbp-78h] BYREF
  __int64 v43[2]; // [rsp+90h] [rbp-70h] BYREF
  char v44; // [rsp+A0h] [rbp-60h]
  LPVOID v45; // [rsp+B0h] [rbp-50h] BYREF
  LPVOID *p_pv; // [rsp+B8h] [rbp-48h]
  void *v47; // [rsp+C0h] [rbp-40h] BYREF
  char v48; // [rsp+C8h] [rbp-38h]
  int *v49; // [rsp+D0h] [rbp-30h]
  int *v50; // [rsp+D8h] [rbp-28h]
  __int128 v51; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v52; // [rsp+F0h] [rbp-10h] BYREF
  struct _TP_TIMER *v53[7]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v54; // [rsp+138h] [rbp+38h]
  __int128 v55; // [rsp+148h] [rbp+48h] BYREF
  _UNKNOWN *retaddr; // [rsp+1B8h] [rbp+B8h]

  v9 = *(_OWORD *)a3;
  v49 = a9;
  v50 = a8;
  v54 = v9;
  v55 = v9;
  EtwEventActivityIdControl(4LL, &v55);
  v15 = sub_180008448(v14, sub_1800B6240);
  sub_1800085F0(v53, (struct _TP_TIMER *)v15[1], v16, (struct _TP_TIMER *)L"AudioServerGetSharedModeEnginePeriod");
  v17 = sub_180043F70(a3);
  v18 = v17;
  if ( v17 < 0 )
  {
    sub_18004BD84((int)retaddr, 4226, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v17);
    goto LABEL_29;
  }
  v45 = 0LL;
  v43[1] = 0LL;
  v43[0] = (__int64)&v45;
  v44 = 1;
  v18 = sub_18000CBF0(a1, a2, 0, (__int128 *)a3, (unsigned __int16 *)Src, &v43[1]);
  if ( v44 )
  {
    v21 = *(void **)v43[0];
    *(_QWORD *)v43[0] = v43[1];
    if ( v21 )
      CoTaskMemFree(v21);
  }
  if ( v18 < 0 )
  {
    sub_18004BD84((int)retaddr, 4230, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v18);
    goto LABEL_27;
  }
  v41 = 0LL;
  v22 = (*(__int64 (__fastcall **)(PVOID, const wchar_t *, _QWORD, _QWORD, unsigned __int64 **))(*(_QWORD *)::pv + 24LL))(
          ::pv,
          a2,
          0LL,
          0LL,
          &v41);
  v18 = v22;
  if ( v22 >= 0 )
  {
    v24 = (*(__int64 (__fastcall **)(unsigned __int64 *))(*v41 + 56))(v41);
    v22 = sub_18006E5E0(
            *(_DWORD *)(a3 + 48),
            *(_DWORD *)(a3 + 56),
            *(_DWORD *)(a3 + 128),
            v41,
            v24 == 1,
            0,
            *(_DWORD *)(a3 + 52),
            0LL,
            0,
            0,
            &v51,
            &v52,
            v43,
            0LL,
            0LL);
    v18 = v22;
    if ( v22 < 0 )
    {
      v23 = 4254;
      goto LABEL_12;
    }
    v25 = v51;
    v26 = *(_DWORD *)(a3 + 52);
    p_pv = &pv;
    v40 = *(_DWORD *)(a3 + 68);
    pv = 0LL;
    v47 = 0LL;
    v48 = 1;
    v18 = sub_1800D5E18(v41, v26, (unsigned __int16 *)Src, (__int128 *)v43, &v52, &v51, v40, &v47);
    if ( v48 )
    {
      v27 = *p_pv;
      *p_pv = v47;
      if ( v27 )
        CoTaskMemFree(v27);
    }
    if ( v18 >= 0 )
    {
      v28 = v50;
      v29 = v49;
      v30 = *(_DWORD *)(a3 + 52);
      *(_OWORD *)v43 = v25;
      v31 = sub_18004AE9C((__int64)v41, v30, (__int64)pv, (__int128 *)v43, a5 != 0, a6, a7, v50, v49);
      v18 = v31;
      if ( v31 >= 0 )
      {
        v32 = pv;
        v33 = *((_DWORD *)Src + 1);
        v34 = *((_DWORD *)pv + 1);
        if ( v33 != v34 )
        {
          *a6 = sub_1800DD7D0(*a6, v34, v33);
          *a7 = sub_1800DD7D0(*a7, *(_DWORD *)(v35 + 4), *((_DWORD *)Src + 1));
          *v28 = sub_1800DD7D0(*v28, *(_DWORD *)(v36 + 4), *((_DWORD *)Src + 1));
          *v29 = sub_1800DD7D0(*v29, *(_DWORD *)(v37 + 4), *((_DWORD *)Src + 1));
        }
        v18 = 0;
        goto LABEL_24;
      }
      sub_18004BD84((int)retaddr, 4259, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v31);
    }
    else
    {
      sub_18004BD84((int)retaddr, 4257, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v18);
    }
    v32 = pv;
LABEL_24:
    pv = 0LL;
    if ( v32 )
      CoTaskMemFree(v32);
    goto LABEL_26;
  }
  v23 = 4233;
LABEL_12:
  sub_18004BD84((int)retaddr, v23, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v22);
LABEL_26:
  sub_18000F708((__int64 *)&v41);
LABEL_27:
  v38 = v45;
  v45 = 0LL;
  if ( v38 )
    CoTaskMemFree(v38);
LABEL_29:
  sub_18000F690((__int64)v53, v19, v20);
  EtwEventActivityIdControl(4LL, &v55);
  return (unsigned int)v18;
}
