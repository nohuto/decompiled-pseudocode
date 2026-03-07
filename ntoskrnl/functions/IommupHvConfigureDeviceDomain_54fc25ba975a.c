__int64 __fastcall IommupHvConfigureDeviceDomain(int a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+28h] [rbp-30h] BYREF
  __int128 v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+48h] [rbp-10h]

  v5 = 0LL;
  v8 = 0;
  v6 = 0LL;
  v7 = 0LL;
  if ( !a2 )
    return 3221225659LL;
  *((_QWORD *)&v6 + 1) = *(_QWORD *)(a4 + 8);
  LOBYTE(v7) = *(_BYTE *)(a4 + 16);
  LODWORD(v6) = *(_DWORD *)a4;
  LODWORD(v5) = a1;
  BYTE4(v5) = a2;
  return ((__int64 (__fastcall *)(__int64 *, __int128 *))qword_140C62310)(&v5, &v6);
}
