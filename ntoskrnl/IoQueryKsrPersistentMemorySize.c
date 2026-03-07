__int64 __fastcall IoQueryKsrPersistentMemorySize(__int64 a1, __int64 a2, __int64 a3)
{
  return IoQueryKsrPersistentMemorySizeEx(a1, a2, 0LL, 0LL, 0LL, a3);
}
