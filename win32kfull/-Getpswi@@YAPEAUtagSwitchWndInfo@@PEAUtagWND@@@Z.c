struct tagSwitchWndInfo *__fastcall Getpswi(struct tagWND *a1)
{
  __int64 v2; // r9
  struct tagSwitchWndInfo *result; // rax
  __int64 v4; // r10

  v2 = safe_cast_fnid_to_PSWITCHWND((__int64)a1);
  result = 0LL;
  if ( v2 )
  {
    v4 = *((_QWORD *)a1 + 5);
    if ( *(unsigned int *)(v4 + 248) + 328LL == *(unsigned __int16 *)(gpsi + 340LL) && *(char *)(v4 + 19) >= 0 )
      return *(struct tagSwitchWndInfo **)(v2 + 8);
  }
  return result;
}
