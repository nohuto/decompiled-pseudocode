/*
 * XREFs of IopPnPDispatch @ 0x1407F7890
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     IoInvalidateDeviceRelations @ 0x1402F4FC0 (IoInvalidateDeviceRelations.c)
 *     IoDeleteDevice @ 0x140368010 (IoDeleteDevice.c)
 *     IopPnPCompleteRequest @ 0x14036CC7C (IopPnPCompleteRequest.c)
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 *     PiGetDeviceRegProperty @ 0x1406C6230 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegProp @ 0x1406C9884 (_CmGetDeviceRegProp.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1406F67F8 (PnpGetDeviceResourcesFromRegistry.c)
 *     IopGetRootDevices @ 0x14081CBA8 (IopGetRootDevices.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopPnPDispatch(PDEVICE_OBJECT DeviceObject, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  _QWORD *v3; // r12
  wchar_t *Information; // rsi
  unsigned int MinorFunction; // r8d
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  _QWORD *v10; // rdx
  PIO_SECURITY_CONTEXT v11; // rcx
  _DWORD *v12; // rbx
  __m128i si128; // xmm0
  NTSTATUS RootDevices; // ebx
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  unsigned int v18; // r8d
  unsigned int v19; // r8d
  PVOID v20; // rcx
  GUID *SecurityContext; // rcx
  GUID *v22; // rcx
  LARGE_INTEGER ByteOffset; // rax
  ULONG Length; // ecx
  ULONG v25; // ecx
  ULONG v26; // ecx
  __int64 v27; // rdx
  wchar_t *Src; // rdi
  wchar_t *v29; // rcx
  int v30; // r9d
  wchar_t *v31; // r8
  wchar_t v32; // dx
  __int64 Pool2; // rax
  wchar_t *v34; // rbx
  LARGE_INTEGER v35; // rdx
  void *v36; // rax
  unsigned int v37; // r8d
  unsigned int v38; // r8d
  unsigned int v39; // r8d
  unsigned int v40; // r8d
  unsigned int v41; // r8d
  _DWORD *DeviceNode; // rcx
  ULONG v43; // ecx
  wchar_t *v44; // rax
  wchar_t *v45; // rax
  int v46; // r8d
  _WORD *v47; // rdx
  wchar_t v48; // cx
  char *v49; // rdx
  wchar_t v50; // cx
  signed __int64 v51; // rdx
  _QWORD *v52; // rbx
  __int64 v53; // rdx
  int v54; // edx
  char v55; // r8
  void *v56[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v57; // [rsp+98h] [rbp+48h] BYREF
  int v58; // [rsp+A0h] [rbp+50h] BYREF
  int v59; // [rsp+A8h] [rbp+58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  LODWORD(v57) = 0;
  v58 = 0;
  v59 = 0;
  Information = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  v56[0] = 0LL;
  if ( MinorFunction <= 7 )
  {
    if ( MinorFunction == 7 )
    {
      if ( DeviceObject == *((PDEVICE_OBJECT *)IopRootDeviceNode + 4) && !CurrentStackLocation->Parameters.Read.Length )
      {
        RootDevices = IopGetRootDevices(v56);
        goto LABEL_59;
      }
      if ( CurrentStackLocation->Parameters.Read.Length != 4 )
        goto LABEL_14;
      Pool2 = ExAllocatePool2(256LL, 16LL, 1684303952LL);
      v34 = (wchar_t *)Pool2;
      if ( !Pool2 )
        goto LABEL_86;
      *(_QWORD *)(Pool2 + 8) = DeviceObject;
      *(_DWORD *)Pool2 = 1;
      ObfReferenceObject(DeviceObject);
      Information = v34;
    }
    else if ( MinorFunction )
    {
      v37 = MinorFunction - 1;
      if ( v37 )
      {
        v38 = v37 - 1;
        if ( !v38 )
        {
          if ( !DeviceObject
            || (DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode) == 0LL
            || (DeviceNode[99] & 0x10000) != 0 )
          {
            IoDeleteDevice(DeviceObject);
          }
          IoInvalidateDeviceRelations(*((PDEVICE_OBJECT *)IopRootDeviceNode + 4), SingleBusRelations);
          goto LABEL_10;
        }
        v39 = v38 - 1;
        if ( v39 )
        {
          v40 = v39 - 1;
          if ( v40 )
          {
            v41 = v40 - 1;
            if ( v41 )
            {
              if ( v41 == 1 )
                goto LABEL_10;
              goto LABEL_14;
            }
          }
          goto LABEL_80;
        }
      }
    }
LABEL_10:
    RootDevices = 0;
    goto LABEL_15;
  }
  v8 = MinorFunction - 8;
  if ( !v8 )
  {
    RootDevices = a2->IoStatus.Status;
    if ( DeviceObject )
      v20 = DeviceObject->DeviceObjectExtension->DeviceNode;
    else
      v20 = 0LL;
    if ( v20 != IopRootDeviceNode )
      goto LABEL_15;
    SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
    if ( SecurityContext != &GUID_ARBITER_INTERFACE_STANDARD
      && RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) != 16 )
    {
      v22 = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
      if ( v22 != &GUID_TRANSLATOR_INTERFACE_STANDARD
        && RtlCompareMemory(v22, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) != 16 )
      {
        goto LABEL_15;
      }
      ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
      *(_QWORD *)(ByteOffset.QuadPart + 32) = IopTranslatorHandlerCm;
      *(_QWORD *)(ByteOffset.QuadPart + 40) = IopTranslatorHandlerIo;
      goto LABEL_10;
    }
    v35 = CurrentStackLocation->Parameters.Read.ByteOffset;
    RootDevices = 0;
    *(_QWORD *)(v35.QuadPart + 32) = ArbArbiterHandler;
    if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 1 )
    {
      v36 = &IopRootPortArbiter;
      goto LABEL_69;
    }
    if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 2 )
    {
      v36 = &IopRootIrqArbiter;
      goto LABEL_69;
    }
    if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists != 3 )
    {
      if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 4 )
      {
        v36 = &IopRootDmaArbiter;
        goto LABEL_69;
      }
      if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 6 )
      {
        v36 = &IopRootBusNumberArbiter;
        goto LABEL_69;
      }
      if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists != 7 )
      {
        RootDevices = -1073741811;
        goto LABEL_15;
      }
    }
    v36 = &IopRootMemArbiter;
LABEL_69:
    *(_QWORD *)(v35.QuadPart + 8) = v36;
    goto LABEL_15;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( DeviceObject )
      v10 = DeviceObject->DeviceObjectExtension->DeviceNode;
    else
      v10 = 0LL;
    v11 = CurrentStackLocation->Parameters.Create.SecurityContext;
    LODWORD(v11->SecurityQos) = 65600;
    v12 = (_DWORD *)&v11->AccessState + 1;
    if ( DeviceObject == *((PDEVICE_OBJECT *)IopRootDeviceNode + 4) )
    {
      HIDWORD(v11->SecurityQos) |= 0x1C0u;
      *v12 = 0;
    }
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v11->DesiredAccess = 0;
    v11->FullCreateOptions = 1;
    *(__m128i *)&v11[1].SecurityQos = si128;
    v11[1].DesiredAccess = _mm_cvtsi128_si32(si128);
    if ( *v12 == -1 )
    {
      LODWORD(v57) = 4;
      if ( (int)CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  v10[6],
                  0LL,
                  17,
                  (__int64)&v58,
                  (__int64)&v59,
                  (__int64)&v57,
                  0) >= 0
        && v58 == 4
        && (_DWORD)v57 == 4 )
      {
        *v12 = v59;
      }
    }
    goto LABEL_10;
  }
  v16 = v9 - 1;
  if ( !v16 )
  {
    v54 = 0;
    v55 = 4;
LABEL_123:
    RootDevices = PnpGetDeviceResourcesFromRegistry((__int64)DeviceObject, v54, v55, v56, &v57);
    if ( RootDevices == -1073741772 )
      goto LABEL_10;
LABEL_59:
    Information = (wchar_t *)v56[0];
    goto LABEL_15;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v54 = 1;
    v55 = 2;
    goto LABEL_123;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    if ( CurrentStackLocation->Parameters.Read.Length != 1 || a2->IoStatus.Information )
      goto LABEL_14;
    if ( DeviceObject )
      v52 = DeviceObject->DeviceObjectExtension->DeviceNode;
    else
      v52 = 0LL;
    PiGetDeviceRegProperty(v52[6], 7LL, 1, 14, 0LL, (int *)&v57);
    if ( (_DWORD)v57 )
    {
      Information = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)v57, 1684303952LL);
      if ( Information )
      {
        RootDevices = PiGetDeviceRegProperty(v52[6], v53, 1, 14, Information, (int *)&v57);
        if ( RootDevices < 0 )
        {
          if ( RootDevices == -1073741275 )
            RootDevices = -1073741772;
          ExFreePoolWithTag(Information, 0);
          Information = 0LL;
        }
        goto LABEL_15;
      }
      goto LABEL_86;
    }
LABEL_80:
    RootDevices = -1073741823;
    goto LABEL_15;
  }
  v19 = v18 - 7;
  if ( v19 )
  {
    if ( v19 == 3 )
      goto LABEL_10;
LABEL_14:
    Information = (wchar_t *)a2->IoStatus.Information;
    RootDevices = a2->IoStatus.Status;
    goto LABEL_15;
  }
  if ( DeviceObject == *((PDEVICE_OBJECT *)IopRootDeviceNode + 4) )
    goto LABEL_14;
  RootDevices = a2->IoStatus.Status;
  if ( RootDevices >= 0 )
  {
    if ( a2->IoStatus.Information )
      goto LABEL_14;
  }
  if ( DeviceObject )
    v3 = DeviceObject->DeviceObjectExtension->DeviceNode;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length )
  {
    v25 = Length - 1;
    if ( !v25 || (v26 = v25 - 1) == 0 )
    {
      if ( RootDevices != -1073741637 )
        goto LABEL_15;
      RootDevices = PiGetDeviceRegProperty(
                      v3[6],
                      7LL,
                      7,
                      (unsigned int)(CurrentStackLocation->Parameters.Read.Length != 1) + 2,
                      0LL,
                      (int *)&v57);
      if ( RootDevices != -1073741789 )
        goto LABEL_51;
      Src = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)v57, 1684303952LL);
      if ( Src )
      {
        RootDevices = PiGetDeviceRegProperty(
                        v3[6],
                        v27,
                        7,
                        (unsigned int)(CurrentStackLocation->Parameters.Read.Length != 1) + 2,
                        Src,
                        (int *)&v57);
        v29 = Src;
        if ( RootDevices >= 0 )
        {
          v30 = v57;
          v31 = 0LL;
          if ( Src < (wchar_t *)((char *)Src + ((unsigned int)v57 & 0xFFFFFFFE)) )
          {
            do
            {
              v32 = *v29;
              if ( *v29 )
              {
                if ( (unsigned __int16)(v32 - 32) > 0x5Fu || v32 == 44 )
                {
                  *v29 = 63;
                  v30 = v57;
                }
              }
              else
              {
                if ( v31 && v29 == v31 + 1 )
                  break;
                v31 = v29;
              }
              ++v29;
            }
            while ( v29 < (wchar_t *)((char *)Src + (v30 & 0xFFFFFFFE)) );
          }
          Information = Src;
          goto LABEL_15;
        }
        ExFreePoolWithTag(Src, 0);
LABEL_51:
        if ( RootDevices != -1073741275 )
          goto LABEL_15;
        goto LABEL_14;
      }
LABEL_86:
      RootDevices = -1073741670;
      goto LABEL_15;
    }
    v43 = v26 - 1;
    if ( v43 )
    {
      if ( v43 != 2 )
      {
        Information = (wchar_t *)a2->IoStatus.Information;
        goto LABEL_15;
      }
      v44 = (wchar_t *)ExAllocatePool2(256LL, 78LL, 1684303952LL);
      if ( v44 )
      {
        Information = v44;
        wcscpy(v44, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
        RootDevices = 0;
        goto LABEL_15;
      }
      goto LABEL_86;
    }
  }
  v45 = (wchar_t *)ExAllocatePool2(256LL, *((unsigned __int16 *)v3 + 20), 1684303952LL);
  if ( !v45 )
    goto LABEL_86;
  v46 = 0;
  v47 = (_WORD *)v3[6];
  Information = v45;
  RootDevices = 0;
  v48 = *v47;
  if ( CurrentStackLocation->Parameters.Read.Length )
  {
    if ( v48 )
    {
      while ( v48 != 92 || ++v46 != 2 )
      {
        v48 = *++v47;
        if ( !*v47 )
          goto LABEL_15;
      }
      v49 = (char *)(v47 + 1);
      v50 = *(_WORD *)v49;
      if ( *(_WORD *)v49 )
      {
        v51 = v49 - (char *)v45;
        do
        {
          *v45++ = v50;
          v50 = *(wchar_t *)((char *)v45 + v51);
        }
        while ( v50 );
      }
    }
  }
  else if ( v48 )
  {
    do
    {
      if ( v48 == 92 && ++v46 == 2 )
        break;
      ++v47;
      *v45++ = v48;
      v48 = *v47;
    }
    while ( *v47 );
  }
LABEL_15:
  IopPnPCompleteRequest(a2, RootDevices, (ULONG_PTR)Information);
  return (unsigned int)RootDevices;
}
