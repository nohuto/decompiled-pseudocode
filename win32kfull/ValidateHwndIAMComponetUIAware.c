__int64 __fastcall ValidateHwndIAMComponetUIAware(__int64 a1)
{
  __int64 v2; // rdi
  __int64 *ThreadWin32Thread; // rax
  int v4; // esi
  const struct tagWND *v5; // rbx
  struct _LIST_ENTRY *i; // rcx
  struct tagWND *Host; // rax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  if ( !IS_USERCRIT_OWNED_AT_ALL() )
  {
    LODWORD(v9) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  }
  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  v4 = *(_DWORD *)(v2 + 1548);
  *(_DWORD *)(v2 + 1548) = 0;
  v5 = (const struct tagWND *)ValidateHwnd(a1);
  for ( i = gIAMThreadList.Flink; i != &gIAMThreadList; i = i->Flink )
  {
    if ( i[1].Flink == (struct _LIST_ENTRY *)gptiCurrent )
    {
      if ( i && i[1].Blink == *(struct _LIST_ENTRY **)(gptiCurrent + 456LL) )
        goto LABEL_15;
      break;
    }
  }
  if ( !v5
    || (*((_DWORD *)v5 + 80) & 0x1000) == 0
    || (v9 = 0LL, !CWindowProp::GetProp<CoreWindowProp>((__int64)v5, &v9))
    || !*(_DWORD *)(v9 + 28)
    || (Host = CoreWindowProp::GetHost(v5)) == 0LL
    || *(_QWORD *)(*((_QWORD *)Host + 2) + 424LL) != *(_QWORD *)(gptiCurrent + 424LL) )
  {
    *(_DWORD *)(v2 + 1548) = v4;
    return ValidateHwnd(a1);
  }
LABEL_15:
  *(_DWORD *)(v2 + 1548) = v4;
  return (__int64)v5;
}
