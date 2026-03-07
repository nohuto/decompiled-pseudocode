__int64 __fastcall NtUserGetPointerDeviceCursors(__int64 a1, unsigned int *a2, volatile void *a3)
{
  unsigned int *v4; // rdi
  int v6; // ecx
  __int64 v7; // rsi
  int PointerDeviceCursors; // ebx
  unsigned int *v9; // rax
  __int64 v10; // rcx
  __int64 v12[7]; // [rsp+40h] [rbp-38h] BYREF
  char v13; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+98h] [rbp+20h]

  v4 = a2;
  v12[0] = 0LL;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v13);
  if ( !a1 || !v4 )
  {
    v6 = 87;
    goto LABEL_21;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, v12, 0LL) )
  {
    v6 = 6;
LABEL_21:
    PointerDeviceCursors = 0;
    UserSetLastError(v6);
    goto LABEL_22;
  }
  v7 = *(unsigned int *)(v12[0] + 1036);
  if ( a3 )
  {
    v9 = v4;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v9 = (unsigned int *)MmUserProbeAddress;
    v14 = *v9;
    if ( v14 >= (unsigned int)v7 )
    {
      ProbeForWrite(a3, 8 * v7, 8u);
      PointerDeviceCursors = GetPointerDeviceCursors(v12[0], v7, (__int64)a3);
      if ( PointerDeviceCursors )
      {
        if ( (unsigned __int64)v4 >= MmUserProbeAddress )
          v4 = (unsigned int *)MmUserProbeAddress;
        *v4 = v7;
      }
    }
    else
    {
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (unsigned int *)MmUserProbeAddress;
      *v4 = v7;
      PointerDeviceCursors = 0;
      UserSetLastError(122);
    }
  }
  else
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    *v4 = v7;
    PointerDeviceCursors = 1;
  }
LABEL_22:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v13);
  UserSessionSwitchLeaveCrit(v10);
  return PointerDeviceCursors;
}
