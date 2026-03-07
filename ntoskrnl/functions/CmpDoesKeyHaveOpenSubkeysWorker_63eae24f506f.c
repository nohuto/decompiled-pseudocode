__int64 __fastcall CmpDoesKeyHaveOpenSubkeysWorker(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 1LL;
  ++*(_DWORD *)(a2 + 8);
  return result;
}
