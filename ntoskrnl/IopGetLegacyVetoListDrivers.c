/*
 * XREFs of IopGetLegacyVetoListDrivers @ 0x140698764
 * Callers:
 *     IoGetLegacyVetoList @ 0x1407609A0 (IoGetLegacyVetoList.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x140412E10 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x140414C90 (ZwQueryDirectoryObject.c)
 *     ObReferenceObjectByName @ 0x140698F90 (ObReferenceObjectByName.c)
 *     IopAppendLegacyVeto @ 0x1409696E4 (IopAppendLegacyVeto.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall IopGetLegacyVetoListDrivers(__int64 a1)
{
  _QWORD *Pool2; // rsi
  char v3; // r14
  NTSTATUS v4; // ecx
  unsigned __int16 v5; // r12
  _WORD *v6; // rax
  void *v7; // rbx
  _DWORD **v8; // r15
  int DirectoryObject; // eax
  unsigned __int16 v10; // r14
  __int64 v11; // r9
  PVOID v12; // rbx
  unsigned int v13; // r13d
  _DWORD *v14; // rax
  POBJECT_TYPE v15; // [rsp+20h] [rbp-59h]
  PVOID *p_Object; // [rsp+38h] [rbp-41h]
  HANDLE DirectoryHandle; // [rsp+40h] [rbp-39h] BYREF
  PVOID Object; // [rsp+48h] [rbp-31h] BYREF
  __int128 v19; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  unsigned int v22; // [rsp+F0h] [rbp+77h] BYREF
  int v23; // [rsp+F8h] [rbp+7Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  Object = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v20[1] = L"\\Driver";
  v20[0] = 1048590LL;
  v22 = 0;
  v23 = 0;
  DirectoryHandle = 0LL;
  Pool2 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v3 = 1;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v20;
  v19 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v4 < 0 )
  {
    **(_DWORD **)(a1 + 24) = v4;
LABEL_20:
    v7 = (void *)*((_QWORD *)&v19 + 1);
    goto LABEL_13;
  }
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 202LL, 1869181008LL);
  if ( !Pool2 )
  {
    **(_DWORD **)(a1 + 24) = -1073741670;
    goto LABEL_20;
  }
  v5 = 188;
  LODWORD(v19) = 12320768;
  v6 = (_WORD *)ExAllocatePool2(256LL, 188LL, 1869181008LL);
  *((_QWORD *)&v19 + 1) = v6;
  v7 = v6;
  if ( !v6 )
  {
    **(_DWORD **)(a1 + 24) = -1073741670;
    goto LABEL_16;
  }
  *v6 = 0;
  v8 = (_DWORD **)(a1 + 24);
  while ( 1 )
  {
    LOBYTE(v15) = v3;
    DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)Pool2);
    if ( DirectoryObject != -1073741789 )
      goto LABEL_6;
    v13 = v22;
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, v13, 1869181008LL);
    if ( !Pool2 )
      break;
    LOBYTE(v15) = v3;
    DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)Pool2);
    v8 = (_DWORD **)(a1 + 24);
LABEL_6:
    if ( DirectoryObject < 0 )
      goto LABEL_13;
    v10 = *(_WORD *)Pool2 + 18;
    if ( v10 > v5 )
    {
      ExFreePoolWithTag(v7, 0);
      WORD1(v19) = v10;
      v5 = v10;
      *((_QWORD *)&v19 + 1) = ExAllocatePool2(256LL, v10, 1869181008LL);
      v7 = (void *)*((_QWORD *)&v19 + 1);
      if ( !*((_QWORD *)&v19 + 1) )
      {
        v14 = *v8;
        goto LABEL_34;
      }
    }
    v11 = Pool2[1];
    LOWORD(v19) = v10 - 2;
    RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v7, v5, L"\\Driver\\%ws", v11, v15, &v23, &v22, p_Object);
    p_Object = &Object;
    v15 = IoDriverObjectType;
    if ( (int)ObReferenceObjectByName(&v19, 576LL, 0LL) < 0 )
    {
      v8 = (_DWORD **)(a1 + 24);
    }
    else
    {
      v12 = Object;
      if ( (*((_DWORD *)Object + 4) & 0x40) != 0 )
      {
        **(_DWORD **)(a1 + 16) = 11;
        if ( *(_QWORD *)a1 )
          IopAppendLegacyVeto(a1, Pool2);
      }
      ObfDereferenceObject(v12);
      if ( **(_DWORD **)(a1 + 16) == 11 && !*(_QWORD *)a1 )
        goto LABEL_20;
      v8 = (_DWORD **)(a1 + 24);
      if ( **(int **)(a1 + 24) < 0 )
        goto LABEL_20;
    }
    v7 = (void *)*((_QWORD *)&v19 + 1);
    v5 = WORD1(v19);
    v3 = 0;
  }
  v14 = *(_DWORD **)(a1 + 24);
LABEL_34:
  *v14 = -1073741670;
LABEL_13:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( Pool2 )
LABEL_16:
    ExFreePoolWithTag(Pool2, 0);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
}
