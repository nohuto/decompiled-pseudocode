void __fastcall sub_140080A80(_QWORD *a1, __int64 a2, int a3)
{
  void *v4; // rdx
  __int64 v6; // rax
  _BYTE *v7; // rbx
  _BYTE *v8; // rdi
  __int64 v9; // rax
  void *v10; // rdx
  __int16 v11; // [rsp+20h] [rbp-60h] BYREF
  char v12; // [rsp+22h] [rbp-5Eh]
  __int64 (__fastcall **v13)(PVOID); // [rsp+30h] [rbp-50h] BYREF
  PVOID P; // [rsp+40h] [rbp-40h]
  __int64 v15; // [rsp+48h] [rbp-38h]
  __int64 v16; // [rsp+50h] [rbp-30h]
  _BYTE v17[16]; // [rsp+58h] [rbp-28h] BYREF
  PVOID v18; // [rsp+68h] [rbp-18h]
  __int16 v19; // [rsp+A0h] [rbp+20h]

  if ( !a3 )
  {
    v4 = &unk_1400D44E0;
    if ( a1[4] )
      v4 = (void *)a1[4];
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v4, 2LL * a1[5]);
    v6 = a1[9];
    v7 = (_BYTE *)a1[8];
    if ( v6 )
    {
      v8 = &v7[v6];
      if ( v7 != &v7[v6] )
      {
        HIBYTE(v19) = 16;
        do
        {
          LOBYTE(v19) = *v7;
          v11 = v19;
          v12 = 10;
          sub_140022394((__int64)v17, (unsigned __int8 *)&v11);
          v9 = sub_1400A8CF8(&v13, v17, 2LL);
          v10 = &unk_1400D44E0;
          if ( *(_QWORD *)(v9 + 16) )
            v10 = *(void **)(v9 + 16);
          (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v10, 2LL * *(_QWORD *)(v9 + 24));
          v13 = &off_1400D41D0;
          if ( P )
            ExFreePool(P);
          P = 0LL;
          v15 = 0LL;
          v16 = 0LL;
          if ( v18 )
            ExFreePool(v18);
          ++v7;
        }
        while ( v7 != v8 );
      }
    }
  }
}
