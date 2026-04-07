/*
 * XREFs of ?RegisterForSoftwareCursorChangeNotification@CWindowList@@QEAAJPEAUISoftwareCursorChangeListener@@@Z @ 0x180098CB0
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18008C3D8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800262C4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CWindowList::RegisterForSoftwareCursorChangeNotification(
        CWindowList *this,
        struct ISoftwareCursorChangeListener *a2)
{
  char v3; // bl
  unsigned int v4; // ecx
  __int64 v5; // rdx
  unsigned int v6; // eax
  unsigned int v7; // r8d
  unsigned int v8; // ebx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp+8h] BYREF
  struct ISoftwareCursorChangeListener *v13; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+60h] [rbp+18h] BYREF

  v13 = a2;
  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = &CDesktopManager::s_csDwmInstance;
  v3 = 0;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *((_DWORD *)this + 158);
  v5 = 0LL;
  if ( v4 )
  {
    while ( *(struct ISoftwareCursorChangeListener **)(*((_QWORD *)this + 76) + 8 * v5) != v13 )
    {
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v4 )
        goto LABEL_6;
    }
    v3 = 1;
  }
LABEL_6:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  if ( !v3 )
  {
    v6 = *((_DWORD *)this + 158);
    v7 = v6 + 1;
    if ( v6 + 1 < v6 )
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x615,
        (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)v8);
      goto LABEL_12;
    }
    if ( v7 > *((_DWORD *)this + 157) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 608, 8u, 1, &v13);
      v8 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xC0u);
        goto LABEL_15;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 76) + 8LL * *((unsigned int *)this + 158)) = v13;
      *((_DWORD *)this + 158) = v7;
    }
  }
  v8 = 0;
LABEL_12:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v8;
}
