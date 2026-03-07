__int64 __fastcall RawQueryFileSystemInformation(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v4; // rax
  NTSTATUS v6; // ebx
  _QWORD *v7; // r15
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // esi
  char *PoolWithTag; // rdi
  IRP *v13; // rax
  unsigned int v14; // eax
  int v15; // eax
  struct _KEVENT Event; // [rsp+50h] [rbp-29h] BYREF
  __int128 v18; // [rsp+68h] [rbp-11h] BYREF
  LARGE_INTEGER v19[2]; // [rsp+78h] [rbp-1h] BYREF
  SIZE_T NumberOfBytes; // [rsp+88h] [rbp+Fh]

  NumberOfBytes = 0LL;
  v4 = *(unsigned int *)(a2 + 8);
  memset(&Event, 0, sizeof(Event));
  v18 = 0LL;
  *(_OWORD *)&v19[0].LowPart = 0LL;
  if ( (unsigned int)v4 >= 9 )
  {
    v7 = *(_QWORD **)(a1 + 24);
    memset(v7, 0, v4);
    v6 = RawPerformDevIoCtrl(v8, *(struct _DEVICE_OBJECT **)(a3 + 184), v9, v10, v19);
    if ( v6 >= 0 )
    {
      v11 = HIDWORD(NumberOfBytes);
      if ( HIDWORD(NumberOfBytes) >= 0x18 )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)1025, HIDWORD(NumberOfBytes), 0x62574152u);
        if ( PoolWithTag )
        {
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v13 = (IRP *)IopBuildSynchronousFsdRequest(
                         3u,
                         *(_QWORD *)(a3 + 184),
                         PoolWithTag,
                         v11,
                         0LL,
                         (__int64)&Event,
                         (__int64)&v18);
          if ( v13 )
          {
            v13->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
            v6 = IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 184), v13);
            if ( v6 == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              v6 = v18;
            }
            if ( v6 >= 0 )
            {
              if ( *((_DWORD *)PoolWithTag + 4) == 1397904198
                && (v14 = *((unsigned __int16 *)PoolWithTag + 10), v14 <= v11)
                && (unsigned __int16)v14 >= 0x18u
                && (unsigned __int16)RawComputeFileSystemInformationChecksum((__int64)PoolWithTag) == *((_WORD *)PoolWithTag + 11) )
              {
                if ( PoolWithTag[3] == 82 && PoolWithTag[4] == 101 && PoolWithTag[5] == 70 && PoolWithTag[6] == 83 )
                {
                  v15 = v6;
                  if ( !PoolWithTag[7] )
                    v15 = -1073741637;
                  v6 = v15;
                }
                *v7 = *(_QWORD *)(PoolWithTag + 3);
                *(_QWORD *)(a1 + 56) = 9LL;
              }
              else
              {
                v6 = -1073741637;
              }
            }
          }
          else
          {
            v6 = -1073741670;
          }
          ExFreePoolWithTag(PoolWithTag, 0);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
      else
      {
        return (unsigned int)-1073741637;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return (unsigned int)v6;
}
