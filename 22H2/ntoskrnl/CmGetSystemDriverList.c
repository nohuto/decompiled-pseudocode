/*
 * XREFs of CmGetSystemDriverList @ 0x140A5F174
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140A5D754 (IopInitializeSystemDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F9C60 (ZwOpenKey.c)
 *     ZwOpenDirectoryObject @ 0x1403FA520 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1403FC2A0 (ZwQueryDirectoryObject.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     RtlEqualUnicodeString @ 0x140601410 (RtlEqualUnicodeString.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x1406CE440 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1406CF870 (CmpAcquireShutdownRundown.c)
 *     CmpLockRegistryExclusive @ 0x1406EB57C (CmpLockRegistryExclusive.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 *     CmpCloseSystemDriverHiveContext @ 0x140A5F5A0 (CmpCloseSystemDriverHiveContext.c)
 *     CmpFreeDriverList @ 0x140A5F5F4 (CmpFreeDriverList.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140A60258 (CmpAcquireSystemDriverHiveContext.c)
 *     CmpSortDriverList @ 0x140A60418 (CmpSortDriverList.c)
 *     CmpFindDrivers @ 0x140A60F64 (CmpFindDrivers.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A61428 (CmpOpenSystemDriverHiveContext.c)
 */

HANDLE *__fastcall CmGetSystemDriverList(__int64 a1)
{
  __int64 v1; // rdi
  char v2; // r13
  UNICODE_STRING *v3; // rsi
  HANDLE *v4; // r14
  char v5; // r15
  BOOLEAN v6; // r12
  NTSTATUS v7; // eax
  const UNICODE_STRING *j; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9
  PVOID *i; // rbx
  __int64 *v13; // rax
  int v14; // ecx
  __int64 v15; // rbx
  int v16; // edi
  PVOID **v17; // rdi
  PVOID **v18; // rcx
  int v20; // eax
  _DWORD *v21; // rax
  _DWORD *v22; // rbx
  PVOID *v23; // rax
  PVOID **v24; // rax
  PVOID **v25; // rcx
  PVOID *v26; // rax
  PVOID *v27; // rbx
  PVOID *v28; // rbx
  int Context; // [rsp+30h] [rbp-D8h]
  PULONG ReturnLength; // [rsp+38h] [rbp-D0h]
  __int64 v31; // [rsp+48h] [rbp-C0h]
  __int64 v32; // [rsp+58h] [rbp-B0h]
  __int64 v33[2]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  PVOID *p_P; // [rsp+80h] [rbp-88h]
  ULONG v36; // [rsp+88h] [rbp-80h] BYREF
  ULONG v37; // [rsp+8Ch] [rbp-7Ch] BYREF
  PVOID v38; // [rsp+90h] [rbp-78h] BYREF
  PVOID *v39; // [rsp+98h] [rbp-70h]
  HANDLE DirectoryHandle; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v42; // [rsp+D8h] [rbp-30h]
  UNICODE_STRING *PoolWithTag; // [rsp+E0h] [rbp-28h]
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  ULONG_PTR v45[8]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v46[8]; // [rsp+138h] [rbp+30h] BYREF
  _OWORD v47[3]; // [rsp+178h] [rbp+70h] BYREF

  v42 = a1;
  v1 = a1;
  v37 = 0;
  v36 = 0;
  v2 = 0;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v47, 0, sizeof(v47));
  memset(v45, 0, sizeof(v45));
  LODWORD(v45[7]) = -1;
  memset(v46, 0, sizeof(v46));
  LODWORD(v46[7]) = -1;
  p_P = &P;
  DirectoryHandle = 0LL;
  P = &P;
  v3 = 0LL;
  v39 = &v38;
  v4 = 0LL;
  v5 = 0;
  v38 = &v38;
  v6 = 0;
  v33[1] = (__int64)v33;
  v33[0] = (__int64)v33;
  if ( (int)CmpOpenSystemDriverHiveContext(&CmpSystemHiveNameString) >= 0 )
  {
    if ( !CmStateSeparationEnabled
      || (v20 = CmpOpenSystemDriverHiveContext(&CmpDevicesHiveNameString), (int)(v20 + 0x80000000) < 0)
      || v20 == -1073741772 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\DriverStores");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes) >= 0 )
      {
        PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20204D43u);
        v3 = PoolWithTag;
        if ( PoolWithTag )
        {
          v7 = ZwQueryDirectoryObject(DirectoryHandle, PoolWithTag, 0x400u, 1u, 1u, &v37, &v36);
          if ( v7 == -2147483622 )
          {
LABEL_12:
            v6 = CmpAcquireShutdownRundown();
            if ( v6 )
            {
              CmpAttachToRegistryProcess((__int64)v47, v9, v10, v11);
              v2 = 1;
              CmpLockRegistryExclusive();
              v5 = 1;
              if ( (int)CmpAcquireSystemDriverHiveContext(v45) >= 0
                && (!v46[4] || (int)CmpAcquireSystemDriverHiveContext(v46) >= 0) )
              {
                for ( i = (PVOID *)P; i != &P; i = (PVOID *)*i )
                {
                  if ( (int)CmpAcquireSystemDriverHiveContext(i) >= 0 )
                  {
                    v24 = (PVOID **)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20204D43u);
                    v25 = v24;
                    if ( !v24 )
                      goto LABEL_29;
                    *(_OWORD *)v24 = 0LL;
                    *((_OWORD *)v24 + 1) = 0LL;
                    *((_OWORD *)v24 + 2) = 0LL;
                    *((_OWORD *)v24 + 1) = *((_OWORD *)i + 1);
                    v24[4] = (PVOID *)i[6];
                    *((_DWORD *)v24 + 10) = *((_DWORD *)i + 14);
                    v26 = v39;
                    if ( *v39 != &v38 )
                      goto LABEL_61;
                    v25[1] = v39;
                    *v25 = &v38;
                    *v26 = v25;
                    v39 = (PVOID *)v25;
                  }
                }
                if ( (unsigned __int8)CmpFindDrivers(
                                        v45[6],
                                        (__int64)&v38,
                                        Context,
                                        (__int64)ReturnLength,
                                        (__int64)v33,
                                        v31,
                                        v1,
                                        v32)
                  && (unsigned __int8)CmpSortDriverList(v45[6]) )
                {
                  CmpUnlockRegistry();
                  v13 = (__int64 *)v33[0];
                  v14 = 0;
                  v5 = 0;
                  while ( v13 != v33 )
                  {
                    v13 = (__int64 *)*v13;
                    ++v14;
                  }
                  v4 = (HANDLE *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v14 + 1), 0x32384D43u);
                  if ( !v4 )
                    KeBugCheckEx(0x67u, 2uLL, 1uLL, 0LL, 0LL);
                  v15 = v33[0];
                  v16 = 0;
                  if ( (__int64 *)v33[0] != v33 )
                  {
                    do
                    {
                      ObjectAttributes.Length = 48;
                      ObjectAttributes.ObjectName = (PUNICODE_STRING)(v15 + 32);
                      ObjectAttributes.RootDirectory = 0LL;
                      ObjectAttributes.Attributes = 576;
                      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                      if ( ZwOpenKey(&v4[v16], 0x2001Fu, &ObjectAttributes) >= 0 )
                        ++v16;
                      v15 = *(_QWORD *)v15;
                    }
                    while ( (__int64 *)v15 != v33 );
                    v3 = PoolWithTag;
                  }
                  v4[v16] = 0LL;
                }
              }
            }
          }
          else
          {
            while ( v7 >= 0 )
            {
              for ( j = v3; j->Length; j += 2 )
              {
                if ( !RtlEqualUnicodeString(j, &CmpSystemFileName, 1u) )
                {
                  v21 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x20204D43u);
                  v22 = v21;
                  if ( !v21 )
                    goto LABEL_29;
                  memset(v21, 0, 0x40uLL);
                  v22[14] = -1;
                  if ( (int)CmpOpenSystemDriverHiveContext(j) >= 0 )
                  {
                    v23 = p_P;
                    if ( *p_P != &P )
LABEL_61:
                      __fastfail(3u);
                    *((_QWORD *)v22 + 1) = p_P;
                    *(_QWORD *)v22 = &P;
                    *v23 = v22;
                    p_P = (PVOID *)v22;
                  }
                  else
                  {
                    ExFreePoolWithTag(v22, 0);
                  }
                }
              }
              v7 = ZwQueryDirectoryObject(DirectoryHandle, v3, 0x400u, 1u, 0, &v37, &v36);
              if ( v7 == -2147483622 )
              {
                v1 = v42;
                goto LABEL_12;
              }
            }
          }
        }
      }
    }
  }
LABEL_29:
  if ( (__int64 *)v33[0] != v33 )
    CmpFreeDriverList(v45[6], v33);
  if ( v5 )
    CmpUnlockRegistry();
  if ( v2 )
    CmpDetachFromRegistryProcess((__int64)v47);
  if ( v6 )
    CmpReleaseShutdownRundown();
  CmpCloseSystemDriverHiveContext(v45);
  if ( v46[4] )
    CmpCloseSystemDriverHiveContext(v46);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v17 = (PVOID **)P;
  if ( P != &P )
  {
    do
    {
      v27 = *v17;
      CmpCloseSystemDriverHiveContext(v17);
      ExFreePoolWithTag(v17, 0);
      v17 = (PVOID **)v27;
    }
    while ( v27 != &P );
  }
  v18 = (PVOID **)v38;
  if ( v38 != &v38 )
  {
    do
    {
      v28 = *v18;
      ExFreePoolWithTag(v18, 0);
      v18 = (PVOID **)v28;
    }
    while ( v28 != &v38 );
  }
  return v4;
}
