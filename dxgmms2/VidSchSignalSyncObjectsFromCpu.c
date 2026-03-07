__int64 __fastcall VidSchSignalSyncObjectsFromCpu(
        unsigned int a1,
        struct _VIDSCH_SYNC_OBJECT **a2,
        struct _D3DDDICB_SIGNALFLAGS a3,
        char *a4)
{
  __int64 Value; // rbx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  _QWORD v11[2]; // [rsp+58h] [rbp+17h] BYREF
  char v12; // [rsp+68h] [rbp+27h]
  _QWORD v13[4]; // [rsp+70h] [rbp+2Fh] BYREF
  __int16 v14; // [rsp+90h] [rbp+4Fh]

  Value = a3.Value;
  if ( (*(_BYTE *)&a3.0 & 4) == a3.0 )
  {
    v9 = *((_QWORD *)*a2 + 1);
    v14 = 0;
    v13[0] = v9 + 1728;
    AcquireSpinLock::Acquire((Acquire *)v13);
    v11[1] = v11;
    v12 = 0;
    v11[0] = v11;
    v10 = VidSchiSignalSyncObjectsFromCpu(
            (struct HwQueueStagingList *)v11,
            a1,
            a2,
            (struct _D3DDDICB_SIGNALFLAGS)Value,
            a4,
            0LL);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v11);
    AcquireSpinLock::Release((AcquireSpinLock *)v13);
    return v10;
  }
  else
  {
    WdLogSingleEntry2(1LL, a3.Value, -1073741811LL);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid Flags value of 0x%I64x, only AllowFenceRewind is valid for signaling from CPU, returning 0x%I64x.\n",
      Value,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
