void AcpiRecordBlackboxInformationWorker()
{
  KIRQL v0; // r12
  char *v1; // rdx
  int v2; // edi
  unsigned int v3; // esi
  int v4; // eax
  int v5; // ecx
  _UNKNOWN **v6; // rax
  __int64 v7; // r15
  __int64 Pool2; // rax
  void *v9; // rbx
  __int64 v10; // r14
  char *v11; // rdi
  _UNKNOWN **i; // rax
  int v13; // eax
  unsigned __int64 v14; // rdx
  unsigned int v15; // ebp
  _QWORD InputBuffer[4]; // [rsp+30h] [rbp-48h] BYREF

  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiWatchdogLock);
  byte_1C00701C8 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
  v1 = (char *)glistCtxtHead - 16;
  v2 = 0;
  v3 = 0;
  if ( &glistCtxtHead != (_UNKNOWN **)glistCtxtHead )
  {
    do
    {
      v4 = 0;
      if ( v1[472] )
      {
        v5 = *((unsigned __int16 *)v1 + 220);
        ++v2;
        v4 = 24;
        if ( (_WORD)v5 )
          v4 = v5 + 26;
      }
      v3 += v4;
      v6 = (_UNKNOWN **)*((_QWORD *)v1 + 2);
      v1 = (char *)(v6 - 2);
    }
    while ( &glistCtxtHead != v6 );
  }
  v7 = v3 + 48;
  Pool2 = ExAllocatePool2(64LL, v7, 1114601537LL);
  v9 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 4) = 1;
    *(_DWORD *)Pool2 = v3 + 48;
    *(_DWORD *)(Pool2 + 20) = v2;
    *(_DWORD *)(Pool2 + 16) = AmliWatchdogAction;
    *(_QWORD *)(Pool2 + 8) = &gAcpiTriageInfo;
    if ( v2 )
    {
      v10 = Pool2 + 24;
      v11 = (char *)glistCtxtHead - 16;
      for ( i = (_UNKNOWN **)glistCtxtHead; &glistCtxtHead != i; v11 = (char *)(i - 2) )
      {
        if ( v11[472] )
        {
          v13 = *((unsigned __int16 *)v11 + 220);
          v14 = (MEMORY[0xFFFFF78000000008] - *((_QWORD *)v11 + 57)) / 0x2710uLL;
          v15 = v13 + 26;
          if ( v3 >= v13 + 26 )
          {
            if ( (_WORD)v13 )
            {
              *(_QWORD *)(v10 + 8) = *((_QWORD *)v11 + 54);
              *(_DWORD *)(v10 + 16) = v14;
              *(_DWORD *)v10 = v15;
              memmove((void *)(v10 + 20), *((const void **)v11 + 56), *((unsigned __int16 *)v11 + 220));
              *(_WORD *)(v10 + 2 * ((unsigned __int64)*((unsigned __int16 *)v11 + 220) >> 1) + 20) = 0;
              v10 += v15;
              v3 -= v15;
            }
          }
        }
        i = (_UNKNOWN **)*((_QWORD *)v11 + 2);
      }
    }
  }
  _InterlockedExchange(&dword_1C006E9C0, 0);
  KeReleaseSpinLock(&gmutCtxtList, byte_1C00701C8);
  KeReleaseSpinLock(&AcpiWatchdogLock, v0);
  InputBuffer[2] = 0LL;
  InputBuffer[3] = 3LL;
  InputBuffer[0] = v9;
  InputBuffer[1] = v7;
  ZwPowerInformation(TraceApplicationPowerMessage|0x40, InputBuffer, 0x20u, 0LL, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x426F7841u);
}
