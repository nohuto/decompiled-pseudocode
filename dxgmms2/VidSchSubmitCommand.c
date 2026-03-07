// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchSubmitCommand(struct _VIDSCH_CONTEXT *a1, struct VIDSCH_SUBMIT_DATA2 *a2)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned int v8; // edi
  KSPIN_LOCK *v9; // r12
  _QWORD *v10; // rax
  size_t v11; // r13
  bool v12; // zf
  _QWORD *v13; // rax
  _DWORD *v14; // rdi
  _QWORD *v15; // rbp
  _DWORD *v16; // r12
  _DWORD *v17; // rdx
  _DWORD *v18; // r8
  unsigned int v19; // r13d
  __int16 v20; // ax
  __int64 v21; // rbp
  void *v22; // rcx
  __int64 v23; // rcx
  char **v24; // rax
  char *v25; // rdi
  struct _VIDSCH_CONTEXT **v26; // rcx
  unsigned int v27; // ecx
  __int64 *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 result; // rax
  __int64 v32; // rax
  unsigned int v33; // r9d
  unsigned int v34; // eax
  unsigned int v35; // ebp
  int v36; // eax
  unsigned int v37; // ecx
  __int64 v38; // r8
  __int64 v39; // r10
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  const void *v46; // rbp
  KPRIORITY PriorityThread; // eax
  __int64 v48; // rcx
  __int64 v49; // [rsp+68h] [rbp-F0h] BYREF
  __int64 Pool2; // [rsp+70h] [rbp-E8h]
  _QWORD *v51; // [rsp+78h] [rbp-E0h]
  _QWORD v52[20]; // [rsp+80h] [rbp-D8h] BYREF
  unsigned int v53; // [rsp+170h] [rbp+18h]
  int v54; // [rsp+178h] [rbp+20h]

  if ( !a1 || !a2 )
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v48, 0x40000LL);
    return 3221225485LL;
  }
  v4 = *((_QWORD *)a1 + 13);
  v5 = *(_QWORD *)(v4 + 32);
  if ( *(_BYTE *)(v4 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 200), 0, 0) )
  {
    WdLogSingleEntry2(3LL, v4, -1071775232LL);
    return 3223192064LL;
  }
  v6 = *(_QWORD *)a2;
  v49 = v6;
  if ( (v6 & 0x20) != 0 )
  {
    result = VidSchValidatePresentFlags(a2, (struct _VIDSCH_DEVICE *)v4, (struct _VIDSCH_SUBMIT_FLAGS *)&v49);
    if ( (int)result < 0 )
      return result;
    LODWORD(v6) = v49;
  }
  else if ( (v6 & 0x40000) != 0
         && !*((_DWORD *)a1 + 108)
         && !*((_DWORD *)a1 + 196)
         && (v6 & 0x1000000) == 0
         && (v6 & 0x400000000LL) == 0 )
  {
    VidSchiPropagatePresentHistoryToken(
      (struct _VIDSCH_GLOBAL *)v5,
      *((union _SLIST_HEADER **)a2 + 12),
      *((struct _D3DKMT_PRESENTHISTORYTOKEN **)a2 + 13),
      0,
      0,
      0,
      0,
      0LL,
      0LL,
      (__int64)a2,
      0LL,
      0);
    return 0LL;
  }
  if ( (v6 & 0x800004) == 4 && *(_BYTE *)(v5 + 59) )
  {
    v41 = 600LL;
    if ( !*((_BYTE *)a2 + 356) )
      v41 = 496LL;
    *(_DWORD *)((char *)a2 + v41) = *(_DWORD *)((_BYTE *)a2 + v41) & 0xFFF003FF | ((((unsigned __int16)(1 << *(_DWORD *)(v5 + 152))
                                                                                   - 1) & 0x3FE) << 10);
  }
  v7 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
  v8 = *(_DWORD *)(v7 + 152) * ((*(_DWORD *)(v7 + 76) << 6) + ((8 * *(_DWORD *)(v7 + 76) + 231) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v7 + 76) + 111);
  if ( v8 <= 0x460 )
    v8 = 1120;
  v9 = (KSPIN_LOCK *)(v7 + 1736);
  v10 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v7 + 1736), (_QWORD **)a1 + 89, (_DWORD *)a1 + 182);
  v11 = v8;
  if ( !v10 )
  {
    Pool2 = ExAllocatePool2(64LL, v8, 895576406LL);
    v14 = (_DWORD *)Pool2;
    if ( Pool2 )
      goto LABEL_13;
    memset(v52, 0, sizeof(v52));
    v42 = *((_QWORD *)a1 + 12);
    LODWORD(v52[4]) |= 0x40u;
    LODWORD(v52[2]) = 1;
    LODWORD(v52[6]) = *(unsigned __int16 *)(v42 + 4);
    VidSchRegisterCompletionEvent(v7, v52);
    do
    {
      v43 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v7 + 1736), (_QWORD **)a1 + 89, (_DWORD *)a1 + 182);
      if ( v43 )
        v14 = v43 - 1;
      else
        VidSchWaitForCompletionEvent(v7, v52, 19LL);
      Pool2 = (__int64)v14;
    }
    while ( !v14 );
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v7 + 1744), v52, 0LL);
LABEL_12:
    memset(v14, 0, v11);
LABEL_13:
    v15 = v14 + 14;
    *((_QWORD *)v14 + 7) = MEMORY[0xFFFFF78000000320];
    v14[13] = 1;
    v51 = v14 + 14;
    VidSchiInterlockedInsertTailList(v9, (__int64)a1 + 760, (_QWORD *)v14 + 1, (_DWORD *)a1 + 194);
    goto LABEL_14;
  }
  v12 = v10 == (_QWORD *)8;
  v13 = v10 - 1;
  Pool2 = (__int64)v13;
  v14 = v13;
  if ( !v12 )
    goto LABEL_12;
  v15 = v13 + 7;
  v51 = v13 + 7;
LABEL_14:
  *v14 = 895576406;
  v16 = v14 + 16;
  v17 = v14 + 12;
  *v15 = MEMORY[0xFFFFF78000000320];
  v18 = (_DWORD *)((char *)a2 + 120);
  v19 = 0;
  v12 = (v49 & 0x40000) == 0;
  v14[13] = 2;
  v14[16] = 0;
  if ( !v12 )
  {
    *v17 = 7;
    goto LABEL_17;
  }
  if ( ((*((_DWORD *)a2 + 30) - 3) & 0xFFFFFFFD) != 0 )
  {
    *v17 = 0;
    goto LABEL_17;
  }
  v14[12] = 3;
  v33 = *((_DWORD *)a2 + 29);
  if ( v33 == -1
    || (v34 = *((_DWORD *)a2 + 150),
        v18 = (_DWORD *)((char *)a2 + 120),
        v17 = v14 + 12,
        v35 = ((unsigned __int16)v34 | (unsigned __int16)(v34 >> 10)) & 0x3FF,
        (((unsigned __int16)v34 | (unsigned __int16)(v34 >> 10)) & 0x3FF) == 0) )
  {
LABEL_17:
    *((_QWORD *)v14 + 11) = a1;
    *((_QWORD *)v14 + 13) = KeGetCurrentThread();
    v20 = v49;
    *((_QWORD *)v14 + 9) = v49;
    *((_QWORD *)v14 + 18) = *((_QWORD *)a2 + 12);
    *((_QWORD *)v14 + 19) = *((_QWORD *)a2 + 13);
    v14[40] = *((_DWORD *)a2 + 29);
    if ( (v20 & 4) != 0 )
    {
      *v16 ^= (*v16 ^ (*(_DWORD *)(v5 + 2536) >> 4)) & 4;
      if ( ((*v18 - 3) & 0xFFFFFFFD) == 0 && ((v20 & 0x400) == 0 || (v20 & 0x800) != 0) )
      {
        v40 = *((unsigned int *)a2 + 29);
        *((_QWORD *)a2 + 16) = ++*(_QWORD *)(v4 + 8 * v40 + 248);
      }
    }
    else if ( (v20 & 0x20) != 0 )
    {
      *v16 ^= (*v16 ^ (*(_DWORD *)(v5 + 2536) >> 5)) & 4;
    }
    else if ( *v17 != 7 )
    {
      *v16 |= 4u;
    }
    memmove(v14 + 68, a2, *((unsigned int *)a2 + 139));
    v21 = Pool2;
    if ( !*((_BYTE *)a1 + 909) )
      VidSchiAcquirePrivateDataReference(
        (struct _VIDSCH_GLOBAL *)v5,
        (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(Pool2 + 872));
    if ( *((_QWORD *)a2 + 4) && !*((_BYTE *)a1 + 909) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v14 + 38) + 12LL));
    v22 = (void *)*((_QWORD *)v14 + 45);
    if ( v22 )
      ObfReferenceObject(v22);
    VidSchiAcquireFlipFencesReference(
      (struct _VIDSCH_GLOBAL *)v5,
      (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(v21 + 872));
    v23 = *((_QWORD *)v14 + 35);
    if ( v23 && (v14[68] & 0x8000000) != 0 && !*((_QWORD *)v14 + 39) )
      *((_QWORD *)v14 + 39) = *(_QWORD *)(v23 + 96);
    if ( (v14[152] & 1) != 0 )
      VidSchiConvertDeferredWaits((__int64)a1);
    if ( v14[118] )
    {
      v32 = *(_QWORD *)(v5 + 16);
      if ( *(_BYTE *)(v32 + 4736) )
      {
        if ( *(_DWORD *)(v32 + 288) == 1 )
        {
          v44 = (unsigned int)v14[40];
          if ( (unsigned int)v44 < *(_DWORD *)(v5 + 40) )
          {
            v45 = *(_QWORD *)(*(_QWORD *)(v5 + 8 * v44 + 3200) + 16LL);
            if ( v45 )
            {
              if ( v45 != v4 )
                *v16 |= 0x80u;
            }
          }
        }
      }
    }
    if ( *((_DWORD *)a2 + 88) )
    {
      v46 = (const void *)*((_QWORD *)a2 + 43);
      result = VidSchiAllocateHistoryBufferStorage(v14);
      if ( (int)result < 0 )
        return result;
      memmove(*((void **)v14 + 77), v46, 8LL * *((unsigned int *)a2 + 88));
    }
    if ( (*(_DWORD *)(v5 + 2536) & 2) != 0 )
    {
      PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
      VidSchiSetPriorityContext(a1, PriorityThread);
    }
    *v51 = MEMORY[0xFFFFF78000000320];
    v24 = (char **)(v14 + 8);
    v14[13] = 3;
    v25 = (char *)a1 + 680;
    v26 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 86);
    if ( *v26 == (struct _VIDSCH_CONTEXT *)((char *)a1 + 680) )
    {
      v24[1] = (char *)v26;
      *v24 = v25;
      *v26 = (struct _VIDSCH_CONTEXT *)v24;
      *((_QWORD *)a1 + 86) = v24;
      v27 = *((_DWORD *)a1 + 108) + 1;
      *((_DWORD *)a1 + 108) = v27;
      if ( (*(_DWORD *)a2 & 0x40) != 0 )
        v19 = 1;
      if ( v27 <= v19 )
      {
LABEL_40:
        v30 = *((unsigned int *)a2 + 29);
        if ( (unsigned int)v30 < *(_DWORD *)(v5 + 40) && (*(_BYTE *)a2 & 5) == 5 )
          _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v5 + 8 * v30 + 3200) + 78784LL), 2, 1);
        return 0LL;
      }
      while ( 1 )
      {
        v28 = *(__int64 **)v25;
        if ( *(char **)(*(_QWORD *)v25 + 8LL) != v25 )
          break;
        v29 = *v28;
        if ( *(__int64 **)(*v28 + 8) != v28 )
          break;
        *(_QWORD *)v25 = v29;
        *(_QWORD *)(v29 + 8) = v25;
        --*((_DWORD *)a1 + 108);
        VidSchiSubmitCommandPacketToQueue((__int64)(v28 - 4));
        if ( *((_DWORD *)a1 + 108) <= v19 )
          goto LABEL_40;
      }
    }
    __fastfail(3u);
  }
  while ( 1 )
  {
    v12 = !_BitScanForward((unsigned int *)&v36, v35);
    if ( v12 )
      LOBYTE(v36) = -1;
    v37 = (char)v36;
    v53 = (char)v36;
    if ( *(_BYTE *)(v5 + 59) )
    {
      v54 = VidSchiEnsureHwFlipQueueLog((struct _VIDSCH_GLOBAL *)v5, v33, (char)v36);
      if ( v54 < 0 )
        goto LABEL_88;
      v37 = v53;
    }
    v38 = *((unsigned int *)a2 + 29);
    v39 = *(int *)(*(_QWORD *)(v5 + 8 * v38 + 3200) + 288LL * v37 + 188);
    if ( (int)v39 > -1 && *(_DWORD *)(160 * v39 + *(_QWORD *)(v5 + 3328) + 112) == 2 )
      break;
    v33 = *((_DWORD *)a2 + 29);
    v35 &= ~(1 << v37);
    if ( !v35 )
    {
      v18 = (_DWORD *)((char *)a2 + 120);
      v17 = v14 + 12;
      goto LABEL_17;
    }
  }
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 281LL, 0x100000LL, v37, v38, v5);
  __debugbreak();
LABEL_88:
  VidSchiFreeQueuePacket((__int64)a1, (__int64)v14);
  return (unsigned int)v54;
}
