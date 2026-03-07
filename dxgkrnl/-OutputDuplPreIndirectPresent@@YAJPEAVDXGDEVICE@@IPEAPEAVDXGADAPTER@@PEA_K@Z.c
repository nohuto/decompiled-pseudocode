__int64 __fastcall OutputDuplPreIndirectPresent(
        struct DXGDEVICE *a1,
        unsigned int a2,
        struct DXGADAPTER **a3,
        unsigned __int64 *a4)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  __int64 v7; // rbx
  int v10; // eax
  struct DXGDEVICE *VidPnSourceOwner; // rcx
  unsigned int v13; // [rsp+30h] [rbp-108h] BYREF
  __int128 v14; // [rsp+38h] [rbp-100h] BYREF
  __int64 v15; // [rsp+48h] [rbp-F0h]
  _BYTE v16[8]; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v17[64]; // [rsp+58h] [rbp-E0h] BYREF
  _BYTE v18[88]; // [rsp+98h] [rbp-A0h] BYREF

  v4 = 0;
  v5 = a2;
  *a3 = 0LL;
  v7 = *((_QWORD *)a1 + 235);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v16, (__int64)a1, 2, (__int64)a4, 0);
  v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v16, 0LL);
  if ( v10 < 0 )
    goto LABEL_10;
  if ( (*(_DWORD *)(v7 + 436) & 0x40000) == 0
    || (v13 = 0, (int)DmmGetMostImportantClientVidPnPathTargetsFromSource((_QWORD *)v7, v5, &v13) < 0)
    || (v15 = 0LL,
        v14 = 0LL,
        (int)DXGADAPTER::GetVirtualMonitorInfo((DXGADAPTER *)v7, v13, (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)&v14) < 0)
    || DWORD1(v14) != 1 )
  {
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v7 + 2920), v5);
    if ( !VidPnSourceOwner || *((_QWORD *)VidPnSourceOwner + 5) != *((_QWORD *)a1 + 5) )
    {
      WdLogSingleEntry2(3LL, a1, v5);
      v10 = -1071775744;
LABEL_10:
      v4 = v10;
      goto LABEL_11;
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v7 + 24));
  *a4 = -1LL;
  *a3 = (struct DXGADAPTER *)v7;
LABEL_11:
  COREACCESS::~COREACCESS((COREACCESS *)v18);
  COREACCESS::~COREACCESS((COREACCESS *)v17);
  return v4;
}
