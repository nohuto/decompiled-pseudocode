__int64 __fastcall KiOp_MOVAPS(__int64 a1)
{
  __int64 CurrentThread; // rcx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 58) )
    return 0LL;
  if ( *(_BYTE *)(a1 + 81) != 1 )
    return 0LL;
  CurrentThread = (__int64)KeGetCurrentThread();
  if ( (*(_DWORD *)(CurrentThread + 120) & 4) == 0 )
  {
    CurrentThread = *(unsigned int *)(*(_QWORD *)(CurrentThread + 184) + 632LL);
    if ( (CurrentThread & 1) == 0 )
      return 0LL;
  }
  result = KiOpPatchCode(CurrentThread, *(_QWORD *)(a1 + 40), (*(_BYTE *)(a1 + 56) != 40) + 16);
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741267 )
  {
    *(_BYTE *)(a1 + 96) = 1;
    return 0LL;
  }
  return result;
}
