__int64 __fastcall VslRevertHotPatch(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  __int64 result; // rax
  volatile signed __int32 *v7; // rcx
  _QWORD v8[14]; // [rsp+20h] [rbp-88h] BYREF

  v3 = a2;
  v5 = a3;
  memset(v8, 0, 0x68uLL);
  _InterlockedIncrement(&dword_140C5EEAC);
  v8[1] = a1;
  v8[2] = v3;
  v8[3] = v5;
  result = VslpEnterIumSecureMode(2u, 73, 0, (__int64)v8);
  v7 = (volatile signed __int32 *)&unk_140C5EEB0;
  if ( (int)result < 0 )
    v7 = (volatile signed __int32 *)&unk_140C5EEB4;
  _InterlockedIncrement(v7);
  return result;
}
