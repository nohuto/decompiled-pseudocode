__int64 __fastcall zzzWakeInputIdle(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  struct _KEVENT *v5; // rcx
  __int64 result; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v3 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v3 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  v4 = *(_QWORD *)(a1 + 424);
  if ( !*(_QWORD *)(v4 + 328) )
    *(_QWORD *)(v4 + 328) = a1;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 424) + 328LL) == a1 )
  {
    EtwTraceWakeInputIdle(0LL, a1);
    v5 = *(struct _KEVENT **)(v3 + 16);
    if ( v5 )
    {
      if ( v5 == (struct _KEVENT *)-1LL )
        goto LABEL_8;
      KeSetEvent(v5, 1, 0);
      ObfDereferenceObject(*(PVOID *)(v3 + 16));
    }
    *(_QWORD *)(v3 + 16) = -1LL;
  }
LABEL_8:
  result = *(unsigned int *)(v3 + 12);
  if ( (result & 4) != 0 )
  {
    *(_DWORD *)(v3 + 12) = result & 0xFFFFFFFB;
    return zzzCalcStartCursorHide(0LL, 0LL);
  }
  return result;
}
