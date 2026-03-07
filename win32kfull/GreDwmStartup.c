__int64 __fastcall GreDwmStartup(Gre::Base *a1)
{
  int v2; // edi
  int v3; // r15d
  int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // r12d
  __int64 RectRgn; // rax
  __int64 v9; // rcx
  _DWORD *v10; // r14
  void *v12; // rcx
  struct Gre::Base::SESSION_GLOBALS *v13; // [rsp+30h] [rbp-48h]
  Gre::Base *v14; // [rsp+38h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v17; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v18; // [rsp+D0h] [rbp+58h] BYREF
  int v19; // [rsp+D8h] [rbp+60h] BYREF

  v2 = 0;
  v19 = 0;
  v3 = 0;
  v16 = 0;
  v4 = 0;
  v17 = 0;
  v18 = 0;
  v14 = a1;
  v13 = Gre::Base::Globals(a1);
  ENTER_GRE_DWM_CRIT(v14, &v19);
  v5 = Win32AllocPoolZInit(344LL, 1935885383LL);
  v6 = v5;
  v7 = 1;
  if ( v5 )
  {
    *(_QWORD *)(v5 + 176) = a1;
    LOBYTE(v3) = GrepDwmCreateComposedEvent((wchar_t *)v5) >= 0;
    RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
    *(_QWORD *)(v6 + 184) = RectRgn;
    LOBYTE(v4) = RectRgn != 0;
    RtlInitializeGenericTable(
      (PRTL_GENERIC_TABLE)v6,
      HwndLookupCompareTableData,
      HwndLookupAllocTableData,
      HwndLookupFreeTableData,
      0LL);
    GreInitializePushLock(v6 + 72);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)(v6 + 88) = v6 + 80;
    *(_QWORD *)(v6 + 80) = v6 + 80;
    *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
    *(_QWORD *)(v6 + 112) = v6 + 104;
    *(_QWORD *)(v6 + 104) = v6 + 104;
    ObjectAttributes.RootDirectory = 0LL;
    *(_QWORD *)(v6 + 128) = v6 + 120;
    *(_QWORD *)(v6 + 120) = v6 + 120;
    *(_QWORD *)(v6 + 336) = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LOBYTE(v2) = ZwCreateEvent((PHANDLE)(v6 + 336), 0x1F0003u, &ObjectAttributes, NotificationEvent, 0) >= 0;
    if ( v3 && v4 && v2 )
    {
      *((_QWORD *)v13 + 38) = v6;
      v6 = 0LL;
      SpRenderHint(&v14, 0x10000LL, 0LL, 0LL);
      vAccNotify(
        (struct _SURFOBJ *)((*((_QWORD *)a1 + 316) + 24LL) & -(__int64)(*((_QWORD *)a1 + 316) != 0LL)),
        6u,
        (void *)1);
    }
    v10 = *(_DWORD **)(SGDGetSessionState(v9) + 32);
    v10[2172] = bDwmDeviceBitmapsEnabled();
    v10[2175] = bDwmDeviceBitmapsEnabledForMultiAdapter();
    *((_DWORD *)v13 + 74) = bDwmOverlayTestMode();
    *((_DWORD *)v13 + 75) = bDwmDesktopOverlaysEnabled();
    if ( (unsigned int)bDwmResizeOptimizationOverride(&v16, &v17, &v18) )
    {
      v10[2177] = v16;
      v10[2178] = v17;
      v10[2179] = v18;
      v10[2176] = 1;
    }
    v10[2180] = bDwmChildWindowDpiIsolationEnabled();
    if ( v6 )
    {
      if ( v4 )
        GreDeleteObject(*(_QWORD *)(v6 + 184));
      if ( v3 )
      {
        v12 = *(void **)(v6 + 328);
        if ( v12 )
        {
          ObCloseHandle(v12, 0);
          *(_QWORD *)(v6 + 328) = 0LL;
        }
      }
      if ( v2 )
        ZwClose(*(HANDLE *)(v6 + 336));
      Win32FreePool((void *)v6);
    }
    if ( v3 && v4 && v2 )
      GreSfmDwmStartup();
  }
  else
  {
    EngSetLastError(8u);
  }
  LEAVE_GRE_DWM_CRIT(a1, v19);
  if ( !v3 || !v4 || !v2 )
    return 0;
  return v7;
}
