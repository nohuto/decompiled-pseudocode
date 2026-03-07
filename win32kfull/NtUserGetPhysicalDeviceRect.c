__int64 __fastcall NtUserGetPhysicalDeviceRect(__int64 a1, _OWORD *a2, __int64 a3)
{
  int v5; // ebx
  int v6; // ecx
  _BYTE *v7; // rdx
  __int64 v8; // rcx
  char v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  v11 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v10);
  if ( !a1 || !a2 )
  {
    v6 = 87;
    goto LABEL_9;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v11, 0LL) )
  {
    v6 = 6;
LABEL_9:
    UserSetLastError(v6);
    goto LABEL_10;
  }
  v7 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v7 = (_BYTE *)MmUserProbeAddress;
  *v7 = *v7;
  v7[15] = v7[15];
  *a2 = *(_OWORD *)(v11 + 140);
  v5 = 1;
LABEL_10:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v10);
  UserSessionSwitchLeaveCrit(v8);
  return v5;
}
