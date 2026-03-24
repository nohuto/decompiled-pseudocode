/*
 * XREFs of CmpVEExecuteCreateLogic @ 0x140685510
 * Callers:
 *     CmpDoParseKey @ 0x140646890 (CmpDoParseKey.c)
 * Callees:
 *     KCBNeedsVirtualImage @ 0x140314E3C (KCBNeedsVirtualImage.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     CmpCheckAdminAccess @ 0x1405D9B08 (CmpCheckAdminAccess.c)
 *     CmpLockKcbExclusive @ 0x1405EC35C (CmpLockKcbExclusive.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockKcb @ 0x140640260 (CmpUnlockKcb.c)
 *     CmpReparseToVirtualPath @ 0x1406854AC (CmpReparseToVirtualPath.c)
 *     CmRealKCBToVirtualPath @ 0x1406EB88C (CmRealKCBToVirtualPath.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086FE5C (CmpDoAccessCheckOnKCB.c)
 *     CmpReplicateKeyToVirtual @ 0x140870A14 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x140871CD0 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140871DE8 (CmpReportAuditVirtualizationEvent.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpVEExecuteCreateLogic(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        __int64 a7,
        __int64 a8,
        UNICODE_STRING *a9)
{
  int v13; // ebx
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9
  __int64 v19; // r9
  ACCESS_MASK v20; // ebx
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // rax
  UNICODE_STRING *v24; // rbx
  wchar_t *Buffer; // rcx
  char v27[8]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v28; // [rsp+28h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  BOOLEAN v30; // [rsp+70h] [rbp+30h] BYREF

  v30 = 0;
  v28 = 0LL;
  v27[0] = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *(_WORD *)(a1 + 66) )
    goto LABEL_2;
  v14 = a8;
  if ( (*(_DWORD *)(a8 + 24) & 0x10) != 0 )
    goto LABEL_2;
  v15 = a4 + 32;
  if ( !KCBNeedsVirtualImage() )
    goto LABEL_2;
  if ( (*(_DWORD *)(v14 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess(v14 + 168, v16, v17, v18);
    *(_DWORD *)(v14 + 160) |= 1u;
  }
  if ( CmpReparseToVirtualPath(a1, v16, v15, &DestinationString) )
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    RtlInitUnicodeString(&DestinationString, 0LL);
    goto LABEL_20;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x20) != 0
    || (LOBYTE(v19) = a5, v20 = a6 | 4, (unsigned __int8)CmpDoAccessCheckOnKCB(a1, a7, a6 | 4u, v19)) )
  {
LABEL_2:
    v13 = -1073741199;
    goto LABEL_24;
  }
  LOBYTE(v21) = a5;
  if ( !(unsigned __int8)CmpDoAccessCheckOnKCB(a1, a7, 131097LL, v21) )
    goto LABEL_12;
  v13 = CmpCheckAdminAccess(v20, (PSECURITY_DESCRIPTOR)(*(_QWORD *)(a1 + 88) + 32LL), v15, &v30);
  if ( v13 < 0 )
    goto LABEL_24;
  if ( !v30 )
  {
LABEL_12:
    v13 = -1073741790;
    goto LABEL_24;
  }
  CmpUnlockKcb(a2);
  v22 = *(_DWORD *)v14 >> 10;
  LOBYTE(v22) = (*(_DWORD *)v14 & 0x400) != 0;
  v13 = CmpReplicateKeyToVirtual(a1, v15, v22, &v28);
  CmpLockKcbExclusive(a2);
  if ( v13 >= 0 )
  {
    v13 = CmpExamineSaclForAuditEvent(*(_QWORD *)(a1 + 88) + 32LL, v15, v27);
    if ( v13 >= 0 )
    {
      if ( !v27[0] || (v13 = CmpReportAuditVirtualizationEvent(a1, v15), v13 >= 0) )
      {
        v23 = v28;
        *(_DWORD *)(v14 + 100) |= 2u;
        *(_QWORD *)(v14 + 112) = v23;
LABEL_20:
        v13 = CmRealKCBToVirtualPath(a1, a3, v15, &DestinationString);
        if ( v13 >= 0 )
        {
          v24 = a9;
          Buffer = a9->Buffer;
          if ( Buffer )
            ExFreePoolWithTag(Buffer, 0);
          *v24 = DestinationString;
          RtlInitUnicodeString(&DestinationString, 0LL);
          *(_DWORD *)v14 |= 8u;
          v13 = 260;
        }
      }
    }
  }
LABEL_24:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v13;
}
