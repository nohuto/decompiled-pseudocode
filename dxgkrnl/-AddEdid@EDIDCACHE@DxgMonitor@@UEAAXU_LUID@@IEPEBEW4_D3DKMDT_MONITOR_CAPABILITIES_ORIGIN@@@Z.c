/*
 * XREFs of ?AddEdid@EDIDCACHE@DxgMonitor@@UEAAXU_LUID@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0217AC0
 * Callers:
 *     ?GetEdidForTarget@EDIDCACHE@DxgMonitor@@UEAAJU_LUID@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C03C0DA0 (-GetEdidForTarget@EDIDCACHE@DxgMonitor@@UEAAJU_LUID@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_OR.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0011090 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memcmp @ 0x1C00270F0 (memcmp.c)
 *     ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@DxgMonitor@@UEAAXJJE@Z @ 0x1C021A4A0 (-SetPhysicalDimensionOfInternalPanel@EDIDCACHE@DxgMonitor@@UEAAXJJE@Z.c)
 *     ?WriteEdidToRegistry@EDIDCACHE@DxgMonitor@@CAXIPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C03C13A0 (-WriteEdidToRegistry@EDIDCACHE@DxgMonitor@@CAXIPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 */

void __fastcall DxgMonitor::EDIDCACHE::AddEdid(
        DxgMonitor::EDIDCACHE *this,
        struct _LUID a2,
        unsigned int a3,
        char a4,
        unsigned __int8 *Buf2,
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN a6)
{
  unsigned __int8 *v10; // r14
  LONG HighPart; // r15d
  _DWORD *v12; // rbp
  unsigned int v13; // esi
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v14; // ebp
  unsigned int v15; // esi
  _QWORD *v16; // r8
  unsigned int v17; // edx
  __int64 v18; // rcx
  unsigned int v19; // eax
  _BYTE v20[72]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+A0h] [rbp+8h] BYREF
  struct _LUID v22; // [rsp+A8h] [rbp+10h]

  v22 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (DxgMonitor::EDIDCACHE *)((char *)this + 616), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  v10 = Buf2;
  if ( Buf2 )
  {
    HighPart = v22.HighPart;
    v12 = (_DWORD *)((char *)this + 20);
    v13 = 0;
    while ( *(v12 - 1) != a2.LowPart
         || *v12 != HighPart
         || v12[1] != a3
         || memcmp((char *)this + 152 * v13 + 32, v10, 0x80uLL) )
    {
      ++v13;
      v12 += 38;
      if ( v13 >= 4 )
        goto LABEL_5;
    }
    *((_QWORD *)this + 19 * (int)v13 + 1) = MEMORY[0xFFFFF78000000014];
  }
  else
  {
LABEL_5:
    v14 = a6;
    if ( a4 )
    {
      if ( a6 == D3DKMDT_MCO_MONITORDESCRIPTOR )
      {
        DxgMonitor::EDIDCACHE::WriteEdidToRegistry(a3, v10, D3DKMDT_MCO_MONITORDESCRIPTOR);
        v21 = 0;
        LODWORD(Buf2) = 0;
        if ( (int)EDID_V1_GetPhysicalSize(0x80u, v10, &v21, (unsigned int *)&Buf2) >= 0 )
          DxgMonitor::EDIDCACHE::SetPhysicalDimensionOfInternalPanel(this, v21, (int)Buf2, 0);
      }
    }
    v15 = 0;
    v16 = (_QWORD *)((char *)this + 8);
    v17 = 0;
    while ( *v16 )
    {
      v19 = v17;
      if ( *v16 >= *((_QWORD *)this + 19 * v15 + 1) )
        v19 = v15;
      ++v17;
      v16 += 19;
      v15 = v19;
      if ( v17 >= 4 )
        goto LABEL_9;
    }
    v15 = v17;
LABEL_9:
    v18 = 152LL * v15;
    *(struct _LUID *)((char *)this + v18 + 16) = a2;
    *(_DWORD *)((char *)this + v18 + 24) = a3;
    *(_DWORD *)((char *)this + v18 + 28) = v14;
    *(_QWORD *)((char *)this + v18 + 8) = MEMORY[0xFFFFF78000000014];
    *(_OWORD *)((char *)this + v18 + 32) = *(_OWORD *)v10;
    *(_OWORD *)((char *)this + v18 + 48) = *((_OWORD *)v10 + 1);
    *(_OWORD *)((char *)this + v18 + 64) = *((_OWORD *)v10 + 2);
    *(_OWORD *)((char *)this + v18 + 80) = *((_OWORD *)v10 + 3);
    *(_OWORD *)((char *)this + v18 + 96) = *((_OWORD *)v10 + 4);
    *(_OWORD *)((char *)this + v18 + 112) = *((_OWORD *)v10 + 5);
    *(_OWORD *)((char *)this + v18 + 128) = *((_OWORD *)v10 + 6);
    *(_OWORD *)((char *)this + v18 + 144) = *((_OWORD *)v10 + 7);
  }
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
}
