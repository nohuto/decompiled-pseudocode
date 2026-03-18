/*
 * XREFs of NtUserPromotePointer @ 0x1C01D8B70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     xxxPromotePointerToMouse @ 0x1C01C4FF8 (xxxPromotePointerToMouse.c)
 */

__int64 __fastcall NtUserPromotePointer(int a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9

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
    v6 = 0;
    UserSetLastError(87);
    goto LABEL_16;
  }
  v6 = xxxPromotePointerToMouse(a1, a2);
  if ( !v6 )
    goto LABEL_15;
LABEL_16:
  UserSessionSwitchLeaveCrit(v5, v4, v7, v8);
  return v6;
}
