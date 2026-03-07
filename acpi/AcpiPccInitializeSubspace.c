__int64 __fastcall AcpiPccInitializeSubspace(char *DeferredContext)
{
  char v2; // cl
  unsigned int v3; // ebx
  unsigned int v4; // ebp
  int MemoryCachingRequirements; // eax
  int v6; // ecx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  bool v9; // sf
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // esi
  int v13; // eax
  __int64 v14; // rax
  int v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = DeferredContext[88];
  v16 = 0;
  if ( v2 == 1 )
  {
    if ( (unsigned __int8)DeferredContext[91] > 0x20u )
    {
LABEL_18:
      v12 = -1073741823;
      *((_DWORD *)DeferredContext + 1) = *((_DWORD *)DeferredContext + 1) & 0xFFFFFFE1 | 2;
      return (unsigned int)v12;
    }
  }
  else if ( v2 )
  {
    goto LABEL_18;
  }
  if ( (*((_QWORD *)DeferredContext + 9) & *((_QWORD *)DeferredContext + 8)) != 0LL )
    goto LABEL_18;
  v3 = 516;
  v4 = 4;
  if ( !v2 )
  {
    MemoryCachingRequirements = HalGetMemoryCachingRequirements(
                                  *(_QWORD *)(DeferredContext + 92),
                                  (unsigned __int64)(unsigned __int8)DeferredContext[91] >> 3,
                                  &v16);
    v6 = v16;
    v7 = 516LL;
    v8 = (unsigned __int8)DeferredContext[91];
    v9 = MemoryCachingRequirements < 0;
    v10 = *(_QWORD *)(DeferredContext + 92);
    if ( v9 )
      v6 = 0;
    *((_QWORD *)DeferredContext + 10) = v10;
    v16 = v6;
    if ( v6 == 1 )
      v7 = 4LL;
    v11 = MmMapIoSpaceEx(v10, v8 >> 3, v7);
    *(_QWORD *)(DeferredContext + 92) = v11;
    if ( !v11 )
      goto LABEL_18;
  }
  v12 = HalGetMemoryCachingRequirements(
          *((_QWORD *)DeferredContext + 13),
          *((unsigned int *)DeferredContext + 28),
          &v16);
  if ( v12 >= 0 )
  {
    v13 = v16;
  }
  else
  {
    v13 = 0;
    v12 = 0;
    v16 = 0;
  }
  if ( v13 == 1 )
    v3 = 4;
  v14 = MmMapIoSpaceEx(*((_QWORD *)DeferredContext + 13), *((unsigned int *)DeferredContext + 28), v3);
  if ( !v14 )
    goto LABEL_18;
  *((_QWORD *)DeferredContext + 5) = v14;
  KeInitializeDpc((PRKDPC)DeferredContext + 9, (PKDEFERRED_ROUTINE)AcpiPccCallbackDpc, DeferredContext);
  KeSetImportanceDpc((PRKDPC)DeferredContext + 9, MediumHighImportance);
  KeInitializeDpc((PRKDPC)(DeferredContext + 368), (PKDEFERRED_ROUTINE)AcpiPccRingDoorbell, DeferredContext);
  KeSetImportanceDpc((PRKDPC)(DeferredContext + 368), MediumHighImportance);
  if ( (unsigned __int8)AcpiPccInterruptSupported(DeferredContext) || *DeferredContext == -1 )
    v4 = 0;
  KeInitializeTimer2(DeferredContext + 440, AcpiPccWatchdog, DeferredContext, v4);
  KeInitializeTimer((PKTIMER)(DeferredContext + 304));
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 81);
  *((_QWORD *)DeferredContext + 30) = DeferredContext + 232;
  *((_QWORD *)DeferredContext + 29) = DeferredContext + 232;
  return (unsigned int)v12;
}
