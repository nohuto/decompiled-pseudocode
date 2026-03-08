/*
 * XREFs of ?AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02F1860
 * Callers:
 *     ?CollectDisplayAdaptersCallback@DISPLAYSTATECHECKER@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02F2A50 (-CollectDisplayAdaptersCallback@DISPLAYSTATECHECKER@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C0049800 (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02F28F8 (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::AddDisplayAdapter(DISPLAYSTATECHECKER *this, struct DXGADAPTER *a2)
{
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax
  int v5; // r8d
  __int128 v6; // xmm0
  int v7; // ecx
  _BYTE v9[144]; // [rsp+20h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v9, a2, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v9, 0LL) >= 0 )
  {
    DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, *((_DWORD *)this + 3522));
    if ( DisplayAdapterDiagData )
    {
      v5 = *(_DWORD *)this;
      v6 = *(_OWORD *)((char *)this + 20);
      v7 = *(_DWORD *)this;
      *(_QWORD *)DisplayAdapterDiagData = a2;
      *((_BYTE *)DisplayAdapterDiagData + 21) = BYTE1(v7) & 1;
      *((_DWORD *)DisplayAdapterDiagData + 6) = (unsigned __int8)v5;
      *(_OWORD *)((char *)DisplayAdapterDiagData + 28) = v6;
      DISPLAYDIAGNOSTICADAPTERDATA::CollectDisplayAdapterDiagData(DisplayAdapterDiagData, a2);
      ++*((_DWORD *)this + 3522);
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v9);
  return 0LL;
}
