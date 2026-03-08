/*
 * XREFs of IopSendMessageToTrackService @ 0x140942874
 * Callers:
 *     IopTrackLink @ 0x140795688 (IopTrackLink.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     LpcSendWaitReceivePort @ 0x140796F40 (LpcSendWaitReceivePort.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopSendMessageToTrackService(__int64 a1, _OWORD *a2, __int64 a3)
{
  int v6; // ebp
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  NTSTATUS v9; // eax
  NTSTATUS v10; // ebx
  __int64 Pool2; // rax
  _QWORD *v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // eax
  size_t v15; // r8
  NTSTATUS v16; // eax
  __int64 v17; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v18[40]; // [rsp+40h] [rbp-138h] BYREF
  int v19; // [rsp+68h] [rbp-110h]

  v6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  while ( 1 )
  {
    if ( !IopLinkTrackingServiceObject )
    {
      if ( !*(_DWORD *)(IopLinkTrackingServiceEvent + 4) )
        return -1073741153;
      result = KeWaitForSingleObject(&IopLinkTrackingPortObject, Executive, PreviousMode, 0, 0LL);
      if ( result == 192 || result == 257 )
        return result;
      if ( IopLinkTrackingServiceObject )
      {
        KeSetEvent(&IopLinkTrackingPortObject, 0, 0);
      }
      else
      {
        IopLinkTrackingPacket.Parameter = &IopLinkTrackingPacket;
        IopLinkTrackingPacket.WorkerRoutine = (void (__fastcall *)(void *))IopConnectLinkTrackingPort;
        IopLinkTrackingPacket.List.Flink = 0LL;
        KeResetEvent(&stru_140C5DA00);
        ExQueueWorkItem(&IopLinkTrackingPacket, DelayedWorkQueue);
        v9 = KeWaitForSingleObject(&stru_140C5DA00, Executive, PreviousMode, 0, 0LL);
        v10 = v9;
        if ( v9 != 192 && v9 != 257 && dword_140C5DA18 < 0 )
          v10 = dword_140C5DA18;
        KeSetEvent(&IopLinkTrackingPortObject, 0, 0);
        if ( v10 )
          return v10;
      }
    }
    Pool2 = ExAllocatePool2(256LL, 184LL, 538996553LL);
    v12 = (_QWORD *)Pool2;
    if ( !Pool2 )
      break;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_OWORD *)(Pool2 + 48) = *(_OWORD *)a1;
    *(_DWORD *)(Pool2 + 64) = *(_DWORD *)(a1 + 16);
    *(_OWORD *)(Pool2 + 68) = *a2;
    *(_OWORD *)(Pool2 + 84) = a2[1];
    *(_OWORD *)(Pool2 + 100) = a2[2];
    *(_OWORD *)(Pool2 + 116) = a2[3];
    if ( *(_DWORD *)(a3 + 8) < 0x24u )
    {
      ExFreePoolWithTag((PVOID)Pool2, 0);
      return -2147483643;
    }
    *(_DWORD *)(Pool2 + 132) = *(_DWORD *)(a3 + 12);
    *(_OWORD *)(Pool2 + 136) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(Pool2 + 152) = *(_OWORD *)(a3 + 32);
    v13 = *(_DWORD *)(a3 + 8);
    if ( v13 > 0x24 )
    {
      v14 = v13 - 36;
      v15 = 16LL;
      if ( v14 <= 0x10 )
        v15 = v14;
      memmove(v12 + 21, (const void *)(a3 + 48), v15);
    }
    *v12 = 12058768LL;
    v17 = 256LL;
    v16 = LpcSendWaitReceivePort((int)IopLinkTrackingServiceObject, 0x20000, (int)v12, (__int64)v18, (__int64)&v17, 0LL);
    v10 = v16;
    if ( v16 != -1073741769 && v16 != -1073740029
      || (v10 = KeWaitForSingleObject(&IopLinkTrackingPortObject, Executive, PreviousMode, 0, 0LL),
          ObfDereferenceObject(IopLinkTrackingServiceObject),
          IopLinkTrackingServiceObject = 0LL,
          KeSetEvent(&IopLinkTrackingPortObject, 0, 0),
          v6) )
    {
      if ( v10 >= 0 )
        return v19;
      return v10;
    }
    v6 = 1;
  }
  return -1073741670;
}
