/*
 * XREFs of UsbhFdoGetMsDescriptorPdo @ 0x1C002A894
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0015370 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C001BC4C (UsbhDecPdoIoCount.c)
 *     memmove @ 0x1C0023580 (memmove.c)
 */

__int64 __fastcall UsbhFdoGetMsDescriptorPdo(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  PDEVICE_OBJECT *v5; // rdi
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  _IO_SECURITY_CONTEXT *SecurityContext; // rbp
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rcx
  unsigned int v10; // edi
  PVOID v11; // r9
  int v12; // eax
  unsigned __int16 *v13; // rdx
  unsigned int AccessState_high; // ecx
  unsigned int v15; // ebx
  int v16; // eax

  v5 = (PDEVICE_OBJECT *)FdoExt(a1);
  v6 = PdoExt(a2);
  v7 = v6;
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( WORD2(SecurityContext[5].AccessState) == 7 )
  {
    if ( (v6[706] & 2) != 0 )
    {
      SecurityQos = SecurityContext[2].SecurityQos;
      v10 = 0;
      if ( SecurityQos )
      {
        if ( (*(&SecurityQos->EffectiveOnly + 1) & 5) != 0 )
          v11 = *(PVOID *)&SecurityQos[2].Length;
        else
          v11 = MmMapLockedPagesSpecifyCache((PMDL)SecurityQos, 0, MmCached, 0LL, 0, 0x40000010u);
      }
      else
      {
        v11 = *(PVOID *)&SecurityContext[1].DesiredAccess;
      }
      if ( v11 )
      {
        v13 = (unsigned __int16 *)*((_QWORD *)v7 + 355);
        AccessState_high = v13[4];
        if ( AccessState_high >= HIDWORD(SecurityContext[1].AccessState) )
          AccessState_high = HIDWORD(SecurityContext[1].AccessState);
        v15 = AccessState_high;
        memmove(v11, v13, AccessState_high);
        v12 = 0;
        HIDWORD(SecurityContext[1].AccessState) = v15;
      }
      else
      {
        v10 = -1073741811;
        v12 = -2147482880;
      }
      HIDWORD(SecurityContext->SecurityQos) = v12;
      goto LABEL_17;
    }
LABEL_16:
    HIDWORD(SecurityContext->SecurityQos) = -1073738240;
    v10 = -1073741637;
LABEL_17:
    a3->IoStatus.Status = v10;
    IofCompleteRequest(a3, 0);
    goto LABEL_18;
  }
  v16 = v6[358];
  if ( (v16 & 0x400) == 0 )
    goto LABEL_16;
  BYTE1(SecurityContext[5].AccessState) = v16;
  ++a3->CurrentLocation;
  ++a3->Tail.Overlay.CurrentStackLocation;
  v10 = IofCallDriver(v5[152], a3);
LABEL_18:
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return v10;
}
