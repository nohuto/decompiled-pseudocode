unsigned __int64 __fastcall MiCheckForDiscardableLongJumpTable(__int64 a1, __int64 a2)
{
  int v4; // edx
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  v7 = 0LL;
  v4 = 0;
  while ( 1 )
  {
    v4 = MiSnapDriverRange(a1, v4, 2, 0, (__int64)&v7, (__int64)&v8);
    result = v7;
    if ( v7 )
    {
      v6 = *(_QWORD *)(a2 + 176);
      result = (__int64)(v7 << 25) >> 16;
      if ( v6 >= result )
      {
        result = ((v8 << 25) | 0xFFF0000) >> 16;
        if ( v6 <= result )
          break;
      }
    }
    if ( !v4 )
      return result;
  }
  *(_DWORD *)(a1 + 104) |= 0x800u;
  return result;
}
