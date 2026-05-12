/*
 * XREFs of RaUnitStreamsIoctl @ 0x1C001C810
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B178 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009010 (RaidCompleteRequestEx.c)
 *     RaidAllocatePool @ 0x1C000BD40 (RaidAllocatePool.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001CB34 (RaidUnitSendSrbIoControlSynchronously.c)
 *     memmove @ 0x1C00201C0 (memmove.c)
 *     memset @ 0x1C0020480 (memset.c)
 *     RtlULongAdd @ 0x1C0045F20 (RtlULongAdd.c)
 */

__int64 __fastcall RaUnitStreamsIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  unsigned int v3; // ebx
  size_t Options; // r12
  unsigned int Length; // edi
  ULONG v8; // edx
  signed int v9; // esi
  size_t v10; // rsi
  _DWORD *Pool; // rax
  _DWORD *v12; // r14
  unsigned int v13; // eax
  size_t Size; // [rsp+78h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  LODWORD(Size) = 0;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v8 = Options;
  if ( (unsigned int)Options <= Length )
    v8 = CurrentStackLocation->Parameters.Read.Length;
  v9 = RtlULongAdd(0x1Cu, v8, (ULONG *)&Size);
  if ( v9 >= 0 )
  {
    v10 = (unsigned int)Size;
    Pool = RaidAllocatePool(NonPagedPoolNx, (unsigned int)Size, 0x72536152u, *(_QWORD *)(a1 + 8));
    v12 = Pool;
    if ( Pool )
    {
      memset(Pool, 0, v10);
      v12[4] = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      *v12 = 8;
      v12[3] = *(_DWORD *)(a1 + 1264);
      v12[6] = v10 - 28;
      LODWORD(Size) = (Length != 0 ? 0x40 : 0) | ((_DWORD)Options != 0 ? 0x80 : 0);
      if ( (_DWORD)Options )
        memmove(v12 + 7, a2->AssociatedIrp.MasterIrp, Options);
      v9 = RaidUnitSendSrbIoControlSynchronously(a1, (_DWORD)a2, (_DWORD)v12, v10, 0LL);
      if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      {
        if ( Length )
        {
          v13 = v12[6];
          if ( v13 )
          {
            if ( Length >= v13 )
              Length = v12[6];
            v3 = Length;
            memmove(a2->AssociatedIrp.MasterIrp, v12 + 7, Length);
          }
        }
      }
      ExFreePoolWithTag(v12, 0x72536152u);
    }
    else
    {
      v9 = -1073741670;
    }
  }
  a2->IoStatus.Information = v3;
  return RaidCompleteRequestEx(a2, 0, v9);
}
