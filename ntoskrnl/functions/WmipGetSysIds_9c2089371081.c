__int64 __fastcall WmipGetSysIds(_QWORD *a1, _DWORD *a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD *v7; // rdi
  int SMBiosStructure; // edi
  __int64 v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rax
  void *v12; // rsi
  __int64 result; // rax
  __int64 v14; // r14
  __int64 v15; // rdi
  _OWORD *Pool2; // rax
  _BYTE v17[4]; // [rsp+30h] [rbp-58h] BYREF
  int v18; // [rsp+34h] [rbp-54h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-50h] BYREF
  int v20; // [rsp+40h] [rbp-48h]
  unsigned int NumberOfBytes; // [rsp+44h] [rbp-44h] BYREF
  _QWORD NumberOfBytes_4[8]; // [rsp+48h] [rbp-40h] BYREF

  v7 = a1;
  NumberOfBytes_4[0] = 0LL;
  NumberOfBytes = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( !WmipSysIdRead )
  {
    if ( (int)WmipFindSysIdTable(NumberOfBytes_4, v17, &NumberOfBytes) < 0 )
    {
      BaseAddress = 0LL;
      NumberOfBytes_4[0] = 0LL;
      NumberOfBytes = 0;
      SMBiosStructure = WmipFindSMBiosStructure(1, NumberOfBytes_4, &BaseAddress, &NumberOfBytes);
      v20 = SMBiosStructure;
      if ( SMBiosStructure >= 0 )
      {
        WmipSysId1394 = 0LL;
        WmipSysId1394Count = 0;
        v15 = NumberOfBytes_4[0];
        if ( *(_BYTE *)(NumberOfBytes_4[0] + 1LL) <= 8u )
        {
          WmipSysIdUuid = 0LL;
          WmipSysIdUuidCount = 0;
        }
        else
        {
          Pool2 = (_OWORD *)ExAllocatePool2(256LL, 16LL, 1936289111LL);
          if ( Pool2 )
          {
            *Pool2 = *(_OWORD *)(v15 + 8);
            WmipSysIdUuidCount = 1;
            WmipSysIdUuid = (__int64)Pool2;
            v20 = 0;
          }
          else
          {
            ExFreePoolWithTag(0LL, 0);
            v20 = -1073741823;
          }
        }
        if ( BaseAddress )
          MmUnmapIoSpace(BaseAddress, NumberOfBytes);
        ExReleaseResourceLite(&WmipSMBiosLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        SMBiosStructure = v20;
      }
    }
    else
    {
      v18 = 0;
      LODWORD(BaseAddress) = 0;
      SMBiosStructure = WmipParseSysIdTable(
                          NumberOfBytes_4[0],
                          NumberOfBytes,
                          0,
                          (unsigned int)&v18,
                          0LL,
                          (__int64)&BaseAddress);
      if ( SMBiosStructure >= 0 )
      {
        v9 = (unsigned int)(16 * v18);
        v10 = v9 + 8 * (_DWORD)BaseAddress;
        if ( v10 )
        {
          v11 = ExAllocatePool2(256LL, v10, 1936289111LL);
          v12 = (void *)v11;
          if ( !v11 )
          {
            KeReleaseMutex(&WmipSMMutex, 0);
            return 3221225626LL;
          }
          v14 = v11 + v9;
          SMBiosStructure = WmipParseSysIdTable(
                              NumberOfBytes_4[0],
                              NumberOfBytes,
                              v11,
                              (unsigned int)&v18,
                              v14,
                              (__int64)&BaseAddress);
          if ( SMBiosStructure < 0 )
          {
            ExFreePoolWithTag(v12, 0);
          }
          else
          {
            WmipSysIdUuid = (__int64)v12;
            WmipSysIdUuidCount = v18;
            WmipSysId1394 = v14;
            WmipSysId1394Count = (int)BaseAddress;
          }
        }
      }
    }
    WmipSysIdRead = SMBiosStructure != -1073741670;
    WmipSysIdStatus = SMBiosStructure;
    v7 = a1;
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  result = (unsigned int)WmipSysIdStatus;
  if ( WmipSysIdStatus >= 0 )
  {
    *v7 = WmipSysIdUuid;
    *a2 = WmipSysIdUuidCount;
    *a3 = WmipSysId1394;
    *a4 = WmipSysId1394Count;
  }
  return result;
}
