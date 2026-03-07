__int64 __fastcall RtlpHpVaMgrAllocAligned(__int64 a1, int a2, int a3)
{
  unsigned int v3; // r11d
  int v5; // r8d
  unsigned int v6; // r10d
  int v7; // r9d
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 46);
  v9 = 0LL;
  v5 = 0x2000;
  v6 = (v3 >> 1) & 7;
  if ( v6 >= 3 )
  {
    if ( v6 < 5 )
    {
      v5 = 536883200;
      if ( v6 != 4 )
        v5 = 536879104;
    }
  }
  else if ( v6 == 2 )
  {
    v5 = 541073408;
  }
  v7 = v5 | 0x40000;
  if ( (v3 & 0x10) == 0 )
    v7 = v5;
  RtlpHpEnvAllocVA((unsigned int)&v9, a2, a3, v7, 4);
  return v9;
}
