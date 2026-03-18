/*
 * XREFs of ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00423D8
 * Callers:
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C004174C (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0121240 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     EditionIsCompositeAppOrSelfDisabled @ 0x1C0155E60 (EditionIsCompositeAppOrSelfDisabled.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C645C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C01E3E30 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01E5494 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 * Callees:
 *     IsMessageOnlyWindow @ 0x1C00424C0 (IsMessageOnlyWindow.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00426F0 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C00CFFB0 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00CFFEC (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0121FB0 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C0157404 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsCompositeAppOrSelfDisabled(const struct tagWND *a1)
{
  struct tagWND *CompositionInputWindowUIOwner; // rdi
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  struct tagWND *TopLevelHostForComponent; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  CompositionInputWindowUIOwner = a1;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) != 0 )
    return 1LL;
  v2 = 0;
  if ( (unsigned int)IsCompositionInputWindow(a1) && (unsigned int)IsMessageOnlyWindow(CompositionInputWindowUIOwner) )
    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(CompositionInputWindowUIOwner);
  if ( CompositionInputWindowUIOwner )
  {
    while ( 1 )
    {
      v3 = *((_QWORD *)CompositionInputWindowUIOwner + 13);
      if ( !v3 )
        break;
      v4 = *((_QWORD *)CompositionInputWindowUIOwner + 3);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 8);
        if ( v5 )
        {
          if ( v3 == *(_QWORD *)(v5 + 24) )
          {
            if ( CompositionInputWindowUIOwner )
            {
              if ( (*((_DWORD *)CompositionInputWindowUIOwner + 80) & 0x1000) == 0
                || (v8 = 0LL, !(unsigned int)CWindowProp::GetProp<CoreWindowProp>(CompositionInputWindowUIOwner, &v8))
                || !*(_DWORD *)(v8 + 28)
                || (TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(CompositionInputWindowUIOwner),
                    (CompositionInputWindowUIOwner = (struct tagWND *)GetTopLevelWindow(TopLevelHostForComponent)) != 0LL) )
              {
                if ( (*(_BYTE *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 31LL) & 8) != 0 )
                  return 1;
              }
            }
            return v2;
          }
        }
      }
      CompositionInputWindowUIOwner = (struct tagWND *)*((_QWORD *)CompositionInputWindowUIOwner + 13);
    }
  }
  return v2;
}
