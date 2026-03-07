__int64 __fastcall EtwpCovSampEnumerateProcess(PRKPROCESS PROCESS)
{
  int v1; // r14d
  void *v2; // rdi
  _QWORD *v4; // rax
  unsigned __int64 *v5; // rsi
  unsigned __int64 v6; // r10
  __int64 v7; // rcx
  unsigned __int64 v8; // r10
  _QWORD v10[7]; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int64 v11; // [rsp+68h] [rbp-11h]
  UNICODE_STRING FullImageName; // [rsp+70h] [rbp-9h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v13; // [rsp+80h] [rbp+7h] BYREF

  v1 = 0;
  memset(v10, 0, sizeof(v10));
  v2 = 0LL;
  memset(&v13, 0, sizeof(v13));
  v11 = 0LL;
  FullImageName = 0LL;
  if ( PROCESS == PsInitialSystemProcess )
    return 0LL;
  if ( PROCESS == KeGetCurrentThread()->ApcState.Process )
    goto LABEL_5;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink) )
  {
    KiStackAttachProcess(PROCESS, 0, (__int64)&v13);
    v1 = 1;
LABEL_5:
    v4 = MmEnumerateAddressSpaceAndReferenceImages(PROCESS, 1);
    v2 = v4;
    if ( v4 )
    {
      LODWORD(v10[2]) |= 0x400u;
      v5 = v4;
      v10[1] = 56LL;
      v6 = *v4;
      if ( *v4 )
      {
        v7 = v10[0];
        do
        {
          if ( (v6 & 3) == 0 )
          {
            v8 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
            *v5 = v8;
            v11 = v8;
            v10[3] = v5[1] & 0xFFFFFFFFFFFF0000uLL;
            v10[5] = v5[3];
            if ( FltMgrCallbacks
              && (*(int (__fastcall **)(unsigned __int64, __int64, UNICODE_STRING *, _QWORD *))(FltMgrCallbacks + 24))(
                   v8,
                   1024LL,
                   &FullImageName,
                   v10) >= 0 )
            {
              EtwpCovSampImageNotify(&FullImageName, PROCESS[1].Header.WaitListHead.Flink, (char *)&v10[2]);
            }
            v7 = v10[0];
          }
          if ( v7 )
          {
            (*(void (**)(void))(FltMgrCallbacks + 32))();
            v7 = 0LL;
            v10[0] = 0LL;
          }
          v5 += 6;
          v6 = *v5;
        }
        while ( *v5 );
      }
    }
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v1 )
  {
    KiUnstackDetachProcess(&v13);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink);
  }
  return 0LL;
}
