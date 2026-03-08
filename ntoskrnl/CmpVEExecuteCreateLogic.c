/*
 * XREFs of CmpVEExecuteCreateLogic @ 0x140768C00
 * Callers:
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 * Callees:
 *     KCBNeedsVirtualImage @ 0x1402DD15C (KCBNeedsVirtualImage.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     CmpLockKcbExclusive @ 0x1407AF778 (CmpLockKcbExclusive.c)
 *     CmRealKCBToVirtualPath @ 0x140A15968 (CmRealKCBToVirtualPath.c)
 *     CmpCheckAdminAccess @ 0x140A16150 (CmpCheckAdminAccess.c)
 *     CmpDoAccessCheckOnKCB @ 0x140A1628C (CmpDoAccessCheckOnKCB.c)
 *     CmpReparseToVirtualPath @ 0x140A17264 (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x140A17308 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x140A18BC8 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140A18D84 (CmpReportAuditVirtualizationEvent.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmpVEExecuteCreateLogic(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        __int64 a7,
        __int64 a8,
        UNICODE_STRING *a9)
{
  __int64 v12; // r14
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v16; // r9
  __int64 v17; // r9
  wchar_t *Buffer; // rcx
  char v19; // [rsp+20h] [rbp-20h]
  __int64 v20; // [rsp+28h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF

  v20 = 0LL;
  v19 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *(_WORD *)(a1 + 66) )
    goto LABEL_4;
  if ( (*(_DWORD *)(a8 + 24) & 0x10) != 0 )
    goto LABEL_4;
  v12 = a4 + 32;
  if ( !KCBNeedsVirtualImage() )
    goto LABEL_4;
  if ( (*(_DWORD *)(a8 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess((PRKAPC_STATE)(a8 + 168));
    *(_DWORD *)(a8 + 160) |= 1u;
  }
  if ( (unsigned __int8)CmpReparseToVirtualPath(a1, v13, v12, &DestinationString) )
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    RtlInitUnicodeString(&DestinationString, 0LL);
    v14 = CmRealKCBToVirtualPath(a1, a3, v12, &DestinationString);
    if ( v14 >= 0 )
    {
      Buffer = a9->Buffer;
      if ( Buffer )
        ExFreePoolWithTag(Buffer, 0);
      *a9 = DestinationString;
      RtlInitUnicodeString(&DestinationString, 0LL);
      *(_DWORD *)a8 |= 8u;
      v14 = 260;
    }
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x20) != 0
      || (LOBYTE(v16) = a5, (unsigned __int8)CmpDoAccessCheckOnKCB(a1, a7, a6 | 4u, v16)) )
    {
LABEL_4:
      v14 = -1073741199;
      goto LABEL_5;
    }
    LOBYTE(v17) = a5;
    if ( !(unsigned __int8)CmpDoAccessCheckOnKCB(a1, a7, 131097LL, v17)
      || (v14 = CmpCheckAdminAccess(a6 | 4u, (PSECURITY_DESCRIPTOR)(*(_QWORD *)(a1 + 88) + 32LL)), v14 >= 0) )
    {
      v14 = -1073741790;
    }
  }
LABEL_5:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v14;
}
