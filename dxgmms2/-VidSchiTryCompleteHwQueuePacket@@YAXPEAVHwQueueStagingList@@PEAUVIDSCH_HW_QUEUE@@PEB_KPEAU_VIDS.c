// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiTryCompleteHwQueuePacket(
        struct HwQueueStagingList *a1,
        struct VIDSCH_HW_QUEUE *a2,
        unsigned __int64 *a3,
        struct _VIDSCH_QUEUE_PACKET *a4,
        bool *a5)
{
  struct HwQueueStagingList *v5; // r11
  __int64 v6; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  bool v11; // zf
  bool v12; // al
  __int64 v13; // rcx
  __int64 v14; // r8

  v5 = a1;
  v6 = *((int *)a4 + 12);
  *a5 = 0;
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 != 3 )
    {
      switch ( (_DWORD)v6 )
      {
        case 4:
          VidSchiCompleteHwQueueWaitPacket(v5, a4, (__int64)a3);
          goto LABEL_14;
        case 5:
          if ( *((struct VIDSCH_HW_QUEUE **)a4 + 5) == (struct VIDSCH_HW_QUEUE *)((char *)a2 + 160) )
          {
            VidSchiCompleteHwQueueSignalPacket(v5, a4);
            goto LABEL_14;
          }
          return;
        case 7:
          if ( *((struct VIDSCH_HW_QUEUE **)a4 + 5) != (struct VIDSCH_HW_QUEUE *)((char *)a2 + 160) )
            return;
          goto LABEL_13;
        case 8:
          v8 = *((_QWORD *)a2 + 7);
          v9 = *((_QWORD *)a4 + 36);
          v10 = *a3;
          if ( !*(_BYTE *)(v8 + 28) )
          {
            v11 = *(_BYTE *)(v8 + 29) == 0;
            goto LABEL_9;
          }
LABEL_13:
          VidSchiCompleteHwQueuePacket(v5, a4, 1);
LABEL_14:
          *a5 = 1;
          return;
      }
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 2048LL, a2, a4, v6);
    __debugbreak();
  }
  v13 = *((unsigned int *)a4 + 194);
  v14 = *((_QWORD *)a2 + 3 * v13 + 7);
  v9 = *((_QWORD *)a4 + 96);
  v10 = a3[v13];
  if ( *(_BYTE *)(v14 + 28) )
    goto LABEL_13;
  v11 = *(_BYTE *)(v14 + 29) == 0;
LABEL_9:
  if ( v11 )
    v12 = (int)v10 - (int)v9 >= 0;
  else
    v12 = v10 >= v9;
  if ( v12 )
    goto LABEL_13;
}
