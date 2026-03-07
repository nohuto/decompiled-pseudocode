__int64 __fastcall MNSetTimerToCloseHierarchy(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v5, 0LL);
  v2 = 0;
  if ( (***(_DWORD ***)a1 & 0x20) != 0 )
  {
    if ( (***(_DWORD ***)a1 & 0x4000) != 0 )
      goto LABEL_8;
    v3 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**(_QWORD **)a1 + 24LL));
    if ( v3 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v5, *(_QWORD *)(v3 + 8));
      if ( *(_QWORD *)v5[0] )
      {
        if ( !InternalSetTimer(*(_QWORD *)(**(_QWORD **)a1 + 16LL), 0xFFFFLL, gdtMNDropDown, 0LL, 0, 16) )
        {
          v2 = -1;
          goto LABEL_9;
        }
        ***(_DWORD ***)a1 |= 0x4000u;
        **(_DWORD **)v5[0] |= 0x1000u;
LABEL_8:
        v2 = 1;
      }
    }
  }
LABEL_9:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v5);
  return v2;
}
