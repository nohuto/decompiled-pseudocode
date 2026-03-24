/*
 * XREFs of _EnumClipboardFormats @ 0x1C015FC90
 * Callers:
 *     <none>
 * Callees:
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C002FA10 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00304E8 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall EnumClipboardFormats(unsigned int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  struct tagWINDOWSTATION *v4; // rdi
  __int64 v5; // r8
  unsigned int *v6; // rcx
  struct tagCLIP *ClipFormat; // rax

  v2 = 0;
  v4 = CheckClipboardAccess();
  if ( v4 )
  {
    if ( *((_QWORD *)v4 + 10) == gptiCurrent )
    {
      v6 = (unsigned int *)*((_QWORD *)v4 + 16);
      if ( v6 )
      {
        if ( !a1 )
          goto LABEL_7;
        ClipFormat = FindClipFormat(v4, a1, 1);
        if ( ClipFormat )
        {
          v6 = (unsigned int *)((char *)ClipFormat + 32);
LABEL_7:
          if ( v6 )
          {
            if ( (unsigned __int64)v6 < *((_QWORD *)v4 + 16) + 32 * (unsigned __int64)*((unsigned int *)v4 + 34) )
              return *v6;
          }
        }
      }
      return v2;
    }
    UserSetLastError(1418LL, v3, v5);
  }
  return 0LL;
}
