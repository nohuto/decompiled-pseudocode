/*
 * XREFs of ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00A5A68
 * Callers:
 *     ?DxgkEngProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00A5A50 (-DxgkEngProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002C278 (PALLOCMEM2.c)
 *     EnterCrit @ 0x1C002FF70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     ?DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z @ 0x1C00A5F94 (-DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z.c)
 *     Feature_BrokeredDisplays_TestMode__private_ReportDeviceUsage @ 0x1C00C73E4 (Feature_BrokeredDisplays_TestMode__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C011ECA0 (xxxDisplayDiagBlackScreenDetected.c)
 *     GreIsInLowBox @ 0x1C013F6E0 (GreIsInLowBox.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C0144640 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DrvProcessWin32kEscape(struct _D3DKMT_ESCAPE *a1, __int64 a2)
{
  int v3; // ebx
  _WORD *v4; // rdi
  size_t PrivateDriverDataSize; // rcx
  __int64 v6; // rax
  size_t v8; // r8
  char *pPrivateDriverData; // rdx
  D3DKMT_ESCAPETYPE Type; // ecx
  __int32 v11; // ecx
  __int32 v12; // ecx
  __int32 v13; // ecx
  __int64 v14; // rcx
  int CurrentDpiInfoFromHDC; // eax
  UINT v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // rax
  UINT v22; // edx
  UINT v23; // r14d
  int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // edx
  unsigned int v27; // r8d
  size_t v28; // r8
  char *v29; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING v31; // [rsp+40h] [rbp-28h] BYREF
  char v32; // [rsp+78h] [rbp+10h] BYREF
  _WORD *v33; // [rsp+80h] [rbp+18h]

  v3 = 0;
  v4 = 0LL;
  v33 = 0LL;
  PrivateDriverDataSize = a1->PrivateDriverDataSize;
  if ( (_DWORD)PrivateDriverDataSize )
  {
    v4 = PALLOCMEM2(PrivateDriverDataSize, 1886221383LL, 1);
    v33 = v4;
    if ( !v4 )
    {
      v6 = WdLogNewEntry5_WdLowResource();
      *(_QWORD *)(v6 + 24) = a1->PrivateDriverDataSize;
      WdLogEvent5_WdLowResource(v6);
      return 3221225495LL;
    }
    v8 = a1->PrivateDriverDataSize;
    pPrivateDriverData = (char *)a1->pPrivateDriverData;
    if ( &pPrivateDriverData[v8] < pPrivateDriverData || (unsigned __int64)&pPrivateDriverData[v8] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v4, pPrivateDriverData, v8);
  }
  Type = a1->Type;
  if ( Type > D3DKMT_ESCAPE_WIN32K_DDA_TEST_CTL )
  {
    v19 = (unsigned int)(Type - 1031);
    if ( !(_DWORD)v19 )
    {
      if ( gbOSTestSigningEnabled )
        goto LABEL_72;
      v24 = (int)qword_1C02551B8;
      if ( qword_1C02551B8 )
        v24 = qword_1C02551B8();
      if ( v24
        || (unsigned int)GreIsInLowBox()
        && ((v32 = 0,
             DestinationString = 0LL,
             v31 = 0LL,
             RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer"),
             RtlInitUnicodeString(&v31, L"shellDisplayManagement"),
             (int)RtlCapabilityCheckForSingleSessionSku(0LL, &DestinationString, &v32) >= 0)
         && v32
         || (int)RtlCapabilityCheckForSingleSessionSku(0LL, &v31, &v32) >= 0 && v32) )
      {
LABEL_72:
        if ( a1->PrivateDriverDataSize == 24 )
        {
          if ( *((_DWORD *)v4 + 5) < 4u )
          {
            EnterCrit(0, 1);
            v26 = *((_DWORD *)v4 + 5);
            v27 = v26 >> 1;
            LOBYTE(v27) = (v26 & 2) != 0;
            LOBYTE(v26) = v26 & 1;
            xxxDisplayDiagBlackScreenDetected(4, v26, v27, (_DWORD)v4 + 4, (__int64)v4);
            v3 = 0;
            UserSessionSwitchLeaveCrit();
            goto LABEL_77;
          }
          v3 = -1073741811;
          v25 = WdLogNewEntry5_WdError(v19, a2);
          *(_QWORD *)(v25 + 24) = -1073741811LL;
        }
        else
        {
          v3 = -1073741811;
          v25 = WdLogNewEntry5_WdError(v19, a2);
          *(_QWORD *)(v25 + 24) = a1->PrivateDriverDataSize;
          *(_QWORD *)(v25 + 32) = -1073741811LL;
        }
      }
      else
      {
        v3 = -1073741790;
        v25 = WdLogNewEntry5_WdError(v19, a2);
        *(_QWORD *)(v25 + 24) = -1073741790LL;
      }
      WdLogEvent5_WdError(v25);
      goto LABEL_77;
    }
    v20 = v19 - 3;
    if ( v20 )
    {
      v14 = (unsigned int)(v20 - 1);
      if ( !(_DWORD)v14 )
      {
        v23 = a1->PrivateDriverDataSize;
        if ( v23 == 8 )
          Feature_BrokeredDisplays_TestMode__private_ReportDeviceUsage();
        v3 = -1073741811;
        if ( v23 == 8 )
          v3 = -1073741637;
        goto LABEL_77;
      }
      if ( (_DWORD)v14 != 1 )
      {
LABEL_50:
        v21 = WdLogNewEntry5_WdError(v14, a2);
        *(_QWORD *)(v21 + 24) = a1->Type;
        WdLogEvent5_WdError(v21);
        goto LABEL_51;
      }
      v22 = a1->PrivateDriverDataSize;
      if ( v22 < 0x64 )
        goto LABEL_16;
      CurrentDpiInfoFromHDC = DrvCollectColorProfileForUser(v4, v22);
    }
    else
    {
      if ( a1->PrivateDriverDataSize != 40 )
        goto LABEL_16;
      CurrentDpiInfoFromHDC = ((__int64 (__fastcall *)(_WORD *))qword_1C0250B30)(v4);
    }
    goto LABEL_38;
  }
  if ( Type != D3DKMT_ESCAPE_WIN32K_DDA_TEST_CTL )
  {
    v11 = Type - 1024;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
      {
        v3 = -1073741637;
        goto LABEL_83;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = (unsigned int)(v13 - 1);
        if ( (_DWORD)v14 )
        {
          if ( (_DWORD)v14 == 1 )
          {
            if ( a1->PrivateDriverDataSize != 6 )
            {
LABEL_16:
              v3 = -1073741811;
              goto LABEL_83;
            }
            *v4 = gdmLogPixels;
            v4[1] = *(_WORD *)(PsGetCurrentProcessWin32Process(v14) + 284);
            v4[2] = *((_WORD *)gpsi + 3499);
            goto LABEL_77;
          }
          goto LABEL_50;
        }
LABEL_20:
        if ( a1->PrivateDriverDataSize < 8 )
          goto LABEL_16;
        if ( *(_DWORD *)v4 == 1 )
        {
          if ( qword_1C0250AB0 )
            *((_DWORD *)v4 + 1) = (unsigned __int8)qword_1C0250AB0() != 0;
          else
            v3 = -1073741637;
          goto LABEL_77;
        }
        if ( *(_DWORD *)v4 == 2 && gbOSTestSigningEnabled )
        {
          gbBypassPresenterViewProcessCheck = *((_DWORD *)v4 + 1);
          goto LABEL_77;
        }
LABEL_51:
        v3 = -1073741811;
        goto LABEL_77;
      }
      if ( a1->PrivateDriverDataSize != 104 )
      {
        v3 = -1073741811;
        goto LABEL_20;
      }
      CurrentDpiInfoFromHDC = DrvGetCurrentDpiInfoFromHDC(*(HDC *)v4, (struct _DPI_INFORMATION *const)(v4 + 4));
    }
    else
    {
      v16 = a1->PrivateDriverDataSize;
      if ( v16 < 4 || v16 != *(_DWORD *)v4 )
        goto LABEL_16;
      if ( qword_1C0255430 )
      {
        v3 = qword_1C0255430();
        CurrentDpiInfoFromHDC = -1073741637;
      }
      else
      {
        CurrentDpiInfoFromHDC = -1073741637;
        v3 = -1073741637;
      }
      if ( v3 < 0 )
        goto LABEL_83;
      if ( qword_1C0255438 )
        CurrentDpiInfoFromHDC = ((__int64 (__fastcall *)(_WORD *))qword_1C0255438)(v4);
    }
LABEL_38:
    v3 = CurrentDpiInfoFromHDC;
    goto LABEL_77;
  }
  if ( a1->PrivateDriverDataSize != 4 )
    goto LABEL_16;
  if ( !gbOSTestSigningEnabled )
  {
    v3 = -1073741790;
    goto LABEL_83;
  }
  v17 = *(unsigned int *)v4;
  if ( (v17 & 2) != 0 && (v17 & 1) == 0 )
  {
    v18 = WdLogNewEntry5_WdError(v17, a2);
    *(_QWORD *)(v18 + 24) = a1->Type;
    WdLogEvent5_WdError(v18);
    goto LABEL_16;
  }
  g_OutputDuplicationTestControl = *(_DWORD *)v4;
LABEL_77:
  if ( v3 < 0 )
  {
LABEL_83:
    if ( v4 )
      Win32FreePool((__int64)v4);
    return (unsigned int)v3;
  }
  if ( v4 )
  {
    v28 = a1->PrivateDriverDataSize;
    v29 = (char *)a1->pPrivateDriverData;
    if ( (unsigned __int64)&v29[v28] > MmUserProbeAddress || &v29[v28] <= v29 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v29, v4, v28);
    goto LABEL_83;
  }
  return (unsigned int)v3;
}
