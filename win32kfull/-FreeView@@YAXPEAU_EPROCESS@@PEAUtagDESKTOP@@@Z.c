void __fastcall FreeView(PRKPROCESS PROCESS, struct tagDESKTOP *a2)
{
  _QWORD *ProcessWin32Process; // rax
  _QWORD *v5; // rsi
  int v6; // ebp
  struct tagDESKTOP ***v7; // rsi
  struct tagDESKTOP **i; // rbx
  struct tagDESKTOP **j; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  if ( PROCESS )
  {
    ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(PROCESS);
    v5 = ProcessWin32Process;
    if ( ProcessWin32Process )
    {
      if ( *ProcessWin32Process )
      {
        memset(&ApcState, 0, sizeof(ApcState));
        if ( (unsigned int)PsGetProcessSessionId(PROCESS) == *(_DWORD *)a2 )
        {
          v6 = 0;
        }
        else
        {
          KeStackAttachProcess(PROCESS, &ApcState);
          v6 = 1;
        }
        v7 = (struct tagDESKTOP ***)(v5 + 87);
        for ( i = *v7; i; i = (struct tagDESKTOP **)*i )
        {
          if ( i[1] == a2 )
          {
            PsGetProcessSessionId(PROCESS);
            MmUnmapViewOfSection(PROCESS, i[2]);
            for ( j = *v7; j; j = (struct tagDESKTOP **)*j )
            {
              if ( j == i )
                break;
              v7 = (struct tagDESKTOP ***)j;
            }
            *v7 = (struct tagDESKTOP **)*i;
            Win32FreePool(i);
            break;
          }
        }
        if ( v6 )
          KeUnstackDetachProcess(&ApcState);
      }
    }
  }
}
