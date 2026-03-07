void __fastcall tagWND::RemoveState(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 320) &= ~a2;
}
