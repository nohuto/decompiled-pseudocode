__int64 __fastcall CmGetContainerBooleanProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        _BYTE *a6,
        int a7,
        _DWORD *a8)
{
  __int64 result; // rax
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v9 = 0LL;
  *a8 = 1;
  *a5 = 17;
  if ( !a7 )
    return 3221225507LL;
  *(_QWORD *)&v9 = a4;
  BYTE8(v9) = 0;
  result = CmEnumDevicesInContainerWithCallback(
             a1,
             a2,
             a3,
             (__int64)CmGetContainerBooleanPropertyCallback,
             (__int64)&v9);
  *a6 = BYTE8(v9);
  return result;
}
