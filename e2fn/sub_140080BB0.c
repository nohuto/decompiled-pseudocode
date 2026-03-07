void __fastcall sub_140080BB0(_QWORD *a1, __int64 a2, int a3)
{
  void *v4; // rdx
  __int64 v6; // rax
  _DWORD *v7; // rbx
  _DWORD *v8; // rdi
  PVOID v9; // rsi
  PVOID v10; // rsi
  PVOID v11; // rsi
  PVOID v12; // rsi
  PVOID v13; // rdx
  __int64 (__fastcall **v14)(PVOID); // [rsp+20h] [rbp-79h] BYREF
  __int16 v15; // [rsp+28h] [rbp-71h]
  PVOID v16; // [rsp+30h] [rbp-69h]
  __int64 v17; // [rsp+38h] [rbp-61h]
  __int64 v18; // [rsp+40h] [rbp-59h]
  _BYTE v19[16]; // [rsp+48h] [rbp-51h] BYREF
  PVOID P; // [rsp+58h] [rbp-41h]
  unsigned __int64 v21; // [rsp+60h] [rbp-39h]
  __int64 v22; // [rsp+70h] [rbp-29h]
  __int64 v23; // [rsp+80h] [rbp-19h] BYREF
  int v24; // [rsp+88h] [rbp-11h]
  __int64 v25; // [rsp+90h] [rbp-9h]
  __int64 v26; // [rsp+A0h] [rbp+7h] BYREF
  int v27; // [rsp+A8h] [rbp+Fh]
  __int64 v28; // [rsp+B0h] [rbp+17h]
  __int64 v29; // [rsp+C0h] [rbp+27h] BYREF
  int v30; // [rsp+C8h] [rbp+2Fh]

  if ( !a3 )
  {
    v4 = &unk_1400D44E0;
    if ( a1[4] )
      v4 = (void *)a1[4];
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v4, 2LL * a1[5]);
    v6 = a1[9];
    v7 = (_DWORD *)a1[8];
    if ( v6 )
    {
      v8 = &v7[3 * v6];
      if ( v7 != v8 )
      {
        HIDWORD(v28) = 16;
        HIDWORD(v22) = 10;
        HIDWORD(v25) = 10;
        do
        {
          v15 = 0;
          v14 = &off_1400D41D0;
          v16 = 0LL;
          v17 = 0LL;
          v18 = 0LL;
          sub_1400011A8(&v14, (__int64)qword_1400B7400, 1uLL);
          LODWORD(v22) = v7[1];
          v23 = v22;
          v24 = 10;
          sub_1400042F0((__int64)v19, (int *)&v23);
          v9 = P;
          if ( v16 )
            sub_140001480(&v14, (__int64)P, v21);
          else
            sub_1400011A8(&v14, (__int64)P, v21);
          if ( v9 )
            ExFreePool(v9);
          if ( v16 )
            sub_140001480(&v14, (__int64)L"] Queue ID: ", 12LL);
          else
            sub_1400011A8(&v14, (__int64)L"] Queue ID: ", 0xCuLL);
          LODWORD(v25) = v7[2];
          v26 = v25;
          v27 = 10;
          sub_1400042F0((__int64)v19, (int *)&v26);
          v10 = P;
          if ( v16 )
            sub_140001480(&v14, (__int64)P, v21);
          else
            sub_1400011A8(&v14, (__int64)P, v21);
          if ( v10 )
            ExFreePool(v10);
          if ( v16 )
            sub_140001480(&v14, (__int64)L", Status: 0x", 12LL);
          else
            sub_1400011A8(&v14, (__int64)L", Status: 0x", 0xCuLL);
          LODWORD(v28) = *v7;
          v29 = v28;
          v30 = 10;
          sub_1400042F0((__int64)v19, (int *)&v29);
          v11 = P;
          if ( v16 )
            sub_140001480(&v14, (__int64)P, v21);
          else
            sub_1400011A8(&v14, (__int64)P, v21);
          if ( v11 )
            ExFreePool(v11);
          if ( v16 )
            sub_140001480(&v14, (__int64)qword_1400B6F30, 1LL);
          else
            sub_1400011A8(&v14, (__int64)qword_1400B6F30, 1uLL);
          v12 = v16;
          v13 = &unk_1400D44E0;
          if ( v16 )
            v13 = v16;
          (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v13, 2 * v17);
          if ( v12 )
            ExFreePool(v12);
          v7 += 3;
        }
        while ( v7 != v8 );
      }
    }
  }
}
