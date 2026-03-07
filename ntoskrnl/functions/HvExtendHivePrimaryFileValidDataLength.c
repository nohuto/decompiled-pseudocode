__int64 __fastcall HvExtendHivePrimaryFileValidDataLength(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  int (__fastcall *v5)(__int64, _QWORD, _DWORD *, __int64, int); // rax
  _DWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF
  int *v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+68h] [rbp+10h] BYREF

  v8[0] = a2 - 4;
  v11 = -16843010;
  v3 = 0;
  v8[1] = 0;
  v9 = &v11;
  v5 = *(int (__fastcall **)(__int64, _QWORD, _DWORD *, __int64, int))(a1 + 40);
  v10 = 4;
  if ( v5(a1, 0LL, v8, 1LL, a3) >= 0 )
  {
    if ( (int)CmpFileFlushAndPurge(a1, 0) < 0 )
      return (unsigned int)-1073741491;
    return v3;
  }
  else
  {
    return (unsigned int)-1073741491;
  }
}
