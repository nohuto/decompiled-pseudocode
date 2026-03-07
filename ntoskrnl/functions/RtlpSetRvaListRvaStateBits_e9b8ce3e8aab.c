void __fastcall RtlpSetRvaListRvaStateBits(__int64 a1, int a2, signed __int32 a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // eax
  __int64 v5; // rdx
  signed __int32 v6; // [rsp+18h] [rbp+18h] BYREF

  v3 = 0;
  v6 = a3;
  if ( a3 )
  {
    v4 = *(_DWORD *)(a1 + 8);
    if ( v4 > 1 )
    {
      v5 = v4 * a2;
      do
      {
        if ( _bittest(&v6, v3) )
          _bittestandset64(*(signed __int64 **)(a1 + 40), v5 + v3);
        ++v3;
      }
      while ( v3 < *(_DWORD *)(a1 + 8) );
    }
  }
}
