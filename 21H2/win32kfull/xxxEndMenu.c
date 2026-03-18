/*
 * XREFs of xxxEndMenu @ 0x1C0245A6C
 * Callers:
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0107A0C (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxEndMenuLoop @ 0x1C022D580 (xxxEndMenuLoop.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNCancel @ 0x1C0230708 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0230E00 (xxxMNCloseHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C023346C (xxxMNReleaseCapture.c)
 */

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
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) == *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
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
            xxxDestroyWindow(*(_QWORD **)(*(_QWORD *)v7[0] + 16LL));
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v7);
}
