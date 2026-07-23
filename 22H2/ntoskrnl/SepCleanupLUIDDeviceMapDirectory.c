/*
 * XREFs of SepCleanupLUIDDeviceMapDirectory @ 0x1406F79AC
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1406F7CC4 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x14077A570 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C9130 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     PsGetServerSiloServiceSessionId @ 0x14032D5C0 (PsGetServerSiloServiceSessionId.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     PsDetachSiloFromCurrentThread @ 0x14034C200 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14034C220 (PsAttachSiloToCurrentThread.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     wcscmp @ 0x1403D3840 (wcscmp.c)
 *     swprintf_s @ 0x1403D61F0 (swprintf_s.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1403FA520 (ZwOpenDirectoryObject.c)
 *     ZwMakeTemporaryObject @ 0x1403FBC20 (ZwMakeTemporaryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1403FBFE0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQueryDirectoryObject @ 0x1403FC2A0 (ZwQueryDirectoryObject.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepCleanupLUIDDeviceMapDirectory(_DWORD *a1, struct _LIST_ENTRY *a2)
{
  UNICODE_STRING *v4; // rbx
  unsigned int v5; // r13d
  _DWORD *v6; // r9
  char v7; // r12
  unsigned int ServerSiloServiceSessionId; // eax
  struct _LIST_ENTRY *v9; // rsi
  NTSTATUS v10; // edi
  HANDLE *PoolWithTag; // r14
  unsigned int RestartScan; // r15d
  __int64 v13; // rdi
  SIZE_T v14; // r12
  NTSTATUS v15; // esi
  HANDLE *v16; // rsi
  HANDLE *v18; // rsi
  char v19; // [rsp+40h] [rbp-C0h]
  ULONG ReturnLength; // [rsp+44h] [rbp-BCh] BYREF
  ULONG Length; // [rsp+48h] [rbp-B8h]
  HANDLE DirectoryHandle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE LinkHandle; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Context; // [rsp+60h] [rbp-A0h] BYREF
  struct _LIST_ENTRY *v25; // [rsp+68h] [rbp-98h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v28[3]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Dst[64]; // [rsp+E0h] [rbp-20h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  LinkHandle = 0LL;
  v4 = 0LL;
  Context = 0;
  v5 = 100;
  ReturnLength = 0;
  DirectoryHandle = 0LL;
  Length = 0;
  DestinationString = 0LL;
  memset(v28, 0, sizeof(v28));
  if ( !a1 )
    return 3221225485LL;
  v19 = ObReferenceObjectSafeWithTag((__int64)KeGetCurrentThread()->ApcState.Process);
  v7 = v19;
  if ( v19 )
    ObfDereferenceObjectWithTag(KeGetCurrentThread()->ApcState.Process, 0x4D526553u);
  else
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v28, v6);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId((__int64)a2);
  swprintf_s(Dst, 0x40uLL, L"\\Sessions\\%d\\DosDevices\\%08x-%08x", ServerSiloServiceSessionId, a1[1], *a1);
  RtlInitUnicodeString(&DestinationString, Dst);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v25 = PsAttachSiloToCurrentThread(a2);
  v9 = v25;
  v10 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v10 < 0 )
  {
    PsDetachSiloFromCurrentThread(v9);
    if ( !v19 )
      KiUnstackDetachProcess((__int64)v28, 0);
    return (unsigned int)v10;
  }
  else
  {
    PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(PagedPool, 0x320uLL, 0x61486553u);
    if ( PoolWithTag )
    {
LABEL_6:
      LOBYTE(RestartScan) = 1;
      v13 = 0LL;
      while ( 1 )
      {
        LODWORD(v14) = Length;
        do
        {
          v15 = ZwQueryDirectoryObject(DirectoryHandle, v4, v14, 1u, RestartScan, &Context, &ReturnLength);
          if ( v15 == -1073741789 )
          {
            v14 = ReturnLength;
            if ( v4 )
              ExFreePoolWithTag(v4, 0);
            v4 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v14, 0x62446553u);
            if ( !v4 )
              v15 = -1073741670;
          }
        }
        while ( v15 == -1073741789 );
        RestartScan = 0;
        Length = v14;
        v7 = v19;
        if ( v15 < 0 )
          break;
        if ( !wcscmp(v4[1].Buffer, L"SymbolicLink") )
        {
          if ( (unsigned int)v13 >= v5 )
          {
            if ( (_DWORD)v13 )
            {
              v18 = PoolWithTag;
              do
              {
                ZwClose(*v18++);
                --v13;
              }
              while ( v13 );
            }
            v5 += 20;
            ExFreePoolWithTag(PoolWithTag, 0);
            PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(PagedPool, 8LL * v5, 0x61486553u);
            if ( !PoolWithTag )
            {
              v9 = v25;
              goto LABEL_44;
            }
            goto LABEL_6;
          }
          ObjectAttributes.RootDirectory = DirectoryHandle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          ObjectAttributes.ObjectName = v4;
          if ( ZwOpenSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes) >= 0 )
          {
            if ( ZwMakeTemporaryObject(LinkHandle) < 0 )
            {
              ZwClose(LinkHandle);
            }
            else
            {
              PoolWithTag[v13] = LinkHandle;
              v13 = (unsigned int)(v13 + 1);
            }
          }
        }
      }
      if ( v15 != -2147483622 )
        RestartScan = v15;
      if ( (_DWORD)v13 )
      {
        v16 = PoolWithTag;
        do
        {
          ZwClose(*v16++);
          --v13;
        }
        while ( v13 );
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      if ( DirectoryHandle )
        ZwClose(DirectoryHandle);
      PsDetachSiloFromCurrentThread(v25);
      if ( !v19 )
        KiUnstackDetachProcess((__int64)v28, 0);
      return RestartScan;
    }
    else
    {
LABEL_44:
      ZwClose(DirectoryHandle);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      PsDetachSiloFromCurrentThread(v9);
      if ( !v7 )
        KiUnstackDetachProcess((__int64)v28, 0);
      return 3221225495LL;
    }
  }
}
