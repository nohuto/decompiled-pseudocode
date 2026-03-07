__int64 __fastcall DestroyWindowsHotKeys(__int64 a1)
{
  return HKRemoveMatchingHotkeys(0LL, a1, 0, 1);
}
