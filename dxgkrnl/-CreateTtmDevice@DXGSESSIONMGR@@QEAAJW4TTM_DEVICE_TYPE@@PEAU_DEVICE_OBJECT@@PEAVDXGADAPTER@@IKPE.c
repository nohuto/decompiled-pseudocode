__int64 __fastcall DXGSESSIONMGR::CreateTtmDevice(
        __int64 a1,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        struct DXGADAPTER *a4,
        unsigned int a5,
        unsigned int a6,
        wchar_t *Src,
        CTTMDEVICE **a8)
{
  __int64 v11; // rax
  CTTMDEVICE *v12; // rax
  CTTMDEVICE *v13; // rbx
  int v14; // eax
  __int64 v15; // rbp
  int v16; // eax
  const wchar_t *v18; // r9

  if ( a8 && (a3 || a4) && ((a5 + 3) & 0xFFFFFFFD) != 0 )
  {
    v11 = operator new[](0x398uLL, 0x4B677844u, 256LL);
    if ( v11 && (v12 = (CTTMDEVICE *)CTTMDEVICE::CTTMDEVICE(v11, 1299018836LL), (v13 = v12) != 0LL) )
    {
      v14 = CTTMDEVICE::Initialize(v12, a3, a4, a5, a6, Src);
      v15 = v14;
      if ( v14 < 0 )
      {
        WdLogSingleEntry3(2LL, a5, a4, v14);
        v18 = L"Failed to initialize TTM device for target 0x%I64x on adapter 0x%I64x, (Status = 0x%I64x).";
      }
      else
      {
        v16 = CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(
                (CSERIALIZEDWORKQUEUE ***)(a1 + 376),
                (void (*)(void *))DXGSESSIONMGR::CreateTtmDeviceWorker,
                v13);
        v15 = v16;
        if ( v16 >= 0 )
        {
          *a8 = v13;
          return 0LL;
        }
        WdLogSingleEntry3(2LL, a5, a4, v16);
        v18 = L"Failed to queue a Serialized work item to create TTM device for target 0x%I64x on adapter 0x%I64x, (Status = 0x%I64x).";
      }
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v18, a5, (__int64)a4, v15, 0LL, 0LL);
      return (unsigned int)v15;
    }
    else
    {
      WdLogSingleEntry2(6LL, a5, a4);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate new TTM device for target 0x%I64x on adapter 0x%I64x.",
        a5,
        (__int64)a4,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified invalid paramters, returing 0x%I64x.",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
