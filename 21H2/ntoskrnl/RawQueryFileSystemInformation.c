/*
 * XREFs of RawQueryFileSystemInformation @ 0x14090FA38
 * Callers:
 *     RawUserFsCtrl @ 0x14076E0B8 (RawUserFsCtrl.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopBuildSynchronousFsdRequest @ 0x1406A8BE0 (IopBuildSynchronousFsdRequest.c)
 *     RawPerformDevIoCtrl @ 0x14090F494 (RawPerformDevIoCtrl.c)
 *     RawComputeFileSystemInformationChecksum @ 0x14090F9E4 (RawComputeFileSystemInformationChecksum.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RawQueryFileSystemInformation(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v4; // rax
  NTSTATUS Status; // ebx
  _QWORD *v7; // r15
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  size_t v11; // rsi
  PVOID PoolWithTag; // rax
  __int64 v13; // rdi
  IRP *v14; // rax
  unsigned int v15; // eax
  int v16; // eax
  struct _KEVENT Event; // [rsp+50h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK v19; // [rsp+68h] [rbp-11h] BYREF
  LARGE_INTEGER v20[2]; // [rsp+78h] [rbp-1h] BYREF
  SIZE_T NumberOfBytes; // [rsp+88h] [rbp+Fh]
  __int64 retaddr; // [rsp+D8h] [rbp+5Fh]

  NumberOfBytes = 0LL;
  v4 = *(unsigned int *)(a2 + 8);
  memset(&Event, 0, sizeof(Event));
  v19 = 0LL;
  *(_OWORD *)&v20[0].LowPart = 0LL;
  if ( (unsigned int)v4 >= 9 )
  {
    v7 = *(_QWORD **)(a1 + 24);
    memset(v7, 0, v4);
    Status = RawPerformDevIoCtrl(v8, *(struct _DEVICE_OBJECT **)(a3 + 176), v9, v10, v20);
    if ( Status >= 0 )
    {
      v11 = HIDWORD(NumberOfBytes);
      if ( HIDWORD(NumberOfBytes) >= 0x18 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, HIDWORD(NumberOfBytes), 0x62574152u);
        v13 = (__int64)PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v11);
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v14 = IopBuildSynchronousFsdRequest(3u, *(_QWORD *)(a3 + 176), (void *)v13, v11, 0LL, &Event, &v19, retaddr);
          if ( v14 )
          {
            v14->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
            Status = IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 176), v14);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = v19.Status;
            }
            if ( Status >= 0 )
            {
              if ( *(_DWORD *)(v13 + 16) == 1397904198
                && (v15 = *(unsigned __int16 *)(v13 + 20), v15 <= (unsigned int)v11)
                && (unsigned __int16)v15 >= 0x18u
                && (unsigned __int16)RawComputeFileSystemInformationChecksum(v13) == *(_WORD *)(v13 + 22) )
              {
                if ( *(_BYTE *)(v13 + 3) == 82
                  && *(_BYTE *)(v13 + 4) == 101
                  && *(_BYTE *)(v13 + 5) == 70
                  && *(_BYTE *)(v13 + 6) == 83 )
                {
                  v16 = Status;
                  if ( !*(_BYTE *)(v13 + 7) )
                    v16 = -1073741637;
                  Status = v16;
                }
                *v7 = *(_QWORD *)(v13 + 3);
                *(_QWORD *)(a1 + 56) = 9LL;
              }
              else
              {
                Status = -1073741637;
              }
            }
          }
          else
          {
            Status = -1073741670;
          }
          ExFreePoolWithTag((PVOID)v13, 0);
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
  return (unsigned int)Status;
}
