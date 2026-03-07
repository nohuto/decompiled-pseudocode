__int64 __fastcall sub_14008BEE8(__int64 (__fastcall ***a1)(PVOID P), _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 (__fastcall **v6)(PVOID); // rbx
  __int64 (__fastcall **v7)(PVOID); // rdi
  PVOID v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 (__fastcall ***v11)(PVOID); // rsi
  __int64 (__fastcall **v12)(PVOID); // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rax
  __int128 *v17; // rdx
  __int64 (__fastcall ***v18)(PVOID); // rsi
  __int64 (__fastcall **v19)(PVOID); // rax
  __int64 v20; // rax
  __int128 *v21; // rdx
  unsigned int v22; // esi
  _QWORD **v23; // rbx
  _QWORD *v24; // rcx
  __int64 (__fastcall **v26)(PVOID); // [rsp+28h] [rbp-E0h] BYREF
  __int64 v27; // [rsp+30h] [rbp-D8h]
  __int64 (__fastcall **v28)(PVOID); // [rsp+38h] [rbp-D0h]
  __int64 (__fastcall **v29)(PVOID); // [rsp+40h] [rbp-C8h]
  __int64 (__fastcall **v30)(PVOID); // [rsp+48h] [rbp-C0h]
  __int128 v31; // [rsp+58h] [rbp-B0h] BYREF
  __int64 (__fastcall **v32)(PVOID); // [rsp+68h] [rbp-A0h]
  _QWORD v33[3]; // [rsp+70h] [rbp-98h]
  __int64 v34; // [rsp+88h] [rbp-80h]
  __int64 v35; // [rsp+98h] [rbp-70h]
  _QWORD v36[2]; // [rsp+A8h] [rbp-60h] BYREF
  PVOID P; // [rsp+B8h] [rbp-50h]
  __int64 (__fastcall **v38)(PVOID); // [rsp+D0h] [rbp-38h] BYREF
  __int16 v39; // [rsp+D8h] [rbp-30h]
  PVOID v40; // [rsp+E0h] [rbp-28h]
  unsigned __int64 v41; // [rsp+E8h] [rbp-20h]
  __int64 v42; // [rsp+F0h] [rbp-18h]
  __int64 (__fastcall **v43)(PVOID); // [rsp+F8h] [rbp-10h] BYREF
  __int16 v44; // [rsp+100h] [rbp-8h]
  PVOID v45; // [rsp+108h] [rbp+0h]
  unsigned __int64 v46; // [rsp+110h] [rbp+8h]
  __int64 v47; // [rsp+118h] [rbp+10h]

  v38 = &off_1400D41D0;
  v39 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  sub_1400011A8(&v38, (__int64)qword_1400B7720, 1uLL);
  v43 = &off_1400D41D0;
  v44 = 0;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  sub_1400011A8(&v43, (__int64)qword_1400CE8A0, 1uLL);
  v26 = &off_1400D41D0;
  LOWORD(v27) = 0;
  v6 = 0LL;
  v28 = 0LL;
  v7 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( &v26 != a1 )
  {
    sub_1400011A8(&v26, (__int64)a1[2], (unsigned __int64)a1[3]);
    v6 = v29;
    v7 = v28;
  }
  v32 = &off_1400D41D0;
  v8 = v40;
  v9 = 0LL;
  v31 = 0LL;
  *(_OWORD *)&v33[1] = 0LL;
  v35 = 0LL;
  LOWORD(v33[0]) = 0;
  v34 = 0LL;
  if ( !v6 )
    goto LABEL_38;
  while ( 1 )
  {
    v10 = sub_14008BE74((__int64)&v26, (__int64)v8, v41);
    v11 = (__int64 (__fastcall ***)(PVOID))((__int64 (__fastcall *)(__int64 (__fastcall ***)(PVOID), _QWORD *, __int64, __int64))sub_14008C394)(
                                             &v26,
                                             v36,
                                             v10 + 1,
                                             -1LL);
    if ( &v26 != v11 )
    {
      if ( v7 )
        ExFreePool(v7);
      v7 = v11[2];
      v6 = v11[3];
      v12 = v11[4];
      v28 = v7;
      v29 = v6;
      v30 = v12;
      v11[2] = 0LL;
      v11[3] = 0LL;
      v11[4] = 0LL;
    }
    v36[0] = &off_1400D41D0;
    if ( P )
      ExFreePool(P);
    v13 = sub_14008BE74((__int64)&v26, (__int64)v8, v41) + 1;
    v14 = sub_14008BE74((__int64)&v26, (__int64)v45, v46);
    v15 = v14;
    if ( v14 == -1 )
      break;
    v16 = sub_14008C394(&v26, v36, v13, v14 - v13, v26, v27);
    v17 = &v31;
    if ( !v35 )
      v17 = (__int128 *)*((_QWORD *)&v31 + 1);
    sub_1400B27A8(&v31, v17, v16);
    v36[0] = &off_1400D41D0;
    if ( P )
      ExFreePool(P);
    v18 = (__int64 (__fastcall ***)(PVOID))((__int64 (__fastcall *)(__int64 (__fastcall ***)(PVOID), _QWORD *, __int64, __int64))sub_14008C394)(
                                             &v26,
                                             v36,
                                             v15 + 1,
                                             -1LL);
    if ( &v26 != v18 )
    {
      if ( v7 )
        ExFreePool(v7);
      v7 = v18[2];
      v6 = v18[3];
      v19 = v18[4];
      v28 = v7;
      v29 = v6;
      v30 = v19;
      v18[2] = 0LL;
      v18[3] = 0LL;
      v18[4] = 0LL;
    }
    v36[0] = &off_1400D41D0;
    if ( P )
      ExFreePool(P);
    if ( !v6 )
      goto LABEL_27;
  }
  v20 = sub_14008C394(&v26, v36, v13, (char *)v6 - v13, v26, v27);
  v21 = &v31;
  if ( !v35 )
    v21 = (__int128 *)*((_QWORD *)&v31 + 1);
  sub_1400B27A8(&v31, v21, v20);
  v36[0] = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
LABEL_27:
  v9 = v35;
  if ( v35 == 3 )
  {
    if ( a2 == (_QWORD *)(*((_QWORD *)&v31 + 1) + 16LL)
      || (sub_1400011A8(a2, *(_QWORD *)(*((_QWORD *)&v31 + 1) + 32LL), *(_QWORD *)(*((_QWORD *)&v31 + 1) + 40LL)),
          (v9 = v35) != 0) )
    {
      sub_1400A82A4(&v31);
      v9 = v35;
    }
    if ( a3 != (_QWORD *)(*((_QWORD *)&v31 + 1) + 16LL) )
    {
      sub_1400011A8(a3, *(_QWORD *)(*((_QWORD *)&v31 + 1) + 32LL), *(_QWORD *)(*((_QWORD *)&v31 + 1) + 40LL));
      v9 = v35;
    }
    if ( v9 )
    {
      sub_1400A82A4(&v31);
      v9 = v35;
    }
    if ( a4 != (_QWORD *)(*((_QWORD *)&v31 + 1) + 16LL) )
    {
      sub_1400011A8(a4, *(_QWORD *)(*((_QWORD *)&v31 + 1) + 32LL), *(_QWORD *)(*((_QWORD *)&v31 + 1) + 40LL));
      v9 = v35;
    }
    v22 = 0;
  }
  else
  {
LABEL_38:
    v22 = -1073741823;
  }
  if ( v9 )
  {
    do
    {
      v23 = (_QWORD **)*((_QWORD *)&v31 + 1);
      if ( v9 == 1 )
      {
        v31 = 0uLL;
      }
      else if ( *((_QWORD *)&v31 + 1) == (_QWORD)v31 )
      {
        *(_QWORD *)(**((_QWORD **)&v31 + 1) + 8LL) = &v31;
        *(_QWORD *)&v31 = *v23;
      }
      else
      {
        *((_QWORD *)&v31 + 1) = *(_QWORD *)(*((_QWORD *)&v31 + 1) + 8LL);
        *v23[1] = &v31;
      }
      *v23 = 0LL;
      v23[1] = 0LL;
      v24 = v23[4];
      v23[2] = &off_1400D41D0;
      if ( v24 )
        ExFreePool(v24);
      v23[4] = 0LL;
      v23[5] = 0LL;
      v23[6] = 0LL;
      ExFreePool(v23);
      v9 = v35 - 1;
      v35 = v9;
    }
    while ( v9 );
    v8 = v40;
  }
  v32 = &off_1400D41D0;
  v31 = 0LL;
  if ( v33[1] )
    ExFreePool((PVOID)v33[1]);
  v34 = 0LL;
  *(_OWORD *)&v33[1] = 0LL;
  if ( v7 )
    ExFreePool(v7);
  if ( v45 )
    ExFreePool(v45);
  if ( v8 )
    ExFreePool(v8);
  return v22;
}
