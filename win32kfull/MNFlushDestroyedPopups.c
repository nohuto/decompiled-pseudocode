_QWORD *__fastcall MNFlushDestroyedPopups(_DWORD *a1)
{
  _DWORD *v2; // rdx
  __int64 v4; // rbx
  _QWORD v5[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v7[2]; // [rsp+40h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v5, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v6, 0LL);
  v2 = a1;
LABEL_2:
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v5, (__int64)v2);
  while ( *(_QWORD *)(*(_QWORD *)v5[0] + 72LL) )
  {
    v2 = *(_DWORD **)(*(_QWORD *)v5[0] + 72LL);
    if ( (*v2 & 0x8000) == 0 )
      goto LABEL_2;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v6, (__int64)v2);
    *(_QWORD *)(*(_QWORD *)v5[0] + 72LL) = *(_QWORD *)(*(_QWORD *)v6[0] + 72LL);
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v7, *(_QWORD *)v6[0]);
    MNFreePopup(v7);
    if ( (**(_DWORD **)v6[0] & 0x40000000) != 0 )
    {
      **(_DWORD **)v6[0] &= ~0x20000000u;
    }
    else
    {
      v4 = *(_QWORD *)v6[0];
      NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v6[0] + 88LL));
      UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v4);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v6);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v5);
}
