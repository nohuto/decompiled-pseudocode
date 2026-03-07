_QWORD *__fastcall MNUnlinkDelayedFreePopups(__int64 a1)
{
  _QWORD v3[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v4[2]; // [rsp+30h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v4, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v3, a1);
  while ( *(_QWORD *)v3[0] )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v4, *(_QWORD *)(*(_QWORD *)v3[0] + 72LL));
    **(_DWORD **)v3[0] &= ~0x10000u;
    if ( *(_QWORD *)v3[0] != a1 )
      **(_DWORD **)v3[0] &= ~0x20000000u;
    *(_QWORD *)(*(_QWORD *)v3[0] + 72LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)v3[0] + 64LL) = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v3, *(_QWORD *)v4[0]);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v3);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v4);
}
