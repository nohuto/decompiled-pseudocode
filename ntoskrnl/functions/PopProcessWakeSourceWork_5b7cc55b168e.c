__int64 __fastcall PopProcessWakeSourceWork(struct _DEVICE_OBJECT *a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v3; // rbp
  __int64 DeviceNode; // rsi
  unsigned int v8; // r15d
  __int64 v9; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 Pool2; // rax
  wchar_t *Buffer; // rcx
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0LL;
  GuidString = 0LL;
  if ( a1 )
    DeviceNode = (__int64)a1->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  v8 = *(_DWORD *)(DeviceNode + 152);
  v9 = PopCurrentWakeInfo + 24;
  v10 = *(_QWORD **)(PopCurrentWakeInfo + 24);
  while ( 1 )
  {
    if ( v10 == (_QWORD *)v9 )
      goto LABEL_15;
    v11 = v10;
    v10 = (_QWORD *)*v10;
    if ( *((_DWORD *)v11 + 4) )
      goto LABEL_11;
    if ( *((_DWORD *)v11 + 18) <= v8 )
      break;
    if ( PopWakeSourceIsParent((unsigned __int16 *)DeviceNode, (__int64)(v11 + 3)) )
    {
      v12 = -1073741823;
LABEL_19:
      v14 = 0LL;
      goto LABEL_20;
    }
LABEL_11:
    v9 = PopCurrentWakeInfo + 24;
  }
  if ( *((_DWORD *)v11 + 18) >= v8 || !PopWakeSourceIsChild(DeviceNode, (__int64)(v11 + 3)) )
    goto LABEL_11;
  v3 = v11;
LABEL_15:
  v13 = PopNewWakeSource(0);
  v14 = v13;
  if ( !v13 )
  {
    v12 = -1073741670;
LABEL_20:
    v3 = 0LL;
    goto LABEL_22;
  }
  *(_DWORD *)(v13 + 72) = v8;
  Pool2 = ExAllocatePool2(256LL, *(unsigned __int16 *)(DeviceNode + 40), 544040269LL);
  *(_QWORD *)(v14 + 32) = Pool2;
  if ( !Pool2 )
  {
    v12 = -1073741670;
    PopFreeWakeSource((_DWORD *)v14);
    goto LABEL_19;
  }
  *(_WORD *)(v14 + 26) = *(_WORD *)(DeviceNode + 40);
  RtlCopyUnicodeString((PUNICODE_STRING)(v14 + 24), (PCUNICODE_STRING)(DeviceNode + 40));
  PopWakeSourceGetDeviceProperty(v14 + 40, DevicePropertyFriendlyName, a1);
  PopWakeSourceGetDeviceProperty(v14 + 56, DevicePropertyDeviceDescription, a1);
  PopWakeSourceGetDeviceProperty(v14 + 96, DevicePropertyClassName, a1);
  PopWakeSourceGetDeviceProperty((__int64)&GuidString, DevicePropertyClassGuid, a1);
  RtlGUIDFromString(&GuidString, (GUID *)(v14 + 76));
  v12 = 0;
LABEL_22:
  Buffer = GuidString.Buffer;
  *a2 = v14;
  *a3 = v3;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0x206D654Du);
  return v12;
}
