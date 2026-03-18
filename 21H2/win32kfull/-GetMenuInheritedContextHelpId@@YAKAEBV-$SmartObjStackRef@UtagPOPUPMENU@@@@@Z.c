/*
 * XREFs of ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C022EB14
 * Callers:
 *     xxxMNKeyDown @ 0x1C0231A20 (xxxMNKeyDown.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0061074 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall GetMenuInheritedContextHelpId(__int64 **a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  _QWORD v4[2]; // [rsp+20h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v4, **a1);
  if ( (**(_DWORD **)v4[0] & 1) == 0 )
  {
    v1 = 0;
    while ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4[0] + 40LL) + 40LL) + 48LL) )
    {
      if ( (**(_DWORD **)v4[0] & 2) != 0 && *(_QWORD *)(*(_QWORD *)v4[0] + 32LL) == *(_QWORD *)(*(_QWORD *)v4[0] + 8LL) )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v4, *(_QWORD *)(*(_QWORD *)v4[0] + 64LL));
        break;
      }
      if ( *(_QWORD *)(*(_QWORD *)v4[0] + 32LL) )
      {
        v2 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v4[0] + 32LL));
        if ( v2 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(v4, *(_QWORD *)(v2 + 8));
          if ( *(_QWORD *)v4[0] )
            continue;
        }
      }
      goto LABEL_12;
    }
  }
  v1 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4[0] + 40LL) + 40LL) + 48LL);
LABEL_12:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v4);
  return v1;
}
