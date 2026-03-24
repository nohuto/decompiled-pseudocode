/*
 * XREFs of ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0003A70
 * Callers:
 *     ?TokenThread@CTokenManager@@UEAAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0019E20 (-TokenThread@CTokenManager@@UEAAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0003CB0 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C00128B4 (-InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?SetTokenThreadProcess@CTokenManager@@IEAAXXZ @ 0x1C001A840 (-SetTokenThreadProcess@CTokenManager@@IEAAXXZ.c)
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C001E364 (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 */

__int64 __fastcall CTokenManager::ProcessTokens(
        CTokenManager *this,
        HANDLE Handle,
        void *a3,
        struct CSM_TOKEN_ADAPTER_INFO *a4,
        unsigned int a5)
{
  HANDLE v7; // rsi
  HANDLE *v9; // r15
  ULONG v10; // r12d
  NTSTATUS inited; // ebx
  int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rbx
  int v15; // edi
  CTokenManager *v16; // rax
  unsigned __int64 v18; // rax
  union _LARGE_INTEGER Timeout; // [rsp+38h] [rbp-80h] BYREF
  HANDLE Object[2]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v22; // [rsp+50h] [rbp-68h]
  __int128 v23; // [rsp+60h] [rbp-58h]
  __int64 v24; // [rsp+70h] [rbp-48h]

  v24 = 0LL;
  v7 = Handle;
  *(_OWORD *)Object = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( a5 > 5 )
  {
    v18 = 8LL * (a5 + 2);
    if ( !is_mul_ok(a5 + 2, 8uLL) )
      v18 = -1LL;
    v9 = (HANDLE *)operator new(v18, 0x62634D54u, 1, PagedPool);
    if ( !v9 )
      return 3221225495LL;
  }
  else
  {
    v9 = Object;
  }
  *v9 = v7;
  v10 = 2;
  v9[1] = a3;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 3, (signed __int64)KeGetCurrentThread(), 0LL) )
  {
    inited = -2147483631;
  }
  else
  {
    CTokenManager::SetTokenThreadProcess(this);
    inited = CTokenManager::InitAdapterCollection(this, a4, v9 + 2, a5);
    if ( inited >= 0 )
    {
      while ( 1 )
      {
        v10 += a5;
        inited = ZwWaitForMultipleObjects(v10, v9, WaitAny, 1u, 0LL);
        if ( inited >= 0 )
          break;
LABEL_35:
        if ( inited == -1073741801 || inited == -1073741789 )
        {
          Timeout.QuadPart = -160000LL;
          inited = ZwWaitForSingleObject(v7, 0, &Timeout);
          if ( inited == 258 )
            continue;
        }
        goto LABEL_26;
      }
      while ( inited && inited != 257 && inited != 192 )
      {
        if ( inited == 1 )
        {
          CTokenManager::ProcessGdiSysmemTokens(this);
        }
        else
        {
          v12 = *((_DWORD *)this + 20);
          if ( v12 && inited <= (unsigned int)(v12 + 1) )
          {
            v13 = inited - 2;
            v14 = 0LL;
            v15 = -1073741275;
            ExAcquirePushLockSharedEx((char *)this + 144, 0LL);
            *((_BYTE *)this + 152) = 0;
            if ( v13 < *((_DWORD *)this + 27) )
            {
              v16 = (CTokenManager *)*((_QWORD *)this + 16);
              if ( v16 != (CTokenManager *)((char *)this + 128) )
              {
                while ( 1 )
                {
                  v14 = v16 ? (__int64)v16 - 8 : 0LL;
                  if ( !v13 )
                    break;
                  v16 = *(CTokenManager **)v16;
                  --v13;
                  if ( v16 == (CTokenManager *)((char *)this + 128) )
                    goto LABEL_18;
                }
                v15 = 0;
              }
            }
LABEL_18:
            ExReleasePushLockSharedEx((char *)this + 144, 0LL);
            if ( v15 >= 0 )
              CTokenManager::ProcessDxgkAdapterTokens(this, *(_DWORD *)(v14 + 32));
          }
        }
        inited = ZwWaitForMultipleObjects(v10, v9, WaitAny, 1u, 0LL);
        if ( inited < 0 )
        {
          v7 = Handle;
          goto LABEL_35;
        }
      }
      inited = 0;
    }
LABEL_26:
    *((_QWORD *)this + 3) = 0LL;
  }
  if ( v9 != Object )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)inited;
}
