/*
 * XREFs of sub_180030A90 @ 0x180030A90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180023350 @ 0x180023350 (sub_180023350.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18004ED4C @ 0x18004ED4C (sub_18004ED4C.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180030A90(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  unsigned int v8; // r14d
  __int64 (__fastcall ***v9)(_QWORD, void *, __int64 *); // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 (__fastcall ***v13)(_QWORD, void *, __int64 *); // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 (__fastcall ***v17)(_QWORD, void *, __int64 *); // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 (__fastcall ***v21)(_QWORD, void *, __int64 *); // rcx
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // eax
  __int64 (__fastcall ***v25)(_QWORD, void *, __int64 *); // rcx
  __int64 v26; // rcx
  __int64 v27; // rbx
  int v28; // eax
  __int64 (__fastcall ***v29)(_QWORD, void *, __int64 *); // rcx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rcx
  int v34; // eax
  unsigned int v35; // ebx
  __int64 v36; // rcx
  __int64 v37; // rdx
  int v38; // eax
  int v39; // eax
  __int64 v41; // [rsp+20h] [rbp-30h] BYREF
  __int64 v42; // [rsp+28h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v43; // [rsp+30h] [rbp-20h] BYREF
  char v44[8]; // [rsp+38h] [rbp-18h] BYREF
  void *retaddr; // [rsp+78h] [rbp+28h]

  if ( !*(_BYTE *)(a1 + 53) )
    *(_DWORD *)(a1 + 132) = 1;
  v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 136);
  v42 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 136));
  v43 = v7;
  v8 = 0;
  if ( !a3 )
  {
LABEL_64:
    sub_180023350(&v43);
    if ( !*(_BYTE *)(a1 + 53) )
    {
      v36 = *(_QWORD *)(a1 + 176);
      if ( !v36 )
      {
        v35 = -2147467262;
        sub_18004BD84(retaddr, 692LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", 2147500034LL);
        goto LABEL_77;
      }
      if ( !*(_QWORD *)(a1 + 184) )
      {
        v35 = -2147467262;
        sub_18004BD84(retaddr, 693LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", 2147500034LL);
        goto LABEL_77;
      }
      v38 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v36 + 40LL))(v36, &v41);
      v35 = v38;
      if ( v38 < 0 )
      {
        sub_18004BD84(retaddr, 696LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", (unsigned int)v38);
        goto LABEL_77;
      }
      v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, (unsigned int)v41);
      v35 = v39;
      if ( v39 < 0 )
      {
        sub_18004BD84(retaddr, 697LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", (unsigned int)v39);
        goto LABEL_77;
      }
    }
    v35 = 0;
    goto LABEL_77;
  }
  while ( 1 )
  {
    v9 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*a4;
    v41 = 0LL;
    v10 = (**v9)(v9, &unk_18015DEA8, &v41);
    v11 = v41;
    if ( v10 >= 0 )
    {
      v12 = *(_QWORD *)(a1 + 176);
      *(_QWORD *)(a1 + 176) = v41;
      if ( v11 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        v11 = v41;
      }
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        v11 = v41;
      }
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v13 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*a4;
    v41 = 0LL;
    v14 = (**v13)(v13, &unk_18015DE98, &v41);
    v15 = v41;
    if ( v14 >= 0 )
    {
      v16 = *(_QWORD *)(a1 + 184);
      *(_QWORD *)(a1 + 184) = v41;
      if ( v15 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        v15 = v41;
      }
      if ( v16 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        v15 = v41;
      }
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v17 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*a4;
    v41 = 0LL;
    v18 = (**v17)(v17, &unk_18015E090, &v41);
    v19 = v41;
    if ( v18 >= 0 )
    {
      v20 = *(_QWORD *)(a1 + 200);
      *(_QWORD *)(a1 + 200) = v41;
      if ( v19 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
        v19 = v41;
      }
      if ( v20 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        v19 = v41;
      }
    }
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    v21 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*a4;
    v41 = 0LL;
    if ( (int)(**v21)(v21, &unk_18015DE88, &v41) >= 0 )
    {
      v22 = v41;
      v23 = *(_QWORD *)(a1 + 192);
      *(_QWORD *)(a1 + 192) = v41;
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      v24 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 192) + 32LL))(
              *(_QWORD *)(a1 + 192),
              a1 + 96);
      if ( v24 < 0 )
        sub_18006D26C(retaddr, 640LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", (unsigned int)v24);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)qword_18019E618 + 392LL))(qword_18019E618) )
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 192) + 40LL))(*(_QWORD *)(a1 + 192), 1LL);
    }
    if ( v41 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    v25 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*a4;
    v41 = 0LL;
    if ( (int)(**v25)(v25, (void *)&stru_18015E080, &v41) >= 0 )
    {
      v26 = v41;
      v27 = *(_QWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 208) = v41;
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 208) + 32LL))(
              *(_QWORD *)(a1 + 208),
              *(unsigned int *)(a1 + 88));
      if ( v28 < 0 )
        sub_18006D26C(retaddr, 654LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", (unsigned int)v28);
    }
    if ( v41 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    v29 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*a4;
    v41 = 0LL;
    v30 = (**v29)(v29, &qword_18015E070, &v41);
    v31 = v41;
    if ( v30 >= 0 )
    {
      v32 = *(_QWORD *)(a1 + 216);
      *(_QWORD *)(a1 + 216) = v41;
      if ( v31 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
        v31 = v41;
      }
      if ( v32 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        v31 = v41;
      }
    }
    if ( v31 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    v33 = v42;
    v42 = 0LL;
    if ( v33 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    if ( (**(int (__fastcall ***)(_QWORD, void *, __int64 *))*a4)(*a4, &unk_18015E060, &v42) < 0 )
      goto LABEL_57;
    v34 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 80) + 528LL))(*(_QWORD *)(a1 + 80), v44);
    v35 = v34;
    if ( v34 < 0 )
      break;
    v34 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v42 + 24LL))(v42, v44);
    v35 = v34;
    if ( v34 < 0 )
    {
      v37 = 675LL;
      goto LABEL_69;
    }
LABEL_57:
    if ( !*(_QWORD *)(a1 + 176)
      || !*(_QWORD *)(a1 + 184)
      || !*(_QWORD *)(a1 + 200)
      || !*(_QWORD *)(a1 + 192)
      || !*(_QWORD *)(a1 + 208)
      || !v42 )
    {
      ++v8;
      ++a4;
      if ( v8 < a3 )
        continue;
    }
    goto LABEL_64;
  }
  v37 = 674LL;
LABEL_69:
  sub_18004BD84(retaddr, v37, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", (unsigned int)v34);
  sub_180023350(&v43);
LABEL_77:
  sub_18004ED4C(&v42);
  return v35;
}
