__int64 __fastcall SmHpChunkUnprotect(__int64 a1, __int64 a2, char a3, unsigned __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rcx

  v5 = *(unsigned int *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  _BitScanReverse((unsigned int *)&v6, v5);
  return SmHpBufferProtectEx(v6, *(_QWORD *)(a1 + 8 * v6) + 16 * (v5 ^ (unsigned int)(1 << v6)), a3, a4);
}
