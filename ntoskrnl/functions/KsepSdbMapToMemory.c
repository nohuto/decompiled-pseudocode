__int64 __fastcall KsepSdbMapToMemory(PCWSTR SourceString, __int64 a2)
{
  PVOID v3; // rsi
  NTSTATUS v4; // eax
  int v5; // edi
  int v6; // ecx
  const char *v7; // rbx
  NTSTATUS v9; // eax
  ULONG_PTR v10; // r14
  __int64 inited; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-39h] BYREF
  PVOID Object; // [rsp+48h] [rbp-31h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-21h] BYREF
  __int64 v20; // [rsp+88h] [rbp+Fh] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp+17h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp+27h] BYREF
  HANDLE FileHandle; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE SectionHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  BugCheckParameter1 = 0LL;
  DestinationString = 0LL;
  v3 = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  v5 = v4;
  if ( v4 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
    if ( v5 < 0 )
    {
      v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      v7 = "KSE: ZwCreateSection Failed!\n";
      KsepHistoryErrors[2 * v12 + 1] = v5;
      KsepHistoryErrors[2 * v12] = 590528;
    }
    else
    {
      Object = 0LL;
      v9 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
      v3 = Object;
      v5 = v9;
      if ( v9 < 0 )
      {
        v13 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
        v7 = "KSE: ObRefByHandle(section) failed!\n";
        KsepHistoryErrors[2 * v13 + 1] = v5;
        KsepHistoryErrors[2 * v13] = 590542;
      }
      else
      {
        v18 = 0LL;
        v20 = 0LL;
        v5 = MiMapViewInSystemSpace((__int64)Object, &BugCheckParameter1, &v18, &v20, 0LL, 0LL);
        if ( v5 < 0 )
        {
          v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          v7 = "KSE: Unable to map view of section!\n";
          KsepHistoryErrors[2 * v14 + 1] = v5;
          KsepHistoryErrors[2 * v14] = 590555;
        }
        else
        {
          v10 = BugCheckParameter1;
          inited = SdbInitDatabaseInMemory(BugCheckParameter1, v18);
          if ( inited )
          {
            v5 = 0;
            *(_QWORD *)(a2 + 16) = FileHandle;
            *(_QWORD *)(a2 + 24) = SectionHandle;
            *(_QWORD *)(a2 + 32) = v3;
            *(_QWORD *)(a2 + 8) = v10;
            *(_QWORD *)a2 = inited;
            *(_DWORD *)(a2 + 48) = SdbGetDatabaseEdition(*(_QWORD *)(inited + 8));
            return (unsigned int)v5;
          }
          v5 = -1073741823;
          v15 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          v7 = "KSE: SdbInitDatabaseInMemory Failed!\n";
          KsepHistoryErrors[2 * v15 + 1] = -1073741823;
          KsepHistoryErrors[2 * v15] = 590564;
        }
      }
    }
  }
  else
  {
    v6 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v7 = "KSE: ZwOpenFile failed opening DB file!\n";
    KsepHistoryErrors[2 * v6 + 1] = v4;
    KsepHistoryErrors[2 * v6] = 590506;
  }
  if ( (KsepDebugFlag & 2) != 0 )
    KsepDebugPrint(0LL, v7);
  KsepLogError(0LL, (__int64)v7);
  if ( BugCheckParameter1 )
    MiRemoveFromSystemSpace(BugCheckParameter1, 1);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v5;
}
