/*
 * XREFs of IoRegisterDeviceInterface @ 0x14086A510
 * Callers:
 *     DifIoRegisterDeviceInterfaceWrapper @ 0x1405DE5E0 (DifIoRegisterDeviceInterfaceWrapper.c)
 *     PiSwCompleteCreate @ 0x1408071C4 (PiSwCompleteCreate.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     wcspbrk @ 0x1403D64C0 (wcspbrk.c)
 *     PnpUnicodeStringToWstr @ 0x1406D07D4 (PnpUnicodeStringToWstr.c)
 *     PnpUnicodeStringToWstrFree @ 0x1406D08F4 (PnpUnicodeStringToWstrFree.c)
 *     ObQueryNameStringMode @ 0x14071EE84 (ObQueryNameStringMode.c)
 *     IopRegisterDeviceInterface @ 0x14086A664 (IopRegisterDeviceInterface.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoRegisterDeviceInterface(
        PDEVICE_OBJECT PhysicalDeviceObject,
        const GUID *InterfaceClassGuid,
        PUNICODE_STRING ReferenceString,
        PUNICODE_STRING SymbolicLinkName)
{
  WCHAR *v4; // rdi
  wchar_t *v5; // rsi
  _DWORD *DeviceNode; // r15
  __int64 v10; // rcx
  int v11; // eax
  int inited; // ebx
  const WCHAR *v13; // rdx
  int v15; // eax
  wchar_t *Str; // [rsp+30h] [rbp-10h] BYREF
  PCWSTR SourceString; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v18; // [rsp+80h] [rbp+40h] BYREF
  const GUID *v19; // [rsp+88h] [rbp+48h]

  v19 = InterfaceClassGuid;
  v18 = 0;
  v4 = 0LL;
  v5 = 0LL;
  SourceString = 0LL;
  Str = 0LL;
  *SymbolicLinkName = 0LL;
  if ( !PhysicalDeviceObject
    || (DeviceNode = PhysicalDeviceObject->DeviceObjectExtension->DeviceNode) == 0LL
    || (DeviceNode[99] & 0x20000) != 0 )
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
  v10 = *((_QWORD *)DeviceNode + 6);
  LODWORD(Str) = 0;
  v11 = IopRegisterDeviceInterface(v10, (_DWORD)v19, (_DWORD)v5, 0, (__int64)&SourceString, (__int64)&Str);
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
