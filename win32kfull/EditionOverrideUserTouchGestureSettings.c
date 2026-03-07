__int64 __fastcall EditionOverrideUserTouchGestureSettings(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  GetLocalMachineRegistryDWORDValues(a1, L"\\Software\\Microsoft\\Wisp\\Touch", a1);
  GetLocalMachineRegistryDWORDValues(v4, L"\\Software\\Microsoft\\Wisp\\Touch", a1 + 96);
  return GetLocalMachineRegistryDWORDValues(v5, L"\\Software\\Microsoft\\Wisp\\MultiTouch", a2);
}
