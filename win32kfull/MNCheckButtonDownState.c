/*
 * XREFs of MNCheckButtonDownState @ 0x1C0219454
 * Callers:
 *     xxxCallHandleMenuMessages @ 0x1C0219674 (xxxCallHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 * Callees:
 *     UnlockMFMWFPWindow @ 0x1C02195D4 (UnlockMFMWFPWindow.c)
 */

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
