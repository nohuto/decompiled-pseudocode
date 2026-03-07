__int64 __fastcall PnpiBiosMemoryToIoDescriptor(unsigned __int8 *a1, __int64 a2, unsigned int a3)
{
  bool v4; // al
  __int16 v5; // di
  int v6; // ecx
  int v7; // ecx
  int v8; // esi
  int v9; // ebx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-18h]
  __int64 v13; // [rsp+28h] [rbp-10h] BYREF
  __int64 v14; // [rsp+40h] [rbp+8h]

  HIDWORD(v14) = 0;
  HIDWORD(v12) = 0;
  v4 = (a1[3] & 1) == 0;
  v13 = 0LL;
  v5 = v4;
  v6 = *a1 - 129;
  if ( v6 )
  {
    v7 = v6 - 4;
    if ( v7 )
    {
      if ( v7 != 1 )
        return 0LL;
      v8 = 1;
      v9 = *((_DWORD *)a1 + 2);
      LODWORD(v14) = *((_DWORD *)a1 + 1);
      LODWORD(v12) = v9 + v14 - 1;
    }
    else
    {
      v9 = *((_DWORD *)a1 + 4);
      v8 = *((_DWORD *)a1 + 3);
      LODWORD(v14) = *((_DWORD *)a1 + 1);
      LODWORD(v12) = *((_DWORD *)a1 + 2) + v9 - 1;
    }
  }
  else
  {
    v8 = *((unsigned __int16 *)a1 + 4);
    v5 = v4 | 0x10;
    LODWORD(v14) = *((unsigned __int16 *)a1 + 2) << 8;
    v9 = *((unsigned __int16 *)a1 + 5) << 8;
    LODWORD(v12) = v9 + (*((unsigned __int16 *)a1 + 3) << 8) - 1;
    if ( !*((_WORD *)a1 + 4) )
      v8 = 0x10000;
  }
  if ( v9 )
  {
    result = PnpiUpdateResourceList(a2 + 8LL * a3, &v13);
    if ( (int)result < 0 )
      return result;
    v11 = v13;
    *(_WORD *)(v13 + 1) = 259;
    *(_WORD *)(v11 + 4) = v5;
    *(_QWORD *)(v11 + 16) = v14;
    *(_QWORD *)(v11 + 24) = v12;
    *(_DWORD *)(v11 + 12) = v8;
    *(_DWORD *)(v11 + 8) = v9;
  }
  return 0LL;
}
