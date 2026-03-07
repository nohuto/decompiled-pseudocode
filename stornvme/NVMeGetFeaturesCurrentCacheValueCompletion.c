unsigned __int64 __fastcall NVMeGetFeaturesCurrentCacheValueCompletion(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 SrbExtension; // rbx
  __int64 SrbDataBuffer; // rbp
  unsigned __int64 result; // rax
  int v8; // r9d
  char v9; // r8
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // r11d
  unsigned int *v14; // r9
  unsigned __int64 v15; // rcx
  unsigned int *v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  SrbDataBuffer = GetSrbDataBuffer(a2, &v16);
  result = GetSrbScsiData(a2, 0LL, 0LL, 0LL, 0LL);
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    if ( a3 )
    {
      v9 = *(_BYTE *)result;
      v10 = (unsigned int)(v8 + 6);
      v11 = v8 + 10;
      v12 = v8 + 24;
      v13 = v8 + 28;
      v14 = v16;
      if ( v9 != 26 )
        v10 = v11;
      *(_BYTE *)(v10 + SrbDataBuffer) ^= (*(_BYTE *)(v10 + SrbDataBuffer) ^ (4 * *a3)) & 4;
      v15 = v12;
      result = *v14;
      if ( v9 != 26 )
        v15 = v13;
      if ( result < v15 )
      {
        result = 16LL;
        if ( v9 != 26 )
          result = 20LL;
        *v14 = result;
      }
      else
      {
        if ( v9 != 26 )
          v12 = v13;
        *v14 = v12;
      }
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 4;
    }
  }
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  return result;
}
