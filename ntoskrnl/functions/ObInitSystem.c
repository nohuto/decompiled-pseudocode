char __fastcall ObInitSystem(int a1)
{
  __int16 v1; // di
  __int16 v2; // bx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax
  int v7; // edi
  unsigned int v8; // edi
  char *v9; // rsi
  unsigned int v10; // eax
  _OWORD *v11; // rdi
  void *v12; // rdi
  NTSTATUS v13; // eax
  char *v14; // r14
  char *i; // rdi
  char *v16; // rax
  unsigned __int16 *v17; // rcx
  ULONG v18; // edx
  __int64 v19; // rdx
  _BYTE *v20; // rax
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  PVOID Ace; // [rsp+50h] [rbp-B8h] BYREF
  __m256i Handle; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v24[16]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v25; // [rsp+F8h] [rbp-10h]
  __int128 v26; // [rsp+108h] [rbp+0h]
  _OWORD *v27; // [rsp+118h] [rbp+10h]
  __int64 v28; // [rsp+120h] [rbp+18h]
  UNICODE_STRING DestinationString; // [rsp+128h] [rbp+20h] BYREF
  UNICODE_STRING v30; // [rsp+138h] [rbp+30h] BYREF
  UNICODE_STRING v31; // [rsp+148h] [rbp+40h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v33; // [rsp+178h] [rbp+70h]
  ACL Acl; // [rsp+188h] [rbp+80h] BYREF

  Ace = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v33 = 0LL;
  v27 = 0LL;
  LODWORD(v28) = 0;
  v30 = 0LL;
  Handle.m256i_i64[0] = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v31 = 0LL;
  DestinationString = 0LL;
  if ( (_BYTE)dword_140D1D1EC )
  {
    v1 = 64;
    v2 = 32;
  }
  else
  {
    v1 = 32;
    v2 = 16;
  }
  if ( a1 )
  {
    if ( a1 != 1 )
    {
      if ( a1 == 2 )
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C02F98, 0LL, 0LL);
      return 1;
    }
    if ( ObInitServerSilo(0LL) >= 0 )
    {
      v7 = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        while ( (int)ObInitializeProcessor((_QWORD *)KiProcessorBlock[v7]) >= 0 )
        {
          if ( ++v7 >= (unsigned int)KeNumberProcessors_0 )
            goto LABEL_19;
        }
      }
      else
      {
LABEL_19:
        v8 = 0;
        v9 = (char *)&ObpWaitBlockLookaside;
        do
        {
          v10 = 14 * v8 + 24;
          if ( v10 >= 0x40 )
            v10 = 64;
          ExInitializeNPagedLookasideListInternal((__int64)v9, 0LL, 0LL, 512, 48 * v10, 1834443343, 0, 0);
          ++v8;
          v9 += 128;
        }
        while ( v8 < 4 );
        v11 = (_OWORD *)SePublicDefaultUnrestrictedSd;
        if ( !ObpAuditBaseDirectories && !ObpAuditBaseObjects )
          goto LABEL_28;
        v18 = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 28;
        if ( v18 < 0xFA
          && RtlCreateAcl(&Acl, v18, 2u) >= 0
          && (int)RtlAddAuditAccessAce((__int64)&Acl, v19, 1610612736) >= 0
          && RtlGetAce(&Acl, 0, &Ace) >= 0 )
        {
          v20 = Ace;
          if ( ObpAuditBaseDirectories )
            *((_BYTE *)Ace + 1) |= 0xAu;
          if ( ObpAuditBaseObjects )
            v20[1] |= 9u;
          v11 = SecurityDescriptor;
          if ( RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
            && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, SePublicDefaultUnrestrictedDacl, 0) >= 0
            && (int)RtlSetSaclSecurityDescriptor((__int64)SecurityDescriptor, 1, (__int64)&Acl, 0) >= 0 )
          {
LABEL_28:
            LODWORD(v25) = 48;
            *(_QWORD *)&v26 = &ObpRootDirectoryName;
            *((_QWORD *)&v25 + 1) = 0LL;
            DWORD2(v26) = 80;
            v27 = v11;
            v28 = 0LL;
            if ( (int)NtCreateDirectoryObject((__int64)&Handle) >= 0 )
            {
              v12 = (void *)Handle.m256i_i64[0];
              Object = 0LL;
              v13 = ObReferenceObjectByHandle((HANDLE)Handle.m256i_i64[0], 0, ObpDirectoryObjectType, 0, &Object, 0LL);
              ObpRootDirectoryObject = Object;
              if ( v13 >= 0 && (int)ObpInitializeRootNamespace(0LL, v12, 0LL, 0LL) >= 0 && NtClose(v12) >= 0 )
              {
                memset(&Handle.m256i_u64[1], 0, 24);
                ObpLockDirectoryExclusive((__int64)&Handle.m256i_i64[1], (__int64)ObpTypeDirectoryObject);
                v14 = (char *)ObpTypeObjectType;
                for ( i = *(char **)ObpTypeObjectType; i != v14; i = *(char **)i )
                {
                  if ( (i[58] & 2) != 0 )
                  {
                    v16 = (char *)ObpInfoMaskToOffset[i[58] & 3];
                    v17 = (unsigned __int16 *)(i + 32 - v16);
                    if ( i + 32 != v16
                      && !*(_QWORD *)v17
                      && !ObpLookupDirectoryEntry(v17 + 4, 0x40u, &Handle.m256i_i64[1])
                      && (!*((_QWORD *)i + 9) && (int)ObpInitObjectTypeSD((__int64)(i + 80), 0LL) < 0
                       || !ObpInsertDirectoryEntry(
                             (char *)ObpTypeDirectoryObject,
                             i + 80,
                             (__int64)&Handle.m256i_i64[1])) )
                    {
                      return 0;
                    }
                  }
                }
                if ( Handle.m256i_i64[1] )
                  ObpUnlockDirectory((__int64)&Handle.m256i_i64[1]);
                Object = &ObpLUIDDeviceMapsEnabled;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    ObHeaderCookie = ExGenRandom(0);
    ExInitializeSystemLookasideList(
      (__int64)&ObpCreateInfoLookasideList,
      512,
      64,
      1766023759,
      v1,
      (__int64)&ExSystemLookasideListHead);
    ExInitializeSystemLookasideList(
      (__int64)&ObpNameBufferLookasideList,
      1,
      248,
      1833853519,
      v2,
      (__int64)&ExSystemLookasideListHead);
    CurrentPrcb = KeGetCurrentPrcb();
    v4 = 256LL;
    CurrentPrcb->PPLookasideList[4].L = (_GENERAL_LOOKASIDE *)&ObpCreateInfoLookasideList;
    CurrentPrcb->PPLookasideList[4].P = (_GENERAL_LOOKASIDE *)&ObpCreateInfoLookasideList;
    CurrentPrcb->PPLookasideList[5].L = (_GENERAL_LOOKASIDE *)&ObpNameBufferLookasideList;
    CurrentPrcb->PPLookasideList[5].P = (_GENERAL_LOOKASIDE *)&ObpNameBufferLookasideList;
    v5 = &unk_140D4B048;
    ObpRemoveObjectList = 0LL;
    ObpRemoveObjectWait = 0LL;
    do
    {
      *(v5 - 1) = 0LL;
      *v5 = 0LL;
      v5 += 2;
      --v4;
    }
    while ( v4 );
    ObpDefaultObject = 0;
    qword_140C3FFD0 = (__int64)&qword_140C3FFC8;
    qword_140C3FFC8 = (__int64)&qword_140C3FFC8;
    byte_140C3FFC2 = 6;
    dword_140C3FFC4 = 1;
    ObpKernelHandleTable = ExCreateHandleTable(0LL, 1LL);
    KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[28] = ObpKernelHandleTable;
    if ( ObpKernelHandleTable )
    {
      ObpRemoveObjectWorkItem.Parameter = 0LL;
      ObpRemoveObjectWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ObpProcessRemoveObjectQueue;
      qword_140C40018 = (__int64)ObpProcessRemoveObjectDpcWorker;
      ObpRemoveObjectWorkItem.List.Flink = 0LL;
      LODWORD(ObpRemoveObjectDpc) = 275;
      qword_140C40020 = 0LL;
      qword_140C40038 = 0LL;
      qword_140C40010 = 0LL;
      ObpInitInfoBlockOffsets();
      qword_140D1F678 = (__int64)MmBadPointer;
      memset(v24, 0, 0x78uLL);
      LOWORD(v24[0]) = 120;
      LODWORD(v24[1]) = 256;
      HIDWORD(v24[4]) = 512;
      RtlInitUnicodeString(&DestinationString, L"Type");
      BYTE2(v24[0]) |= 0x24u;
      HIDWORD(v24[3]) = 983041;
      HIDWORD(v24[5]) = 216;
      *(_OWORD *)((char *)&v24[1] + 4) = ObpTypeMapping;
      if ( (int)ObCreateObjectType(&DestinationString, (__int64)v24, 0LL, (__int64)&ObpTypeObjectType) >= 0 )
      {
        HIDWORD(v24[4]) = 1;
        RtlInitUnicodeString(&v30, L"Directory");
        HIDWORD(v24[5]) = 344;
        HIDWORD(v24[3]) = 983055;
        BYTE2(v24[0]) = BYTE2(v24[0]) & 0xD2 | 0xD;
        v24[8] = ObpCloseDirectoryObject;
        v24[9] = ObpDeleteDirectoryObject;
        *(_OWORD *)((char *)&v24[1] + 4) = ObpDirectoryMapping;
        if ( (int)ObCreateObjectType(&v30, (__int64)v24, 0LL, (__int64)&ObpDirectoryObjectType) >= 0 )
        {
          v24[8] = 0LL;
          ObpDirectoryObjectType->TypeInfo.ValidAccessMask &= ~0x100000u;
          RtlInitUnicodeString(&v31, L"SymbolicLink");
          BYTE3(v24[0]) |= 1u;
          v24[9] = ObpDeleteSymbolicLink;
          HIDWORD(v24[5]) = 40;
          v24[10] = ObpParseSymbolicLinkEx;
          HIDWORD(v24[4]) = 1;
          HIDWORD(v24[3]) = 0xFFFFF;
          BYTE2(v24[0]) = BYTE2(v24[0]) & 0xF6 | 1;
          *(_OWORD *)((char *)&v24[1] + 4) = ObpSymbolicLinkMapping;
          if ( (int)ObCreateObjectType(&v31, (__int64)v24, 0LL, (__int64)&ObpSymbolicLinkObjectType) >= 0 )
          {
            ObpSymbolicLinkObjectType->TypeInfo.ValidAccessMask &= ~0x100000u;
            ObpInitStackTrace();
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
