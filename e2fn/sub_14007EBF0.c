void __fastcall sub_14007EBF0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int16 *v3; // rbx
  _QWORD *v4; // rsi
  unsigned __int16 *i; // r14
  __int64 v6; // rdx
  PVOID v7; // r13
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int16 *v10; // rsi
  unsigned __int16 *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  void *v14; // r15
  bool v15; // r13
  unsigned __int64 v16; // rdx
  unsigned __int16 *v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 (__fastcall **v21)(PVOID); // [rsp+20h] [rbp-50h] BYREF
  __int16 v22; // [rsp+28h] [rbp-48h]
  PVOID P; // [rsp+30h] [rbp-40h]
  __int64 v24; // [rsp+38h] [rbp-38h]
  __int64 v25; // [rsp+40h] [rbp-30h]
  __int64 (__fastcall **v26)(PVOID); // [rsp+48h] [rbp-28h] BYREF
  __int16 v27; // [rsp+50h] [rbp-20h]
  void *v28; // [rsp+58h] [rbp-18h]
  __int64 v29; // [rsp+60h] [rbp-10h]
  __int64 v30; // [rsp+68h] [rbp-8h]

  v2 = *(_QWORD *)(a2 + 16);
  v3 = *(unsigned __int16 **)(a2 + 8);
  v4 = a1;
  if ( v2 )
  {
    for ( i = &v3[12 * v2]; v3 != i; v3 += 12 )
    {
      v6 = *((_QWORD *)v3 + 1);
      v7 = 0LL;
      v21 = &off_1400D41D0;
      v8 = 0LL;
      v22 = 0;
      P = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      if ( v6 )
      {
        sub_1400011A8(&v21, v6, (unsigned __int64)*v3 >> 1);
        v8 = v24;
        v7 = P;
      }
      v9 = v4[8];
      v10 = (unsigned __int16 *)v4[7];
      if ( !v9 || (v11 = v10, v10 += 12 * v9, v11 == v10) )
      {
LABEL_16:
        v11 = v10;
      }
      else
      {
        while ( 1 )
        {
          v12 = *((_QWORD *)v11 + 1);
          v13 = 0LL;
          v26 = &off_1400D41D0;
          v14 = 0LL;
          v27 = 0;
          v28 = 0LL;
          v29 = 0LL;
          v30 = 0LL;
          if ( v12 )
          {
            sub_1400011A8(&v26, v12, (unsigned __int64)*v11 >> 1);
            v13 = v29;
            v14 = v28;
          }
          v15 = v13 == v8 && (unsigned int)sub_1400B6E50(v7, v14, 2 * v8) == 0;
          if ( v14 )
            ExFreePool(v14);
          if ( v15 )
            break;
          v7 = P;
          v11 += 12;
          if ( v11 == v10 )
            goto LABEL_16;
        }
      }
      v4 = a1;
      v16 = a1[8];
      v17 = (unsigned __int16 *)a1[7];
      if ( v16 )
        v17 += 12 * v16;
      if ( v11 == v17 )
      {
        if ( v16 < a1[9] || !(unsigned int)sub_14000D2B4(a1 + 6, v16 + 1) )
        {
          v18 = a1[7];
          if ( v18 )
          {
            v19 = a1[8];
            if ( v19 < a1[9] )
            {
              v20 = 3 * v19;
              *(_OWORD *)(v18 + 8 * v20) = *(_OWORD *)v3;
              *(_QWORD *)(v18 + 8 * v20 + 16) = *((_QWORD *)v3 + 2);
              ++a1[8];
            }
          }
        }
      }
      else
      {
        *((_BYTE *)v11 + 16) = *((_BYTE *)v3 + 16);
      }
      if ( P )
        ExFreePool(P);
    }
  }
}
