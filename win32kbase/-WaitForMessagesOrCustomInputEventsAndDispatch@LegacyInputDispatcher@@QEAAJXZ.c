NTSTATUS __fastcall LegacyInputDispatcher::WaitForMessagesOrCustomInputEventsAndDispatch(LegacyInputDispatcher *this)
{
  NTSTATUS result; // eax
  unsigned int v3; // edx
  unsigned int v4; // ecx

  if ( !*((_QWORD *)this + 2) )
    return -1073741790;
  **((_QWORD **)this + 2) = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1456);
  while ( 1 )
  {
    result = KeWaitForMultipleObjects(
               *((_DWORD *)this + 12),
               *((PVOID **)this + 2),
               WaitAny,
               WrUserRequest,
               *((_BYTE *)this + 56),
               *((_BYTE *)this + 57),
               0LL,
               *((PKWAIT_BLOCK *)this + 3));
    if ( result < 0 )
      break;
    if ( !result )
    {
      result = *((_DWORD *)this + 15);
      break;
    }
    v3 = *((_DWORD *)this + 10);
    v4 = *((_DWORD *)this + 13);
    if ( v3 >= v4 )
    {
LABEL_8:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3093);
      v3 = 0;
    }
    else
    {
      while ( *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v3) != *(_QWORD *)(*((_QWORD *)this + 2)
                                                                         + 8LL * (unsigned int)result) )
      {
        if ( ++v3 >= v4 )
          goto LABEL_8;
      }
    }
    LegacyInputDispatcher::Dispatch(this, v3);
  }
  *((_DWORD *)this + 12) = 1;
  return result;
}
