void __fastcall sub_14009F7FC(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  volatile signed __int32 *v7; // r15
  __int64 (__fastcall ***v8)(PVOID); // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 v12; // r12
  char *v13; // r14
  char *v14; // r9
  unsigned __int64 v15; // rcx
  _WORD *v16; // rax
  __int16 v17; // r8
  volatile signed __int32 *v18; // r14
  __int64 (__fastcall **v19)(PVOID); // [rsp+20h] [rbp-99h] BYREF
  __int16 v20; // [rsp+28h] [rbp-91h]
  PVOID P; // [rsp+30h] [rbp-89h]
  unsigned __int64 v22; // [rsp+38h] [rbp-81h]
  __int64 v23; // [rsp+40h] [rbp-79h]
  __int64 v24; // [rsp+48h] [rbp-71h] BYREF
  volatile signed __int32 *v25; // [rsp+50h] [rbp-69h]
  __int64 v26; // [rsp+58h] [rbp-61h] BYREF
  volatile signed __int32 *v27; // [rsp+60h] [rbp-59h]
  __int64 (__fastcall **v28)(PVOID); // [rsp+68h] [rbp-51h] BYREF
  __int16 v29; // [rsp+70h] [rbp-49h]
  char *v30; // [rsp+78h] [rbp-41h]
  unsigned __int64 v31; // [rsp+80h] [rbp-39h]
  __int64 v32; // [rsp+88h] [rbp-31h]
  _QWORD v33[16]; // [rsp+90h] [rbp-29h] BYREF
  char v34; // [rsp+120h] [rbp+67h] BYREF
  _QWORD *v35; // [rsp+128h] [rbp+6Fh]
  volatile signed __int32 *v36; // [rsp+130h] [rbp+77h]
  __int64 i; // [rsp+138h] [rbp+7Fh]

  v35 = a2;
  v2 = *(_QWORD *)(a1 + 288);
  v3 = *(_QWORD *)(a1 + 320);
  v4 = v2;
  v5 = a1 + 280;
  v6 = a2;
  if ( v3 )
    v4 = v5;
  for ( i = v4; v2 != v4; v6 = v35 )
  {
    sub_1400A27D4(&v24, v2 + 16);
    v7 = v25;
    v8 = (__int64 (__fastcall ***)(PVOID))v6[8];
    v9 = v24;
    v36 = v25;
    v25 = 0LL;
    v24 = 0LL;
    v19 = &off_1400D41D0;
    v20 = 0;
    P = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    if ( &v19 != v8 )
      sub_1400011A8(&v19, (__int64)v8[2], (unsigned __int64)v8[3]);
    v33[0] = *v6;
    v33[1] = v6[1];
    v33[2] = v6[2];
    v33[3] = v6[3];
    v33[4] = v6[4];
    v33[5] = v6[5];
    v33[6] = v6[6];
    v33[7] = v6[7];
    v34 = 0;
    sub_1400A05C8(v33, v9, &v19, &v34);
    v10 = *(_QWORD *)(v9 + 88);
    v11 = v9 + 80;
    if ( !*(_QWORD *)(v11 + 40) || v10 == v11 )
    {
      v13 = (char *)P;
    }
    else
    {
      v12 = v22;
      v13 = (char *)P;
      do
      {
        sub_1400A27D4(&v26, v10 + 16);
        v28 = &off_1400D41D0;
        v29 = 0;
        v30 = 0LL;
        v31 = 0LL;
        v32 = 0LL;
        if ( v13 && v12 && !(unsigned int)sub_140001070(&v28, v12, 0LL) )
        {
          v14 = v30;
          v15 = 0LL;
          v31 = 0LL;
          v16 = v30;
          do
          {
            v17 = *(_WORD *)((char *)v16 + v13 - v14);
            if ( !v17 )
              break;
            *v16 = v17;
            ++v15;
            ++v16;
          }
          while ( v15 < v12 );
          v31 = v15;
          *(_WORD *)&v14[2 * v12] = 0;
        }
        sub_14009F4C8(v26, (__int64)v33, &v28, v34);
        if ( v27 )
        {
          if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
          {
            v18 = v27;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
            if ( !_InterlockedDecrement(v18 + 3) )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
          }
          v13 = (char *)P;
          v12 = v22;
        }
        v10 = *(_QWORD *)(v10 + 8);
      }
      while ( v10 != v11 );
      v7 = v36;
      v4 = i;
    }
    if ( v13 )
      ExFreePool(v13);
    if ( v7 && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      if ( !_InterlockedDecrement(v7 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v2 = *(_QWORD *)(v2 + 8);
  }
}
