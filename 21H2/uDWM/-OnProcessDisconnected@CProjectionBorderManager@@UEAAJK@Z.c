/*
 * XREFs of ?OnProcessDisconnected@CProjectionBorderManager@@UEAAJK@Z @ 0x1800572C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026B04 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180027988 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18003A3A0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180090B30 (-StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180090DB0 (-StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::OnProcessDisconnected(struct _RTL_GENERIC_TABLE *this, int a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  _DWORD *v6; // rax
  __int64 v7; // rax
  unsigned int v8; // r8d
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // ebx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rsi
  int v15; // eax
  _DWORD *v16; // rax
  unsigned int v17; // edi
  __int64 v18; // rax
  unsigned int v19; // r8d
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rsi
  __int128 v24; // [rsp+30h] [rbp-20h] BYREF
  int v25; // [rsp+40h] [rbp-10h]
  __int64 v26; // [rsp+44h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  PVOID RestartKey; // [rsp+80h] [rbp+30h] BYREF
  __int64 v29; // [rsp+90h] [rbp+40h] BYREF
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+98h] [rbp+48h] BYREF

  v30 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey = 0LL;
  v25 = 0;
  v4 = 0;
  v26 = 0LL;
  v24 = 0LL;
  v5 = 0;
  while ( 1 )
  {
    v6 = RtlEnumerateGenericTableWithoutSplaying(this + 6, &RestartKey);
    if ( !v6 )
      break;
    if ( v6[1] == a2 )
    {
      v7 = *(_QWORD *)v6;
      v8 = v5 + 1;
      v29 = v7;
      if ( v5 + 1 < v5 )
      {
        v11 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        goto LABEL_11;
      }
      if ( v8 > v4 )
      {
        v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v24, 8u, 1, &v29);
        v11 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xC0u);
LABEL_11:
          v12 = v11;
          v13 = 716LL;
          goto LABEL_35;
        }
        v5 = HIDWORD(v26);
        v4 = v26;
      }
      else
      {
        v9 = v5++;
        HIDWORD(v26) = v8;
        *(_QWORD *)(v24 + 8 * v9) = v7;
      }
    }
  }
  v14 = 0LL;
  if ( v5 )
  {
    while ( 1 )
    {
      v29 = *(_QWORD *)(v24 + 8 * v14);
      v15 = CProjectionBorderManager::StopWindowCapture(
              (CProjectionBorderManager *)this,
              (const struct DWM_CAPTURE_TOKEN *)&v29);
      v11 = v15;
      if ( v15 < 0 )
        break;
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= v5 )
        goto LABEL_15;
    }
    v13 = 722LL;
  }
  else
  {
LABEL_15:
    RestartKey = 0LL;
    HIDWORD(v26) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)&v24, 8u);
    v16 = RtlEnumerateGenericTableWithoutSplaying(this + 7, &RestartKey);
    v17 = HIDWORD(v26);
    while ( v16 )
    {
      if ( v16[1] == a2 )
      {
        v18 = *(_QWORD *)v16;
        v19 = v17 + 1;
        v29 = v18;
        if ( v17 + 1 < v17 )
        {
          v11 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
          goto LABEL_27;
        }
        if ( v19 > (unsigned int)v26 )
        {
          v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v24, 8u, 1, &v29);
          v11 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0xC0u);
LABEL_27:
            v12 = v11;
            v13 = 733LL;
            goto LABEL_35;
          }
          v17 = HIDWORD(v26);
        }
        else
        {
          v20 = v17++;
          HIDWORD(v26) = v19;
          *(_QWORD *)(v24 + 8 * v20) = v18;
        }
      }
      v16 = RtlEnumerateGenericTableWithoutSplaying(this + 7, &RestartKey);
    }
    v22 = 0LL;
    if ( !v17 )
    {
LABEL_31:
      v11 = 0;
      goto LABEL_32;
    }
    while ( 1 )
    {
      v29 = *(_QWORD *)(v24 + 8 * v22);
      v15 = CProjectionBorderManager::StopDisplayCapture(
              (CProjectionBorderManager *)this,
              (const struct DWM_CAPTURE_TOKEN *)&v29);
      v11 = v15;
      if ( v15 < 0 )
        break;
      v22 = (unsigned int)(v22 + 1);
      if ( (unsigned int)v22 >= v17 )
        goto LABEL_31;
    }
    v13 = 739LL;
  }
  v12 = (unsigned int)v15;
LABEL_35:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)v12);
LABEL_32:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v24);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v30);
  return v11;
}
