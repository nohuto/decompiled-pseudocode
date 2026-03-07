void __fastcall PostUnownedNotification(struct tagWND *a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ecx

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
  {
    if ( gpqForeground && *(struct tagWND **)(gpqForeground + 128LL) == a1 )
    {
      v1 = *(_QWORD *)a1;
      v2 = 26;
    }
    else
    {
      v1 = *(_QWORD *)a1;
      v2 = 29;
    }
    PostIAMShellHookMessage(v2, v1);
  }
}
