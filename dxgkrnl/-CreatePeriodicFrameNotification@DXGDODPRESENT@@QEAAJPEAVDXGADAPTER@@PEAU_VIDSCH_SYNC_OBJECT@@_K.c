__int64 __fastcall DXGDODPRESENT::CreatePeriodicFrameNotification(
        DXGDODPRESENT *this,
        struct DXGADAPTER *a2,
        struct _VIDSCH_SYNC_OBJECT *a3,
        __int64 a4,
        unsigned int a5,
        struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO2 *a6,
        unsigned __int64 *a7)
{
  unsigned int v8; // [rsp+20h] [rbp-38h]

  if ( (*((_DWORD *)a2 + 109) & 0x100) == 0 )
    return BLTQUEUE::CreatePeriodicFrameNotification(
             (struct _KTHREAD **)(*((_QWORD *)this + 1) + 2920LL * a5),
             a2,
             a3,
             (__int64)this,
             v8,
             a6,
             a7);
  WdLogSingleEntry1(1LL, 4018LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262146,
    -1,
    (__int64)L"Dod CreatePeriodicFrameNotification() has only been tested on indirect display",
    4018LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225659LL;
}
