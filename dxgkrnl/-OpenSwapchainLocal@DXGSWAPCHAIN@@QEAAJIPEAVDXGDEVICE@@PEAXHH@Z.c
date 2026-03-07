__int64 __fastcall DXGSWAPCHAIN::OpenSwapchainLocal(
        DXGSWAPCHAIN *this,
        int a2,
        struct DXGDEVICE *a3,
        __int64 a4,
        int a5,
        int a6)
{
  unsigned int v6; // edi
  __int64 v11; // rcx
  __int64 CurrentProcess; // rax
  __int64 v14; // rcx
  char *v15; // rbx
  __int64 v16; // rax
  const wchar_t *v17; // r13
  NTSTATUS v18; // eax
  struct _KEVENT *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v23[24]; // [rsp+58h] [rbp-40h] BYREF

  v6 = 0;
  if ( !DXGPROCESS::GetCurrent((__int64)this) )
  {
    CurrentProcess = PsGetCurrentProcess(v11);
    WdLogSingleEntry1(3LL, CurrentProcess);
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  if ( *((_DWORD *)this + 12) )
  {
    WdLogSingleEntry1(3LL, this);
    v6 = -1073741738;
  }
  else
  {
    v15 = (char *)this + (a6 != 0 ? 144LL : 96LL);
    if ( *((_QWORD *)v15 + 2) )
    {
      WdLogSingleEntry2(3LL, this, a6);
      v6 = -1073740008;
    }
    else
    {
      *((_QWORD *)v15 + 2) = PsGetCurrentProcess(v14);
      *(_DWORD *)v15 = a2;
      if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 404LL) == *((_QWORD *)this + 25) )
      {
        *((_DWORD *)v15 + 6) = a5;
        if ( a4 )
        {
          if ( a5 )
          {
            a4 = 2059LL;
            WdLogSingleEntry1(2LL, 2059LL);
            v16 = 0LL;
            v17 = L"We not code currently to set event once busy surface is not busy";
            v6 = -1073741822;
          }
          else
          {
            Object = 0LL;
            v18 = ObReferenceObjectByHandle((HANDLE)a4, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
            v19 = (struct _KEVENT *)Object;
            v6 = v18;
            *((_QWORD *)v15 + 4) = Object;
            if ( v18 >= 0 )
            {
              if ( !a6 )
                KeSetEvent(v19, 2, 0);
              goto LABEL_17;
            }
            v20 = PsGetCurrentProcess(v19);
            WdLogSingleEntry2(2LL, a4, v20);
            v17 = L"Failed to open CPU signal event 0x%I64x process 0x%I64x";
            v16 = PsGetCurrentProcess(v21);
          }
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v17, a4, v16, 0LL, 0LL, 0LL);
          DXGSWAPCHAIN::DestroySwapchainLocalClient(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v15);
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, this);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"SwapChain (0x%I64x) - Attempt to open with a device that is not from the swap-chain's adapter.",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
        v6 = -1073741811;
      }
    }
  }
LABEL_17:
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  return v6;
}
