__int64 __fastcall MiMapSecurePureReserveView(__int64 a1, __int64 a2, int a3, unsigned __int64 *a4)
{
  int v5; // edx
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // [rsp+58h] [rbp+Fh]
  __int64 v10; // [rsp+70h] [rbp+27h] BYREF
  _QWORD v11[2]; // [rsp+78h] [rbp+2Fh] BYREF
  __int128 v12; // [rsp+88h] [rbp+3Fh] BYREF
  __int64 v13; // [rsp+98h] [rbp+4Fh]
  __int64 v14; // [rsp+C8h] [rbp+7Fh] BYREF

  v14 = 0LL;
  v10 = 0LL;
  v11[1] = &v12;
  v5 = 0;
  v11[0] = 1LL;
  v13 = 0LL;
  v6 = *a4;
  v12 = 0LL;
  if ( !v6 )
    v6 = *(_QWORD *)(a2 + 48);
  if ( v6 > 0x4000000 )
  {
    v7 = *((_QWORD *)&v12 + 1);
    v5 = 0x100000;
    if ( *(_QWORD *)(a1 + 1496) <= 0x100000000uLL )
      v7 = 0x7FFFFFFEFFFFLL;
    *((_QWORD *)&v12 + 1) = v7;
  }
  return MmMapViewOfSectionEx(a2, a1, a3, (__int64)&v10, (__int64)a4, v5, 1, v11, 1, -2147483647, (__int64)&v14, v9, 0);
}
