/*
 * XREFs of ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C01AE1E0
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C01AFC34 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C01AFE1C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C01AFF6C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 */

__int64 __fastcall CheckGivenTargetIsPartOfCloneGroup(ADAPTER_DISPLAY **a1, unsigned int a2, unsigned __int8 *a3)
{
  ADAPTER_DISPLAY *v5; // rax
  unsigned int v6; // esi
  int v7; // ebx
  struct SESSION_VIEW *SessionViewOwner; // rax
  unsigned int v10; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+88h] [rbp+20h] BYREF

  v10 = 0;
  *a3 = 0;
  if ( (int)DmmGetSourceConnectedToTargetInClientVidPn(a1, a2, &v10) < 0 )
    return (unsigned int)-1073741275;
  v5 = a1[365];
  v11 = 0;
  v6 = v10;
  if ( v10 >= *((_DWORD *)v5 + 24) )
  {
    WdLogSingleEntry1(1LL, 4839LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < i_pAdapter->GetDisplayCore()->GetNumVidPnSources()",
      4839LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = DmmEnumClientVidPnPathTargetsFromSource(a1, v6, 1uLL, &v11);
  if ( v7 < 0 || v11 == -1 )
  {
    SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(a1[365], v6);
    if ( !SessionViewOwner || *((_DWORD *)SessionViewOwner + 10) <= 1u )
      return (unsigned int)v7;
  }
  *a3 = 1;
  return 0LL;
}
