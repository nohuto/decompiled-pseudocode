__int64 __fastcall HalpHvRetargetIoApicDeviceInterrupt(char a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int128 *v4; // rdi
  int v7; // eax
  __int64 result; // rax
  int v9; // edx
  int v10; // ecx
  unsigned __int64 v11; // [rsp+30h] [rbp-40h]
  _QWORD v12[2]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v13; // [rsp+48h] [rbp-28h] BYREF
  __int128 v14; // [rsp+58h] [rbp-18h] BYREF

  v12[0] = 2LL;
  v4 = &v13;
  v11 = 0x8000000000000000uLL;
  v12[1] = *(_QWORD *)(a2 + 40);
  v7 = *(_DWORD *)(a2 + 48);
  *a4 = 0;
  LOBYTE(v11) = a1;
  if ( *(_DWORD *)(a2 + 8) )
    v4 = 0LL;
  v14 = 0LL;
  LODWORD(v14) = v7;
  v13 = 0LL;
  result = ((__int64 (__fastcall *)(unsigned __int64, _QWORD *, __int128 *, __int64, __int128 *))qword_140C62158)(
             v11,
             v12,
             &v14,
             a3,
             v4);
  if ( (int)result >= 0 && v4 )
  {
    v9 = DWORD2(v13);
    v10 = HIDWORD(v13);
    if ( *((_QWORD *)&v13 + 1) != *(_QWORD *)(a2 + 32) )
    {
      *a4 = 1;
      *(_DWORD *)(a2 + 32) = v9;
      *(_DWORD *)(a2 + 36) = v10;
    }
  }
  return result;
}
