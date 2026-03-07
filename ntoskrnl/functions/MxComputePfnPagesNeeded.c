__int64 __fastcall MxComputePfnPagesNeeded(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r11
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  __int64 v6; // rdx

  v2 = 0LL;
  v3 = 512LL;
  v4 = (((unsigned __int64)(48 * a1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v5 = (((unsigned __int64)(48 * a2) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v6 = 3LL;
  do
  {
    v2 += v3 * (((__int64)(v5 - v4) >> 3) + 1);
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v5 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v3 = 1LL;
    --v6;
  }
  while ( v6 );
  return v2;
}
