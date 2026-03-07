__int64 __fastcall RtlCompressBufferXp10(__int16 a1)
{
  _WORD v2[2]; // [rsp+40h] [rbp-18h] BYREF
  int v3; // [rsp+44h] [rbp-14h]

  v2[1] = 0;
  if ( a1 && a1 != 256 )
    return 3221225659LL;
  v3 = 0;
  v2[0] = 16504;
  return Xp10CompressBuffer(v2);
}
