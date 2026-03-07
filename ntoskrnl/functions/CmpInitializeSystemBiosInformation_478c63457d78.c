void __fastcall CmpInitializeSystemBiosInformation(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // esi
  int v3; // r14d
  int v4; // r15d
  __int64 Pool2; // rax
  __int64 v6; // rdx
  char *v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // edi
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  int v13; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+38h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  KeyHandle = (HANDLE)-1LL;
  memset(&ObjectAttributes, 0, 44);
  v2 = *(unsigned __int16 *)(v1 + 2752);
  v3 = *(unsigned __int16 *)(v1 + 2768);
  v4 = *(unsigned __int16 *)(v1 + 2784);
  Pool2 = ExAllocatePool2(256LL, (unsigned int)(v3 + v4 + v2 + 8), 0x20204D43u);
  v7 = (char *)Pool2;
  if ( Pool2 )
  {
    v8 = *(_QWORD *)(v1 + 2760);
    v13 = 0;
    CmpBuildRegMultiSz(Pool2, v6, &v13, v8, v2);
    CmpBuildRegMultiSz(v7, v9, &v13, *(_QWORD *)(v1 + 2776), v3);
    CmpBuildRegMultiSz(v7, v10, &v13, *(_QWORD *)(v1 + 2792), v4);
    v11 = v13;
    *(_WORD *)&v7[v13] = 0;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionSystemName;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
      ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpSystemBiosVersionString, 0, 7u, v7, v11 + 2);
    ExFreePoolWithTag(v7, 0);
  }
  if ( KeyHandle != (HANDLE)-1LL )
    ZwClose(KeyHandle);
}
