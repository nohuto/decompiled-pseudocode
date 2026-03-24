/*
 * XREFs of _SetThreadQueueMergeSetting @ 0x1C0206CA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01D288C (FindShellFrameThreadFromAssociation.c)
 */

__int64 __fastcall SetThreadQueueMergeSetting(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rsi

  v3 = a2;
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    v4 = 87LL;
  }
  else
  {
    v5 = PtiFromThreadId(a1);
    v7 = v5;
    if ( !v5 || (*(_DWORD *)(v5 + 1232) & 0x40000) != 0 )
    {
      v4 = 1444LL;
      goto LABEL_17;
    }
    v8 = *(_QWORD *)(v5 + 424);
    if ( v8 == PsGetCurrentProcessWin32Process(v6) )
    {
      if ( (unsigned int)IsImmersiveAppRestricted(v8) )
      {
        if ( (v3 & 1) != 0 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(v7 + 432) + 392LL) != 1
            || FindShellFrameThreadFromAssociation((struct tagTHREADINFO *)v7) )
          {
            v4 = 170LL;
            goto LABEL_17;
          }
          *(_DWORD *)(v7 + 488) |= 0xC0u;
        }
        else
        {
          *(_DWORD *)(v7 + 488) &= 0xFFFFFF3F;
        }
        return 1LL;
      }
      v4 = 50LL;
    }
    else
    {
      v4 = 5LL;
    }
  }
LABEL_17:
  UserSetLastError(v4, a2, a3);
  return 0LL;
}
