/*
 * XREFs of NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0021CA0
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     memset @ 0x1C0004580 (memset.c)
 *     LocalCommandReuse @ 0x1C000C15C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C1C0 (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EE04 (NVMeFreeDmaBuffer.c)
 *     NVMeFreeNamespaceEnumerationContext @ 0x1C001D2A4 (NVMeFreeNamespaceEnumerationContext.c)
 *     NVMeParseNameSpaceIdentifyData @ 0x1C0021490 (NVMeParseNameSpaceIdentifyData.c)
 *     NVMeReenumerateNameSpaceCancelMerge @ 0x1C0021928 (NVMeReenumerateNameSpaceCancelMerge.c)
 *     NVMeReenumerateNameSpaceCompare @ 0x1C002197C (NVMeReenumerateNameSpaceCompare.c)
 *     NVMeReenumerateNameSpaceMerge @ 0x1C00220C4 (NVMeReenumerateNameSpaceMerge.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x1C002237C (NVMeReenumerateNameSpaceRescan.c)
 *     NVMeReenumerateNameSpaceWaitForAllIOComplete @ 0x1C00226C8 (NVMeReenumerateNameSpaceWaitForAllIOComplete.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C0022838 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeVersionCheck @ 0x1C00244A8 (NVMeVersionCheck.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceIdentifyWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r15d
  char v6; // si
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // r12
  int i; // edx
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r9
  unsigned int v19; // ebx
  __int64 v20; // r9
  void **v21; // [rsp+20h] [rbp-59h]
  const wchar_t *v22; // [rsp+28h] [rbp-51h]
  __int64 v23; // [rsp+30h] [rbp-49h]
  int v24; // [rsp+38h] [rbp-41h]
  int v25; // [rsp+40h] [rbp-39h]
  __int64 v26; // [rsp+48h] [rbp-31h]
  const wchar_t *v27; // [rsp+50h] [rbp-29h]
  __int64 v28; // [rsp+58h] [rbp-21h]
  const wchar_t *v29; // [rsp+60h] [rbp-19h]
  __int64 v30; // [rsp+68h] [rbp-11h]
  void *v31; // [rsp+78h] [rbp-1h] BYREF
  int v32[2]; // [rsp+80h] [rbp+7h]
  int v33[2]; // [rsp+88h] [rbp+Fh]
  unsigned int v34; // [rsp+E0h] [rbp+67h] BYREF
  void *v35; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v36; // [rsp+F0h] [rbp+77h]
  _BYTE *v37; // [rsp+F8h] [rbp+7Fh]

  v36 = a3;
  *(_QWORD *)v33 = *(_QWORD *)(a1 + 1840);
  v5 = *(_DWORD *)(*(_QWORD *)v33 + 516LL);
  if ( v5 > 0xFF )
    v5 = 255;
  v6 = 0;
  *(_QWORD *)v32 = *(_QWORD *)(a1 + 4264);
  v35 = 0LL;
  NVMeAllocateDmaBuffer(a1, 0x1000u);
  v37 = v35;
  if ( !v35 )
  {
    NVMeFreeNamespaceEnumerationContext(a1, a2, 1, v7);
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 1u);
    result = (unsigned int)(*(_DWORD *)(a1 + 4480) + 1);
    *(_DWORD *)(a1 + 4480) = result;
    if ( *(_BYTE *)(a1 + 22) )
      return StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
    return result;
  }
  v9 = 0LL;
  v34 = 0;
  do
  {
    v10 = *(unsigned int *)(a2 + 4 * v9 + 2048);
    if ( !(_DWORD)v10 )
      break;
    if ( (unsigned int)v10 > v5 )
      goto LABEL_21;
    LocalCommandReuse(a1, a1 + 1584);
    for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1680) + 4253LL) |= ++i )
      ;
    *(_WORD *)(*(_QWORD *)(a1 + 1680) + 4244LL) = 0;
    memset(v35, 0, 0x1000uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 4200LL) = v35;
    *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 4208LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)(a1 + 1680) + 4240LL) = 4096;
    v12 = *(_QWORD *)(a1 + 1680) + 4096LL;
    *(_BYTE *)v12 = 6;
    *(_DWORD *)(v12 + 4) = v10;
    *(_QWORD *)(v12 + 24) = 0LL;
    *(_BYTE *)(v12 + 40) = 0;
    ProcessCommand(a1, a1 + 1592);
    WaitForCommandCompleteWithCustomTimeout(a1);
    if ( *(_BYTE *)(a1 + 1595) != 1 )
      goto LABEL_21;
    if ( *(_BYTE *)(a1 + 20) || v5 <= 1 )
    {
      v14 = (__int64)v37;
    }
    else
    {
      v13 = NVMeVersionCheck(a1);
      v14 = (__int64)v37;
      if ( v13 && !v37[4 * (v37[26] & 0xF) + 130] && !*(_QWORD *)v37 )
        goto LABEL_21;
    }
    v31 = 0LL;
    v21 = &v31;
    StorPortExtendedFunction(0LL, a1, 424LL, 1701672526LL);
    if ( !v31 )
    {
      v15 = (unsigned int)(*(_DWORD *)(a1 + 4484) + 1);
      *(_DWORD *)(a1 + 4484) = v15;
      if ( *(_BYTE *)(a1 + 22) )
      {
        v30 = v15;
        v29 = L"Pool Fail Count";
        v28 = v10;
        v27 = L"NSID";
        v26 = 0LL;
        v25 = 0;
        v24 = 2;
        v23 = 8LL;
        v22 = L"Reenumeration Resource Fail";
        LODWORD(v21) = 10;
        StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
      }
      break;
    }
    NVMeParseNameSpaceIdentifyData(a1, v14, *(__int64 *)v33, *(__int64 *)v32, v10, (char *)v31);
    *(_QWORD *)(a2 + 8LL * (unsigned int)(v10 - 1) + 8) = v31;
    ++*(_DWORD *)(a2 + 4);
LABEL_21:
    v9 = v34 + 1;
    v34 = v9;
  }
  while ( (unsigned int)v9 < 0x400 );
  if ( v35 )
    NVMeFreeDmaBuffer(a1, 4096LL, (__int64 *)&v35, 0LL);
  v16 = a1;
  if ( _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 2u) )
  {
    v6 = 1;
    v17 = a2 + 2048;
    goto LABEL_29;
  }
  v34 = 0;
  v19 = NVMeReenumerateNameSpaceCompare(a1, a2, v5, &v34);
  if ( v19 )
  {
    if ( !(unsigned __int8)NVMeReenumerateNameSpaceWaitForAllIOComplete(a1) )
    {
      NVMeReenumerateNameSpaceCancelMerge(a1, v5);
      v6 = 1;
      goto LABEL_40;
    }
    if ( _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 2u) )
    {
      NVMeReenumerateNameSpaceCancelMerge(a1, v5);
      v17 = a2 + 2048;
      v6 = 1;
LABEL_35:
      v16 = a1;
LABEL_29:
      NVMeReenumerateReissueGetLogNamespaceChangeList(v16, v17);
      goto LABEL_40;
    }
    NVMeReenumerateNameSpaceMerge(a1, a2, v5);
    NVMeReenumerateNameSpaceRescan(a1, v5, v19, v34, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30);
  }
  if ( _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 2u) )
  {
    v17 = 0LL;
    goto LABEL_35;
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 1u);
LABEL_40:
  NVMeFreeNamespaceEnumerationContext(a1, a2, v6, v18);
  return StorPortExtendedFunction(31LL, a1, v36, v20);
}
