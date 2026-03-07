__int64 __fastcall RtlpHpLfhBucketComputeNewSubsegmentBlockCount(__int64 a1, int a2)
{
  __int16 v3; // r8
  unsigned int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // r9d
  bool v7; // dl
  char v8; // cl
  char v9; // dl
  __int64 result; // rax
  unsigned int v11; // r11d

  v3 = RtlpBucketBlockSizes[*(unsigned __int8 *)(a1 + 1)];
  v4 = *(unsigned __int8 *)(a1 + 2);
  v5 = *(_DWORD *)(a1 + 56);
  if ( !a2 )
    v5 = (v5 >> 3) / v4;
  v6 = v5;
  if ( v5 == 0xFFFFFFFFLL )
    v6 = -1;
  v7 = v4 > 1;
  v8 = (v4 > 1) - 1;
  if ( (unsigned __int16)v3 >= 0x100u )
    v8 = v7;
  v9 = v8 - 1;
  result = 4LL;
  if ( !*(_QWORD *)(a1 + 64) )
    v9 = v8;
  v11 = 1 << (3 - v9);
  if ( v6 >= v11 )
    v11 = v6;
  if ( v11 >= 4 )
  {
    result = v11;
    if ( v11 > 0x400 )
      return 1024LL;
  }
  return result;
}
