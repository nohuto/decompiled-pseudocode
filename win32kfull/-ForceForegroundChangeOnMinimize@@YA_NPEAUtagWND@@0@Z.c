bool __fastcall ForceForegroundChangeOnMinimize(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // r8
  bool result; // al

  v3 = *((_QWORD *)a1 + 2);
  result = (*(_DWORD *)(v3 + 1272) & 0x40000) != 0
        && *(struct tagWND **)(v3 + 1432) == a1
        && (v4 = *(_QWORD *)(v3 + 432), v4 == gpqForeground)
        && *(struct tagWND **)(v4 + 128) == a1
        && (v5 = *(_QWORD *)(v3 + 1440)) != 0
        && *(_QWORD *)(v5 + 16) == gptiForeground
        && *(_QWORD *)(*((_QWORD *)a2 + 2) + 432LL) != gpqForeground
        && !CanForceForeground(*(const struct tagPROCESSINFO **)(v3 + 424));
  return result;
}
