/*
 * XREFs of NtSetInformationSymbolicLink @ 0x1408DCC80
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationSymbolicLink(
        HANDLE LinkHandle,
        SYMBOLIC_LINK_INFO_CLASS SymbolicLinkInformationClass,
        PVOID SymbolicLinkInformation,
        ULONG SymbolicLinkInformationLength)
{
  KPROCESSOR_MODE PreviousMode; // r14
  int v8; // ebx
  __int32 v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ecx
  PADAPTER_OBJECT v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ecx
  PADAPTER_OBJECT v17; // rdx
  int v18; // eax
  PADAPTER_OBJECT DmaAdapter; // [rsp+38h] [rbp-10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  DmaAdapter = 0LL;
  v8 = ObReferenceObjectByHandle(LinkHandle, 2u, ObpSymbolicLinkObjectType, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( v8 >= 0 )
  {
    v9 = SymbolicLinkInformationClass - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        v8 = -1073741821;
LABEL_30:
        HalPutDmaAdapter(DmaAdapter);
        return v8;
      }
      if ( SymbolicLinkInformationLength == 4 )
      {
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) && !PsIsCurrentThreadInServerSilo(v11, v10) )
        {
          if ( PreviousMode )
          {
            if ( ((unsigned __int8)SymbolicLinkInformation & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)SymbolicLinkInformation + 4 > 0x7FFFFFFF0000LL
              || (char *)SymbolicLinkInformation + 4 < SymbolicLinkInformation )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
            }
            v12 = *(_DWORD *)SymbolicLinkInformation;
          }
          else
          {
            v12 = *(_DWORD *)SymbolicLinkInformation;
          }
          v13 = DmaAdapter;
          HIDWORD(DmaAdapter[1].DmaOperations) |= 8u;
          *(_DWORD *)&v13[2].Version = v12;
          v8 = 0;
          goto LABEL_30;
        }
        goto LABEL_29;
      }
    }
    else if ( SymbolicLinkInformationLength == 4 )
    {
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) && !PsIsCurrentThreadInServerSilo(v15, v14) )
      {
        if ( PreviousMode )
        {
          if ( ((unsigned __int8)SymbolicLinkInformation & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)SymbolicLinkInformation + 4 > 0x7FFFFFFF0000LL
            || (char *)SymbolicLinkInformation + 4 < SymbolicLinkInformation )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
          v16 = *(_DWORD *)SymbolicLinkInformation;
        }
        else
        {
          v16 = *(_DWORD *)SymbolicLinkInformation;
        }
        v17 = DmaAdapter;
        v18 = HIDWORD(DmaAdapter[1].DmaOperations) | 1;
        HIDWORD(DmaAdapter[1].DmaOperations) = v18;
        if ( v16 )
          HIDWORD(v17[1].DmaOperations) = v18 | 4;
        goto LABEL_30;
      }
LABEL_29:
      v8 = -1073741727;
      goto LABEL_30;
    }
    v8 = -1073741820;
    goto LABEL_30;
  }
  return v8;
}
