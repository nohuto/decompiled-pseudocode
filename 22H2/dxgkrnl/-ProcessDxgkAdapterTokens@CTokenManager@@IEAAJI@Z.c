/*
 * XREFs of ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0018430
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0018240 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C00190E8 (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028340 (memmove.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0043074 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x1C007723C (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C007755C (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 *     ?CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C00777E4 (-CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z.c)
 *     ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x1C0078814 (-Grow@CLegacyTokenBuffer@@IEAAJXZ.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C01EB820 (DxgkGetPresentHistoryInternal.c)
 */

__int64 __fastcall CTokenManager::ProcessDxgkAdapterTokens(CTokenManager *this, unsigned int a2)
{
  char v2; // r14
  unsigned int v3; // esi
  char *v4; // rax
  unsigned int v5; // edi
  int v7; // r12d
  int v8; // r13d
  bool v9; // zf
  _QWORD *v10; // rcx
  CTokenManager *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rbx
  char *v15; // rbp
  int PresentHistoryInternal; // eax
  __int64 v17; // rdx
  unsigned int *v18; // rbx
  int v19; // r14d
  unsigned int v20; // edi
  unsigned int v21; // esi
  unsigned int v22; // eax
  void *v23; // r14
  NTSTATUS v24; // eax
  _QWORD *v25; // rdi
  int v26; // ebp
  char *v27; // rcx
  CTokenManager **v28; // rdx
  CTokenManager *v29; // rcx
  __int64 v30; // rsi
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  __int64 v34; // rcx
  void *v35; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v37; // rax
  struct DXGGLOBAL *v38; // rax
  unsigned __int64 v39; // rdx
  unsigned int v40; // eax
  struct FlipManagerTokenObject *v41; // rdx
  __int64 v42; // rax
  bool v44; // [rsp+60h] [rbp-898h] BYREF
  char v45; // [rsp+61h] [rbp-897h]
  unsigned int i; // [rsp+64h] [rbp-894h]
  LONG PreviousState; // [rsp+68h] [rbp-890h] BYREF
  int v48; // [rsp+6Ch] [rbp-88Ch]
  unsigned int v49; // [rsp+70h] [rbp-888h]
  int v50; // [rsp+74h] [rbp-884h]
  char *v51; // [rsp+78h] [rbp-880h]
  PVOID Object; // [rsp+80h] [rbp-878h] BYREF
  _DWORD v53[2]; // [rsp+88h] [rbp-870h] BYREF
  __int64 v54; // [rsp+90h] [rbp-868h]
  _BYTE *v55; // [rsp+98h] [rbp-860h]
  __int64 v56; // [rsp+A0h] [rbp-858h]
  _BYTE Src[2048]; // [rsp+B0h] [rbp-848h] BYREF

  v2 = 1;
  v49 = a2;
  v3 = 640;
  v45 = 1;
  v50 = 640;
  v4 = (char *)this + 96;
  v5 = a2;
  v7 = 0;
  while ( 1 )
  {
    ExAcquirePushLockExclusiveEx(v4, 0LL);
    v8 = 0;
    v9 = *((_QWORD *)this + 24) == 0LL;
    *((_QWORD *)this + 13) = KeGetCurrentThread();
    if ( v9 )
    {
      v10 = (_QWORD *)((char *)this + 168);
      v11 = (CTokenManager *)*((_QWORD *)this + 21);
      if ( v11 != (CTokenManager *)((char *)this + 168) )
      {
        if ( *((_QWORD **)v11 + 1) != v10 || (v17 = *(_QWORD *)v11, *(CTokenManager **)(*(_QWORD *)v11 + 8LL) != v11) )
          __fastfail(3u);
        *v10 = v17;
        *(_QWORD *)(v17 + 8) = v10;
        --*((_DWORD *)this + 46);
        *((_QWORD *)this + 24) = v11;
        goto LABEL_7;
      }
      *((_QWORD *)this + 24) = 0LL;
      v12 = operator new[](0x840uLL, 0x746C4D54u, 256LL);
      v13 = v12;
      if ( v12 )
      {
        *(_BYTE *)(v12 + 2108) = 0;
        *(_DWORD *)(v12 + 32) = 0;
        *(_DWORD *)(v12 + 2084) = 0;
        *(_QWORD *)(v12 + 24) = v12 + 16;
        *(_QWORD *)(v12 + 16) = v12 + 16;
        *(_QWORD *)(v12 + 2088) = v12 + 16;
        CLegacyTokenBuffer::Reset((CLegacyTokenBuffer *)v12);
        *((_QWORD *)this + 24) = v13;
      }
      else
      {
        v8 = -1073741801;
      }
    }
    if ( v8 < 0 )
      goto LABEL_66;
LABEL_7:
    v14 = *((_QWORD *)this + 24);
    v8 = 0;
    if ( v3 > *(_DWORD *)(v14 + 2104) )
      v8 = CLegacyTokenBuffer::Grow(*((CLegacyTokenBuffer **)this + 24));
    v15 = *(char **)(v14 + 2096);
    v51 = v15;
    if ( v8 >= 0 )
    {
      v53[1] = *(_DWORD *)(v14 + 2104);
      v54 = 0LL;
      v55 = Src;
      v56 = 0LL;
      v53[0] = v5;
      PresentHistoryInternal = DxgkGetPresentHistoryInternal(v53, 0LL);
      v8 = PresentHistoryInternal;
      if ( PresentHistoryInternal )
      {
        if ( PresentHistoryInternal == -1073741789 )
        {
          v3 = 640;
          *((_QWORD *)this + 13) = 0LL;
          v8 = 0;
          if ( (unsigned int)v54 > 0x280 )
            v3 = v54;
          v50 = v3;
          ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
          goto LABEL_67;
        }
        if ( PresentHistoryInternal != 261 )
        {
          v2 = 0;
          v45 = 0;
          goto LABEL_66;
        }
      }
      else
      {
        v45 = 0;
      }
      v48 = 0;
      v18 = (unsigned int *)Src;
      v19 = 0;
      v20 = 0;
      PreviousState = 0;
      v21 = 0;
      for ( i = 0; v21 < (unsigned int)v56; i = v21 )
      {
        v22 = *v18;
        if ( *v18 == 7 )
        {
          v23 = (void *)*((_QWORD *)v18 + 2);
          if ( v23 )
          {
            Object = 0LL;
            v24 = ObReferenceObjectByHandle(v23, 2u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
            v25 = Object;
            if ( v24 >= 0 )
            {
              if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == 2 )
              {
                KeEnterCriticalRegion();
                ExAcquirePushLockSharedEx(v25 + 9, 0LL);
                v26 = 0;
                if ( *((_DWORD *)v25 + 16) == 1 )
                  (*(void (__fastcall **)(_QWORD *))(v25[5] + 24LL))(v25 + 5);
                else
                  v26 = -1073741823;
                v27 = (char *)(v25 + 9);
                if ( KeGetCurrentThread() == (struct _KTHREAD *)v25[10] )
                {
                  v25[10] = 0LL;
                  ExReleasePushLockExclusiveEx(v27, 0LL);
                }
                else
                {
                  ExReleasePushLockSharedEx(v27, 0LL);
                }
                KeLeaveCriticalRegion();
                if ( v26 < 0 )
                {
                  ObfDereferenceObject(v25);
                }
                else
                {
                  v28 = (CTokenManager **)*((_QWORD *)this + 35);
                  v29 = (CTokenManager *)(v25 + 6);
                  if ( *v28 != (CTokenManager *)((char *)this + 272) )
                    __fastfail(3u);
                  *(_QWORD *)v29 = (char *)this + 272;
                  v25[7] = v28;
                  *v28 = v29;
                  *((_QWORD *)this + 35) = v29;
                  v30 = v25[13];
                  v25[13] = 0LL;
                  if ( v30 )
                  {
                    if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
                    {
                      WdLogSingleEntry1(1LL, 2407LL);
                      if ( bTracingEnabled )
                      {
                        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
                          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                            v32,
                            v31,
                            v33,
                            0,
                            2,
                            -1,
                            (__int64)L"m_pGlobal != NULL",
                            2407LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                      }
                    }
                    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304552LL)
                                                             + 48LL))(
                      v30,
                      1LL);
                  }
                }
                v21 = i;
                v15 = v51;
              }
              else
              {
                ObfDereferenceObject(v25);
              }
            }
            NtClose(v23);
            v20 = PreviousState;
          }
          v19 = v48;
        }
        else
        {
          switch ( v22 )
          {
            case 8u:
              Global = DXGGLOBAL::GetGlobal();
              (*(void (**)(void))(*((_QWORD *)Global + 38069) + 408LL))();
              v37 = DXGGLOBAL::GetGlobal();
              (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v37 + 38069) + 24LL))(*((_QWORD *)v18 + 2));
              v38 = DXGGLOBAL::GetGlobal();
              (*(void (**)(void))(*((_QWORD *)v38 + 38069) + 448LL))();
              break;
            case 2u:
              if ( (v18[15] & 0x2000) != 0 && (v18[15] & 0xC000) == 0x4000 )
              {
                CTokenManager::CompleteIndependentFlipToken(
                  this,
                  *((_QWORD *)v18 + 1),
                  (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)(v18 + 4),
                  v49);
                ++v7;
              }
              else
              {
                v39 = *((_QWORD *)v18 + 1);
                v44 = 0;
                CTokenManager::CreateFlipExToken(
                  this,
                  v39,
                  (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)(v18 + 4),
                  &v44);
                if ( v44 )
                  ++v7;
              }
              break;
            case 9u:
              v40 = v18[8];
              v44 = 1;
              if ( (v40 & 4) == 0
                || (v41 = (struct FlipManagerTokenObject *)*((_QWORD *)v18 + 2)) == 0LL
                || (CTokenManager::CompleteFlipManagerToken(this, v41, &v44), v44) )
              {
                ++v7;
              }
              break;
            default:
              memmove(v15, v18, v18[1]);
              v42 = v18[1];
              ++v19;
              v20 += v42;
              v48 = v19;
              v15 += v42;
              PreviousState = v20;
              v51 = v15;
              break;
          }
        }
        ++v21;
        v18 = (unsigned int *)((char *)v18 + v18[1]);
      }
      v34 = *((_QWORD *)this + 24);
      *(_DWORD *)(*(_QWORD *)(v34 + 2088) + 16LL) += v19;
      *(_DWORD *)(*(_QWORD *)(v34 + 2088) + 2068LL) += v20;
      *(_DWORD *)(v34 + 2104) -= v20;
      *(_QWORD *)(v34 + 2096) += v20;
      if ( (_DWORD)v56 == v7 )
      {
        v7 = 0;
      }
      else
      {
        v35 = (void *)*((_QWORD *)this + 8);
        v7 = 0;
        PreviousState = 0;
        ZwSetEvent(v35, &PreviousState);
      }
      v2 = v45;
      v3 = v50;
      v5 = v49;
    }
LABEL_66:
    *((_QWORD *)this + 13) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
    if ( v8 < 0 )
      return (unsigned int)v8;
LABEL_67:
    if ( !v2 )
      return (unsigned int)v8;
    v4 = (char *)this + 96;
  }
}
