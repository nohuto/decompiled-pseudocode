__int64 __fastcall DefaultGetCounterResolution(int a1, _DWORD *a2)
{
  __int64 result; // rax

  result = a1 != 0 ? 0xC000000D : 0;
  *a2 = a1 == 0 ? 0x20 : 0;
  return result;
}
