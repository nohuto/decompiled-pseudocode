__int64 __fastcall DXGSWAPCHAIN::OpenSurfaceResourcesLocalForSequentialOpener(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_OPENSWAPCHAIN *a2)
{
  int v4; // esi
  UINT v5; // edi
  __int64 v6; // r14
  __int64 v7; // rcx
  BOOL bProducer; // eax
  unsigned int v9; // ebp
  __int64 v10; // rdi
  _BYTE v12[16]; // [rsp+50h] [rbp-28h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  if ( a2->SurfaceCount != *((_DWORD *)this + 15) )
  {
    WdLogSingleEntry1(1LL, 2299LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pKmOpen->SurfaceCount == m_ActiveSurfaceCo",
      2299LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)this + 15) )
  {
    while ( v5 < a2->SurfaceCount )
    {
      v6 = 112LL * v5;
      if ( !*(_DWORD *)(*((_QWORD *)this + 8) + v6 + 8) )
      {
        WdLogSingleEntry1(1LL, 2307LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pSurfaceTable[Idx].SlotStatus != SLOT_AVAILABLE",
          2307LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v4 = DXGSWAPCHAIN::OpenSurfacesResourcesLocalForOpener(
             this,
             (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)(v6 + *((_QWORD *)this + 8)),
             a2->bProducer,
             &a2->pNtSurfaceHandles[v5]);
      if ( v4 < 0 )
      {
        bProducer = a2->bProducer;
        v9 = 0;
        if ( *((_DWORD *)this + 14) )
        {
          v10 = bProducer ? 0x30 : 0;
          do
            DXGSWAPCHAIN::DestroySurfacesResourcesLocal(
              v7,
              *(_DWORD *)((char *)this + v10 + 124),
              *((_QWORD *)this + 8) + 112LL * v9++);
          while ( v9 < *((_DWORD *)this + 14) );
        }
        break;
      }
      if ( ++v5 >= *((_DWORD *)this + 15) )
        break;
    }
  }
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  return (unsigned int)v4;
}
