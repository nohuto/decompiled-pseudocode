__int64 __fastcall PnpiBiosDmaToIoDescriptorV3(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  _WORD *v5; // rcx
  _WORD *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  result = PnpiUpdateResourceList(a2 + 8LL * a3, &v6);
  if ( (int)result >= 0 )
  {
    v5 = v6;
    *v6 = 1024;
    *((_BYTE *)v5 + 2) = 1;
    v5[2] = 128;
    *((_DWORD *)v5 + 4) = *(unsigned __int16 *)(a1 + 3);
    *((_DWORD *)v5 + 2) = *(unsigned __int16 *)(a1 + 1);
    *((_DWORD *)v5 + 5) = *(unsigned __int8 *)(a1 + 5);
    *((_DWORD *)v5 + 3) = *(unsigned __int16 *)(a1 + 1);
    return (unsigned int)result;
  }
  return result;
}
