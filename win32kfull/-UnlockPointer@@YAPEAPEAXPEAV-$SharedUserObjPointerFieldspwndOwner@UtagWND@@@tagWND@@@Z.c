__int64 __fastcall UnlockPointer(__int64 a1)
{
  *(_QWORD *)(*(_QWORD *)(a1 - 80) + 64LL) = 0LL;
  return a1;
}
