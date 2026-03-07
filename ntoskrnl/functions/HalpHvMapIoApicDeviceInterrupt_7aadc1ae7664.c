__int64 __fastcall HalpHvMapIoApicDeviceInterrupt(char a1, __int64 a2, __int64 a3)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 result; // rax
  __int64 v8; // rdx
  int v9; // ecx
  unsigned __int64 v10; // [rsp+30h] [rbp-40h]
  __int128 v11; // [rsp+38h] [rbp-38h] BYREF
  __int128 v12; // [rsp+48h] [rbp-28h] BYREF
  __int128 v13; // [rsp+58h] [rbp-18h]

  v10 = 0x8000000000000000uLL;
  LOBYTE(v10) = a1;
  v4 = *(_DWORD *)(a2 + 20);
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
        LODWORD(v12) = 2;
    }
    else
    {
      LODWORD(v12) = 4;
    }
  }
  else
  {
    LODWORD(v13) = *(_DWORD *)(a2 + 48);
  }
  DWORD2(v12) = 1;
  DWORD1(v12) = *(_DWORD *)(a2 + 8) == 0;
  result = ((__int64 (__fastcall *)(unsigned __int64, __int128 *, __int64, __int128 *))qword_140C62148)(
             v10,
             &v12,
             a3,
             &v11);
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a2 + 12) &= ~0x10u;
  }
  else
  {
    v8 = *((_QWORD *)&v11 + 1);
    v9 = HIDWORD(v11);
    *(_DWORD *)(a2 + 32) = DWORD2(v11);
    *(_QWORD *)(a2 + 40) = v8;
    *(_DWORD *)(a2 + 24) = 8;
    *(_DWORD *)(a2 + 36) = v9;
  }
  return result;
}
