/*
 * XREFs of ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0017DB0
 * Callers:
 *     ?TokenThread@CTokenManager@@UEAAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0017C30 (-TokenThread@CTokenManager@@UEAAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0017FA0 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C00187A4 (-InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?SetTokenThreadProcess@CTokenManager@@IEAAXXZ @ 0x1C0018840 (-SetTokenThreadProcess@CTokenManager@@IEAAXXZ.c)
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C001B9FC (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

__int64 __fastcall CTokenManager::ProcessTokens(
        CTokenManager *this,
        HANDLE Handle,
        void *a3,
        struct CSM_TOKEN_ADAPTER_INFO *a4,
        unsigned int a5)
{
  ULONG v9; // r12d
  __int64 v10; // rsi
  NTSTATUS inited; // ebx
  __int64 v12; // rbx
  int v13; // r14d
  NTSTATUS v14; // eax
  int v15; // eax
  unsigned int v16; // ebp
  CTokenManager *v17; // rdx
  unsigned __int64 v19; // rax
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp-88h] BYREF
  HANDLE Object[2]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v22; // [rsp+48h] [rbp-70h]
  __int128 v23; // [rsp+58h] [rbp-60h]
  __int64 v24; // [rsp+68h] [rbp-50h]

  v24 = 0LL;
  v9 = a5 + 2;
  *(_OWORD *)Object = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( a5 > 5 )
  {
    v19 = 8LL * v9;
    if ( !is_mul_ok(v9, 8uLL) )
      v19 = -1LL;
    v10 = operator new[](v19, 0x62634D54u, 256LL);
    if ( !v10 )
      return 3221225495LL;
  }
  else
  {
    v10 = (__int64)Object;
  }
  *(_QWORD *)v10 = Handle;
  *(_QWORD *)(v10 + 8) = a3;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 4, (signed __int64)KeGetCurrentThread(), 0LL) )
  {
    inited = -2147483631;
  }
  else
  {
    CTokenManager::SetTokenThreadProcess(this);
    inited = CTokenManager::InitAdapterCollection(this, a4, (void **)(v10 + 16), a5);
    if ( inited >= 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v14 = ZwWaitForMultipleObjects(v9, (HANDLE *)v10, WaitAny, 1u, 0LL);
          inited = v14;
          if ( v14 >= 0 )
            break;
          if ( v14 == -1073741801 || v14 == -1073741789 )
          {
            Timeout.QuadPart = -160000LL;
            inited = ZwWaitForSingleObject(Handle, 0, &Timeout);
            if ( inited == 258 )
              continue;
          }
          goto LABEL_25;
        }
        if ( !v14 || v14 == 257 || v14 == 192 )
          break;
        if ( v14 == 1 )
        {
          CTokenManager::ProcessGdiSysmemTokens(this);
        }
        else
        {
          v15 = *((_DWORD *)this + 22);
          if ( v15 && inited <= (unsigned int)(v15 + 1) )
          {
            v16 = inited - 2;
            v12 = 0LL;
            v13 = -1073741275;
            ExAcquirePushLockSharedEx((char *)this + 152, 0LL);
            *((_BYTE *)this + 160) = 0;
            if ( v16 < *((_DWORD *)this + 29) )
            {
              v17 = (CTokenManager *)*((_QWORD *)this + 17);
              while ( v17 != (CTokenManager *)((char *)this + 136) )
              {
                v12 = ((unsigned __int64)v17 - 8) & -(__int64)(v17 != 0LL);
                if ( !v16 )
                {
                  v13 = 0;
                  break;
                }
                v17 = *(CTokenManager **)v17;
                --v16;
              }
            }
            ExReleasePushLockSharedEx((char *)this + 152, 0LL);
            if ( v13 >= 0 )
              CTokenManager::ProcessDxgkAdapterTokens(this, *(_DWORD *)(v12 + 40));
          }
        }
      }
      inited = 0;
    }
LABEL_25:
    *((_QWORD *)this + 4) = 0LL;
  }
  if ( (HANDLE *)v10 != Object )
    ExFreePoolWithTag((PVOID)v10, 0);
  return (unsigned int)inited;
}
