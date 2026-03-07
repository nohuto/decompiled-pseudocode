__int64 __fastcall NtUserPromotePointer(int a1, unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // ebx

  EnterCrit(0LL, 0LL);
  if ( !a1 || HIWORD(a1) || (unsigned __int16)a1 == 1 )
    goto LABEL_15;
  if ( (a2 & 0xFFFFFF) != 0 )
  {
    if ( (a2 & 0xFFFFFF) != 0x10001
      && (a2 & 0xFFFFFF) != 0x10002
      && (a2 & 0xFFFFFF) != 0x20001
      && (a2 & 0xFFFFFF) != 0x20002
      && (a2 & 0xFFFFFF) != 0x40001
      && (a2 & 0xFFFFFF) != 0x40002
      && (a2 & 0xFFFFFF) - 524289 >= 2 )
    {
      goto LABEL_15;
    }
  }
  else if ( a2 )
  {
LABEL_15:
    v5 = 0;
    UserSetLastError(87);
    goto LABEL_16;
  }
  v5 = xxxPromotePointerToMouse(a1, a2);
  if ( !v5 )
    goto LABEL_15;
LABEL_16:
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
