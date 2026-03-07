__int64 __fastcall WheaPageOfflineAndPersist(__int64 a1)
{
  unsigned __int8 v1; // dl
  char v2; // al
  __int128 v3; // xmm1
  __m128i v4; // xmm0
  __int64 result; // rax
  __int64 v6; // rcx
  _OWORD *v7; // r8
  __int64 v8; // rdx
  _OWORD v9[3]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v10; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(_BYTE *)(a1 + 64);
  v10 = 0LL;
  v2 = v1 & 3;
  if ( (v1 & 3) != 0 && v2 != 3 && v1 < 4u )
  {
    if ( v2 == 2 )
    {
      v3 = *(_OWORD *)(a1 + 32);
      v9[0] = *(_OWORD *)(a1 + 16);
      v4 = *(__m128i *)(a1 + 48);
      v9[1] = v3;
      v9[2] = v4;
      if ( !_mm_cvtsi128_si32(_mm_srli_si128(v4, 8)) )
      {
        result = WheapReverseAddressTranslateToPAInPlugin(v9, &v10);
        if ( (int)result < 0 )
          return result;
        LODWORD(v6) = v10;
        v7 = v9;
        v8 = v10 >> 12;
        return WheapAttemptPhysicalPageOffline(v6, v8, (_DWORD)v7, 1, 0, 0, 0);
      }
    }
    else if ( v2 == 1 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      v8 = v6 >> 12;
      LODWORD(v7) = 0;
      return WheapAttemptPhysicalPageOffline(v6, v8, (_DWORD)v7, 1, 0, 0, 0);
    }
  }
  return 3221225485LL;
}
