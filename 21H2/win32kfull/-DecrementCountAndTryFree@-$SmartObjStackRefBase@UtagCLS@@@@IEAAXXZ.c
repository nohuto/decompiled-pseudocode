/*
 * XREFs of ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C0078DC8
 * Callers:
 *     xxxGetWindowSmIcon @ 0x1C0038D48 (xxxGetWindowSmIcon.c)
 *     _HasCaptionIcon @ 0x1C0061D98 (_HasCaptionIcon.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     GetCPD @ 0x1C0078B60 (GetCPD.c)
 *     DestroyClass @ 0x1C0079040 (DestroyClass.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C0079A00 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     DereferenceClass @ 0x1C0079C50 (DereferenceClass.c)
 *     _RegisterClassEx @ 0x1C007CB90 (_RegisterClassEx.c)
 *     SetRedirectedWindow @ 0x1C00BD1BC (SetRedirectedWindow.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C00BD4F8 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     xxxSetClassLongPtr @ 0x1C00FC1DC (xxxSetClassLongPtr.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C00FC5F4 (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     GetClassIcoCur @ 0x1C011FFA0 (GetClassIcoCur.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E8E2C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     _SetClassWord @ 0x1C01E9404 (_SetClassWord.c)
 *     _WOWModuleUnload @ 0x1C0227E50 (_WOWModuleUnload.c)
 *     xxxRecreateSmallIcons @ 0x1C024343C (xxxRecreateSmallIcons.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 != gSmartObjNullRef )
  {
    --*(_DWORD *)(*a1 + 8);
    result = *a1;
    if ( !*(_DWORD *)(*a1 + 8) )
    {
      result = *a1;
      if ( *(_BYTE *)(*a1 + 12) )
        return Win32FreeToPagedLookasideList(gpStackRefLookAside, *a1);
    }
  }
  return result;
}
