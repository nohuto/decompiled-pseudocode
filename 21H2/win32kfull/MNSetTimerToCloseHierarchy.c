/*
 * XREFs of MNSetTimerToCloseHierarchy @ 0x1C0230248
 * Callers:
 *     xxxMNSelectItem @ 0x1C02334EC (xxxMNSelectItem.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0061074 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     InternalSetTimer @ 0x1C0075120 (InternalSetTimer.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall MNSetTimerToCloseHierarchy(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v5, 0LL);
  if ( (***(_DWORD ***)a1 & 0x20) == 0 )
  {
    v2 = 0;
    goto LABEL_10;
  }
  if ( (***(_DWORD ***)a1 & 0x4000) != 0 )
  {
LABEL_9:
    v2 = 1;
    goto LABEL_10;
  }
  v3 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**(_QWORD **)a1 + 24LL));
  v2 = 0;
  if ( v3 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v5, *(_QWORD *)(v3 + 8));
    if ( *(_QWORD *)v5[0] )
    {
      if ( !InternalSetTimer(*(_QWORD *)(**(_QWORD **)a1 + 16LL), 0xFFFFLL, gdtMNDropDown, 0LL, 0, 16) )
      {
        v2 = -1;
        goto LABEL_10;
      }
      ***(_DWORD ***)a1 |= 0x4000u;
      **(_DWORD **)v5[0] |= 0x1000u;
      goto LABEL_9;
    }
  }
LABEL_10:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v5);
  return v2;
}
