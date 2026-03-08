/*
 * XREFs of ?DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z @ 0x1C003DF94
 * Callers:
 *     ?DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C003DED4 (-DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z @ 0x1C000CF60 (-GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z.c)
 *     ?PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z @ 0x1C003E760 (-PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z.c)
 */

int __fastcall DispatchWorker(FxDevice *Device, _IRP *Irp, _LIST_ENTRY *DispatchContext)
{
  _LIST_ENTRY *p_m_PreprocessInfoListHead; // rsi
  _LIST_ENTRY *v4; // r9
  unsigned __int8 **p_CurrentStackLocation; // r10
  FxIrpPreprocessInfo *v8; // r8
  unsigned int NumMinorFunctions; // edx
  __int64 v10; // rcx
  FxDefaultIrpHandler *DispatchPackage; // rax

  p_m_PreprocessInfoListHead = &Device->m_PreprocessInfoListHead;
  v4 = DispatchContext;
  p_CurrentStackLocation = (unsigned __int8 **)&Irp->Tail.Overlay.CurrentStackLocation;
  if ( DispatchContext == &Device->m_PreprocessInfoListHead )
  {
LABEL_8:
    DispatchPackage = FxDevice::GetDispatchPackage(Device, **p_CurrentStackLocation);
    return DispatchPackage->Dispatch(DispatchPackage, Irp);
  }
  else
  {
    while ( 1 )
    {
      v8 = (FxIrpPreprocessInfo *)v4;
      v4 = v4->Flink;
      if ( v8->Dispatch[**p_CurrentStackLocation].EvtDevicePreprocess )
        break;
LABEL_7:
      if ( v4 == p_m_PreprocessInfoListHead )
        goto LABEL_8;
    }
    NumMinorFunctions = v8->Dispatch[**p_CurrentStackLocation].NumMinorFunctions;
    if ( NumMinorFunctions )
    {
      v10 = 0LL;
      while ( v8->Dispatch[**p_CurrentStackLocation].MinorFunctions[v10] != (*p_CurrentStackLocation)[1] )
      {
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= NumMinorFunctions )
          goto LABEL_7;
      }
    }
    return PreprocessIrp(Device, Irp, v8, v4);
  }
}
