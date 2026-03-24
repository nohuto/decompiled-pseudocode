/*
 * XREFs of RawQueryFileSystemInformation @ 0x14090F8D8
 * Callers:
 *     RawUserFsCtrl @ 0x14076DEF8 (RawUserFsCtrl.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1403519C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1403538F0 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     IopBuildSynchronousFsdRequest @ 0x1406D1900 (IopBuildSynchronousFsdRequest.c)
 *     RawPerformDevIoCtrl @ 0x14090F334 (RawPerformDevIoCtrl.c)
 *     RawComputeFileSystemInformationChecksum @ 0x14090F884 (RawComputeFileSystemInformationChecksum.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RawQueryFileSystemInformation(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v4; // rax
  NTSTATUS v6; // ebx
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
  __int128 v19; // [rsp+68h] [rbp-11h] BYREF
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
    v6 = RawPerformDevIoCtrl(v8, *(struct _DEVICE_OBJECT **)(a3 + 176), v9, v10, v20);
    if ( v6 >= 0 )
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
          v14 = (IRP *)IopBuildSynchronousFsdRequest(
                         3u,
                         *(_QWORD *)(a3 + 176),
                         (void *)v13,
                         v11,
                         0LL,
                         (__int64)&Event,
                         (__int64)&v19,
                         retaddr);
          if ( v14 )
          {
            v14->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
            v6 = IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 176), v14);
            if ( v6 == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              v6 = v19;
            }
            if ( v6 >= 0 )
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
                  v16 = v6;
                  if ( !*(_BYTE *)(v13 + 7) )
                    v16 = -1073741637;
                  v6 = v16;
                }
                *v7 = *(_QWORD *)(v13 + 3);
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
  return (unsigned int)v6;
}
