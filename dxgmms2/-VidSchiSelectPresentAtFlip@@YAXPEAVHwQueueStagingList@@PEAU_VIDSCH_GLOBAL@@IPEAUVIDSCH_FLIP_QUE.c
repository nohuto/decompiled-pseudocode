void __fastcall VidSchiSelectPresentAtFlip(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        struct VIDSCH_FLIP_QUEUE *a4,
        unsigned int *a5,
        struct _VIDSCH_FLIP_QUEUE_ENTRY **a6)
{
  unsigned int v6; // r12d
  __int64 v9; // rbp
  unsigned int CurrentVSyncPeriodQpc; // esi
  bool v11; // zf
  unsigned int v12; // eax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _VIDSCH_FLIP_QUEUE_ENTRY **v18; // r13
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v19; // r8
  unsigned __int64 v20; // rsi
  int v21; // eax
  unsigned int v22; // ebx
  struct _VIDSCH_FLIP_QUEUE_ENTRY **v23; // r12
  __int64 v24; // rcx
  char *v25; // r13
  int v26; // eax
  unsigned int *v27; // rax
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // r10
  __int64 v32; // rdx
  __int64 v33; // r9
  unsigned __int64 v34; // rax
  unsigned __int64 v36; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v37; // [rsp+A0h] [rbp+18h] BYREF

  v37 = a3;
  v6 = a3;
  v9 = *((_QWORD *)a2 + a3 + 400);
  CurrentVSyncPeriodQpc = VidSchiGetCurrentVSyncPeriodQpc(a2, a3, 1);
  v11 = *(_DWORD *)(v9 + 3032) == -1;
  v36 = 0LL;
  if ( v11
    || !*((_BYTE *)a2 + 6634)
    || (v12 = VidSchiGetCurrentVSyncPeriodQpc(a2, v6, 0),
        (int)VIDSCH_VSYNC_SMOOTHER::GetSmoothenedFrameTimeQpc(
               *(VIDSCH_VSYNC_SMOOTHER **)(v9 + 44248),
               *(_QWORD *)(v9 + 44192),
               *(_QWORD *)(v9 + 44208),
               &v36,
               v12) < 0) )
  {
    v13 = *(_QWORD *)(v9 + 44208);
  }
  else
  {
    v13 = v36;
    v14 = *((_QWORD *)a2 + 328);
    v15 = (int)abs32(*(_DWORD *)(v9 + 44208) - v36);
    if ( is_mul_ok(v15, 0x989680uLL) )
    {
      v16 = v15 * (unsigned __int128)0x989680uLL % v14;
      v17 = v15 * (unsigned __int128)0x989680uLL / v14;
    }
    else
    {
      v17 = 10000000 * (v15 % v14) / v14;
      v16 = v15 % v14;
      v14 = 10000000 * (v15 / v14);
      LODWORD(v17) = v14 + v17;
    }
    if ( (byte_1C00769C4 & 1) != 0 )
      McTemplateK0qxxxx_EtwWriteTransfer(v14, v16, v17, v6, *(_QWORD *)(v9 + 44192), *(_QWORD *)(v9 + 44208), v36, v17);
  }
  v18 = a6;
  v19 = *a6;
  v20 = v13 + CurrentVSyncPeriodQpc + ((unsigned __int64)CurrentVSyncPeriodQpc >> 1);
  if ( *((_QWORD *)*a6 + 162) <= v20 )
  {
    v21 = *((_DWORD *)a4 + 16);
    v22 = ((_BYTE)v21 + 1) & 0x3F;
    if ( v22 != v21 )
    {
      v23 = a6;
      do
      {
        v24 = 1384LL * v22;
        v25 = (char *)a4 + v24 + 120;
        v26 = *((_DWORD *)v25 + 263);
        if ( v26 != 2 && v26 != 14 )
          break;
        if ( VidSchiCheckPendingFlipsForThisEntry(
               a2,
               (struct _VIDSCH_PRESENT_INFO *)v9,
               (unsigned __int64)a4 + v24 + 120,
               a4) )
        {
          break;
        }
        if ( *((_QWORD *)v25 + 162) > v20 )
          break;
        v27 = a5;
        *v23 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v25;
        *v27 = v22;
        v22 = ((_BYTE)v22 + 1) & 0x3F;
      }
      while ( v22 != *((_DWORD *)a4 + 16) );
      v6 = v37;
      v18 = a6;
    }
    v28 = *((_DWORD *)a4 + 16);
    v29 = *a5;
    if ( *a5 != v28 )
    {
      LOBYTE(v37) = 0;
      VidSchiCompleteFlipEntry((__int64)a1, (__int64)a2, v6, (__int64)a4, v28, ((_BYTE)v29 - 1) & 0x3F, 6u, &v37);
    }
    v19 = *v18;
    *((_DWORD *)*v18 + 263) = 4;
  }
  if ( bTracingEnabled )
  {
    v30 = *((_QWORD *)a2 + 328);
    v31 = (int)abs32(*((_DWORD *)v19 + 324) - v20);
    if ( is_mul_ok(v31, 0x989680uLL) )
    {
      v32 = v31 * (unsigned __int128)0x989680uLL % v30;
      v33 = v31 * (unsigned __int128)0x989680uLL / v30;
    }
    else
    {
      v33 = 10000000 * (v31 % v30) / v30;
      v34 = v31 / v30;
      v32 = v31 % v30;
      LODWORD(v30) = 10000000 * (v31 / v30);
      LOBYTE(v33) = ((_BYTE)v34 << 7) + v33;
    }
    if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0qqxxxt_EtwWriteTransfer(
        v30,
        v32,
        (_DWORD)v19,
        v6,
        *((_DWORD *)v19 + 264),
        *((_QWORD *)v19 + 162),
        v20,
        v33,
        *((_DWORD *)v19 + 263) == 4);
  }
}
