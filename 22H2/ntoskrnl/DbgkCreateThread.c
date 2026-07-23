/*
 * XREFs of DbgkCreateThread @ 0x1406C01E0
 * Callers:
 *     PspUserThreadStartup @ 0x1406BFC00 (PspUserThreadStartup.c)
 * Callees:
 *     MiSectionControlArea @ 0x1402958E0 (MiSectionControlArea.c)
 *     RtlImageNtHeader @ 0x14029CFE0 (RtlImageNtHeader.c)
 *     MiReferenceControlAreaFile @ 0x14029D540 (MiReferenceControlAreaFile.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObFastDereferenceObject @ 0x140345620 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     PsReferenceProcessFilePointer @ 0x140604BE0 (PsReferenceProcessFilePointer.c)
 *     PsWow64GetProcessNtdllType @ 0x1406120AC (PsWow64GetProcessNtdllType.c)
 *     ObCloseHandle @ 0x14061AFE0 (ObCloseHandle.c)
 *     PsCallImageNotifyRoutines @ 0x14061B690 (PsCallImageNotifyRoutines.c)
 *     PsQuerySystemDllInfo @ 0x1406C769C (PsQuerySystemDllInfo.c)
 *     PspReferenceSystemDll @ 0x1406FD074 (PspReferenceSystemDll.c)
 *     DbgkSendSystemDllMessages @ 0x14088452C (DbgkSendSystemDllMessages.c)
 *     DbgkpPostModuleMessages @ 0x1408852F0 (DbgkpPostModuleMessages.c)
 *     DbgkpSendApiMessage @ 0x1408871A4 (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x140887BE4 (DbgkpSectionToFileHandle.c)
 */

void __fastcall DbgkCreateThread(_QWORD *a1)
{
  ULONG_PTR v2; // rdi
  __int64 v3; // rax
  signed __int32 v4; // eax
  char v5; // r12
  PIMAGE_NT_HEADERS v6; // rax
  int i; // esi
  __int64 SystemDllInfo; // rax
  __int64 v9; // r15
  PIMAGE_NT_HEADERS v10; // rax
  struct _DMA_ADAPTER *v11; // r13
  unsigned __int64 v12; // rax
  struct _DMA_ADAPTER *v13; // rax
  __int16 v14; // ax
  PIMAGE_NT_HEADERS v15; // rax
  bool v16; // [rsp+20h] [rbp-1B8h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+28h] [rbp-1B0h] BYREF
  signed __int32 v18; // [rsp+30h] [rbp-1A8h]
  ULONG_PTR v19; // [rsp+38h] [rbp-1A0h]
  _QWORD *v20; // [rsp+40h] [rbp-198h]
  __int128 v21; // [rsp+48h] [rbp-190h] BYREF
  __int128 v22; // [rsp+58h] [rbp-180h]
  __int128 v23; // [rsp+68h] [rbp-170h]
  __int64 v24; // [rsp+78h] [rbp-160h]
  __int64 v25; // [rsp+80h] [rbp-158h]
  _QWORD v26[34]; // [rsp+90h] [rbp-148h] BYREF

  v20 = a1;
  memset(v26, 0, sizeof(v26));
  v2 = a1[23];
  v19 = v2;
  v3 = *(_QWORD *)(v2 + 1408);
  v16 = 0;
  if ( v3 )
  {
    v14 = *(_WORD *)(v3 + 8);
    if ( v14 == 332 || v14 == 452 )
      v16 = 1;
  }
  _m_prefetchw((const void *)(v2 + 1124));
  v4 = _InterlockedOr((volatile signed __int32 *)(v2 + 1124), 0x400001u);
  v5 = v4;
  v18 = v4;
  if ( (v4 & 0x400000) == 0 && ((PspNotifyEnableMask & 1) != 0 || (PerfGlobalGroupMask & 4) != 0) )
  {
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    DmaAdapter = 0LL;
    BYTE8(v21) = 3;
    *(_QWORD *)&v22 = *(_QWORD *)(v2 + 1312);
    *(_QWORD *)&v23 = 0LL;
    v6 = RtlImageNtHeader((PVOID)v22);
    if ( v6 )
      *(_QWORD *)&v23 = v6->OptionalHeader.SizeOfImage;
    DWORD2(v22) = 0;
    DWORD2(v23) = 0;
    PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)v2, (ULONG_PTR *)&DmaAdapter);
    PsCallImageNotifyRoutines(*(unsigned __int16 **)(v2 + 1472), v2, (__int64)&v21, (__int64)DmaAdapter);
    HalPutDmaAdapter(DmaAdapter);
    for ( i = 0; ; ++i )
    {
      LODWORD(DmaAdapter) = i;
      if ( i >= 6 )
        break;
      SystemDllInfo = PsQuerySystemDllInfo((unsigned int)i);
      v9 = SystemDllInfo;
      v25 = SystemDllInfo;
      if ( SystemDllInfo
        && (i <= 0
         || *(_WORD *)(SystemDllInfo + 2) && *(_QWORD *)(v2 + 1408) && i == (unsigned int)PsWow64GetProcessNtdllType(v2)) )
      {
        DWORD2(v21) = 3;
        *(_QWORD *)&v22 = *(_QWORD *)(v9 + 24);
        *(_QWORD *)&v23 = 0LL;
        v10 = RtlImageNtHeader(*(PVOID *)(v9 + 24));
        if ( v10 )
          *(_QWORD *)&v23 = v10->OptionalHeader.SizeOfImage;
        DWORD2(v22) = 0;
        DWORD2(v23) = 0;
        v11 = (struct _DMA_ADAPTER *)PspReferenceSystemDll(v9 - 16);
        v12 = MiSectionControlArea((__int64)v11);
        v13 = (struct _DMA_ADAPTER *)MiReferenceControlAreaFile(v12);
        DmaAdapter = v13;
        if ( v11 )
        {
          ObFastDereferenceObject((signed __int64 *)(v9 - 16), v11);
          v13 = DmaAdapter;
        }
        PsCallImageNotifyRoutines((unsigned __int16 *)(v9 + 8), v2, (__int64)&v21, (__int64)v13);
        HalPutDmaAdapter(DmaAdapter);
      }
    }
  }
  if ( *(_QWORD *)(v2 + 1400) )
  {
    if ( (v5 & 1) != 0 )
    {
      if ( (a1[162] & 4) == 0 )
      {
        memset(v26, 0, 0x40uLL);
        v26[7] = a1[154];
        v26[0] = 0x800400018LL;
        LODWORD(v26[5]) = 1;
        DbgkpSendApiMessage(v2);
      }
    }
    else
    {
      memset(v26, 0, 0x60uLL);
      v26[7] = DbgkpSectionToFileHandle(*(_QWORD *)(v2 + 1304));
      v26[8] = *(_QWORD *)(v2 + 1312);
      v26[11] = 0LL;
      v26[9] = 0LL;
      v15 = RtlImageNtHeader(*(PVOID *)(v2 + 1312));
      if ( v15 )
      {
        if ( v16 )
          v26[11] = v15->OptionalHeader.AddressOfEntryPoint + HIDWORD(v15->OptionalHeader.ImageBase);
        else
          v26[11] = v15->OptionalHeader.ImageBase + v15->OptionalHeader.AddressOfEntryPoint;
        v26[9] = *(_QWORD *)&v15->FileHeader.PointerToSymbolTable;
      }
      v26[0] = 0x800600038LL;
      LODWORD(v26[5]) = 2;
      DbgkpSendApiMessage(v2);
      if ( v26[7] )
        ObCloseHandle((HANDLE)v26[7], 0);
      DbgkSendSystemDllMessages(0LL);
    }
    if ( (*((_DWORD *)a1 + 325) & 0x10) != 0 )
      DbgkpPostModuleMessages((PVOID)v2, a1, 0LL);
  }
}
