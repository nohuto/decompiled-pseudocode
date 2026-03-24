/*
 * XREFs of KeyboardAddDevice @ 0x1C000D7F0
 * Callers:
 *     <none>
 * Callees:
 *     KeyboardAddDeviceEx @ 0x1C000DB20 (KeyboardAddDeviceEx.c)
 *     KeyboardQueryDeviceKey @ 0x1C000DEA0 (KeyboardQueryDeviceKey.c)
 *     KbdCreateClassObject @ 0x1C000DF80 (KbdCreateClassObject.c)
 */

__int64 __fastcall KeyboardAddDevice(struct _DRIVER_OBJECT *IoObject, PDEVICE_OBJECT PhysicalDeviceObject)
{
  __int64 result; // rax
  __int64 v5; // rbx
  PDEVICE_OBJECT v6; // rax
  NTSTATUS v7; // eax
  PVOID v8; // rdi
  unsigned int v9; // esi
  _DWORD *ErrorLogEntry; // rax
  HANDLE Handle; // [rsp+30h] [rbp-19h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-11h] BYREF
  PVOID P; // [rsp+40h] [rbp-9h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+Fh] BYREF

  P = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  result = KbdCreateClassObject(IoObject, 0);
  if ( (int)result >= 0 )
  {
    v5 = MEMORY[0x40];
    v6 = IoAttachDeviceToDeviceStack(0LL, PhysicalDeviceObject);
    *(_QWORD *)(v5 + 16) = v6;
    if ( v6 )
    {
      *(_QWORD *)(v5 + 24) = PhysicalDeviceObject;
      *(_WORD *)(v5 + 64) = 1;
      *(_DWORD *)(v5 + 188) = 1;
      *(_DWORD *)(v5 + 192) = 1;
      PoSetPowerState(0LL, DevicePowerState, (POWER_STATE)1);
      *(_QWORD *)(v5 + 284) = 0LL;
      *(_BYTE *)(v5 + 362) = 0;
      *(_QWORD *)(v5 + 296) = 0LL;
      *(_BYTE *)(v5 + 304) = 0;
      *(_QWORD *)(v5 + 312) = 0LL;
      *(_DWORD *)(v5 + 320) = 0;
      *(_BYTE *)(v5 + 66) = 0;
      *(_QWORD *)(v5 + 368) = 0LL;
      *(_DWORD *)(v5 + 376) = 0;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&word_1C000A2C8;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
      {
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, L"Parameters");
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&Handle, 0xF003Fu, &ObjectAttributes) >= 0 )
        {
          if ( (int)KeyboardQueryDeviceKey(Handle) >= 0 )
            *(_BYTE *)(v5 + 66) = 0;
          ZwClose(Handle);
        }
        ZwClose(KeyHandle);
      }
      MEMORY[0x30] |= 0x2000u;
      MEMORY[0x30] &= ~0x80u;
      v7 = IoRegisterDeviceInterface(PhysicalDeviceObject, &GUID_DEVINTERFACE_KEYBOARD, 0LL, (PUNICODE_STRING)(v5 + 88));
      v8 = P;
      v9 = v7;
      if ( v7 < 0 )
      {
        IoDetachDevice(*(PDEVICE_OBJECT *)(v5 + 16));
        *(_QWORD *)(v5 + 16) = 0LL;
        IoDeleteDevice(0LL);
      }
      else
      {
        v9 = KeyboardAddDeviceEx(v5, P, 0LL);
      }
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      return v9;
    }
    else
    {
      ErrorLogEntry = IoAllocateErrorLogEntry(IoObject, 0x30u);
      if ( ErrorLogEntry )
      {
        ErrorLogEntry[3] = -1073414129;
        *ErrorLogEntry = 0;
        *((_QWORD *)ErrorLogEntry + 3) = 0LL;
        ErrorLogEntry[4] = 0;
        ErrorLogEntry[5] = -1073741667;
        IoWriteErrorLogEntry(ErrorLogEntry);
      }
      IoDeleteDevice(0LL);
      return 3221225629LL;
    }
  }
  return result;
}
