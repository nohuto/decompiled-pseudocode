// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiProcessHwQueuePageFaultedDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // r14
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int64 v4; // rsi
  __int64 v5; // r13
  int v6; // ebx
  _BYTE *v7; // r15
  __int64 v8; // r12
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  const void *v14; // rcx
  _BYTE *v15; // r8
  __int64 v16; // rcx
  _BYTE *v17; // rdx
  char v18; // al
  _BYTE *v19; // rax
  _BYTE *v20; // r8
  __int64 v21; // rcx
  _BYTE *v22; // rdx
  char v23; // al
  _BYTE *v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r11d
  __int64 v28; // rcx
  int v29; // [rsp+B0h] [rbp-80h] BYREF
  int v30; // [rsp+B4h] [rbp-7Ch] BYREF
  int v31; // [rsp+B8h] [rbp-78h] BYREF
  int v32; // [rsp+BCh] [rbp-74h] BYREF
  int v33; // [rsp+C0h] [rbp-70h] BYREF
  int v34; // [rsp+C4h] [rbp-6Ch] BYREF
  int v35; // [rsp+C8h] [rbp-68h] BYREF
  __int128 v36; // [rsp+D0h] [rbp-60h]
  __int128 v37; // [rsp+E0h] [rbp-50h]
  __int128 v38; // [rsp+F0h] [rbp-40h]
  __int128 v39; // [rsp+100h] [rbp-30h]
  _QWORD v40[2]; // [rsp+110h] [rbp-20h] BYREF
  char v41; // [rsp+120h] [rbp-10h]
  void *v42; // [rsp+128h] [rbp-8h] BYREF
  __int64 v43; // [rsp+130h] [rbp+0h] BYREF
  __int64 v44; // [rsp+138h] [rbp+8h] BYREF
  __int64 v45; // [rsp+140h] [rbp+10h] BYREF
  unsigned __int16 *v46; // [rsp+148h] [rbp+18h] BYREF
  __int128 v47; // [rsp+150h] [rbp+20h] BYREF
  _QWORD v48[4]; // [rsp+160h] [rbp+30h] BYREF
  __int16 v49; // [rsp+180h] [rbp+50h]
  __int64 v50; // [rsp+1E0h] [rbp+B0h] BYREF
  int v51; // [rsp+1E8h] [rbp+B8h] BYREF
  int v52; // [rsp+1F0h] [rbp+C0h] BYREF
  int v53; // [rsp+1F8h] [rbp+C8h] BYREF

  Next = ListEntry[2].Next;
  v2 = *(__int128 *)((char *)&ListEntry[3] + 8);
  v36 = *(__int128 *)((char *)&ListEntry[2] + 8);
  v3 = *(__int128 *)((char *)&ListEntry[4] + 8);
  v37 = v2;
  v38 = v3;
  v47 = *(__int128 *)((char *)&ListEntry[5] + 8);
  v39 = v47;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[392], ListEntry);
  v4 = (int)v47;
  v5 = *((_QWORD *)&Next[1].Next + 1);
  VidSchiValidatePageFaultFlags(v47);
  v49 = 256;
  v48[0] = v5 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v48);
  v50 = 0LL;
  v6 = DWORD2(v39);
  v7 = 0LL;
  v8 = *((_QWORD *)&v36 + 1);
  v9 = 0LL;
  v40[1] = v40;
  v40[0] = v40;
  v41 = 0;
  if ( (v4 & 2) == 0 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)&v37 + 1) + 40LL) + 40LL);
    goto LABEL_9;
  }
  if ( (v4 & 0x40) != 0 )
  {
    v10 = *(_QWORD *)(*((_QWORD *)&v37 + 1) + 8LL);
LABEL_9:
    v11 = *(_QWORD *)(v10 + 8);
    v12 = v37;
    v9 = *(_QWORD **)(v11 + 40);
    v7 = (_BYTE *)v9[331];
    v50 = v9[330];
    *(_DWORD *)(v11 + 216) = DWORD2(v38);
    v13 = HIDWORD(v38);
    *(_QWORD *)(v11 + 208) = v12;
    *(_DWORD *)(v11 + 220) = v13;
    *(_DWORD *)(v11 + 224) = v4;
    *(_QWORD *)(v11 + 232) = v8;
    *(_DWORD *)(v11 + 228) = v6;
    VidSchiMarkDeviceAsError((struct HwQueueStagingList *)v40, v11, 9, 0LL);
    goto LABEL_10;
  }
  if ( (v4 & 0xC) == 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 13LL, v4, *((_QWORD *)&v37 + 1), *((_QWORD *)&v36 + 1));
    __debugbreak();
  }
  if ( (v4 & 0x80u) != 0LL )
  {
    v7 = *(_BYTE **)(*((_QWORD *)&v37 + 1) + 96LL);
    v9 = *(_QWORD **)(*((_QWORD *)&v37 + 1) + 24LL);
    v50 = *(_QWORD *)(*((_QWORD *)&v37 + 1) + 80LL);
  }
LABEL_10:
  if ( !g_PageFaultDebugMode && !KdRefreshDebuggerNotPresent() )
  {
    if ( v9 )
      v14 = (const void *)v9[332];
    else
      v14 = 0LL;
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "The GPU Scheduler detected a HW queue page fault at GPU VA 0x%I64X.\n"
      "We broke into the debugger to allow a chance for debugging this issue.\n"
      "Run \"!dxgkdx.gpuva -a %d -p 0x%p -o %d 0x%I64X[ -h]\" command for more info.\n"
      "To disable debug breaks on page fault, run \"?? dxgmms2!g_PageFaultDebugMode=1\" command,\n"
      "or \"ed 0x%p 1\"\n"
      "\n",
      v8,
      HIWORD(Next->Next),
      v14,
      *(_DWORD *)(v5 + 4),
      v8,
      &g_PageFaultDebugMode);
    __debugbreak();
  }
  if ( (v4 & 4) != 0 )
  {
    if ( !LODWORD(Next[127].Next) )
    {
      v15 = (_BYTE *)(v5 + 3037);
      if ( !v7 )
        goto LABEL_26;
      v16 = 15LL;
      v17 = (_BYTE *)(v5 + 3037);
      do
      {
        if ( v16 == -2147483631 )
          break;
        v18 = v17[v7 - v15];
        if ( !v18 )
          break;
        *v17++ = v18;
        --v16;
      }
      while ( v16 );
      v19 = v17 - 1;
      if ( v16 )
        v19 = v17;
      *v19 = 0;
      if ( !v16 )
LABEL_26:
        *v15 = 0;
      LODWORD(Next[127].Next) = 1;
    }
  }
  else if ( (v4 & 8) != 0 && !*((_DWORD *)&Next[126].Next + 3) )
  {
    v20 = (char *)&Next[127].Next + 4;
    if ( !v7 )
      goto LABEL_39;
    v21 = 15LL;
    v22 = (char *)&Next[127].Next + 4;
    do
    {
      if ( v21 == -2147483631 )
        break;
      v23 = v22[v7 - v20];
      if ( !v23 )
        break;
      *v22++ = v23;
      --v21;
    }
    while ( v21 );
    v24 = v22 - 1;
    if ( v21 )
      v24 = v22;
    *v24 = 0;
    if ( !v21 )
LABEL_39:
      *v20 = 0;
    *((_DWORD *)&Next[126].Next + 3) = 1;
  }
  if ( (unsigned int)dword_1C0076048 > 5 && tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000010LL) )
  {
    v28 = *(_QWORD *)(v5 + 16);
    v43 = v50;
    v44 = v8;
    v51 = v27 & v6;
    v53 = DWORD1(v39);
    v29 = DWORD1(v38);
    v30 = v38;
    v32 = HIDWORD(v38);
    v33 = DWORD2(v38);
    v45 = v37;
    v34 = v36;
    v31 = v4;
    v35 = v26;
    v52 = v6 >> 1;
    v46 = *(unsigned __int16 **)(v28 + 1744);
    *(_QWORD *)&v47 = *(_QWORD *)(v28 + 404);
    v42 = v7;
    LOWORD(v50) = v27;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      v28,
      byte_1C00569E2,
      v25,
      v26,
      (__int64)&v50,
      (__int64)&v47,
      &v46,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v45,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v44,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v53,
      (__int64)&v52,
      (__int64)&v51,
      (__int64)&v43,
      &v42);
  }
  *(_QWORD *)(v5 + 1224) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1192), 0, 0);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v40);
  AcquireSpinLock::Release((AcquireSpinLock *)v48);
}
