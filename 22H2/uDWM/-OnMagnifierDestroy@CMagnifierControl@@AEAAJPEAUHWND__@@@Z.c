/*
 * XREFs of ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z @ 0x18008CBD0
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18008C3D8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _Init_thread_footer @ 0x180053C0C (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180053C7C (_Init_thread_header.c)
 *     ?FindElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAVMagnifierTableElement@CMagnifierControl@@PEAUHWND__@@@Z @ 0x18008C0A8 (-FindElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAV.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHPEAVMagnifierTableElement@CMagnifierControl@@@Z @ 0x18008CFF8 (-RemoveElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHP.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___ @ 0x180095CBC (CWindowList--ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___.c)
 */

__int64 __fastcall CMagnifierControl::OnMagnifierDestroy(CMagnifierControl *this, __int64 a2)
{
  unsigned int v2; // ebx
  char *v3; // rax
  __int64 v6; // rcx
  struct _RTL_GENERIC_TABLE *v7; // rsi
  CBaseObject **Element; // rax
  CMagnifierControl::MagnifierTableElement *v9; // rdi
  CBaseObject *v10; // rcx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  char *v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (char *)this + 16;
  if ( !this )
    v3 = 0LL;
  v13 = v3;
  v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61);
  v12[0] = &v13;
  v12[1] = v6;
  CWindowList::ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___(v6, v12);
  if ( dword_1800E6FF4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800E6FF4);
    if ( dword_1800E6FF4 == -1 )
    {
      dword_1800E6F28 = -2147023728;
      Init_thread_footer(&dword_1800E6FF4);
    }
  }
  v7 = (struct _RTL_GENERIC_TABLE *)((char *)this + 56);
  Element = (CBaseObject **)CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::FindElement(
                              (struct _RTL_GENERIC_TABLE *)((char *)this + 56),
                              a2);
  v9 = (CMagnifierControl::MagnifierTableElement *)Element;
  if ( Element )
  {
    v10 = Element[1];
    if ( v10 )
    {
      CBaseObject::Release(v10);
      *((_QWORD *)v9 + 1) = 0LL;
    }
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::RemoveElement(v7, v9);
  }
  else
  {
    v2 = -2147023728;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E6F28, 1LL, -2147023728, 0x2A3u);
  }
  return v2;
}
