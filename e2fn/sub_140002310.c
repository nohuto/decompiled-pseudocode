__int64 __fastcall sub_140002310(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  _BYTE *v5; // rax
  _BYTE *v6; // r8
  __int64 v7; // rdx
  signed __int64 v9; // r8
  __int128 *v10; // rcx
  char v11; // al
  __int128 *v12; // rax
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int128 v15; // [rsp+30h] [rbp-30h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]

  v14 = 0LL;
  v17 = 0LL;
  v5 = *(_BYTE **)(a2 + 16);
  v6 = &unk_1400D44B8;
  v15 = 0LL;
  LODWORD(v14) = 56;
  v7 = 16LL;
  DWORD2(v14) = 1024;
  if ( v5 )
    v6 = v5;
  HIDWORD(v14) = 200;
  *(_QWORD *)&v15 = 0LL;
  DWORD1(v14) = 0;
  HIDWORD(v15) = 16;
  BYTE8(v15) = 0;
  v16 = 0LL;
  LOBYTE(v16) = 0;
  if ( v6 )
  {
    v9 = v6 - (_BYTE *)&v16;
    v10 = &v16;
    do
    {
      if ( v7 == -2147483630 )
        break;
      v11 = *((_BYTE *)v10 + v9);
      if ( !v11 )
        break;
      *(_BYTE *)v10 = v11;
      v10 = (__int128 *)((char *)v10 + 1);
      --v7;
    }
    while ( v7 );
    v12 = (__int128 *)((char *)v10 - 1);
    if ( v7 )
      v12 = v10;
    *(_BYTE *)v12 = 0;
  }
  *((_QWORD *)&v14 + 1) = __PAIR64__(a4, a3);
  v17 = 0x200000002LL;
  return imp_WppRecorderLogCreate(DeviceObject, &v14, a1 + 16);
}
