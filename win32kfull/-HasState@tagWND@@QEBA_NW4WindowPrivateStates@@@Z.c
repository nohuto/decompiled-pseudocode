bool __fastcall tagWND::HasState(__int64 a1, int a2)
{
  return (a2 & *(_DWORD *)(a1 + 320)) == a2;
}
