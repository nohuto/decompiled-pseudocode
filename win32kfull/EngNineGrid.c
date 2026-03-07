__int64 __fastcall EngNineGrid(int a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // [rsp+40h] [rbp-61h] BYREF
  _DWORD v10[4]; // [rsp+50h] [rbp-51h] BYREF
  __int64 v11; // [rsp+60h] [rbp-41h]
  __int64 *v12; // [rsp+68h] [rbp-39h]
  __int64 v13; // [rsp+70h] [rbp-31h]
  __int64 v14; // [rsp+78h] [rbp-29h]
  __int64 v15; // [rsp+80h] [rbp-21h]
  int v16; // [rsp+88h] [rbp-19h]
  int v17; // [rsp+8Ch] [rbp-15h]
  __int64 v18; // [rsp+90h] [rbp-11h]

  v10[0] = 0;
  v17 = 0;
  if ( *(_WORD *)(a2 + 76) || *(_DWORD *)(a2 + 72) != 6 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    v10[2] = *(_DWORD *)a8;
    v10[1] = *(_DWORD *)(a7 + 20);
    v12 = &v9;
    v15 = *(_QWORD *)(a8 + 24);
    v14 = *(_QWORD *)(a8 + 16);
    v13 = *(_QWORD *)(a8 + 8);
    v11 = 0LL;
    v10[3] = 0;
    v9 = 0LL;
    v18 = 0LL;
    v16 = 0;
    return xxEngNineGrid(a1, a2, a3, a4, a5, a6, a7, (__int64)v10);
  }
}
