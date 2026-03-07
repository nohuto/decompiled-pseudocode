__int64 __fastcall HalpWdatProcessWdrtInternalData(__int64 a1, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  unsigned int v4; // r10d
  int v6; // eax
  int v8; // ecx
  int v9; // ecx
  __int64 result; // rax
  LARGE_INTEGER v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-18h]

  v4 = *(unsigned __int16 *)(a1 + 68);
  v14 = 0LL;
  a2[5] = 1;
  v6 = v4;
  if ( v4 < 0x1FF )
    v6 = 511;
  a2[4] = v6;
  v8 = *(unsigned __int8 *)(a1 + 70);
  v12 = 0LL;
  v13 = 0LL;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
        return 3221225485LL;
      a2[6] = 10;
    }
    else
    {
      a2[6] = 100;
    }
  }
  else
  {
    a2[6] = 1000;
  }
  v11 = *(LARGE_INTEGER *)(a1 + 40);
  *a3 = 1072;
  result = WdHwCreateHardwareRegister(v11);
  if ( (int)result >= 0 )
  {
    (*((void (__fastcall **)(_QWORD))&v13 + 1))(v13);
    WdHwDestroyHardwareRegister(&v12);
    result = 0LL;
    *a4 = 1;
  }
  else
  {
    *a4 = 0;
  }
  return result;
}
