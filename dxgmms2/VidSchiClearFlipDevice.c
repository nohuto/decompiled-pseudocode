void __fastcall VidSchiClearFlipDevice(
        struct _VIDSCH_GLOBAL *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  unsigned int *v6; // rsi
  unsigned int i; // r14d
  _QWORD v10[2]; // [rsp+40h] [rbp-40h] BYREF
  char v11; // [rsp+50h] [rbp-30h]
  _QWORD v12[4]; // [rsp+58h] [rbp-28h] BYREF
  __int16 v13; // [rsp+78h] [rbp-8h]

  v6 = (unsigned int *)((char *)a1 + 40);
  if ( a4 != -3 )
  {
    if ( a4 < *v6 )
    {
      VidSchiSetFlipDevice(a1, a4, a2, 0, a3, 0, a5);
      goto LABEL_4;
    }
    WdLogSingleEntry1(3LL, a4);
  }
  for ( i = 0; i < *v6; ++i )
    VidSchiSetFlipDevice(a1, i, a2, 0, a3, 0, a5);
LABEL_4:
  if ( *((_BYTE *)a1 + 51) )
  {
    v13 = 0;
    v12[0] = (char *)a1 + 1728;
    AcquireSpinLock::Acquire((AcquireSpinLock *)v12);
    v11 = 0;
    v10[1] = v10;
    v10[0] = v10;
    if ( (unsigned int)VidSchiProcessFlipPendingContextList(v10, a1) )
    {
      *((_QWORD *)a1 + 153) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)((char *)a1 + 1192), 0, 0);
    }
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v10);
    AcquireSpinLock::Release((AcquireSpinLock *)v12);
  }
}
