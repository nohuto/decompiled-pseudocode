__int64 __fastcall BLTQUEUE::SetIndirectSwapChainHandles(BLTQUEUE *this, void *a2)
{
  struct _KMUTANT *v2; // rbx
  struct DXGSWAPCHAIN **v5; // rcx
  int v6; // ebp
  struct DXGFASTMUTEX *const *v7; // rax
  struct DXGFASTMUTEX *v8; // rdi
  int v9; // edi
  _BYTE v11[16]; // [rsp+50h] [rbp-18h] BYREF

  v2 = (struct _KMUTANT *)((char *)this + 2720);
  KeWaitForSingleObject((char *)this + 2720, Executive, 0, 0, 0LL);
  v5 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 339);
  if ( !v5 )
    goto LABEL_5;
  v6 = SwapChainAbandonInternal(*v5);
  if ( v6 < 0 )
  {
    WdLogSingleEntry2(2LL, this, **((_QWORD **)this + 339));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"BLTQUEUE 0x%I64 Failed to abandon the indirect swapchain at 0x%I64.",
      (__int64)this,
      **((_QWORD **)this + 339),
      0LL,
      0LL,
      0LL);
  }
  ObfDereferenceObject(*((PVOID *)this + 339));
  *((_QWORD *)this + 339) = 0LL;
  if ( v6 >= 0 )
  {
LABEL_5:
    v6 = 0;
    if ( a2 )
    {
      v7 = (struct DXGFASTMUTEX *const *)SwapChainOpenInternal(a2);
      *((_QWORD *)this + 339) = v7;
      if ( v7 )
      {
        v8 = *v7;
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, *v7, 0);
        v9 = *((_DWORD *)v8 + 49);
        if ( v11[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
        *((_DWORD *)this + 695) = v9;
        *((_DWORD *)this + 694) = 1;
      }
      else
      {
        v6 = -1073741823;
      }
    }
  }
  KeReleaseMutex(v2, 0);
  return (unsigned int)v6;
}
