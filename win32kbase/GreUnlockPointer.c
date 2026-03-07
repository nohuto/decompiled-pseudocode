__int64 __fastcall GreUnlockPointer(__int64 a1)
{
  __int64 result; // rax
  struct _ERESOURCE *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  result = EtwTraceGreLockReleaseSemaphore((__int64)L"pdo.hsemPointer()", *(_QWORD *)(a1 + 56));
  v3 = *(struct _ERESOURCE **)(a1 + 56);
  if ( v3 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v3);
    return PsLeavePriorityRegion(v5, v4);
  }
  return result;
}
