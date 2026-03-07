// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchSubmitCommandToHwQueue(struct VIDSCH_HW_QUEUE *a1, struct VIDSCH_SUBMIT_DATA2 *a2)
{
  _QWORD *v2; // r15
  char *v3; // r12
  struct VIDSCH_SUBMIT_DATA2 *v4; // rdi
  __int64 v6; // rbp
  __int64 v7; // rsi
  int v8; // eax
  __int64 result; // rax
  __int64 v10; // r8
  __int64 HwQueuePacket; // rbx
  bool v12; // zf
  unsigned __int64 v13; // r14
  _DWORD *v14; // rdx
  unsigned int v15; // r9d
  unsigned int v16; // eax
  unsigned int v17; // r15d
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r10
  __int16 v23; // ax
  __int64 v24; // rax
  void *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  _QWORD *v31; // [rsp+30h] [rbp-48h]
  unsigned int v32; // [rsp+90h] [rbp+18h]
  __int64 v33; // [rsp+98h] [rbp+20h] BYREF

  v2 = (_QWORD *)*((_QWORD *)a1 + 5);
  v3 = 0LL;
  v4 = a2;
  v31 = v2;
  v6 = v2[1];
  v7 = *(_QWORD *)(v6 + 32);
  if ( *(_BYTE *)(v6 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 200), 0, 0) )
  {
    WdLogSingleEntry2(3LL, v6, -1071775232LL);
    return 3223192064LL;
  }
  v33 = *(_QWORD *)a2;
  v8 = v33;
  if ( (v33 & 0x20) != 0 )
  {
    result = VidSchValidatePresentFlags(a2, (struct _VIDSCH_DEVICE *)v6, (struct _VIDSCH_SUBMIT_FLAGS *)&v33);
    if ( (int)result < 0 )
      return result;
    v8 = v33;
  }
  if ( (v8 & 0x800004) == 4 && *(_BYTE *)(v7 + 59) )
  {
    v10 = *((_BYTE *)v4 + 356) != 0 ? 0x68 : 0;
    a2 = (struct VIDSCH_SUBMIT_DATA2 *)(*(_DWORD *)((_BYTE *)v4 + v10 + 496) & 0xFFF003FF | ((((unsigned __int16)(1 << *(_DWORD *)(v7 + 152))
                                                                                             - 1) & 0x3FE) << 10));
    *(_DWORD *)((char *)v4 + v10 + 496) = (_DWORD)a2;
  }
  LOBYTE(a2) = 1;
  HwQueuePacket = VidSchiAllocateHwQueuePacket(a1, a2);
  *(_DWORD *)HwQueuePacket = 895576406;
  v12 = (v33 & 0x40000) == 0;
  *(_QWORD *)(HwQueuePacket + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(HwQueuePacket + 52) = 2;
  *(_DWORD *)(HwQueuePacket + 64) = 0;
  if ( v12 )
  {
    v3 = (char *)v4 + 120;
    if ( ((*((_DWORD *)v4 + 30) - 3) & 0xFFFFFFFD) != 0 )
    {
      v13 = HwQueuePacket + 48;
      *(_DWORD *)(HwQueuePacket + 48) = 0;
      VidSchiEnsureRootPageTableUpdated(v2);
LABEL_24:
      v14 = (_DWORD *)((char *)v4 + 120);
    }
    else
    {
      v14 = (_DWORD *)((char *)v4 + 120);
      *(_DWORD *)(HwQueuePacket + 48) = 3;
      v13 = HwQueuePacket + 48;
      v15 = *((_DWORD *)v4 + 29);
      if ( v15 != -1 )
      {
        v16 = *((_DWORD *)v4 + 150);
        v17 = ((unsigned __int16)v16 | (unsigned __int16)(v16 >> 10)) & 0x3FF;
        if ( (((unsigned __int16)v16 | (unsigned __int16)(v16 >> 10)) & 0x3FF) != 0 )
        {
          while ( 1 )
          {
            v12 = !_BitScanForward((unsigned int *)&v18, v17);
            LOBYTE(v19) = -1;
            if ( !v12 )
              LOBYTE(v19) = v18;
            v19 = (char)v19;
            v32 = (char)v19;
            if ( *(_BYTE *)(v7 + 59) )
            {
              v20 = VidSchiEnsureHwFlipQueueLog((struct _VIDSCH_GLOBAL *)v7, v15, (char)v19);
              v13 = (unsigned int)v20;
              if ( v20 < 0 )
              {
                VidSchiFreeQueuePacket(a1, (struct _VIDSCH_QUEUE_PACKET *)HwQueuePacket);
                return (unsigned int)v13;
              }
              v19 = v32;
            }
            v21 = *((unsigned int *)v4 + 29);
            v22 = *(int *)(*(_QWORD *)(v7 + 8 * v21 + 3200) + 288LL * v19 + 188);
            if ( (int)v22 > -1 && *(_DWORD *)(160 * v22 + *(_QWORD *)(v7 + 3328) + 112) == 2 )
              break;
            v15 = *((_DWORD *)v4 + 29);
            v17 &= ~(1 << v19);
            if ( !v17 )
            {
              v13 = HwQueuePacket + 48;
              goto LABEL_24;
            }
          }
          g_DxgMmsBugcheckExportIndex = 1;
          LOBYTE(v23) = WdLogSingleEntry5(0LL, 281LL, 0x100000LL, v19, v21, v7);
          __debugbreak();
          goto LABEL_32;
        }
      }
    }
    v3 = 0LL;
  }
  else
  {
    v13 = HwQueuePacket + 48;
    *(_DWORD *)(HwQueuePacket + 48) = 7;
    v14 = (_DWORD *)((char *)v4 + 120);
  }
  *(_QWORD *)(HwQueuePacket + 96) = a1;
  *(_QWORD *)(HwQueuePacket + 104) = KeGetCurrentThread();
  v23 = v33;
  *(_QWORD *)(HwQueuePacket + 72) = v33;
  *(_QWORD *)(HwQueuePacket + 144) = *((_QWORD *)v4 + 12);
  *(_QWORD *)(HwQueuePacket + 152) = *((_QWORD *)v4 + 13);
  *(_DWORD *)(HwQueuePacket + 160) = *((_DWORD *)v4 + 29);
  if ( (v23 & 4) == 0 )
  {
LABEL_32:
    if ( (v23 & 0x20) != 0 )
    {
      *(_DWORD *)(HwQueuePacket + 64) ^= (*(_DWORD *)(HwQueuePacket + 64) ^ (*(_DWORD *)(v7 + 2536) >> 5)) & 4;
    }
    else if ( *(_DWORD *)v13 != 7 )
    {
      *(_DWORD *)(HwQueuePacket + 64) |= 4u;
    }
    goto LABEL_36;
  }
  *(_DWORD *)(HwQueuePacket + 64) ^= (*(_DWORD *)(HwQueuePacket + 64) ^ (*(_DWORD *)(v7 + 2536) >> 4)) & 4;
  if ( ((*v14 - 3) & 0xFFFFFFFD) == 0 && (v23 & 0xC00) != 0x400 )
  {
    v24 = *((unsigned int *)v4 + 29);
    *((_QWORD *)v4 + 16) = ++*(_QWORD *)(v6 + 8 * v24 + 248);
  }
LABEL_36:
  memmove((void *)(HwQueuePacket + 272), v4, *((unsigned int *)v4 + 139));
  if ( *((_BYTE *)v31 + 89) == (_BYTE)v3 )
    VidSchiAcquirePrivateDataReference(
      (struct _VIDSCH_GLOBAL *)v7,
      (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(HwQueuePacket + 872));
  if ( *((char **)v4 + 4) != v3 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(HwQueuePacket + 304) + 12LL));
  v25 = *(void **)(HwQueuePacket + 360);
  if ( v25 )
    ObfReferenceObject(v25);
  VidSchiAcquireFlipFencesReference(
    (struct _VIDSCH_GLOBAL *)v7,
    (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(HwQueuePacket + 872));
  if ( *(_DWORD *)(HwQueuePacket + 472) > (unsigned int)v3 )
  {
    v26 = *(_QWORD *)(v7 + 16);
    if ( *(_BYTE *)(v26 + 4736) != (_BYTE)v3 && *(_DWORD *)(v26 + 288) == 1 )
    {
      v27 = *(unsigned int *)(HwQueuePacket + 160);
      if ( (unsigned int)v27 < *(_DWORD *)(v7 + 40) )
      {
        v28 = *(_QWORD *)(*(_QWORD *)(v7 + 8 * v27 + 3200) + 16LL);
        if ( v28 )
        {
          if ( v28 != v6 )
            *(_DWORD *)(HwQueuePacket + 64) |= 0x80u;
        }
      }
    }
  }
  v29 = *(_QWORD *)(HwQueuePacket + 280);
  if ( v29 && (*(_DWORD *)(HwQueuePacket + 272) & 0x8000000) != 0 && *(char **)(HwQueuePacket + 312) == v3 )
    *(_QWORD *)(HwQueuePacket + 312) = *(_QWORD *)(v29 + 96);
  VidSchiSubmitCommandPacketToHwQueue((struct _VIDSCH_QUEUE_PACKET *)HwQueuePacket);
  v30 = *((unsigned int *)v4 + 29);
  if ( (unsigned int)v30 < *(_DWORD *)(v7 + 40) && (*(_BYTE *)v4 & 5) == 5 )
    _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v7 + 8 * v30 + 3200) + 78784LL), 2, 1);
  return 0LL;
}
