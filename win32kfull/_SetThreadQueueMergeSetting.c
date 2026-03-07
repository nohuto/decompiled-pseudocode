__int64 __fastcall SetThreadQueueMergeSetting(__int64 a1, int a2)
{
  char v2; // di
  int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rcx

  v2 = a2;
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    v3 = 87;
  }
  else
  {
    v4 = PtiFromThreadId(a1);
    v6 = v4;
    if ( !v4 || (*(_DWORD *)(v4 + 1272) & 0x40000) != 0 )
    {
      v3 = 1444;
      goto LABEL_19;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v8 = *(_QWORD *)(v6 + 424);
    if ( v8 == CurrentProcessWin32Process )
    {
      if ( (unsigned int)IsImmersiveAppRestricted(v8) )
      {
        if ( (v2 & 1) != 0 )
        {
          if ( tagQ::AreMultipleThreadsAttached(*(tagQ **)(v6 + 432))
            || FindShellFrameThreadFromAssociation((struct tagTHREADINFO *)v6) )
          {
            v3 = 170;
            goto LABEL_19;
          }
          *(_DWORD *)(v6 + 488) |= 0xC0u;
        }
        else
        {
          *(_DWORD *)(v6 + 488) &= 0xFFFFFF3F;
        }
        return 1LL;
      }
      v3 = 50;
    }
    else
    {
      v3 = 5;
    }
  }
LABEL_19:
  UserSetLastError(v3);
  return 0LL;
}
