/*
 * XREFs of sub_180131C0C @ 0x180131C0C
 * Callers:
 *     sub_180010670 @ 0x180010670 (sub_180010670.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1801314B4 @ 0x1801314B4 (sub_1801314B4.c)
 *     sub_180131F20 @ 0x180131F20 (sub_180131F20.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180131C0C(__int64 a1, __int64 a2, _OWORD *a3, __int128 *a4, int a5, int a6, _QWORD *a7)
{
  __int64 v11; // rcx
  __int128 *v12; // rax
  int v13; // ebx
  int v14; // r15d
  __int64 v15; // rdx
  __int128 *v16; // r8
  __int64 v17; // rdx
  __int128 *v18; // r9
  __int64 v19; // rax
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  int v23[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v24; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+60h] [rbp-A0h]
  int v26; // [rsp+64h] [rbp-9Ch]
  _OWORD v27[2]; // [rsp+68h] [rbp-98h]
  _OWORD v28[6]; // [rsp+90h] [rbp-70h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  memset(v28, 0, 0x58uLL);
  v11 = *(_QWORD *)a4;
  if ( !*(_QWORD *)a4 )
    v11 = *((_QWORD *)a4 + 1);
  v12 = &xmmword_18015B810;
  if ( v11 )
    v12 = a4;
  *a4 = *v12;
  if ( a7 )
    *a7 = 0LL;
  v13 = (**(__int64 (__fastcall ***)(__int64, __int64 *, __int64 *))a2)(a2, &qword_18015B840, &v21);
  if ( v13 < 0 )
  {
    if ( a7 )
      goto LABEL_26;
    if ( (**(int (__fastcall ***)(__int64, __int64 *, __int64 *))a2)(a2, &qword_1801737E0, &v22) < 0 )
      goto LABEL_10;
  }
  *(_OWORD *)v23 = *a4;
  v14 = a5;
  v13 = sub_1801314B4(a1, a3, v23, a5, a6, (char *)v28);
  if ( v13 >= 0 )
  {
    if ( v21 )
    {
      v16 = v28;
      v17 = 88LL;
    }
    else
    {
      if ( !v22 )
        goto LABEL_17;
      v26 = 0;
      v24 = v28[0];
      v25 = v28[1];
      v17 = 56LL;
      LODWORD(v24) = 56;
      v27[0] = *(_OWORD *)((char *)&v28[1] + 8);
      v27[1] = *(_OWORD *)((char *)&v28[2] + 8);
      v16 = &v24;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)a2 + 48LL))(a2, v17, v16);
LABEL_17:
    if ( v13 >= 0 )
    {
      if ( (byte_18019F981 & 2) != 0 )
      {
        if ( !v21 )
          v14 = 0;
        v18 = &xmmword_18015B730;
        if ( v21 )
          v18 = a4;
        sub_180131F20(v21, v15, a3, v18, v14);
      }
      if ( a7 )
      {
        v19 = v21;
        v21 = 0LL;
        *a7 = v19;
      }
LABEL_10:
      v13 = 0;
    }
  }
LABEL_26:
  if ( *((_QWORD *)&v28[1] + 1) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v28[1] + 1) + 16LL))(*((_QWORD *)&v28[1] + 1));
    *((_QWORD *)&v28[1] + 1) = 0LL;
  }
  if ( *(_QWORD *)&v28[2] )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v28[2] + 16LL))(*(_QWORD *)&v28[2]);
    *(_QWORD *)&v28[2] = 0LL;
  }
  if ( *(_QWORD *)&v28[3] )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v28[3] + 16LL))(*(_QWORD *)&v28[3]);
    *(_QWORD *)&v28[3] = 0LL;
  }
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return (unsigned int)v13;
}
