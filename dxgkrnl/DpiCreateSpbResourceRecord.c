__int64 __fastcall DpiCreateSpbResourceRecord(__int64 a1, __int64 a2, struct _EX_RUNDOWN_REF **a3)
{
  __int64 Pool2; // rax
  struct _EX_RUNDOWN_REF *v7; // rbx
  unsigned int v8; // ebx
  __int64 result; // rax
  PKEVENT NotificationEvent; // rax
  struct _EX_RUNDOWN_REF **v11; // rcx

  Pool2 = ExAllocatePool2(256LL, 72LL, 1953656900LL);
  v7 = (struct _EX_RUNDOWN_REF *)Pool2;
  if ( !Pool2 )
  {
    v8 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    return v8;
  }
  *(_DWORD *)(Pool2 + 16) = 1953656900;
  *(_DWORD *)(Pool2 + 20) = 12;
  *(_QWORD *)(Pool2 + 32) = a1;
  *(_QWORD *)(Pool2 + 40) = a2;
  *(_DWORD *)(Pool2 + 48) = 1;
  NotificationEvent = IoCreateNotificationEvent(0LL, (PHANDLE)(Pool2 + 56));
  v7[8].Count = (ULONG_PTR)NotificationEvent;
  if ( !NotificationEvent )
  {
    v8 = -1073741670;
    WdLogSingleEntry1(2LL, -1073741670LL);
    ExFreePoolWithTag(a3, 0);
    return v8;
  }
  ExInitializeRundownProtection(v7 + 3);
  v11 = *(struct _EX_RUNDOWN_REF ***)(a1 + 2712);
  if ( *v11 != (struct _EX_RUNDOWN_REF *)(a1 + 2704) )
    __fastfail(3u);
  v7->Count = a1 + 2704;
  v7[1].Count = (ULONG_PTR)v11;
  *v11 = v7;
  *(_QWORD *)(a1 + 2712) = v7;
  result = 0LL;
  *a3 = v7;
  return result;
}
