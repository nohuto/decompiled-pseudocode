__int64 __fastcall MNCheckButtonDownState(__int64 a1)
{
  bool v2; // cf
  __int64 result; // rax

  v2 = (_GetKeyState(*(unsigned int *)(a1 + 76)) & 0x8000u) != 0LL;
  result = *(_DWORD *)(a1 + 8) & 0xFFFFFFF7;
  *(_DWORD *)(a1 + 8) = result | (v2 ? 8 : 0);
  if ( !(result & 8 | (v2 ? 8 : 0)) )
  {
    *(_DWORD *)(a1 + 8) = result & 0xFFFFDF7F | (v2 ? 8 : 0);
    return UnlockMFMWFPWindow(a1 + 64);
  }
  return result;
}
