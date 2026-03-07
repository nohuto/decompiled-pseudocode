void __fastcall _CleanupUnneededSystemCursorSizes(int a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  struct tagCURSOR *v4; // rcx
  struct tagCURSOR *DPICursor; // rax
  struct tagCURSOR *v6; // rcx
  struct tagCURSOR *v7; // rdi
  __int64 ProcessWin32Process; // rax

  v1 = 0LL;
  v3 = 19LL;
  do
  {
    v4 = *(struct tagCURSOR **)(v1 + gasyscur[0] + 8);
    if ( v4 )
    {
      DPICursor = FindDPICursor(v4, a1);
      v7 = DPICursor;
      if ( DPICursor )
      {
        if ( DPICursor != v6 )
        {
          ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
          if ( ProcessWin32Process )
            ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
          FixupGlobalCursor(v7, ProcessWin32Process);
          _DestroyCursor(v7, 0);
        }
      }
    }
    v1 += 552LL;
    --v3;
  }
  while ( v3 );
}
