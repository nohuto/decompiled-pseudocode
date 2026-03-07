int __fastcall RtlpHpConvertFlagsToSegmentFlags(int a1)
{
  __int16 v1; // r8
  int result; // eax
  int v3; // ecx
  int v4; // edx
  unsigned int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // edx

  v1 = a1;
  if ( !a1 )
    return 0;
  if ( a1 == 8 )
    return 2;
  v3 = a1 & 1;
  v4 = v3 | 2;
  if ( (v1 & 8) == 0 )
    v4 = v3;
  v5 = v4 | 0x80000000;
  if ( (v1 & 4) == 0 )
    v5 = v4;
  v6 = v5 | 0x100;
  if ( (v1 & 0x100) == 0 )
    v6 = v5;
  v7 = v1 & 0xE00 | v6;
  if ( (v1 & 0xE00) == 0 )
    v7 = v6;
  v8 = v7 | 0x2000000;
  if ( (v1 & 0x10) == 0 )
    v8 = v7;
  result = v8 | 0x1000000;
  if ( (v1 & 2) == 0 )
    return v8;
  return result;
}
