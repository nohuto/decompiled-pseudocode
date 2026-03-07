void __fastcall sub_14007F010(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int16 *v3; // rbx
  unsigned __int16 *v5; // r14
  unsigned __int16 *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int16 *v9; // rsi
  unsigned __int16 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  void *v13; // r12
  __int64 v14; // rax
  unsigned __int16 *v15; // rcx
  __int64 (__fastcall **v16)(PVOID); // [rsp+20h] [rbp-50h] BYREF
  __int16 v17; // [rsp+28h] [rbp-48h]
  PVOID P; // [rsp+30h] [rbp-40h]
  __int64 v19; // [rsp+38h] [rbp-38h]
  __int64 v20; // [rsp+40h] [rbp-30h]
  __int64 (__fastcall **v21)(PVOID); // [rsp+48h] [rbp-28h] BYREF
  __int16 v22; // [rsp+50h] [rbp-20h]
  void *v23; // [rsp+58h] [rbp-18h]
  __int64 v24; // [rsp+60h] [rbp-10h]
  __int64 v25; // [rsp+68h] [rbp-8h]
  bool v26; // [rsp+A8h] [rbp+38h]

  v2 = *(_QWORD *)(a2 + 16);
  v3 = *(unsigned __int16 **)(a2 + 8);
  if ( v2 )
  {
    v5 = &v3[28 * v2];
    if ( v3 != v5 )
    {
      v6 = v3 + 16;
      do
      {
        v7 = *((_QWORD *)v6 - 3);
        v16 = &off_1400D41D0;
        v17 = 0;
        P = 0LL;
        v19 = 0LL;
        v20 = 0LL;
        if ( v7 )
          sub_1400011A8(&v16, v7, (unsigned __int64)*v3 >> 1);
        v8 = *(_QWORD *)(a1 + 96);
        v9 = *(unsigned __int16 **)(a1 + 88);
        if ( !v8 || (v10 = *(unsigned __int16 **)(a1 + 88), v9 += 28 * v8, v10 == v9) )
        {
LABEL_17:
          v10 = v9;
        }
        else
        {
          while ( 1 )
          {
            v11 = *((_QWORD *)v10 + 1);
            v12 = 0LL;
            v21 = &off_1400D41D0;
            v13 = 0LL;
            v22 = 0;
            v23 = 0LL;
            v24 = 0LL;
            v25 = 0LL;
            if ( v11 )
            {
              sub_1400011A8(&v21, v11, (unsigned __int64)*v10 >> 1);
              v12 = v24;
              v13 = v23;
            }
            v26 = v12 == v19 && (unsigned int)sub_1400B6E50(P, v13, 2 * v19) == 0;
            if ( v13 )
              ExFreePool(v13);
            if ( v26 )
              break;
            v10 += 28;
            if ( v10 == v9 )
              goto LABEL_17;
          }
        }
        v14 = *(_QWORD *)(a1 + 96);
        v15 = *(unsigned __int16 **)(a1 + 88);
        if ( v14 )
          v15 += 28 * v14;
        if ( v10 == v15 )
        {
          sub_14007F1E4(a1 + 80, v3, 0LL);
        }
        else if ( v10 + 8 != v6 - 8 )
        {
          sub_1400011A8((_QWORD *)v10 + 2, *(_QWORD *)v6, *((_QWORD *)v6 + 1));
        }
        if ( P )
          ExFreePool(P);
        v3 += 28;
        v6 += 28;
      }
      while ( v3 != v5 );
    }
  }
}
