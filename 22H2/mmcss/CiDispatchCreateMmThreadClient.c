/*
 * XREFs of CiDispatchCreateMmThreadClient @ 0x1C000AB00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0004634 (WPP_SF_.c)
 *     WPP_SF_dd @ 0x1C00048CC (WPP_SF_dd.c)
 *     CiLookupTask @ 0x1C000AC70 (CiLookupTask.c)
 *     CiThreadCreate @ 0x1C000AD80 (CiThreadCreate.c)
 *     CiTaskIndexCreate @ 0x1C000B370 (CiTaskIndexCreate.c)
 *     CiTaskIndexLocate @ 0x1C000B500 (CiTaskIndexLocate.c)
 */

__int64 __fastcall CiDispatchCreateMmThreadClient(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR v4; // rbp
  int v5; // r9d
  __int64 v7; // r14
  NTSTATUS v8; // edi
  struct _IRP *MasterIrp; // rbx
  __int64 v10; // r9
  unsigned int MdlAddress_high; // ebx
  int v12; // eax
  unsigned int *v13; // rbx
  __int64 v14; // rax
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+68h] [rbp+10h] BYREF
  __int64 v18; // [rsp+70h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = *(_DWORD *)(a2 + 32);
  v7 = *(_QWORD *)(a2 + 48);
  v8 = -1073741811;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v16 = 0LL;
  P = 0LL;
  v18 = 0LL;
  if ( v5 == 272 )
  {
    if ( *(_DWORD *)&MasterIrp->Type
      || *((_BYTE *)&MasterIrp->Size + 2)
      || *((_BYTE *)&MasterIrp->Size + 3)
      || *(&MasterIrp->Size + 2) != 263
      || LOBYTE(MasterIrp->MdlAddress)
      || BYTE1(MasterIrp->MdlAddress)
      || BYTE2(MasterIrp->MdlAddress)
      || (v10 = BYTE3(MasterIrp->MdlAddress), (unsigned __int8)v10 > 1u) )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xDu,
          (__int64)&WPP_69ae99e199ca39a7c7a05b58b80334a5_Traceguids);
    }
    else
    {
      v8 = CiLookupTask(&MasterIrp->Flags, &MasterIrp->Tail.CompletionKey + 3, a3, v10, &v16);
      if ( v8 >= 0 )
      {
        MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
        KeEnterCriticalRegion();
        if ( MdlAddress_high )
          v12 = CiTaskIndexLocate(MdlAddress_high, v16, &P);
        else
          v12 = CiTaskIndexCreate(v16, &P);
        v8 = v12;
        if ( v12 >= 0 )
        {
          v13 = (unsigned int *)P;
          v8 = CiThreadCreate(CurrentThread, P);
          if ( v8 >= 0 )
          {
            v14 = v18;
            *(_QWORD *)(v18 + 8) = v7;
            *(_QWORD *)(v7 + 24) = v14;
            v4 = v13[36];
          }
        }
        KeLeaveCriticalRegion();
      }
    }
  }
  else if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_dd((__int64)WPP_GLOBAL_Control->AttachedDevice, 0xCu, a3, v5, 272);
  }
  Irp->IoStatus.Status = v8;
  Irp->IoStatus.Information = v4;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v8;
}
