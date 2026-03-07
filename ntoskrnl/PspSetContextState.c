__int64 __fastcall PspSetContextState(__int64 a1, __int64 a2)
{
  _DWORD *v4; // r14
  int v5; // ebx
  __int64 result; // rax
  size_t Size; // [rsp+40h] [rbp+8h] BYREF

  LODWORD(Size) = 0;
  v4 = *(_DWORD **)(a1 + 1640);
  if ( (*(_BYTE *)(a1 + 3) & 8) == 0 )
  {
    v5 = MEMORY[0xFFFFF780000003D8] != 0LL ? 0x40 : 0;
    RtlGetExtendedContextLength((unsigned int)(v5 + 0x100000), (__int64)&Size);
    memset(v4, 0, (unsigned int)Size);
    RtlInitializeExtendedContext((__int64)v4, v5 + 0x100000, (__int64)&Size);
    v4[12] = 0x100000;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Bu);
  }
  if ( (*(_DWORD *)(a2 + 48) & 0x100040) == 0x100040 )
    v4[12] |= 0x100040u;
  RtlCopyContext((__int64)v4, *(_DWORD *)(a2 + 48), a2);
  result = *(_DWORD *)(a2 + 48) & 0x100008;
  if ( (_DWORD)result == 1048584 )
  {
    LODWORD(Size) = _mm_getcsr();
    *(_DWORD *)(a2 + 280) = Size;
    result = 7999LL;
    *(_WORD *)(a2 + 256) &= 0x1F3Fu;
  }
  return result;
}
