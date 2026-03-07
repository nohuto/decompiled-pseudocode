__int64 __fastcall WdipSemUpdateFrequentScenarioTable(struct _SLIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // ebx
  PSLIST_ENTRY v4; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C32868, 0LL);
  if ( a1 )
  {
    if ( (unsigned int)dword_140C32860 < 0x80 )
    {
      v4 = WdipSemFastAllocate(5, 0x18u);
      if ( v4 )
      {
        *v4 = *a1;
        v4[1].Next = a1[1].Next;
        WdipSemFrequentScenarioTable[dword_140C32860++] = v4;
      }
      else
      {
        v3 = -1073741670;
      }
    }
    else
    {
      v3 = -1073741823;
    }
  }
  else
  {
    v3 = -1073741811;
  }
  ExReleasePushLockEx((__int64 *)&qword_140C32868, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
