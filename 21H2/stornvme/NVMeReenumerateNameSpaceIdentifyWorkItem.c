/*
 * XREFs of NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C000EC00
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     NVMeFreeDmaBuffer @ 0x1C00053FC (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     NVMeParseNameSpaceIdentifyData @ 0x1C000A984 (NVMeParseNameSpaceIdentifyData.c)
 *     NVMeFreeNamespaceEnumerationContext @ 0x1C000E910 (NVMeFreeNamespaceEnumerationContext.c)
 *     NVMeReenumerateNameSpaceCancelMerge @ 0x1C000EA68 (NVMeReenumerateNameSpaceCancelMerge.c)
 *     NVMeReenumerateNameSpaceCompare @ 0x1C000EABC (NVMeReenumerateNameSpaceCompare.c)
 *     NVMeReenumerateNameSpaceMerge @ 0x1C000F05C (NVMeReenumerateNameSpaceMerge.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x1C000F320 (NVMeReenumerateNameSpaceRescan.c)
 *     NVMeReenumerateNameSpaceWaitForAllIOComplete @ 0x1C000F5E0 (NVMeReenumerateNameSpaceWaitForAllIOComplete.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C000F748 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     memset @ 0x1C00109C0 (memset.c)
 *     NVMeVersionCheck @ 0x1C0024AE8 (NVMeVersionCheck.c)
 *     WaitForCommandComplete @ 0x1C0025578 (WaitForCommandComplete.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceIdentifyWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r15d
  char v6; // si
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // rax
  unsigned int v10; // r12d
  void *v11; // rcx
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r9
  int v18; // [rsp+D0h] [rbp+67h] BYREF
  void *v19; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v20; // [rsp+E0h] [rbp+77h]
  _BYTE *v21; // [rsp+E8h] [rbp+7Fh]

  v20 = a3;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 1640) + 516LL);
  if ( v5 > 0xFF )
    v5 = 255;
  v6 = 0;
  v19 = 0LL;
  NVMeAllocateDmaBuffer(a1, 0x1000u);
  v21 = v19;
  if ( v19 )
  {
    v9 = 0LL;
    v18 = 0;
    do
    {
      v10 = *(_DWORD *)(a2 + 4 * v9 + 2048);
      if ( !v10 )
        break;
      if ( v10 <= v5 )
      {
        v11 = *(void **)(a1 + 1512);
        *(_BYTE *)(a1 + 1427) = 0;
        memset(v11, 0, 0x10A0uLL);
        v12 = 0;
        *(_QWORD *)(*(_QWORD *)(a1 + 1512) + 4232LL) = 0LL;
        *(_QWORD *)(a1 + 1480) = *(_QWORD *)(a1 + 1512);
        *(_DWORD *)(a1 + 1416) = 1;
        do
          *(_BYTE *)(*(_QWORD *)(a1 + 1512) + 4253LL) |= ++v12;
        while ( v12 < 2 );
        *(_WORD *)(*(_QWORD *)(a1 + 1512) + 4244LL) = 0;
        memset(v19, 0, 0x1000uLL);
        *(_QWORD *)(*(_QWORD *)(a1 + 1512) + 4200LL) = v19;
        *(_QWORD *)(*(_QWORD *)(a1 + 1512) + 4208LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)(a1 + 1512) + 4240LL) = 4096;
        v13 = *(_QWORD *)(a1 + 1512) + 4096LL;
        *(_BYTE *)v13 = 6;
        *(_DWORD *)(v13 + 4) = v10;
        *(_QWORD *)(v13 + 24) = 0LL;
        *(_BYTE *)(v13 + 40) = 0;
        ProcessCommand(a1, a1 + 1424);
        WaitForCommandComplete(a1, a1 + 1424, 0LL);
        if ( *(_BYTE *)(a1 + 1427) == 1
          && (*(_BYTE *)(a1 + 20)
           || v5 <= 1
           || !(unsigned __int8)NVMeVersionCheck(a1)
           || v21[4 * (v21[26] & 0xF) + 130]
           || *(_QWORD *)v21) )
        {
          StorPortExtendedFunction(0LL, a1, 424LL, 1701672526LL);
          ++*(_DWORD *)(a1 + 4164);
          if ( *(_BYTE *)(a1 + 22) )
            StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
          break;
        }
      }
      v9 = (unsigned int)(v18 + 1);
      v18 = v9;
    }
    while ( (unsigned int)v9 < 0x400 );
    if ( v19 )
      NVMeFreeDmaBuffer(a1, 4096LL, (__int64 *)&v19, 0LL);
    v14 = a1;
    if ( _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3828), 2u) )
    {
      v6 = 1;
      v15 = a2 + 2048;
LABEL_26:
      NVMeReenumerateReissueGetLogNamespaceChangeList(v14, v15);
LABEL_37:
      NVMeFreeNamespaceEnumerationContext(a1, a2, v6, v16);
      return StorPortExtendedFunction(31LL, a1, v20, v17);
    }
    v18 = 0;
    if ( (unsigned int)NVMeReenumerateNameSpaceCompare(a1, a2, v5, &v18) )
    {
      if ( !(unsigned __int8)NVMeReenumerateNameSpaceWaitForAllIOComplete(a1) )
      {
        NVMeReenumerateNameSpaceCancelMerge(a1, v5);
        v6 = 1;
        goto LABEL_37;
      }
      if ( _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3828), 2u) )
      {
        NVMeReenumerateNameSpaceCancelMerge(a1, v5);
        v15 = a2 + 2048;
        v6 = 1;
LABEL_32:
        v14 = a1;
        goto LABEL_26;
      }
      NVMeReenumerateNameSpaceMerge(a1, a2, v5);
      NVMeReenumerateNameSpaceRescan(a1);
    }
    if ( !_interlockedbittestandreset((volatile signed __int32 *)(a1 + 3828), 2u) )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3828), 1u);
      goto LABEL_37;
    }
    v15 = 0LL;
    goto LABEL_32;
  }
  NVMeFreeNamespaceEnumerationContext(a1, a2, 1, v7);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3828), 1u);
  result = (unsigned int)(*(_DWORD *)(a1 + 4160) + 1);
  *(_DWORD *)(a1 + 4160) = result;
  if ( *(_BYTE *)(a1 + 22) )
    return StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  return result;
}
