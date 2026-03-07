unsigned __int64 __fastcall MiConvertLargePfnToSmall(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // al
  char v5; // al
  __int64 v6; // rax
  unsigned __int64 result; // rax
  bool v8; // zf
  signed __int32 v9[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v10; // [rsp+20h] [rbp-38h]
  __int128 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-18h]
  unsigned __int64 v13; // [rsp+48h] [rbp-10h]

  v4 = *(_BYTE *)(a2 + 34);
  *(_BYTE *)(a2 + 35) &= 0xF8u;
  v5 = v4 & 0xEF;
  *(_BYTE *)(a2 + 34) = v5;
  if ( a2 != a1 )
  {
    *(_BYTE *)(a2 + 34) = v5 ^ (v5 ^ *(_BYTE *)(a1 + 34)) & 7;
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
  }
  v6 = *(_QWORD *)(a2 + 40);
  *(_BYTE *)(a2 + 36) &= 0xFCu;
  result = v6 & 0xFFFFFEFFFFFFFFFFuLL;
  v12 = 0LL;
  v13 = result;
  v10 = 0LL;
  v11 = 0LL;
  *(_QWORD *)(a2 + 40) = result;
  if ( a4 )
  {
    *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
    result = 65534LL;
    v8 = *(_WORD *)(a2 + 32) == 2;
    *(_WORD *)(a2 + 32) -= 2;
    if ( v8 )
    {
      _InterlockedOr(v9, 0);
      return MiSetPfnTbFlushStamp(a2, KiTbFlushTimeStamp, 1);
    }
  }
  return result;
}
