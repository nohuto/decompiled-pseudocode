char __fastcall IsWindowGhosted(const struct tagWND *a1)
{
  char v2; // bl

  if ( **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) == *(_WORD *)(gpsi + 900LL) )
    return 0;
  v2 = 1;
  if ( !GetProp(a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL) && !GetProp(a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) )
    return 0;
  return v2;
}
