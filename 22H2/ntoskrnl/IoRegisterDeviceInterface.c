/*
 * XREFs of IoRegisterDeviceInterface @ 0x140867290
 * Callers:
 *     DifIoRegisterDeviceInterfaceWrapper @ 0x1405E0A90 (DifIoRegisterDeviceInterfaceWrapper.c)
 *     PiSwCompleteCreate @ 0x14081BD64 (PiSwCompleteCreate.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B6E0 (RtlInitUnicodeStringEx.c)
 *     wcspbrk @ 0x1403DB9E0 (wcspbrk.c)
 *     PnpUnicodeStringToWstrFree @ 0x1406D3FF4 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1406D4364 (PnpUnicodeStringToWstr.c)
 *     ObQueryNameStringMode @ 0x14075BD04 (ObQueryNameStringMode.c)
 *     IopRegisterDeviceInterface @ 0x140866CCC (IopRegisterDeviceInterface.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoRegisterDeviceInterface(
        PDEVICE_OBJECT PhysicalDeviceObject,
        const GUID *InterfaceClassGuid,
        PUNICODE_STRING ReferenceString,
        PUNICODE_STRING SymbolicLinkName)
{
  WCHAR *v4; // rdi
  wchar_t *v5; // rsi
  PVOID DeviceNode; // r15
  wchar_t *v10; // rcx
  int v11; // eax
  int inited; // ebx
  const WCHAR *v13; // rdx
  int v15; // eax
  wchar_t *Str; // [rsp+30h] [rbp-10h] BYREF
  PCWSTR SourceString; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v18; // [rsp+80h] [rbp+40h] BYREF
  GUID *v19; // [rsp+88h] [rbp+48h]

  v19 = (GUID *)InterfaceClassGuid;
  v18 = 0;
  v4 = 0LL;
  v5 = 0LL;
  SourceString = 0LL;
  Str = 0LL;
  *SymbolicLinkName = 0LL;
  if ( !PhysicalDeviceObject
    || (DeviceNode = PhysicalDeviceObject->DeviceObjectExtension->DeviceNode) == 0LL
    || (*((_DWORD *)DeviceNode + 99) & 0x20000) != 0 )
  {
    inited = -1073741808;
LABEL_15:
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    goto LABEL_9;
  }
  if ( !*((_QWORD *)DeviceNode + 6) )
    goto LABEL_13;
  ObQueryNameStringMode((char *)PhysicalDeviceObject, 0LL, 0, &v18, 0);
  if ( v18 <= 0x10 )
    goto LABEL_13;
  if ( ReferenceString && ReferenceString->Length >= 2u )
  {
    v15 = PnpUnicodeStringToWstr(&Str, 0LL, &ReferenceString->Length);
    v5 = Str;
    inited = v15;
    if ( v15 < 0 )
      goto LABEL_9;
    if ( wcspbrk(Str, L"\\/") )
    {
LABEL_13:
      inited = -1073741808;
      goto LABEL_9;
    }
  }
  v10 = (wchar_t *)*((_QWORD *)DeviceNode + 6);
  LODWORD(Str) = 0;
  v11 = IopRegisterDeviceInterface(v10, (int *)v19, v5, 0, (PVOID *)&SourceString, (__int64)&Str);
  v4 = (WCHAR *)SourceString;
  inited = v11;
  if ( v11 < 0 )
    goto LABEL_15;
  v13 = SourceString;
  PhysicalDeviceObject->Flags |= (unsigned int)Str;
  inited = RtlInitUnicodeStringEx(SymbolicLinkName, v13);
  if ( inited < 0 )
    goto LABEL_15;
LABEL_9:
  PnpUnicodeStringToWstrFree(v5, (__int64)ReferenceString);
  return inited;
}
