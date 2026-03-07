__int64 __fastcall CmGetSystemDriverList(__int64 a1)
{
  __int64 v1; // rdi
  char v2; // r13
  UNICODE_STRING *v3; // rsi
  __int64 v4; // r14
  char v5; // r15
  BOOLEAN v6; // r12
  int DirectoryObject; // eax
  const UNICODE_STRING *k; // rdi
  PVOID *i; // rbx
  __int64 *v10; // rax
  int j; // edx
  __int64 v12; // rbx
  unsigned int v13; // edi
  PVOID **v14; // rdi
  UNICODE_STRING *v15; // rcx
  __int64 result; // rax
  int v17; // eax
  _DWORD *v18; // rax
  _DWORD *v19; // rbx
  PVOID *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  wchar_t *Buffer; // rax
  PVOID *v24; // rbx
  UNICODE_STRING *v25; // rbx
  unsigned int v26; // [rsp+40h] [rbp-C8h]
  __int64 v27; // [rsp+50h] [rbp-B8h]
  __int64 v28; // [rsp+60h] [rbp-A8h]
  __int64 v29[2]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  PVOID *p_P; // [rsp+80h] [rbp-88h]
  __int64 v32; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v33; // [rsp+90h] [rbp-78h] BYREF
  HANDLE DirectoryHandle; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v36; // [rsp+D8h] [rbp-30h]
  UNICODE_STRING *Pool2; // [rsp+E0h] [rbp-28h]
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v39; // [rsp+F8h] [rbp-10h] BYREF
  ULONG_PTR v40[8]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v41[8]; // [rsp+148h] [rbp+40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+188h] [rbp+80h] BYREF

  v36 = a1;
  v1 = a1;
  v32 = 0LL;
  v39 = 0LL;
  v2 = 0;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v40, 0, sizeof(v40));
  LODWORD(v40[7]) = -1;
  memset(v41, 0, sizeof(v41));
  LODWORD(v41[7]) = -1;
  p_P = &P;
  DirectoryHandle = 0LL;
  P = &P;
  v3 = 0LL;
  v4 = 0LL;
  v33.Buffer = (wchar_t *)&v33;
  v5 = 0;
  v6 = 0;
  *(_QWORD *)&v33.Length = &v33;
  CmpInitializeThreadInfo((__int64)&v39);
  v29[1] = (__int64)v29;
  v29[0] = (__int64)v29;
  if ( (int)CmpOpenSystemDriverHiveContext(&CmpSystemHiveNameString) >= 0 )
  {
    if ( !CmStateSeparationEnabled
      || (v17 = CmpOpenSystemDriverHiveContext(&CmpDevicesHiveNameString), (int)(v17 + 0x80000000) < 0)
      || v17 == -1073741772 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\DriverStore\\Nodes");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes) >= 0 )
      {
        Pool2 = (UNICODE_STRING *)ExAllocatePool2(256LL, 0x400uLL, 0x20204D43u);
        v3 = Pool2;
        if ( Pool2 )
        {
          DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)Pool2);
          if ( DirectoryObject == -2147483622 )
          {
LABEL_12:
            v6 = CmpAcquireShutdownRundown();
            if ( v6 )
            {
              CmpAttachToRegistryProcess(&ApcState);
              v2 = 1;
              CmpLockRegistryExclusive();
              v5 = 1;
              if ( (int)CmpAcquireSystemDriverHiveContext(v40) >= 0
                && (!v41[4] || (int)CmpAcquireSystemDriverHiveContext(v41) >= 0) )
              {
                for ( i = (PVOID *)P; i != &P; i = (PVOID *)*i )
                {
                  if ( (int)CmpAcquireSystemDriverHiveContext(i) >= 0 )
                  {
                    v21 = ExAllocatePool2(256LL, 0x30uLL, 0x20204D43u);
                    v22 = v21;
                    if ( !v21 )
                      goto LABEL_28;
                    *(_OWORD *)(v21 + 16) = *((_OWORD *)i + 1);
                    *(_QWORD *)(v21 + 32) = i[6];
                    *(_DWORD *)(v21 + 40) = *((_DWORD *)i + 14);
                    Buffer = v33.Buffer;
                    if ( *(UNICODE_STRING **)v33.Buffer != &v33 )
                      goto LABEL_60;
                    *(_QWORD *)(v22 + 8) = v33.Buffer;
                    *(_QWORD *)v22 = &v33;
                    *(_QWORD *)Buffer = v22;
                    v33.Buffer = (wchar_t *)v22;
                  }
                }
                if ( CmpFindDrivers(
                       v40[6],
                       LODWORD(v40[7]),
                       v41[6],
                       LODWORD(v41[7]),
                       &v33,
                       (unsigned int)&v32 + 4,
                       (__int64)&v32,
                       v26,
                       (char **)v29,
                       v27,
                       v1,
                       v28)
                  && CmpSortDriverList(v40[6], LODWORD(v40[7]), (__int64)v29) )
                {
                  CmpUnlockRegistry();
                  v10 = (__int64 *)v29[0];
                  v5 = 0;
                  for ( j = 0; v10 != v29; ++j )
                    v10 = (__int64 *)*v10;
                  v4 = ExAllocatePool2(64LL, 8LL * (unsigned int)(j + 1), 0x32384D43u);
                  if ( !v4 )
                    KeBugCheckEx(0x67u, 2uLL, 1uLL, 0LL, 0LL);
                  v12 = v29[0];
                  v13 = 0;
                  if ( (__int64 *)v29[0] != v29 )
                  {
                    do
                    {
                      ObjectAttributes.Length = 48;
                      ObjectAttributes.ObjectName = (PUNICODE_STRING)(v12 + 32);
                      ObjectAttributes.RootDirectory = 0LL;
                      ObjectAttributes.Attributes = 576;
                      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                      if ( ZwOpenKey((PHANDLE)(v4 + 8LL * v13), 0x2001Fu, &ObjectAttributes) >= 0 )
                        ++v13;
                      v12 = *(_QWORD *)v12;
                    }
                    while ( (__int64 *)v12 != v29 );
                    v3 = Pool2;
                  }
                  *(_QWORD *)(v4 + 8LL * v13) = 0LL;
                }
              }
            }
          }
          else
          {
            while ( DirectoryObject >= 0 )
            {
              for ( k = v3; k->Length; k += 2 )
              {
                if ( !RtlEqualUnicodeString(k, &CmpSystemFileName, 1u) )
                {
                  v18 = (_DWORD *)ExAllocatePool2(256LL, 0x40uLL, 0x20204D43u);
                  v19 = v18;
                  if ( !v18 )
                    goto LABEL_28;
                  memset(v18, 0, 0x40uLL);
                  v19[14] = -1;
                  if ( (int)CmpOpenSystemDriverHiveContext(k) >= 0 )
                  {
                    v20 = p_P;
                    if ( *p_P != &P )
LABEL_60:
                      __fastfail(3u);
                    *((_QWORD *)v19 + 1) = p_P;
                    *(_QWORD *)v19 = &P;
                    *v20 = v19;
                    p_P = (PVOID *)v19;
                  }
                  else
                  {
                    ExFreePoolWithTag(v19, 0);
                  }
                }
              }
              DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)v3);
              if ( DirectoryObject == -2147483622 )
              {
                v1 = v36;
                goto LABEL_12;
              }
            }
          }
        }
      }
    }
  }
LABEL_28:
  if ( (__int64 *)v29[0] != v29 )
    CmpFreeDriverList(v40[6], v29);
  if ( v5 )
    CmpUnlockRegistry();
  if ( v2 )
    CmpDetachFromRegistryProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  if ( v6 )
    CmpReleaseShutdownRundown();
  CmpCloseSystemDriverHiveContext(v40);
  if ( v41[4] )
    CmpCloseSystemDriverHiveContext(v41);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v14 = (PVOID **)P;
  if ( P != &P )
  {
    do
    {
      v24 = *v14;
      CmpCloseSystemDriverHiveContext(v14);
      ExFreePoolWithTag(v14, 0);
      v14 = (PVOID **)v24;
    }
    while ( v24 != &P );
  }
  v15 = *(UNICODE_STRING **)&v33.Length;
  if ( *(UNICODE_STRING **)&v33.Length != &v33 )
  {
    do
    {
      v25 = *(UNICODE_STRING **)&v15->Length;
      ExFreePoolWithTag(v15, 0);
      v15 = v25;
    }
    while ( v25 != &v33 );
  }
  result = v4;
  *(_QWORD *)&KeGetCurrentThread()[1].ResourceIndex = v39;
  return result;
}
