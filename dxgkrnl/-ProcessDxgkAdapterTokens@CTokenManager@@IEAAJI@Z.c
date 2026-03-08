/*
 * XREFs of ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0017FA0
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0017DB0 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x1C0007808 (DxgkGetWin32kImportTable.c)
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C0018C10 (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_IsEnabledDeviceUsage @ 0x1C0026DD8 (Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x1C007659C (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00768BC (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 *     ?CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C0076B44 (-CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z.c)
 *     ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x1C0077B74 (-Grow@CLegacyTokenBuffer@@IEAAJXZ.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C01DE730 (DxgkGetPresentHistoryInternal.c)
 */

__int64 __fastcall CTokenManager::ProcessDxgkAdapterTokens(CTokenManager *this, unsigned int a2)
{
  char v2; // r14
  unsigned int v3; // ebp
  char *v4; // rax
  unsigned int v5; // esi
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
  _BYTE *v18; // rbx
  int v19; // edx
  unsigned int v20; // r14d
  unsigned int v21; // esi
  int v22; // eax
  void *v23; // r14
  NTSTATUS v24; // eax
  _QWORD *v25; // rdi
  int v26; // ebp
  char *v27; // rcx
  __int64 v28; // r8
  char *v29; // rcx
  CTokenManager **v30; // rdx
  CTokenManager *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 Win32kImportTable; // rax
  __int64 v35; // rcx
  void *v36; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v38; // rax
  struct DXGGLOBAL *v39; // rax
  unsigned __int64 v40; // rdx
  int v41; // eax
  struct FlipManagerTokenObject *v42; // rdx
  __int64 v43; // rax
  bool v45; // [rsp+30h] [rbp-898h] BYREF
  char v46; // [rsp+31h] [rbp-897h]
  int v47; // [rsp+34h] [rbp-894h]
  int v48; // [rsp+38h] [rbp-890h]
  LONG PreviousState; // [rsp+3Ch] [rbp-88Ch] BYREF
  unsigned int v50; // [rsp+40h] [rbp-888h]
  unsigned int v51; // [rsp+44h] [rbp-884h]
  CTokenManager *v52; // [rsp+48h] [rbp-880h]
  char *v53; // [rsp+50h] [rbp-878h]
  PVOID Object; // [rsp+58h] [rbp-870h] BYREF
  _DWORD v55[2]; // [rsp+60h] [rbp-868h] BYREF
  __int64 v56; // [rsp+68h] [rbp-860h]
  _BYTE *v57; // [rsp+70h] [rbp-858h]
  __int64 v58; // [rsp+78h] [rbp-850h]
  _BYTE Src[2048]; // [rsp+80h] [rbp-848h] BYREF

  v2 = 1;
  v51 = a2;
  v3 = 640;
  v46 = 1;
  v48 = 640;
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
        v52 = v11;
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
      goto LABEL_67;
LABEL_7:
    v14 = *((_QWORD *)this + 24);
    v8 = 0;
    if ( v3 > *(_DWORD *)(v14 + 2104) )
      v8 = CLegacyTokenBuffer::Grow(*((CLegacyTokenBuffer **)this + 24));
    v15 = *(char **)(v14 + 2096);
    v53 = v15;
    if ( v8 < 0 )
      goto LABEL_66;
    v55[1] = *(_DWORD *)(v14 + 2104);
    v56 = 0LL;
    v57 = Src;
    v58 = 0LL;
    v55[0] = v5;
    PresentHistoryInternal = DxgkGetPresentHistoryInternal(v55, 0LL);
    v8 = PresentHistoryInternal;
    if ( !PresentHistoryInternal )
      break;
    if ( PresentHistoryInternal != -1073741789 )
    {
      if ( PresentHistoryInternal == 261 )
        goto LABEL_23;
      v2 = 0;
      v46 = 0;
      goto LABEL_66;
    }
    v3 = 640;
    *((_QWORD *)this + 13) = 0LL;
    v8 = 0;
    if ( (unsigned int)v56 > 0x280 )
      v3 = v56;
    v48 = v3;
    ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
LABEL_68:
    if ( !v2 )
      return (unsigned int)v8;
    v4 = (char *)this + 96;
  }
  v46 = 0;
LABEL_23:
  PreviousState = 0;
  v18 = Src;
  v19 = 0;
  v20 = 0;
  v47 = 0;
  v21 = 0;
  v50 = 0;
  if ( (_DWORD)v58 )
  {
    while ( 2 )
    {
      v22 = *(_DWORD *)v18;
      if ( *(_DWORD *)v18 == 7 )
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
                v21 = v50;
                v15 = v53;
              }
              else
              {
                v29 = (char *)this + 272;
                v30 = (CTokenManager **)*((_QWORD *)this + 35);
                v31 = (CTokenManager *)(v25 + 6);
                if ( *v30 != (CTokenManager *)((char *)this + 272) )
                  __fastfail(3u);
                *(_QWORD *)v31 = v29;
                v25[7] = v30;
                *v30 = v31;
                *((_QWORD *)this + 35) = v31;
                if ( (unsigned int)Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_IsEnabledDeviceUsage(
                                     v29,
                                     v30,
                                     v28) )
                {
                  v33 = v25[13];
                  v25[13] = 0LL;
                  if ( v33 )
                  {
                    Win32kImportTable = DxgkGetWin32kImportTable();
                    (*(void (__fastcall **)(__int64, __int64))(Win32kImportTable + 48))(v33, 1LL);
                  }
                  v21 = v50;
                  v15 = v53;
                }
                else
                {
                  v32 = DxgkGetWin32kImportTable();
                  (*(void (__fastcall **)(_QWORD, __int64))(v32 + 48))(v25[13], 1LL);
                  v21 = v50;
                  v15 = v53;
                }
              }
            }
            else
            {
              ObfDereferenceObject(v25);
            }
          }
          NtClose(v23);
          v19 = v47;
        }
        v20 = PreviousState;
LABEL_45:
        ++v21;
        v18 += *((unsigned int *)v18 + 1);
        v50 = v21;
        if ( v21 >= (unsigned int)v58 )
          goto LABEL_46;
        continue;
      }
      break;
    }
    if ( v22 == 8 )
    {
      Global = DXGGLOBAL::GetGlobal();
      (*(void (**)(void))(*((_QWORD *)Global + 38069) + 408LL))();
      v38 = DXGGLOBAL::GetGlobal();
      (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v38 + 38069) + 24LL))(*((_QWORD *)v18 + 2));
      v39 = DXGGLOBAL::GetGlobal();
      (*(void (**)(void))(*((_QWORD *)v39 + 38069) + 448LL))();
      v19 = v47;
      goto LABEL_45;
    }
    if ( v22 == 2 )
    {
      if ( (*((_DWORD *)v18 + 15) & 0x2000) != 0 && (*((_DWORD *)v18 + 15) & 0xC000) == 0x4000 )
      {
        CTokenManager::CompleteIndependentFlipToken(
          this,
          *((_QWORD *)v18 + 1),
          (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)(v18 + 16),
          v51);
        v19 = v47;
        ++v7;
        goto LABEL_45;
      }
      v40 = *((_QWORD *)v18 + 1);
      v45 = 0;
      CTokenManager::CreateFlipExToken(
        this,
        v40,
        (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)(v18 + 16),
        &v45);
      if ( v45 )
      {
        v19 = v47;
        ++v7;
        goto LABEL_45;
      }
      goto LABEL_60;
    }
    if ( v22 != 9 )
    {
      memmove(v15, v18, *((unsigned int *)v18 + 1));
      v43 = *((unsigned int *)v18 + 1);
      v19 = v47 + 1;
      v20 += v43;
      ++v47;
      v15 += v43;
      PreviousState = v20;
      v53 = v15;
      goto LABEL_45;
    }
    v41 = *((_DWORD *)v18 + 8);
    v45 = 1;
    if ( (v41 & 4) != 0 )
    {
      v42 = (struct FlipManagerTokenObject *)*((_QWORD *)v18 + 2);
      if ( v42 )
      {
        CTokenManager::CompleteFlipManagerToken(this, v42, &v45);
        if ( !v45 )
        {
LABEL_60:
          v19 = v47;
          goto LABEL_45;
        }
      }
      v19 = v47;
    }
    ++v7;
    goto LABEL_45;
  }
LABEL_46:
  v35 = *((_QWORD *)this + 24);
  *(_DWORD *)(*(_QWORD *)(v35 + 2088) + 16LL) += v19;
  *(_DWORD *)(*(_QWORD *)(v35 + 2088) + 2068LL) += v20;
  *(_DWORD *)(v35 + 2104) -= v20;
  *(_QWORD *)(v35 + 2096) += v20;
  if ( (_DWORD)v58 == v7 )
  {
    v7 = 0;
  }
  else
  {
    v36 = (void *)*((_QWORD *)this + 8);
    v7 = 0;
    PreviousState = 0;
    ZwSetEvent(v36, &PreviousState);
  }
  v2 = v46;
  v5 = v51;
LABEL_66:
  v3 = v48;
LABEL_67:
  *((_QWORD *)this + 13) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
  if ( v8 >= 0 )
    goto LABEL_68;
  return (unsigned int)v8;
}
