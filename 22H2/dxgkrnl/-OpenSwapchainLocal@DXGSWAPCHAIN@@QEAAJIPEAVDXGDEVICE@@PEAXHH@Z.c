/*
 * XREFs of ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C02AC1E8
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C02ADFB0 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1C02AEA40 (DxgkOpenSwapChain.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C02AB07C (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSwapchainLocal(
        DXGSWAPCHAIN *this,
        __int64 a2,
        struct DXGDEVICE *a3,
        void *a4,
        int a5,
        int a6)
{
  int v8; // r12d
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  char *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  NTSTATUS v32; // eax
  struct _KEVENT *v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v41[24]; // [rsp+38h] [rbp-30h] BYREF

  v8 = a2;
  v10 = 0;
  if ( !DXGPROCESS::GetCurrent((__int64)this, a2, (__int64)a3, (__int64)a4) )
  {
    v14 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v14 + 24) = PsGetCurrentProcess(v16, v15, v17, v18);
    WdLogEvent5_WdWarning(v14);
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v41, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v41);
  if ( *((_DWORD *)this + 10) )
  {
    v24 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v24 + 24) = this;
    WdLogEvent5_WdWarning(v24);
    v10 = -1073741738;
  }
  else
  {
    v26 = (char *)this + (a6 != 0 ? 136LL : 88LL);
    if ( *((_QWORD *)v26 + 2) )
    {
      v27 = WdLogNewEntry5_WdWarning(v21, v20, v22);
      *(_QWORD *)(v27 + 24) = this;
      *(_QWORD *)(v27 + 32) = a6;
      WdLogEvent5_WdWarning(v27);
      v10 = -1073740008;
    }
    else
    {
      *((_QWORD *)v26 + 2) = PsGetCurrentProcess(v21, v20, v22, v23);
      *(_DWORD *)v26 = v8;
      if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 316LL) == *((_QWORD *)this + 24) )
      {
        *((_DWORD *)v26 + 6) = a5;
        if ( a4 )
        {
          if ( a5 )
          {
            v29 = WdLogNewEntry5_WdError(v28, v25);
            *(_QWORD *)(v29 + 24) = 1993LL;
            WdLogEvent5_WdError(v29);
            v10 = -1073741822;
          }
          else
          {
            Object = 0LL;
            v32 = ObReferenceObjectByHandle(a4, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
            v33 = (struct _KEVENT *)Object;
            v10 = v32;
            *((_QWORD *)v26 + 4) = Object;
            if ( v32 >= 0 )
            {
              if ( !a6 )
                KeSetEvent(v33, 2, 0);
            }
            else
            {
              v34 = WdLogNewEntry5_WdError(v33, v25);
              *(_QWORD *)(v34 + 24) = a4;
              *(_QWORD *)(v34 + 32) = PsGetCurrentProcess(v36, v35, v37, v38);
              WdLogEvent5_WdError(v34);
            }
            if ( v10 >= 0 )
              goto LABEL_18;
          }
          DXGSWAPCHAIN::DestroySwapchainLocalClient(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v26, v30, v31);
        }
      }
      else
      {
        v39 = WdLogNewEntry5_WdError(v28, v25);
        *(_QWORD *)(v39 + 24) = this;
        WdLogEvent5_WdError(v39);
        v10 = -1073741811;
      }
    }
  }
LABEL_18:
  if ( v41[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v41, v25);
  return (unsigned int)v10;
}
