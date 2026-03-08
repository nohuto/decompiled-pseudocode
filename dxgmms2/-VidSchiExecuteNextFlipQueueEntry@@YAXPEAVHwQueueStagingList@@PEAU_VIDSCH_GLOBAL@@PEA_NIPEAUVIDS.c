/*
 * XREFs of ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C0017F40
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0009880 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     VidSchiExecuteMmIoFlip @ 0x1C000BE30 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000C340 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     VidSchiCompleteFlipEntry @ 0x1C000D060 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C0036748 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 *     VidSchiRestartQueuedFlip @ 0x1C003C2A4 (VidSchiRestartQueuedFlip.c)
 *     VidSchiVirtualizeFlipInterval @ 0x1C003D0BC (VidSchiVirtualizeFlipInterval.c)
 */

void __fastcall VidSchiExecuteNextFlipQueueEntry(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        bool *a3,
        unsigned int a4,
        struct VIDSCH_FLIP_QUEUE *a5)
{
  struct VIDSCH_FLIP_QUEUE *v5; // rbx
  unsigned int v7; // r13d
  __int64 v8; // r14
  struct _VIDSCH_PRESENT_INFO *v9; // r15
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v10; // rdi
  bool v11; // zf
  unsigned int v12; // esi
  struct _VIDSCH_PRESENT_INFO *v13; // r13
  __int64 v14; // r15
  int v15; // ecx
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rsi
  int v19; // eax
  int v20; // eax
  unsigned int v21; // esi
  _DWORD *v22; // r15
  int v23; // eax
  int v24; // eax
  unsigned int v25; // edx
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v26; // [rsp+40h] [rbp-18h] BYREF
  struct HwQueueStagingList *v27; // [rsp+A0h] [rbp+48h]
  struct _VIDSCH_PRESENT_INFO *v28; // [rsp+A8h] [rbp+50h]
  unsigned int v30; // [rsp+B8h] [rbp+60h] BYREF

  v30 = a4;
  v27 = a1;
  v5 = a5;
  v7 = a4;
  v8 = *((unsigned int *)a5 + 16);
  v9 = (struct _VIDSCH_PRESENT_INFO *)*((_QWORD *)a2 + a4 + 400);
  v28 = v9;
  v10 = (struct VIDSCH_FLIP_QUEUE *)((char *)a5 + 1384 * v8 + 120);
  LODWORD(a5) = *((_DWORD *)a5 + 16);
  v11 = *((_DWORD *)v9 + 769) == 0;
  v26 = v10;
  if ( !v11 )
  {
    v12 = ((_BYTE)v8 + 1) & 0x3F;
    if ( v12 != (_DWORD)v8 )
    {
      v13 = v9;
      do
      {
        v14 = (__int64)v5 + 1384 * v12 + 120;
        v15 = *(_DWORD *)(v14 + 1052);
        if ( (unsigned int)(v15 - 2) > 1 && v15 != 14
          || VidSchiCheckPendingFlipsForThisEntry(a2, v13, (unsigned __int64)v5 + 1384 * v12 + 120, v5) )
        {
          break;
        }
        if ( *(_BYTE *)(v14 + 1076) )
        {
          LODWORD(v8) = v12;
          LODWORD(a5) = v12;
          v10 = (struct VIDSCH_FLIP_QUEUE *)((char *)v5 + 1384 * v12 + 120);
          v26 = v10;
        }
        v12 = ((_BYTE)v12 + 1) & 0x3F;
      }
      while ( v12 != *((_DWORD *)v5 + 16) );
      v7 = v30;
      v9 = v28;
      a1 = v27;
    }
    v16 = *((unsigned int *)v5 + 16);
    if ( (_DWORD)v8 == (_DWORD)v16 )
    {
      v17 = *((_DWORD *)v10 + 263);
      if ( (unsigned int)(v17 - 2) <= 1 || v17 == 14 )
      {
        if ( !*((_BYTE *)a2 + 59) )
        {
          v10 = v26;
          LODWORD(v8) = (_DWORD)a5;
          *((_QWORD *)v26 + 138) = MEMORY[0xFFFFF78000000320];
        }
        if ( !VidSchiCheckPendingFlipsForThisEntry(a2, v9, (unsigned __int64)v10, v5) )
        {
          v19 = *((_DWORD *)v10 + 284);
          if ( (v19 & 0x2000) != 0 )
          {
            v18 = (__int64)v27;
            VidSchiSelectPresentAtFlip(v27, a2, v7, v5, (unsigned int *)&a5, &v26);
            LODWORD(v8) = (_DWORD)a5;
            v10 = v26;
LABEL_11:
            if ( *((_DWORD *)v10 + 263) == 4 )
            {
              LOBYTE(v30) = 0;
              VidSchiExecuteMmIoFlip(v18, (__int64)a2, v7, (__int64)v5, v8, (volatile signed __int32 *)a3, &v30);
            }
            return;
          }
          if ( !*((_DWORD *)v5 + 28) )
          {
            if ( (v19 & 0x80u) == 0 )
            {
              v18 = (__int64)v27;
            }
            else
            {
              v20 = *((_DWORD *)v5 + 16);
              v21 = ((_BYTE)v20 + 1) & 0x3F;
              if ( v21 != v20 )
              {
                do
                {
                  v22 = (_DWORD *)((char *)v5 + 1384 * v21);
                  v23 = v22[293];
                  if ( v23 != 2 && v23 != 14 )
                    break;
                  if ( VidSchiCheckPendingFlipsForThisEntry(a2, v28, (unsigned __int64)(v22 + 30), v5) )
                    break;
                  v24 = v22[314];
                  v10 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v22 + 30);
                  LODWORD(v8) = v21;
                  if ( (v24 & 0x80u) == 0 )
                  {
                    if ( (v24 & 0x1000) != 0 )
                      v22[314] = v24 & 0xFFFFEFFF;
                    break;
                  }
                  v21 = ((_BYTE)v21 + 1) & 0x3F;
                }
                while ( v21 != *((_DWORD *)v5 + 16) );
                v9 = v28;
              }
              v25 = *((_DWORD *)v5 + 16);
              v18 = (__int64)v27;
              if ( (_DWORD)v8 != v25 )
              {
                LOBYTE(v30) = 0;
                VidSchiCompleteFlipEntry(
                  (__int64)v27,
                  (__int64)a2,
                  v7,
                  (__int64)v5,
                  v25,
                  ((_BYTE)v8 - 1) & 0x3F,
                  6u,
                  &v30);
              }
            }
            VidSchiVirtualizeFlipInterval(v9, v10);
            *((_DWORD *)v10 + 263) = 4;
            goto LABEL_11;
          }
          *((_DWORD *)v10 + 263) = 3;
        }
      }
    }
    else
    {
      VidSchiRestartQueuedFlip(a1, *((_QWORD *)v5 + 173 * v16 + 145), v7, v5, (_DWORD)v8);
      *((_DWORD *)v10 + 263) = 4;
    }
    v18 = (__int64)v27;
    goto LABEL_11;
  }
}
