_QWORD *__fastcall xxxEndMenu(__int64 a1)
{
  _DWORD **v2; // rax
  __int64 v3; // rsi
  int v4; // eax
  int v5; // ebx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v7, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v7, *(_QWORD *)a1);
  if ( *(_QWORD *)v7[0] )
  {
    v2 = (_DWORD **)v7[0];
    *(_DWORD *)(a1 + 8) &= 0xFFFFFFFA;
    **v2 |= 0x8000u;
    v3 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) == *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
      xxxMNReleaseCapture(a1);
    if ( gptiCurrent == v3 )
    {
      v4 = *(_DWORD *)(a1 + 8);
      if ( (v4 & 0x10) == 0 )
      {
        *(_DWORD *)(a1 + 8) = v4 | 0x10;
        if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
        {
          if ( (**(_DWORD **)a1 & 0x80000) == 0 )
            xxxMNCancel(a1, 0, 0, 0LL);
        }
        else
        {
          v5 = **(_DWORD **)v7[0];
          xxxMNCloseHierarchy(*(_QWORD *)v7[0], a1);
          if ( (v5 & 8) != 0 && *(_QWORD *)(*(_QWORD *)v7[0] + 16LL) )
            xxxDestroyWindow(*(__int64 **)(*(_QWORD *)v7[0] + 16LL));
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v7);
}
