// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_DMA_POOL::WaitDmaBufferNotBusy(
        VIDMM_DMA_POOL *this,
        struct _VIDMM_DMA_BUFFER *a2,
        char a3,
        unsigned __int8 *a4)
{
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // ecx
  unsigned int v15; // eax
  _QWORD v16[20]; // [rsp+38h] [rbp-59h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    v8 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v8 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v8 + 32) = a2;
  }
  if ( a4 )
    *a4 = 0;
  memset(v16, 0, sizeof(v16));
  LODWORD(v16[2]) = 0;
  v9 = *(_QWORD *)this;
  if ( VidSchIsWorkerThread(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 744LL)) )
  {
    v10 = *((unsigned int *)a2 + 12);
    v11 = *((_QWORD *)a2 + 5);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 22LL, a2, v11, v10);
    v9 = *(_QWORD *)this;
  }
  v12 = *((_DWORD *)a2 + 7);
  LOBYTE(v16[19]) = a3;
  if ( (v12 & 2) == 0 )
  {
    v13 = *((_QWORD *)this + 3);
    if ( v13 )
    {
      if ( (*(_DWORD *)(v13 + 404) & 0x10) != 0 )
      {
        v16[3] = *(_QWORD *)(v13 + 280);
        v14 = v16[3] != 0LL ? 4 : 0;
        v15 = v16[4] & 0xFFFFFFFB;
      }
      else
      {
        v16[3] = *(_QWORD *)(v13 + 256);
        v14 = v16[3] != 0LL ? 2 : 0;
        v15 = v16[4] & 0xFFFFFFFD;
      }
      LODWORD(v16[4]) = v15 | v14;
    }
  }
  VidSchRegisterCompletionEvent(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 744LL), (__int64)v16);
  while ( *((_BYTE *)a2 + 24) == 1 )
  {
    if ( (unsigned int)VidSchWaitForCompletionEvent(
                         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 744LL),
                         (__int64)v16,
                         1LL) == -1073741130 )
    {
      if ( a4 )
        *a4 = 1;
      break;
    }
  }
  VidSchiInterlockedRemoveEntryList(
    (KSPIN_LOCK *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 744LL) + 1744LL),
    v16,
    0LL);
}
