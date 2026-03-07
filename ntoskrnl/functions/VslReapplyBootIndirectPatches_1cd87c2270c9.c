__int64 __fastcall VslReapplyBootIndirectPatches(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx
  _QWORD v4[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v4, 0, 0x68uLL);
  _InterlockedIncrement(&dword_140C5EECC);
  v4[1] = a1;
  result = VslpEnterIumSecureMode(2u, 220, 0, (__int64)v4);
  v3 = (volatile signed __int32 *)&unk_140C5EED0;
  if ( (int)result < 0 )
    v3 = (volatile signed __int32 *)&unk_140C5EED4;
  _InterlockedIncrement(v3);
  return result;
}
