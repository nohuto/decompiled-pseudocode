__int64 __fastcall BcpGetCharacterMaxResourceProfile(unsigned __int16 a1, int a2, __int128 *a3, unsigned __int64 *a4)
{
  __int128 v4; // xmm1
  __int64 v7; // rsi
  int *v8; // rbx
  int v9; // eax
  int XExtent; // r9d
  unsigned __int64 v11; // r8
  unsigned int v12; // edx
  unsigned __int64 v13; // rax
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+40h] [rbp-20h]
  __int128 v17; // [rsp+48h] [rbp-18h]
  unsigned __int64 v18; // [rsp+58h] [rbp-8h]
  unsigned int v19; // [rsp+90h] [rbp+30h] BYREF

  v4 = *a3;
  v15 = 0LL;
  v7 = 0LL;
  v8 = (int *)((char *)&unk_140C0B590 + 4 * a2);
  v16 = *((_QWORD *)a3 + 2);
  v15 = v4;
  do
  {
    v9 = *v8;
    v19 = 0;
    LODWORD(v16) = v9;
    v18 = 0LL;
    v17 = 0LL;
    XExtent = RaspGetXExtent(a1, (__int64)&v15, &v19);
    if ( XExtent < 0 )
      break;
    v11 = v18;
    v12 = v19;
    v13 = *a4;
    if ( *((_DWORD *)a4 + 2) >= v19 )
      v12 = *((_DWORD *)a4 + 2);
    *((_DWORD *)a4 + 2) = v12;
    if ( v13 >= v11 )
      v11 = v13;
    ++v7;
    v8 += 18;
    *a4 = v11;
  }
  while ( v7 < 5 );
  return (unsigned int)XExtent;
}
