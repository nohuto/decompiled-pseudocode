/*
 * XREFs of RaidAdapterQueryBootLunsIoctl @ 0x1C002D970
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000B738 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0003014 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidCompleteRequestEx @ 0x1C0009080 (RaidCompleteRequestEx.c)
 *     memset @ 0x1C0020540 (memset.c)
 *     RaBuildQueryBootLunsBufferForMiniport @ 0x1C0043E54 (RaBuildQueryBootLunsBufferForMiniport.c)
 *     RaTranslateMiniportQueryBootLunsToHwQueryBootLuns @ 0x1C0044A14 (RaTranslateMiniportQueryBootLunsToHwQueryBootLuns.c)
 */

__int64 __fastcall RaidAdapterQueryBootLunsIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  PVOID v3; // rdi
  _IRP *MasterIrp; // r15
  signed int v7; // eax
  signed int v8; // ebx
  signed int BootLunsToHwQueryBootLuns; // eax
  unsigned int Length; // ecx
  unsigned __int64 v11; // rax
  unsigned int v13; // [rsp+70h] [rbp+8h] BYREF
  PVOID P; // [rsp+78h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  v13 = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  P = 0LL;
  if ( !*(_QWORD *)(a1 + 552) || !*(_QWORD *)(a1 + 560) )
  {
    v8 = -1073741823;
    goto LABEL_14;
  }
  if ( CurrentStackLocation->Parameters.Create.Options < 8 || CurrentStackLocation->Parameters.Read.Length < 8 )
  {
    v8 = -1073741820;
    goto LABEL_14;
  }
  v7 = RaBuildQueryBootLunsBufferForMiniport(a1, a2, &P, &v13);
  v3 = P;
  v8 = v7;
  if ( v7 )
    goto LABEL_14;
  if ( !P )
  {
    v8 = -1073741801;
    goto LABEL_14;
  }
  v8 = RaidAdapterSendSrbIoControlSynchronously(a1, a2, (__int64)P, v13, 0LL, 0, 64);
  if ( v8 < 0 )
  {
LABEL_14:
    v11 = 0LL;
    goto LABEL_15;
  }
  memset(MasterIrp, 0, CurrentStackLocation->Parameters.Read.Length);
  BootLunsToHwQueryBootLuns = RaTranslateMiniportQueryBootLunsToHwQueryBootLuns(a1, a2, v3);
  Length = CurrentStackLocation->Parameters.Read.Length;
  v8 = BootLunsToHwQueryBootLuns;
  if ( Length >= *(_DWORD *)(&MasterIrp->Size + 1) )
    Length = *(_DWORD *)(&MasterIrp->Size + 1);
  v11 = Length;
LABEL_15:
  a2->IoStatus.Information = v11;
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72536152u);
  return RaidCompleteRequestEx(a2, 0, v8);
}
