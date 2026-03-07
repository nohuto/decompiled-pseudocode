void __fastcall VidSchiSubmitNextFlipQueueEntryRange(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        bool *a3,
        unsigned int a4,
        struct VIDSCH_FLIP_QUEUE *a5)
{
  struct VIDSCH_FLIP_QUEUE *v5; // rbx
  unsigned int v7; // r13d
  struct HwQueueStagingList *v8; // r14
  __int64 v9; // rdi
  __int64 v10; // r12
  char *v11; // rsi
  unsigned int v12; // ebp
  struct _VIDSCH_PRESENT_INFO *v13; // r13
  unsigned int v14; // r12d
  char v15; // al
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ebp
  char *v19; // r14
  int v20; // eax
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  __int64 v25; // [rsp+98h] [rbp+10h]
  unsigned int v27; // [rsp+A8h] [rbp+20h] BYREF

  v27 = a4;
  v5 = a5;
  v7 = a4;
  v8 = a1;
  v9 = *((unsigned int *)a5 + 16);
  v10 = *((_QWORD *)a2 + a4 + 400);
  v25 = v10;
  v11 = (char *)a5 + 1384 * v9 + 120;
  if ( *(_DWORD *)(v10 + 3076) )
  {
    v12 = ((_BYTE)v9 + 1) & 0x3F;
    if ( v12 != (_DWORD)v9 )
    {
      v13 = (struct _VIDSCH_PRESENT_INFO *)*((_QWORD *)a2 + a4 + 400);
      do
      {
        v14 = v12;
        if ( !VidSchiIsPendingFlipReadyToBeSubmitted(
                a2,
                v13,
                v5,
                (struct VIDSCH_FLIP_QUEUE *)((char *)v5 + 1384 * v12 + 120)) )
          break;
        v15 = *((_BYTE *)v5 + 1384 * v12 + 1196);
        if ( v15 )
          v11 = (char *)v5 + 1384 * v12 + 120;
        v12 = ((_BYTE)v12 + 1) & 0x3F;
        if ( !v15 )
          v14 = v9;
        LODWORD(v9) = v14;
      }
      while ( v12 != *((_DWORD *)v5 + 16) );
      v7 = v27;
      v10 = v25;
      v8 = a1;
    }
    if ( (_DWORD)v9 != *((_DWORD *)v5 + 16)
      || v11[1076]
      && VidSchiIsPendingFlipReadyToBeSubmitted(
           a2,
           (struct _VIDSCH_PRESENT_INFO *)v10,
           v5,
           (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v11) )
    {
      VidSchiRestartQueuedFlip(v8, *((_QWORD *)v5 + 173 * *((unsigned int *)v5 + 16) + 145), v7, v5, v9);
      *((_DWORD *)v11 + 263) = 4;
      LOBYTE(v27) = 0;
      VidSchiExecuteMmIoFlip((__int64)v8, (__int64)a2, v7, (__int64)v5, v9, (volatile signed __int32 *)a3, &v27);
      if ( (_BYTE)v27 )
        VidSchiExecuteMmIoFlip((__int64)v8, (__int64)a2, v7, (__int64)v5, v9, (volatile signed __int32 *)a3, &v27);
    }
    else
    {
      while ( 1 )
      {
        if ( VidSchiIsPendingFlipReadyToBeSubmitted(
               a2,
               (struct _VIDSCH_PRESENT_INFO *)v10,
               v5,
               (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v11) )
        {
          v16 = *((_DWORD *)v11 + 284);
          if ( (v16 & 0x2000) == 0 )
          {
            if ( (v16 & 0x80u) != 0 )
            {
              v17 = *((_DWORD *)v5 + 16);
              v18 = ((_BYTE)v17 + 1) & 0x3F;
              if ( v18 != v17 )
              {
                do
                {
                  v19 = (char *)v5 + 1384 * v18;
                  v20 = *((_DWORD *)v19 + 293);
                  if ( v20 != 2 && v20 != 14 )
                    break;
                  if ( VidSchiCheckPendingFlipsForThisEntry(
                         a2,
                         (struct _VIDSCH_PRESENT_INFO *)v10,
                         (unsigned __int64)(v19 + 120),
                         v5) )
                  {
                    break;
                  }
                  v21 = *((_DWORD *)v19 + 314);
                  v11 = v19 + 120;
                  LODWORD(v9) = v18;
                  if ( (v21 & 0x80u) == 0 )
                  {
                    if ( (v21 & 0x1000) != 0 )
                      *((_DWORD *)v19 + 314) = v21 & 0xFFFFEFFF;
                    break;
                  }
                  v18 = ((_BYTE)v18 + 1) & 0x3F;
                }
                while ( v18 != *((_DWORD *)v5 + 16) );
              }
              v22 = *((_DWORD *)v5 + 16);
              if ( (_DWORD)v9 != v22 )
              {
                LOBYTE(a5) = 0;
                VidSchiCompleteFlipEntry(
                  (__int64)a1,
                  (__int64)a2,
                  v7,
                  (__int64)v5,
                  v22,
                  ((_BYTE)v9 - 1) & 0x3F,
                  6u,
                  &a5);
              }
            }
            VidSchiVirtualizeFlipInterval(v10, (__int64)v11);
          }
          *((_DWORD *)v11 + 263) = 4;
        }
        if ( *((_DWORD *)v11 + 263) != 4 )
          break;
        LOBYTE(v27) = 0;
        v23 = VidSchiExecuteMmIoFlip((__int64)a1, (__int64)a2, v7, (__int64)v5, v9, (volatile signed __int32 *)a3, &v27);
        if ( (_BYTE)v27 )
          v23 = VidSchiExecuteMmIoFlip(
                  (__int64)a1,
                  (__int64)a2,
                  v7,
                  (__int64)v5,
                  v9,
                  (volatile signed __int32 *)a3,
                  &v27);
        if ( v23 )
          break;
        v9 = *((unsigned int *)v5 + 16);
        v11 = (char *)v5 + 1384 * v9 + 120;
      }
    }
  }
}
