__int64 __fastcall IopLiveDumpEnterCorralledState(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  IopLiveDumpCorralProcessors((char *)(a1 + 312));
  result = IopLiveDumpGetMillisecondCounter(0);
  *(_QWORD *)(a1 + 536) = result;
  return result;
}
