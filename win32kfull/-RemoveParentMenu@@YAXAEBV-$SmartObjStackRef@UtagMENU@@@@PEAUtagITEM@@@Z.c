/*
 * XREFs of ?RemoveParentMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00E6550
 * Callers:
 *     ?UnlockSubMenu@@YAPEAUtagMENU@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00A1018 (-UnlockSubMenu@@YAPEAUtagMENU@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00A6ADC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     _DestroyMenu @ 0x1C00A77C0 (_DestroyMenu.c)
 * Callees:
 *     <none>
 */

void __fastcall RemoveParentMenu(__int64 **a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 *v4; // rdx
  __int64 *v5; // rax
  __int64 *v6; // rcx

  v2 = *(_QWORD *)(a2 + 16);
  if ( v2 )
  {
    v4 = (__int64 *)(v2 + 104);
    if ( *v4 )
    {
      while ( 1 )
      {
        v5 = a1[2];
        if ( !v5 )
          v5 = (__int64 *)**a1;
        v6 = (__int64 *)*v4;
        if ( *(__int64 **)(*v4 + 8) == v5 )
          break;
        v4 = (__int64 *)*v4;
        if ( !*v6 )
          return;
      }
      *v4 = *v6;
      Win32FreePool(v6);
    }
  }
}
