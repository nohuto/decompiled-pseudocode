char __fastcall IsPumpingInputMsgs(const struct tagWND *a1)
{
  __int64 v1; // rsi
  char v3; // bl
  unsigned __int64 v4; // rdi
  __int64 *i; // rdx
  int v7; // eax

  v1 = *((_QWORD *)a1 + 2);
  v3 = 0;
  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !*(_DWORD *)(v1 + 1216)
    || (unsigned int)(v4 - *(_DWORD *)(v1 + 1216)) <= gdwHungAppTimeout
    || (unsigned int)PsGetThreadFreezeCount(*(_QWORD *)v1) )
  {
    return 1;
  }
  for ( i = *(__int64 **)(v1 + 1200); i; i = (__int64 *)*i )
  {
    v7 = *((_DWORD *)i + 4);
    if ( (const struct tagWND *)i[1] == a1 )
    {
      if ( !v7 || (unsigned int)(v4 - v7) <= gdwHungAppTimeout )
        return 1;
      return v3;
    }
    if ( v7 && (unsigned int)(v4 - v7) > gdwHungAppTimeout )
      return v3;
  }
  return v3;
}
