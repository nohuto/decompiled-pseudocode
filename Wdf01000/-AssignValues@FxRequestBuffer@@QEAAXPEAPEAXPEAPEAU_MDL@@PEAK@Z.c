/*
 * XREFs of ?AssignValues@FxRequestBuffer@@QEAAXPEAPEAXPEAPEAU_MDL@@PEAK@Z @ 0x1C00105AE
 * Callers:
 *     ?StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C000F2C0 (-StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@@Z @ 0x1C0060BE0 (-StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@P.c)
 *     ?StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C00613F0 (-StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxRequestBuffer::AssignValues(
        FxRequestBuffer *this,
        _MDL **PPBuffer,
        _MDL **PPMdl,
        unsigned int *BufferLength)
{
  unsigned int Length; // ebx
  _MDL **p_pMdl; // r14
  _MDL **v6; // r15
  FxRequestBufferType DataType; // ecx
  __int32 v10; // ecx
  __int32 v11; // ecx
  __int32 v12; // ecx
  _WDFMEMORY_OFFSET *v13; // rax
  _MDL *v14; // rbp
  _WDFMEMORY_OFFSET *Offsets; // rdx
  _MDL *pMdl; // [rsp+40h] [rbp+8h] BYREF

  Length = 0;
  p_pMdl = &pMdl;
  v6 = &pMdl;
  DataType = this->DataType;
  if ( PPBuffer )
    p_pMdl = PPBuffer;
  if ( PPMdl )
    v6 = PPMdl;
  v10 = DataType - 1;
  if ( !v10 )
  {
    v14 = (_MDL *)this->u.Memory.Memory->GetBuffer(this->u.Memory.Memory);
    LODWORD(v13) = this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
    Offsets = this->u.Memory.Offsets;
    if ( Offsets )
    {
      if ( Offsets->BufferLength )
        v13 = (_WDFMEMORY_OFFSET *)Offsets->BufferLength;
      if ( Offsets->BufferOffset )
        v14 = (_MDL *)((char *)v14 + Offsets->BufferOffset);
    }
    *v6 = 0LL;
    *p_pMdl = v14;
    goto LABEL_23;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    *v6 = this->u.Mdl.Mdl;
    *p_pMdl = 0LL;
    goto LABEL_16;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    *v6 = 0LL;
    *p_pMdl = this->u.Mdl.Mdl;
LABEL_16:
    Length = this->u.Mdl.Length;
    goto LABEL_24;
  }
  if ( v12 == 1 )
  {
    *v6 = this->u.RefMdl.Mdl;
    *p_pMdl = 0LL;
    v13 = this->u.Memory.Offsets;
    if ( v13 && v13->BufferLength )
      LODWORD(v13) = v13->BufferLength;
    else
      LODWORD(v13) = this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
LABEL_23:
    Length = (unsigned int)v13;
    goto LABEL_24;
  }
  *v6 = 0LL;
  *p_pMdl = 0LL;
LABEL_24:
  *BufferLength = Length;
}
