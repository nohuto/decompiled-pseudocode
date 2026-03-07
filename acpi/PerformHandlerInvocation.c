__int64 __fastcall PerformHandlerInvocation(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  char v11; // bl
  int v12; // esi
  int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // ecx
  struct _KEVENT Event; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v18[8]; // [rsp+58h] [rbp-1h] BYREF

  memset(&Event, 0, sizeof(Event));
  memset(v18, 0, sizeof(v18));
  v18[1] = *(_QWORD *)(a3 + 56);
  LODWORD(v18[0]) = a1;
  if ( a4 )
  {
    v11 = 0;
  }
  else
  {
    v11 = 1;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    *(_QWORD *)(a2 + 80) = &Event;
  }
  _InterlockedExchange((volatile __int32 *)(a2 + 44), 0);
  if ( a1 )
  {
    v12 = a1 - 2;
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        v18[2] = *(_QWORD *)(a2 + 32);
        v18[3] = GenericDeviceFirmwareLockCompletion;
        v18[4] = a2;
      }
    }
    else
    {
      if ( a7 )
      {
        v13 = 0;
        if ( a7 != 0xFFFF )
          v13 = a7;
        LODWORD(v18[3]) = v13;
      }
      else
      {
        LODWORD(v18[3]) = 1;
      }
      v18[2] = *(_QWORD *)(a2 + 32);
      v18[4] = GenericDeviceFirmwareLockCompletion;
      v18[5] = a2;
    }
  }
  else
  {
    v18[2] = a5;
    LODWORD(v18[3]) = a6;
    v18[4] = *(_QWORD *)(a2 + 72);
    v14 = *(_QWORD *)(a2 + 88);
    v18[7] = a2;
    v18[5] = v14 + 40;
    v18[6] = AcceptDeviceFirmwareLockCompletion;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD *))(a3 + 48))(v18);
  if ( v11 == 1 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    *(_QWORD *)(a2 + 80) = 0LL;
    return 3221225494LL;
  }
  else if ( v15 == 259 )
  {
    if ( (_InterlockedExchange((volatile __int32 *)(a2 + 44), 1) & 1) != 0 )
      return (unsigned int)-1073741802;
    return v15;
  }
  else
  {
    *(_DWORD *)(a2 + 40) = v15;
    return 3221225494LL;
  }
}
