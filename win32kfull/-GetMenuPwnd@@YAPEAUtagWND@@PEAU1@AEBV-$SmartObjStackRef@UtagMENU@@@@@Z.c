__int64 __fastcall GetMenuPwnd(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1;
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) & 1) != 0
    && (!a1 || (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) != 0x29C) )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v7, 0LL);
    v4 = *(_QWORD *)(a2 + 16);
    if ( !v4 )
      v4 = **(_QWORD **)a2;
    v5 = MNGetPopupFromMenu(v4, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v7, v5);
    if ( *(_QWORD *)v7[0] )
      v3 = *(_QWORD *)(*(_QWORD *)v7[0] + 16LL);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v7);
  }
  return v3;
}
