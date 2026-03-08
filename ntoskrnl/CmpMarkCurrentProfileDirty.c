/*
 * XREFs of CmpMarkCurrentProfileDirty @ 0x140814218
 * Callers:
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     CmpLockRegistryExclusive @ 0x1406B6454 (CmpLockRegistryExclusive.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpFindValueByName @ 0x1407A74A0 (CmpFindValueByName.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpOpenDevicesControlSet @ 0x140814380 (CmpOpenDevicesControlSet.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 */

NTSTATUS __fastcall CmpMarkCurrentProfileDirty(__int64 a1)
{
  NTSTATUS result; // eax
  HANDLE v2; // rdi
  NTSTATUS v3; // ebx
  NTSTATUS v4; // ebx
  _QWORD *v5; // rbx
  __int64 v6; // rax
  ULONG_PTR v7; // rcx
  ULONG_PTR v8; // rdx
  __int64 CellFlat; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int ValueByName; // edi
  __int64 v15; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+80h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+30h] BYREF

  Handle = 0LL;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v17 = 0xFFFFFFFFLL;
  *(&ObjectAttributes.Length + 1) = 0;
  result = CmpOpenDevicesControlSet(a1, &Handle, 0LL);
  if ( result >= 0 )
  {
    v2 = Handle;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"$&";
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    result = ZwClose(v2);
    if ( v3 >= 0 )
    {
      Handle = 0LL;
      v4 = ObReferenceObjectByHandle(KeyHandle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, &Handle, 0LL);
      result = ZwClose(KeyHandle);
      if ( v4 >= 0 )
      {
        CmpLockRegistryExclusive();
        v5 = Handle;
        v6 = *((_QWORD *)Handle + 1);
        v7 = *(_QWORD *)(v6 + 32);
        v8 = *(unsigned int *)(v6 + 40);
        if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v7, v8, &v17);
        else
          CellFlat = HvpGetCellPaged(v7, v8, (unsigned int *)&v17);
        if ( CellFlat )
        {
          ValueByName = CmpFindValueByName(*(_QWORD *)(v5[1] + 32LL), CellFlat, (int)&CmpCurrentConfigString);
          v15 = *(_QWORD *)(v5[1] + 32LL);
          if ( (*(_BYTE *)(v15 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v15, &v17);
          else
            HvpReleaseCellPaged(v15, (unsigned int *)&v17);
          if ( ValueByName != -1 )
            HvpMarkCellDirty(*(_QWORD *)(v5[1] + 32LL), ValueByName, 1);
        }
        CmpUnlockRegistry(v11, v10, v12, v13);
        return ObfDereferenceObject(v5);
      }
    }
  }
  return result;
}
