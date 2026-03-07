void __fastcall CmpLogHiveRundownEvent(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r9
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  _WORD v13[8]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v14; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v15[6]; // [rsp+48h] [rbp-21h]
  int v16; // [rsp+78h] [rbp+Fh]
  int v17; // [rsp+7Ch] [rbp+13h]
  __int64 v18; // [rsp+D0h] [rbp+67h] BYREF

  v18 = a1;
  v13[0] = 0;
  v4 = *(_QWORD *)(a1 + 1848);
  v6 = *(_QWORD *)(a1 + 1864);
  v14 = a1 + 1800;
  v15[1] = &v18;
  v15[3] = a1 + 4764;
  v7 = 3;
  v15[0] = 8LL;
  v15[2] = 8LL;
  v15[4] = 4LL;
  if ( v4 )
  {
    v7 = 4;
    v16 = *(unsigned __int16 *)(a1 + 1840);
    v15[5] = v4;
    v17 = 0;
  }
  v8 = 2LL * v7;
  v9 = v7 + 1;
  v15[v8 - 1] = v13;
  v15[v8] = 2LL;
  if ( v6 )
  {
    v10 = *(unsigned __int16 *)(a1 + 1856);
    v11 = 2LL * v9++;
    v15[v11 - 1] = v6;
    LODWORD(v15[v11]) = v10;
    HIDWORD(v15[v11]) = 0;
  }
  v12 = 2LL * v9;
  v15[v12 - 1] = v13;
  v15[v12] = 2LL;
  EtwTraceSiloDcEvent((__int64)&v14, v9 + 1, a2, a3, 0x927u, 0x401802u);
}
