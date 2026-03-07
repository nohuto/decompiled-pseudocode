__int64 __fastcall UnlockPointer(__int64 a1)
{
  *(_QWORD *)(*(_QWORD *)(a1 - 200) + 40LL) = 0LL;
  return a1;
}
