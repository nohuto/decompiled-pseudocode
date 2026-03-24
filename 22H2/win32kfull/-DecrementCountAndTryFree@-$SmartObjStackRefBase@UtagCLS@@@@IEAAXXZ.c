/*
 * XREFs of ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C0078D28
 * Callers:
 *     xxxGetWindowSmIcon @ 0x1C0038CA8 (xxxGetWindowSmIcon.c)
 *     _HasCaptionIcon @ 0x1C0061CF8 (_HasCaptionIcon.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     GetCPD @ 0x1C0078AC0 (GetCPD.c)
 *     DestroyClass @ 0x1C0078FA0 (DestroyClass.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C0079960 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     DereferenceClass @ 0x1C0079BB0 (DereferenceClass.c)
 *     _RegisterClassEx @ 0x1C007CAF0 (_RegisterClassEx.c)
 *     SetRedirectedWindow @ 0x1C00BCE5C (SetRedirectedWindow.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C00BD198 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     xxxSetClassLongPtr @ 0x1C00FBE8C (xxxSetClassLongPtr.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C00FC2A4 (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     GetClassIcoCur @ 0x1C011FC20 (GetClassIcoCur.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E886C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     _SetClassWord @ 0x1C01E8E44 (_SetClassWord.c)
 *     _WOWModuleUnload @ 0x1C0227890 (_WOWModuleUnload.c)
 *     xxxRecreateSmallIcons @ 0x1C0242E7C (xxxRecreateSmallIcons.c)
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
