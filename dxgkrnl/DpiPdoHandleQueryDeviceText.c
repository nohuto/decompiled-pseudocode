/*
 * XREFs of DpiPdoHandleQueryDeviceText @ 0x1C0214910
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C0009184 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@QEAA@XZ @ 0x1C00093B0 (--1-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?RtlUnicodeStringPrintfEx@@YAJPEAU_UNICODE_STRING@@0KPEBGZZ @ 0x1C0022714 (-RtlUnicodeStringPrintfEx@@YAJPEAU_UNICODE_STRING@@0KPEBGZZ.c)
 *     ??$?8V?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@_E$1?FreePoolWithTag@?$pool_helpers@PEAX$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@_E$1?FreePoolWithTag@?$pool_helpers@PEAX$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@0@$$T@Z @ 0x1C0022880 (--$-8V-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@_E$1-FreePoolWithTag@-$pool_helpers@PEA.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAG$$A6AXPEAG@_E$1?FreePoolWithTag@?$pool_helpers@PEAG$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C0022890 (--1-$unique_storage@U-$resource_policy@PEAG$$A6AXPEAG@_E$1-FreePoolWithTag@-$pool_helpers@PEAG$0.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAG$$A6AXPEAG@_E$1?FreePoolWithTag@?$pool_helpers@PEAG$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1C00228B0 (-reset@-$unique_storage@U-$resource_policy@PEAG$$A6AXPEAG@_E$1-FreePoolWithTag@-$pool_helpers@PE.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C01801F4 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C0180708 (DxgkReleaseAdapterCoreSync.c)
 */

__int64 __fastcall DpiPdoHandleQueryDeviceText(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // r13
  int v6; // edi
  char v7; // si
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int16 v18; // bx
  __int64 v19; // rax
  void *v20; // rbx
  int v21; // eax
  int v22; // edi
  int v24; // ebx
  char *v25; // rax
  unsigned int v26; // ecx
  __int64 Pool2; // rax
  void *v28; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGMONITOR *v30; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  char *v32; // [rsp+78h] [rbp-88h]
  char v33; // [rsp+80h] [rbp-80h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) )
    return *(unsigned int *)(a2 + 48);
  if ( !*(_QWORD *)(a2 + 56) )
  {
    v28 = 0LL;
    DestinationString = 0LL;
    if ( *(_WORD *)(v3 + 818) )
    {
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(v3 + 818));
      Pool2 = ExAllocatePool2(256LL, DestinationString.MaximumLength, 1953656900LL);
      _reset___unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__QEAAXPEAG_Z(
        &v28,
        Pool2);
      if ( !____8V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___wil__YA_NAEBV__unique_any_t_V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___0___T_Z(&v28) )
      {
        v20 = v28;
        memset(v28, 0, DestinationString.MaximumLength);
        memmove(v20, DestinationString.Buffer, DestinationString.MaximumLength);
LABEL_18:
        v28 = 0LL;
        *(_QWORD *)(a2 + 56) = v20;
        __1__unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__IEAA_XZ(&v28);
        return 0;
      }
      goto LABEL_33;
    }
    v6 = 302;
    v31 = 0x800000LL;
    v7 = 0;
    v32 = &v33;
    if ( ((*(_DWORD *)(v3 + 496) - 1) & 0xFFFFFFFD) == 0 )
    {
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v5 + 3912), 1, a3);
      v8 = *(unsigned int *)(v3 + 504);
      v9 = *(_QWORD *)(v5 + 3912);
      v14 = WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
      *(_QWORD *)(v14 + 24) = v8;
      *(_QWORD *)(v14 + 32) = v9;
      if ( v9 && (_DWORD)v8 != -1 )
      {
        MONITOR_MGR::AcquireMonitorShared(&v30, v9, v8);
        if ( v30 )
        {
          v16 = *((_QWORD *)v30 + 27);
          v17 = *(_QWORD *)(v16 + 160);
          if ( v17 )
          {
            v24 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v17 + 104LL))(*(_QWORD *)(v16 + 160), &v31);
            RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v30);
            if ( v24 >= 0 )
            {
              v25 = v32;
              if ( *(_WORD *)v32 )
              {
                v7 = 1;
                v26 = 0;
                if ( (unsigned __int16)v31 >> 1 )
                {
                  while ( *(_WORD *)v25 != 44 )
                  {
                    ++v26;
                    v25 += 2;
                    if ( v26 >= (unsigned __int16)v31 >> 1 )
                      goto LABEL_10;
                  }
                  v7 = 0;
                }
              }
            }
          }
          else
          {
            ExReleaseResourceLite((PERESOURCE)((char *)v30 + 24));
            KeLeaveCriticalRegion();
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, -1073741275LL);
          RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v30);
        }
      }
LABEL_10:
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v5 + 3912), 1u, v15);
      if ( *(_DWORD *)(*(_QWORD *)(v3 + 936) + 4LL) != 0x80000000 )
      {
        v18 = g_RegistryPath.Length + 24;
        if ( !v7 )
        {
          v6 = 300;
          goto LABEL_14;
        }
        v6 = 303;
LABEL_32:
        v18 += v31 + 2;
LABEL_14:
        v19 = ExAllocatePool2(256LL, v18, 1953656900LL);
        _reset___unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__QEAAXPEAG_Z(
          &v28,
          v19);
        if ( !____8V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___wil__YA_NAEBV__unique_any_t_V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___0___T_Z(&v28) )
        {
          *(_QWORD *)&DestinationString.Length = 0LL;
          DestinationString.MaximumLength = v18;
          v20 = v28;
          DestinationString.Buffer = (wchar_t *)v28;
          if ( v7 )
            v21 = RtlUnicodeStringPrintfEx(&DestinationString, 0LL, 0x900u, L"%wZ,%u,%wZ", &g_RegistryPath, v6, &v31);
          else
            v21 = RtlUnicodeStringPrintfEx(&DestinationString, 0LL, 0x900u, L"%wZ,%u", &g_RegistryPath, v6);
          v22 = v21;
          if ( v21 >= 0 )
            goto LABEL_18;
          WdLogSingleEntry1(2LL, v21);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to create the default name for a monitor device (Status = 0x%I64x)",
            v22,
            0LL,
            0LL,
            0LL,
            0LL);
LABEL_35:
          __1__unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__IEAA_XZ(&v28);
          return (unsigned int)v22;
        }
LABEL_33:
        v22 = -1073741801;
        goto LABEL_35;
      }
      v6 = v7 != 0 ? 304 : 301;
    }
    v18 = g_RegistryPath.Length + 24;
    if ( !v7 )
      goto LABEL_14;
    goto LABEL_32;
  }
  return 0;
}
