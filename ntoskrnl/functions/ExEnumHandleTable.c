__int64 __fastcall ExEnumHandleTable(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, signed __int64 *, _QWORD, __int64),
        __int64 a3,
        _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 v9; // si
  signed __int64 *NextHandleTableEntry; // rdi
  signed __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // r9
  _QWORD v15[7]; // [rsp+30h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v15[0] = 0LL;
  --CurrentThread->KernelApcDisable;
  v9 = 0;
  NextHandleTableEntry = (signed __int64 *)ExpGetNextHandleTableEntry(a1, 0LL, v15);
  if ( !NextHandleTableEntry )
    goto LABEL_13;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        _m_prefetchw(NextHandleTableEntry);
        v11 = *NextHandleTableEntry;
        if ( (*NextHandleTableEntry & 1) != 0 )
          break;
        if ( !v11 )
        {
          v12 = v15[0];
          goto LABEL_5;
        }
        ExpBlockOnLockedHandleEntry(a1, NextHandleTableEntry, v11);
      }
    }
    while ( v11 != _InterlockedCompareExchange64(NextHandleTableEntry, v11 - 1, v11) );
    v12 = v15[0];
    v9 = a2(a1, NextHandleTableEntry, v15[0], a3);
    if ( v9 )
      break;
LABEL_5:
    v13 = v12 + 4;
    if ( (v12 ^ (unsigned __int64)(v12 + 4)) >= 0x400 )
      NextHandleTableEntry = (signed __int64 *)ExpLookupHandleTableEntry(a1, v12 + 8);
    else
      NextHandleTableEntry += 2;
    v15[0] = v13;
    if ( !NextHandleTableEntry )
      goto LABEL_13;
  }
  if ( a4 )
    *a4 = v12;
LABEL_13:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v9;
}
