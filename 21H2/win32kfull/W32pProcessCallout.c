/*
 * XREFs of W32pProcessCallout @ 0x1C00C4FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00C5360 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     AllocateW32Process @ 0x1C00C54A0 (AllocateW32Process.c)
 *     DereferenceW32ProcessEx @ 0x1C00C57DC (DereferenceW32ProcessEx.c)
 */

__int64 __fastcall W32pProcessCallout(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 ProcessWin32Process; // rbx
  bool v4; // r15
  bool IsCurrentProcessUmfdHost; // al
  int v6; // edx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  int W32Process; // eax
  char v16; // bp
  unsigned int CurrentProcessId; // eax
  __int64 v18; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rcx

  v1 = *a1;
  ProcessWin32Process = 0LL;
  v4 = 1;
  IsCurrentProcessUmfdHost = UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost();
  v6 = a1[1] & 1;
  if ( IsCurrentProcessUmfdHost )
  {
    if ( v6 )
    {
      W32Process = AllocateW32Process(v1);
      v8 = W32Process;
      if ( W32Process == 1073741851 )
      {
        v16 = 0;
      }
      else
      {
        v16 = 1;
        if ( W32Process < 0 )
          return (unsigned int)v8;
      }
      ProcessWin32Process = PsGetProcessWin32Process(v1);
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      LOBYTE(v18) = 1;
      *(_DWORD *)(ProcessWin32Process + 56) = CurrentProcessId & 0xFFFFFFFC;
      v8 = GdiProcessCallout(ProcessWin32Process, v18);
      if ( v8 >= 0 || !v16 )
        return (unsigned int)v8;
      v20 = ProcessWin32Process;
    }
    else
    {
      ThreadWin32Thread = PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, ThreadWin32Thread);
      v8 = GdiProcessCallout(0LL, 0LL);
      ProcessWin32Process = PsGetProcessWin32Process(v1);
      v20 = ProcessWin32Process;
    }
    vMarkFreeW32Process(v20);
    v13 = 0LL;
    goto LABEL_13;
  }
  if ( v6 )
  {
    v7 = AllocateW32Process(v1);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v4 = v7 != 1073741851;
      ProcessWin32Process = PsGetProcessWin32Process(v1);
      *(_DWORD *)(ProcessWin32Process + 56) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
      v9 = xxxUserProcessCallout(ProcessWin32Process, a1);
      v8 = v9;
      if ( v9 == 1073741851 )
        return 1073741851LL;
      if ( v9 >= 0 )
      {
        LOBYTE(v10) = 1;
        v8 = GdiProcessCallout(ProcessWin32Process, v10);
        if ( v8 < 0 )
        {
          xxxUserProcessCallout(ProcessWin32Process, 0LL);
        }
        else
        {
          LOBYTE(v14) = 1;
          v8 = DCompositionProcessCallout(ProcessWin32Process, v14);
          if ( v8 < 0 )
          {
            xxxUserProcessCallout(ProcessWin32Process, 0LL);
            GdiProcessCallout(ProcessWin32Process, 0LL);
          }
        }
      }
    }
  }
  else
  {
    ProcessWin32Process = PsGetProcessWin32Process(v1);
    v12 = PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v12 )
      PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, v12);
    xxxUserProcessCallout(ProcessWin32Process, 0LL);
    DCompositionProcessCallout(ProcessWin32Process, 0LL);
    GdiProcessCallout(ProcessWin32Process, 0LL);
    v8 = 0;
  }
  if ( (a1[1] & 1) == 0 || v8 < 0 )
  {
    if ( ProcessWin32Process )
    {
      GdiUnmapGDIW32PIDLockedBitmaps(ProcessWin32Process);
      if ( v4 )
      {
        vMarkFreeW32Process(ProcessWin32Process);
        v13 = 1LL;
LABEL_13:
        DereferenceW32ProcessEx(ProcessWin32Process, v13);
      }
    }
  }
  return (unsigned int)v8;
}
