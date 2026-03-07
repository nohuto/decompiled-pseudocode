__int64 __fastcall VslDetermineHotPatchType(unsigned int a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  __int64 result; // rax
  char v7; // cl
  _QWORD v8[14]; // [rsp+20h] [rbp-88h] BYREF

  v3 = a2;
  v5 = a1;
  memset(v8, 0, 0x68uLL);
  v8[1] = v5;
  v8[2] = v3;
  result = VslpEnterIumSecureMode(2u, 69, 0, (__int64)v8);
  if ( (int)result >= 0 )
  {
    v7 = v8[2];
    *a3 = v8[2];
    if ( (v7 & 1) != 0 )
      _InterlockedIncrement(&dword_140C5EEC4);
    if ( (*a3 & 2) != 0 )
      _InterlockedIncrement(&dword_140C5EEC8);
  }
  return result;
}
