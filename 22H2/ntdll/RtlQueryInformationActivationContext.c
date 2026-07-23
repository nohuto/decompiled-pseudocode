/*
 * XREFs of RtlQueryInformationActivationContext @ 0x180012DE0
 * Callers:
 *     RtlQueueWorkItem @ 0x18000B780 (RtlQueueWorkItem.c)
 *     TppCleanupGroupMemberInitialize @ 0x18001241C (TppCleanupGroupMemberInitialize.c)
 *     SbpRetrieveCompatibilityManifest @ 0x18007C7B8 (SbpRetrieveCompatibilityManifest.c)
 *     RtlQueryInformationActiveActivationContext @ 0x18007EDD0 (RtlQueryInformationActiveActivationContext.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180010500 (LdrpFindLoadedDllByHandle.c)
 *     RtlpGetActivationContextData @ 0x180013374 (RtlpGetActivationContextData.c)
 *     RtlpQueryInformationActivationContextBasicInformation @ 0x18001342C (RtlpQueryInformationActivationContextBasicInformation.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     DbgPrintEx @ 0x180051450 (DbgPrintEx.c)
 *     LdrpDropLastInProgressCount @ 0x18005EE7C (LdrpDropLastInProgressCount.c)
 *     LdrpDrainWorkQueue @ 0x18005FEC4 (LdrpDrainWorkQueue.c)
 *     RtlpQueryRunLevel @ 0x180078F28 (RtlpQueryRunLevel.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x180079018 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x180079274 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800DFA78 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800DFD08 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextManifestResourceName @ 0x1800DFF90 (RtlpQueryInformationActivationContextManifestResourceName.c)
 */

NTSTATUS __cdecl RtlQueryInformationActivationContext(
        ULONG Flags,
        PACTIVATION_CONTEXT ActivationContext,
        PACTIVATION_CONTEXT_QUERY_INDEX SubInstanceIndex,
        ACTIVATION_CONTEXT_INFO_CLASS ActivationContextInformationClass,
        PVOID ActivationContextInformation,
        SIZE_T ActivationContextInformationLength,
        PSIZE_T ReturnLength)
{
  PACTIVATION_CONTEXT v8; // rdi
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  __int64 v11; // rdx
  NTSTATUS ActivationContextData; // ebx
  __int64 v13; // r10
  __int64 v14; // rcx
  int InformationActivationContextBasicInformation; // eax
  int LoadedDllByHandle; // eax
  int v17; // eax
  int v19; // [rsp+40h] [rbp-88h]
  PVOID BaseAddress; // [rsp+48h] [rbp-80h] BYREF
  int v21; // [rsp+50h] [rbp-78h] BYREF
  int v22; // [rsp+54h] [rbp-74h]
  __int64 v23; // [rsp+58h] [rbp-70h] BYREF
  __int128 v24; // [rsp+60h] [rbp-68h]
  __int64 v25; // [rsp+70h] [rbp-58h]
  __int128 v26; // [rsp+78h] [rbp-50h] BYREF
  __int128 v27; // [rsp+88h] [rbp-40h]
  PACTIVATION_CONTEXT v28; // [rsp+D8h] [rbp+10h]

  v28 = ActivationContext;
  v8 = ActivationContext;
  v26 = 0LL;
  v27 = 0LL;
  v23 = 0LL;
  BaseAddress = 0LL;
  DWORD2(v27) = 4;
  if ( ReturnLength )
    *ReturnLength = 0LL;
  if ( (Flags & 0x3FFFFFF8) != 0 )
    goto LABEL_51;
  if ( (Flags & 0x80000000) != 0
    && (((ActivationContextInformationClass - 1) & 0xFFFFFFFA) != 0
     || ActivationContextInformationClass == ActivationContextDetailedInformation) )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller passed meaningless flags/class combination (0x%08lx/0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      Flags,
      ActivationContextInformationClass);
LABEL_44:
    ActivationContextData = -1073741585;
    goto LABEL_80;
  }
  if ( (unsigned int)(ActivationContextInformationClass - 1) > 6 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller asked for unknown information class %lu\n",
      "RtlQueryInformationActivationContext",
      ActivationContextInformationClass);
    ActivationContextData = -1073741583;
    goto LABEL_80;
  }
  if ( ActivationContextInformationLength )
  {
    if ( !ActivationContextInformation )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() - caller passed nonzero buffer length but NULL buffer pointer\n",
        "RtlQueryInformationActivationContext");
      ActivationContextData = -1073741582;
      goto LABEL_80;
    }
  }
  else if ( !ReturnLength )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller supplied no buffer to populate and no place to return required byte count\n",
      "RtlQueryInformationActivationContext");
    ActivationContextData = -1073741580;
    goto LABEL_80;
  }
  if ( (Flags & 7) == 0 )
    goto LABEL_13;
  if ( (Flags & 7) == 1 )
  {
    if ( !ActivationContext )
    {
      ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
      if ( ActivationContextStackPointer->ActiveFrame )
        v8 = ActivationContextStackPointer->ActiveFrame->ActivationContext;
      else
        v8 = ActivationContext;
      goto LABEL_13;
    }
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller asked to use active activation context but passed %p\n",
      "RtlQueryInformationActivationContext",
      ActivationContext);
LABEL_57:
    ActivationContextData = -1073741584;
    goto LABEL_80;
  }
  if ( (Flags & 7) != 2 )
  {
    if ( (Flags & 7) == 4 )
    {
      if ( !ActivationContext )
      {
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() - Caller asked to use activation context from address in .dll but passed NULL\n",
          "RtlQueryInformationActivationContext");
        goto LABEL_57;
      }
      if ( (unsigned __int64)ActivationContext < *((_QWORD *)&xmmword_180181510 + 1)
        || (unsigned __int64)ActivationContext >= *((_QWORD *)&xmmword_180181510 + 1)
                                                + (unsigned __int64)(unsigned int)qword_180181520 )
      {
        RtlpxLookupFunctionTable(ActivationContext);
      }
      else
      {
        v24 = xmmword_180181510;
        v25 = qword_180181520;
      }
      if ( !*((_QWORD *)&v24 + 1) )
      {
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() - Caller passed invalid address, not in any .dll (%p)\n",
          "RtlQueryInformationActivationContext",
          v8);
        ActivationContextData = -1073741515;
        goto LABEL_80;
      }
      v8 = (PACTIVATION_CONTEXT)*((_QWORD *)&v24 + 1);
      v28 = (PACTIVATION_CONTEXT)*((_QWORD *)&v24 + 1);
      goto LABEL_28;
    }
LABEL_51:
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller passed invalid flags (0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      Flags);
    goto LABEL_44;
  }
LABEL_28:
  if ( !v8 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller asked to use activation context from hmodule but passed NULL\n",
      "RtlQueryInformationActivationContext");
    goto LABEL_57;
  }
  LoadedDllByHandle = LdrpFindLoadedDllByHandle((unsigned __int64)v8, (volatile signed __int32 **)&BaseAddress, &v21);
  ActivationContextData = LoadedDllByHandle;
  v19 = LoadedDllByHandle;
  if ( LoadedDllByHandle >= 0 && v21 < 5 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      ActivationContextData = LoadedDllByHandle;
    }
    else
    {
      LdrpDrainWorkQueue(0LL);
      v17 = v19;
      if ( *(_DWORD *)(*((_QWORD *)BaseAddress + 19) + 56LL) != 9 )
        v17 = -1073741515;
      ActivationContextData = v17;
      LdrpDropLastInProgressCount();
    }
    v8 = v28;
  }
  if ( ActivationContextData < 0 )
  {
    DbgPrintEx(0x33u, 0, "SXS: %s() - Caller passed invalid hmodule (%p)\n", "RtlQueryInformationActivationContext", v8);
    goto LABEL_80;
  }
  v8 = (PACTIVATION_CONTEXT)*((_QWORD *)BaseAddress + 17);
LABEL_13:
  ActivationContextData = RtlpGetActivationContextData(
                            1LL,
                            v8,
                            (unsigned __int64)&v26 & -(__int64)((Flags & 0x40000000) != 0),
                            &v23);
  if ( ActivationContextData < 0 )
    goto LABEL_80;
  v13 = v23;
  if ( !v23 && (unsigned int)(ActivationContextInformationClass - 2) <= 5 )
    goto LABEL_44;
  v14 = (unsigned int)(ActivationContextInformationClass - 1);
  switch ( ActivationContextInformationClass )
  {
    case ActivationContextBasicInformation:
      v22 &= v14;
      if ( (Flags & 0x80000000) != 0 )
        v14 = (unsigned int)ActivationContextInformationClass;
      v22 = v14;
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextBasicInformation(
                                                       v14,
                                                       v11,
                                                       v23);
LABEL_19:
      ActivationContextData = InformationActivationContextBasicInformation;
      if ( InformationActivationContextBasicInformation < 0 )
        break;
      goto LABEL_20;
    case ActivationContextDetailedInformation:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextDetailedInformation(
                                                       v23,
                                                       v11,
                                                       (_DWORD)ActivationContextInformation,
                                                       ActivationContextInformationLength,
                                                       (__int64)ReturnLength);
      goto LABEL_19;
    case AssemblyDetailedInformationInActivationContext:
      if ( SubInstanceIndex )
      {
        InformationActivationContextBasicInformation = RtlpQueryAssemblyInformationActivationContextDetailedInformation(
                                                         v23,
                                                         SubInstanceIndex->ulAssemblyIndex,
                                                         (_DWORD)ActivationContextInformation,
                                                         ActivationContextInformationLength,
                                                         (__int64)ReturnLength);
        goto LABEL_19;
      }
      goto LABEL_77;
    case FileInformationInAssemblyOfAssemblyInActivationContext:
      if ( SubInstanceIndex )
      {
        InformationActivationContextBasicInformation = RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation(
                                                         v23,
                                                         (_DWORD)SubInstanceIndex,
                                                         (_DWORD)ActivationContextInformation,
                                                         ActivationContextInformationLength,
                                                         (__int64)ReturnLength);
        goto LABEL_19;
      }
LABEL_77:
      ActivationContextData = -1073741811;
      break;
    case RunlevelInformationInActivationContext:
      if ( ActivationContextInformationLength >= 0xC )
      {
        *(_QWORD *)ActivationContextInformation = 0LL;
        *((_DWORD *)ActivationContextInformation + 2) = 0;
        ActivationContextData = RtlpQueryRunLevel(
                                  (unsigned int)(ActivationContextInformationClass - 5),
                                  v13,
                                  ActivationContextInformation);
        if ( ActivationContextData < 0 )
          break;
        if ( ReturnLength )
          *ReturnLength = 12LL;
LABEL_20:
        ActivationContextData = 0;
        break;
      }
      ActivationContextData = -1073741789;
      if ( ReturnLength )
        *ReturnLength = 12LL;
      break;
    case CompatibilityInformationInActivationContext:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextCompatibilityInformation(
                                                       v23,
                                                       ActivationContextInformation,
                                                       ActivationContextInformationLength,
                                                       ReturnLength);
      goto LABEL_19;
    case ActivationContextManifestResourceName:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextManifestResourceName(
                                                       v23,
                                                       ActivationContextInformation,
                                                       ActivationContextInformationLength,
                                                       ReturnLength);
      goto LABEL_19;
    default:
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() - internal coding error; missing switch statement branch for InfoClass == %lu\n",
        "RtlQueryInformationActivationContext",
        ActivationContextInformationClass);
      ActivationContextData = -1073741595;
      break;
  }
LABEL_80:
  if ( BaseAddress )
    LdrpDereferenceModule(BaseAddress);
  return ActivationContextData;
}
