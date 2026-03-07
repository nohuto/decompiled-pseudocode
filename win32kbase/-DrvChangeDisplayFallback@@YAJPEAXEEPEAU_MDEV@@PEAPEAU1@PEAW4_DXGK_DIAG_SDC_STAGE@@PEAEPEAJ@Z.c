__int64 __fastcall DrvChangeDisplayFallback(
        HSEMAPHORE a1,
        unsigned __int8 a2,
        char a3,
        struct _MDEV *a4,
        struct _MDEV **a5,
        enum _DXGK_DIAG_SDC_STAGE *a6,
        bool *a7,
        int *a8)
{
  int v9; // ebp
  __int64 v12; // rdi
  int v13; // eax
  int v14; // ebx
  unsigned int v15; // r8d

  v9 = a2;
  v12 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( *(_DWORD *)(v12 + 1292) )
    WdLogSingleEntry0(1LL);
  if ( a3 )
    *(_DWORD *)(v12 + 1292) = 1;
  if ( *(_DWORD *)(v12 + 1296) )
    WdLogSingleEntry0(1LL);
  *(_DWORD *)(v12 + 1296) = 1;
  v13 = DrvChangeDisplaySettingsInternal(0LL, 0LL, 0LL, a1, 0, 1, a4, (void **)a5, 0, 1, v9, 1, 0);
  *(_DWORD *)(v12 + 1296) = 0;
  v14 = v13;
  switch ( v13 )
  {
    case 0:
      goto LABEL_8;
    case 2:
      if ( (_BYTE)v9 || *a5 )
        WdLogSingleEntry0(1LL);
LABEL_8:
      v15 = 0;
      *(_DWORD *)a6 = 18;
      *a7 = v14 == 2;
      goto LABEL_9;
    case 3:
      WdLogSingleEntry0(1LL);
      break;
  }
  v15 = -1073741823;
  *(_DWORD *)a6 = 54;
LABEL_9:
  *(_DWORD *)(v12 + 1292) = 0;
  if ( a8 )
    *a8 = v14;
  return v15;
}
