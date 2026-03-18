/*
 * XREFs of SfnINLPCREATESTRUCT @ 0x1C0023990
 * Callers:
 *     <none>
 * Callees:
 *     ULongAdd @ 0x1C0024308 (ULongAdd.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0024328 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0024460 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1C013CD84 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z.c)
 *     ?GetMultiByteSizeFromUnicodeString@@YAHU_LARGE_STRING@@PEAK@Z @ 0x1C013CF38 (-GetMultiByteSizeFromUnicodeString@@YAHU_LARGE_STRING@@PEAK@Z.c)
 *     ?GetProcessACP@@YAGPEAUtagPROCESSINFO@@@Z @ 0x1C013CF90 (-GetProcessACP@@YAGPEAUtagPROCESSINFO@@@Z.c)
 *     Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledDeviceUsage @ 0x1C013D070 (Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     ULongMult @ 0x1C01B0354 (ULongMult.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C02050E4 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     _W32ExceptionHandler @ 0x1C024B764 (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnINLPCREATESTRUCT(__int64 *a1, int a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 *v8; // r12
  unsigned int v9; // r15d
  int v10; // r14d
  int *v11; // rbx
  PERESOURCE *v12; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  ULONG v17; // eax
  __int64 v18; // r12
  ULONG_PTR v19; // rdx
  unsigned int v20; // r15d
  __int64 v21; // rax
  PERESOURCE *v23; // rax
  __int64 v24; // r13
  WCHAR *v25; // rdx
  void **v26; // r9
  struct _CAPTUREBUF *v27; // rcx
  unsigned int v28; // r8d
  unsigned int v29; // r8d
  int v30; // r15d
  WCHAR *v31; // rax
  int v32; // r8d
  void **v33; // r9
  unsigned int v34; // r8d
  void *v35; // rdx
  int v36; // eax
  __int64 v37; // r15
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  PERESOURCE *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  bool v46; // di
  int v47; // r14d
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 *v52; // rax
  __int64 v53; // rdi
  BOOL v54; // [rsp+30h] [rbp-3A8h]
  ULONG pulResult; // [rsp+34h] [rbp-3A4h] BYREF
  ULONG ulMultiplicand; // [rsp+38h] [rbp-3A0h] BYREF
  ULONG v57[2]; // [rsp+40h] [rbp-398h] BYREF
  int v58; // [rsp+48h] [rbp-390h]
  char v59; // [rsp+4Ch] [rbp-38Ch]
  int v60; // [rsp+50h] [rbp-388h] BYREF
  int v61; // [rsp+54h] [rbp-384h] BYREF
  ULONG_PTR v62; // [rsp+58h] [rbp-380h] BYREF
  WCHAR v63; // [rsp+60h] [rbp-378h]
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-370h] BYREF
  __int64 v65; // [rsp+70h] [rbp-368h]
  __int64 v66; // [rsp+78h] [rbp-360h]
  unsigned __int64 v67; // [rsp+80h] [rbp-358h] BYREF
  __int128 v68; // [rsp+90h] [rbp-348h] BYREF
  __int64 *v69; // [rsp+A0h] [rbp-338h]
  __int128 v70; // [rsp+A8h] [rbp-330h] BYREF
  __int64 v71; // [rsp+B8h] [rbp-320h]
  __int64 v72; // [rsp+C0h] [rbp-318h]
  __int128 v73; // [rsp+D0h] [rbp-308h] BYREF
  __int64 v74; // [rsp+E0h] [rbp-2F8h]
  int v75; // [rsp+F0h] [rbp-2E8h] BYREF
  _BYTE v76[172]; // [rsp+F4h] [rbp-2E4h] BYREF
  _BYTE v77[512]; // [rsp+1A0h] [rbp-238h] BYREF

  v62 = a3;
  v60 = a2;
  v8 = a1;
  v69 = a1;
  pulResult = 0;
  ulMultiplicand = 0;
  v9 = 0;
  v57[0] = 0;
  v10 = a7 & 1;
  v54 = 0;
  if ( (unsigned int)Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledDeviceUsage() )
    v54 = GetProcessACP(*(struct tagPROCESSINFO **)(v8[2] + 424)) == 0xFDE9;
  memset_0(&v75, 0, 0xA8uLL);
  v11 = &v75;
  v67 = 0LL;
  v61 = 0;
  v73 = 0LL;
  v74 = 0LL;
  v12 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &();
  if ( !ExIsResourceAcquiredSharedLite(*v12) )
  {
    v58 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  }
  v66 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v14 = *ThreadWin32Thread;
    v66 = v14;
  }
  else
  {
    v14 = 0LL;
  }
  if ( v8 )
    v65 = v8[5] - *(_QWORD *)(v14 + 472);
  else
    v65 = 0LL;
  if ( a4 )
  {
    v15 = *(_QWORD *)(a4 + 56);
    if ( v15 && (*(_DWORD *)(a4 + 84) >> 31 != v10 || v15 >= (unsigned __int64)MmSystemRangeStart) )
    {
      if ( (unsigned int)Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledDeviceUsage()
        && (a7 & 1) != 0
        && *(int *)(a4 + 84) >= 0
        && v54 )
      {
        v68 = *(_OWORD *)(a4 + 80);
        if ( !(unsigned int)GetMultiByteSizeFromUnicodeString(&v68, &pulResult) )
          goto LABEL_113;
      }
      else if ( ULongAdd(*(_DWORD *)(a4 + 80), 2u, &pulResult) < 0
             || *(int *)(a4 + 84) < 0 && (a7 & 1) == 0 && ULongMult(pulResult, 2u, &pulResult) < 0 )
      {
        goto LABEL_113;
      }
      v9 = 1;
    }
    v16 = *(_QWORD *)(a4 + 64);
    if ( (v16 & 0xFFFFFFFFFFFF0000uLL) != 0
      && (*(_DWORD *)(a4 + 100) >> 31 != v10 || v16 >= (unsigned __int64)MmSystemRangeStart) )
    {
      if ( (unsigned int)Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledDeviceUsage()
        && (a7 & 1) != 0
        && *(int *)(a4 + 100) >= 0
        && v54 )
      {
        v68 = *(_OWORD *)(a4 + 96);
        if ( !(unsigned int)GetMultiByteSizeFromUnicodeString(&v68, &ulMultiplicand) )
          goto LABEL_113;
      }
      else if ( ULongAdd(*(_DWORD *)(a4 + 96), 2u, &ulMultiplicand) < 0
             || *(int *)(a4 + 100) < 0 && (a7 & 1) == 0 && ULongMult(ulMultiplicand, 2u, &ulMultiplicand) < 0 )
      {
        goto LABEL_113;
      }
      ++v9;
    }
  }
  if ( (unsigned int)Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledDeviceUsage() )
  {
    if ( ULongAdd(pulResult, ulMultiplicand, v57) < 0 )
      goto LABEL_113;
    v17 = v57[0];
    if ( v57[0] >= 0x7FFFFFFF )
      goto LABEL_113;
  }
  else
  {
    if ( ULongAdd(pulResult, ulMultiplicand, v57) < 0 )
      goto LABEL_113;
    v17 = v57[0];
  }
  if ( v9 )
  {
    v18 = 8 * v9 + 168;
    v19 = (v17 + 7LL * v9) & 0xFFFFFFFFFFFFFFF8uLL;
    RegionSize = v19;
    v20 = 8 * v9 + 168;
    if ( v19 > 0x800 )
    {
      v21 = Win32AllocPoolWithQuotaZInit(v20, 1667461973LL);
      v11 = (int *)v21;
      if ( v21 )
      {
        *(_QWORD *)(v21 + 32) = 0LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v21 + 32), 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        {
          Win32FreePool(v11);
          return 0LL;
        }
        *((_QWORD *)v11 + 2) = *((_QWORD *)v11 + 4);
        *v11 = v18;
        goto LABEL_57;
      }
      return 0LL;
    }
    if ( v18 + v19 <= 0x200 )
    {
      v11 = (int *)v77;
      memset_0(v77, 0, sizeof(v77));
    }
    else
    {
      v11 = (int *)Win32AllocPoolWithQuotaZInit((unsigned int)(v19 + v18), 1667461973LL);
      if ( !v11 )
        return 0LL;
    }
    *((_QWORD *)v11 + 2) = (char *)v11 + v18;
    *((_QWORD *)v11 + 4) = 0LL;
    *v11 = v18 + RegionSize;
LABEL_57:
    v11[1] = RegionSize;
    v11[2] = 0;
    v11[6] = 168;
    *(_QWORD *)v57 = v11;
    v8 = v69;
    goto LABEL_59;
  }
  v11 = &v75;
  *(_QWORD *)v57 = &v75;
  memset_0(v76, 0, 0xA4uLL);
  v75 = 168;
LABEL_59:
  v23 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &();
  if ( !ExIsResourceAcquiredSharedLite(*v23) )
  {
    v58 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  }
  PsGetThreadWin32Thread(KeGetCurrentThread());
  v70 = 0LL;
  v71 = 0LL;
  if ( v11 != &v75 && v11 != (int *)v77 )
    PushW32ThreadLock(v11, &v70, Win32FreePool);
  v24 = v65;
  *((_QWORD *)v11 + 5) = v65;
  v11[12] = v60;
  *((_QWORD *)v11 + 7) = v62;
  *((_QWORD *)v11 + 8) = a4 != 0;
  if ( a4 )
  {
    *(_DWORD *)(a4 + 52) = 0;
    *(_DWORD *)(a4 + 76) = 0;
    *(_OWORD *)(v11 + 18) = *(_OWORD *)a4;
    *(_OWORD *)(v11 + 22) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)(v11 + 26) = *(_OWORD *)(a4 + 32);
    *(_OWORD *)(v11 + 30) = *(_OWORD *)(a4 + 48);
    *(_OWORD *)(v11 + 34) = *(_OWORD *)(a4 + 64);
    if ( pulResult )
    {
      if ( *(int *)(a4 + 84) >= 0 )
      {
        v25 = *(WCHAR **)(a4 + 56);
        v63 = *v25;
        v26 = (void **)(v11 + 32);
        v27 = (struct _CAPTUREBUF *)v11;
        if ( v63 == 0xFFFF )
        {
          if ( (a7 & 1) != 0 )
          {
            v25 = (WCHAR *)((char *)v25 + 1);
            v28 = 3;
          }
          else
          {
            v28 = 4;
          }
        }
        else
        {
          v29 = *(_DWORD *)(a4 + 80);
          v25 = *(WCHAR **)(a4 + 88);
          if ( (a7 & 1) != 0 )
          {
            v30 = v54;
            if ( (int)CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, v25, (v29 >> 1) + 1, v26, v54) < 0 )
              goto LABEL_113;
            goto LABEL_86;
          }
          v28 = v29 + 2;
        }
        goto LABEL_84;
      }
      v31 = *(WCHAR **)(a4 + 56);
      v59 = *(_BYTE *)v31;
      if ( v59 == -1 )
      {
        if ( (a7 & 1) != 0 )
        {
          v28 = 3;
          v25 = v31;
        }
        else
        {
          v60 = ((unsigned __int16)(*(_DWORD *)v31 >> 8) << 16) | 0xFFFF;
          v28 = 4;
          v25 = (WCHAR *)&v60;
        }
        v26 = (void **)(v11 + 32);
        v27 = (struct _CAPTUREBUF *)v11;
LABEL_84:
        if ( CaptureCallbackData(v27, v25, v28, v26) < 0 )
          goto LABEL_113;
        goto LABEL_85;
      }
      v26 = (void **)(v11 + 32);
      v32 = *(_DWORD *)(a4 + 80);
      v25 = *(WCHAR **)(a4 + 88);
      v27 = (struct _CAPTUREBUF *)v11;
      if ( (a7 & 1) != 0 )
      {
        v28 = v32 + 1;
        goto LABEL_84;
      }
      if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, (CHAR *)v25, 2 * v32 + 2, v26) < 0 )
        goto LABEL_113;
    }
LABEL_85:
    v30 = v54;
LABEL_86:
    if ( ulMultiplicand )
    {
      v33 = (void **)(v11 + 34);
      v34 = *(_DWORD *)(a4 + 96);
      v35 = *(void **)(a4 + 104);
      if ( *(int *)(a4 + 100) < 0 )
        v36 = (a7 & 1) != 0
            ? CaptureCallbackData((struct _CAPTUREBUF *)v11, v35, v34 + 1, v33)
            : CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, (CHAR *)v35, 2 * v34 + 2, v33);
      else
        v36 = (a7 & 1) != 0
            ? CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v35, (v34 >> 1) + 1, v33, v30)
            : CaptureCallbackData((struct _CAPTUREBUF *)v11, v35, v34 + 2, v33);
      if ( v36 < 0 )
        goto LABEL_113;
    }
  }
  *((_QWORD *)v11 + 19) = a5;
  *((_QWORD *)v11 + 20) = a6;
  ThreadLock(v8, &v73);
  v37 = v66;
  v38 = *(_QWORD *)(v66 + 480);
  v68 = *(_OWORD *)(v38 + 64);
  v62 = *(_QWORD *)(v38 + 80);
  *(_QWORD *)(v38 + 72) = v24;
  v39 = 0LL;
  if ( v8 )
    v39 = *v8;
  *(_QWORD *)(*(_QWORD *)(v37 + 480) + 64LL) = v39;
  if ( v8 )
    v40 = *(_QWORD *)(v8[5] + 224);
  else
    v40 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v37 + 480) + 80LL) = v40;
  v41 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &();
  v46 = ExIsResourceAcquiredExclusiveLite(*v41) != 1 && IS_USERCRIT_OWNED_AT_ALL();
  UserSessionSwitchLeaveCrit(v43, v42, v44, v45);
  EtwTraceBeginCallback(10LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v47 = KeUserModeCallback(10LL, v11, (unsigned int)*v11, &v67, &v61);
  EtwTraceEndCallback(10LL);
  if ( v46 )
    EnterSharedCrit();
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v49, v48, v50);
  v51 = *(_QWORD *)(v37 + 480);
  *(_OWORD *)(v51 + 64) = v68;
  *(_QWORD *)(v51 + 80) = v62;
  if ( v47 >= 0 && v61 == 24 )
  {
    v52 = (__int64 *)v67;
    if ( v67 + 8 < v67 || v67 + 8 > MmUserProbeAddress )
      v52 = (__int64 *)MmUserProbeAddress;
    v53 = *v52;
    v72 = *v52;
    goto LABEL_114;
  }
LABEL_113:
  v53 = 0LL;
LABEL_114:
  if ( v11 != &v75 && v11 != (int *)v77 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      v62 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &v62, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v70);
  }
  return v53;
}
