/*
 * XREFs of sub_18006E5E0 @ 0x18006E5E0
 * Callers:
 *     sub_1800019C0 @ 0x1800019C0 (sub_1800019C0.c)
 *     sub_18000CBF0 @ 0x18000CBF0 (sub_18000CBF0.c)
 *     sub_180011C10 @ 0x180011C10 (sub_180011C10.c)
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 *     sub_1800192D0 @ 0x1800192D0 (sub_1800192D0.c)
 *     sub_180031350 @ 0x180031350 (sub_180031350.c)
 *     sub_1800C5AF8 @ 0x1800C5AF8 (sub_1800C5AF8.c)
 *     sub_1800DE2A0 @ 0x1800DE2A0 (sub_1800DE2A0.c)
 *     sub_1800DEF80 @ 0x1800DEF80 (sub_1800DEF80.c)
 *     sub_1800EABCC @ 0x1800EABCC (sub_1800EABCC.c)
 * Callees:
 *     sub_180001E08 @ 0x180001E08 (sub_180001E08.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180021130 @ 0x180021130 (sub_180021130.c)
 *     sub_180021ED0 @ 0x180021ED0 (sub_180021ED0.c)
 *     sub_1800229D0 @ 0x1800229D0 (sub_1800229D0.c)
 *     sub_180029F54 @ 0x180029F54 (sub_180029F54.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005BB40 @ 0x18005BB40 (sub_18005BB40.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18011A288 @ 0x18011A288 (sub_18011A288.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall sub_18006E5E0(
        unsigned int a1,
        int a2,
        int a3,
        _QWORD *a4,
        int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        __int128 *a11,
        __int128 *a12,
        _OWORD *a13,
        __int128 *a14,
        _OWORD *a15)
{
  __int64 v17; // r12
  _OWORD *v18; // r13
  __int128 *v19; // r14
  _OWORD *v20; // rdi
  __int128 v21; // xmm9
  __int128 v22; // xmm7
  int v23; // eax
  unsigned int v24; // ebx
  __int128 v26; // xmm8
  __int128 v27; // xmm6
  int v28; // r14d
  __int64 v29; // rcx
  __int128 *v30; // rbx
  unsigned int i; // r15d
  int v32; // eax
  unsigned int v33; // r14d
  bool v34; // zf
  __int128 *v35; // rax
  char v36[8]; // [rsp+30h] [rbp-F8h] BYREF
  __int128 *v37; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v38; // [rsp+40h] [rbp-E8h]
  __int128 v39; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v40; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+70h] [rbp-B8h]
  __int128 *v42; // [rsp+78h] [rbp-B0h]
  __int128 *v43; // [rsp+80h] [rbp-A8h]
  __int128 v44; // [rsp+90h] [rbp-98h] BYREF
  __int128 v45; // [rsp+A0h] [rbp-88h] BYREF
  _UNKNOWN *retaddr; // [rsp+128h] [rbp+0h]

  v17 = a1;
  v43 = a11;
  v42 = a12;
  v18 = a13;
  v41 = (__int64)a13;
  v19 = a14;
  v37 = a14;
  v20 = a15;
  v38 = (__int64)a15;
  v21 = xmmword_18015B730;
  v44 = xmmword_18015B730;
  v39 = xmmword_18015B730;
  v40 = xmmword_18015B730;
  if ( a6 == 1 )
  {
    sub_180001E08((__int64)a4, a7, &v44, &v39, &v40);
    v22 = v39;
    v21 = v39;
LABEL_54:
    v26 = v40;
    v27 = v44;
    goto LABEL_55;
  }
  if ( a5 != 2 )
  {
    if ( a2 )
    {
      if ( !(unsigned __int8)sub_18011A288(a4, a7) )
        return 2290679847LL;
      v27 = xmmword_18015B798;
      v22 = xmmword_18015B798;
      v26 = xmmword_18015B798;
      v21 = xmmword_18015B798;
      goto LABEL_14;
    }
    sub_180021ED0((__int64)a4, a7, &v44, &v39, &v40);
    if ( a5 )
    {
      if ( a5 != 1 )
        goto LABEL_17;
    }
    else if ( (unsigned int)v17 >= 0x15 )
    {
      goto LABEL_17;
    }
    if ( a5 != 1 || (unsigned int)v17 < 0x15 )
    {
      v29 = v17;
      if ( a5 )
        v30 = (__int128 *)*(&off_180156670 + v17);
      else
        v30 = (__int128 *)*(&off_18014BCA0 + v17);
      v28 = 0;
      if ( *(_DWORD *)v30 )
        v21 = *(_OWORD *)*((_QWORD *)v30 + 1);
LABEL_18:
      if ( !a5 )
      {
        if ( dword_18016D110[v29] && (unsigned int)sub_180029F54((__int64)a4) )
        {
          v30 = (__int128 *)&unk_180156738;
          goto LABEL_39;
        }
LABEL_37:
        if ( v28 < 0 )
        {
          sub_18004BD84((int)retaddr, 912, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v28);
          return (unsigned int)v28;
        }
        goto LABEL_39;
      }
      if ( a5 != 1 )
        goto LABEL_37;
      if ( (_DWORD)v17 == 18 )
      {
        if ( !a3 )
          goto LABEL_37;
        v30 = (__int128 *)&unk_180156728;
      }
      else
      {
        if ( (_DWORD)v17 != 3 || !a3 )
          goto LABEL_37;
        v30 = (__int128 *)&unk_180156718;
      }
LABEL_39:
      for ( i = 0; i < *(_DWORD *)v30; ++i )
      {
        v45 = *(_OWORD *)(*((_QWORD *)v30 + 1) + 16LL * i);
        v32 = sub_180021130(a4, v17, a7, &v45, a10, v36);
        v33 = v32;
        if ( v32 < 0 )
        {
          sub_18004BD84((int)retaddr, 924, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v32);
          return v33;
        }
        if ( v36[0] )
        {
          v27 = *(_OWORD *)(*((_QWORD *)v30 + 1) + 16LL * i);
          v44 = v27;
          if ( a9 || (v45 = v27, v34 = !sub_18005BB40((__int64)a4, &v45, a7), v35 = &xmmword_18015B798, !v34) )
            v35 = &v44;
          v22 = *v35;
          v26 = v27;
          goto LABEL_48;
        }
        v45 = xmmword_18015B798;
        if ( (unsigned int)sub_1800229D0((__int64)a4, a7, &v45) )
        {
          v45 = *(_OWORD *)(*((_QWORD *)v30 + 1) + 16LL * i);
          if ( sub_18005BB40((__int64)a4, &v45, a7) )
          {
            v27 = xmmword_18015B798;
            v22 = *(_OWORD *)(*((_QWORD *)v30 + 1) + 16LL * i);
            v26 = v22;
LABEL_48:
            v20 = (_OWORD *)v38;
            v19 = v37;
            v18 = (_OWORD *)v41;
            goto LABEL_55;
          }
        }
      }
      v22 = v39;
      v20 = (_OWORD *)v38;
      v19 = v37;
      v18 = (_OWORD *)v41;
      goto LABEL_54;
    }
LABEL_17:
    v28 = -2147024809;
    v29 = v17;
    v30 = v42;
    goto LABEL_18;
  }
  if ( a8 )
  {
    v37 = 0LL;
    v23 = (*(__int64 (__fastcall **)(__int64, __int128 **))(*(_QWORD *)a8 + 80LL))(a8, &v37);
    v24 = v23;
    if ( v23 < 0 )
    {
      sub_18004BD84((int)retaddr, 837, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v23);
      sub_18000F708((__int64 *)&v37);
      return v24;
    }
    v26 = *(_OWORD *)(*(__int64 (__fastcall **)(__int128 *, __int128 *))(*(_QWORD *)v37 + 112LL))(v37, &v45);
    v22 = v26;
    v27 = v26;
    sub_18000F708((__int64 *)&v37);
  }
  else
  {
    sub_180021ED0((__int64)a4, 0, &v44, &v39, &v40);
    v26 = v40;
    v22 = v39;
    v27 = v44;
  }
  v21 = v22;
LABEL_14:
  v20 = (_OWORD *)v38;
LABEL_55:
  if ( v43 )
    *v43 = v27;
  if ( v42 )
    *v42 = v22;
  if ( v18 )
    *v18 = v26;
  if ( v19 )
    *v19 = v26;
  if ( v20 )
    *v20 = v21;
  return 0LL;
}
