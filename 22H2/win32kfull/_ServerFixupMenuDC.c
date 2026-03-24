/*
 * XREFs of _ServerFixupMenuDC @ 0x1C0106800
 * Callers:
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C0105B20 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnINLPUAHDRAWMENU @ 0x1C0105F10 (SfnINLPUAHDRAWMENU.c)
 *     SfnINLPUAHINITMENU @ 0x1C01061F0 (SfnINLPUAHINITMENU.c)
 *     SfnINLPUAHDRAWMENUITEM @ 0x1C01064D0 (SfnINLPUAHDRAWMENUITEM.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x1C022C2E0 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 * Callees:
 *     GreSelectFont @ 0x1C0045E80 (GreSelectFont.c)
 *     MNGetpItemFromIndex @ 0x1C00480C4 (MNGetpItemFromIndex.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C00DC78C (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     _WindowFromDC @ 0x1C010059C (_WindowFromDC.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010104C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GreSetTextAlign @ 0x1C01241C0 (GreSetTextAlign.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0124AE8 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreGetTextAlign @ 0x1C0125448 (GreGetTextAlign.c)
 */

HDC __fastcall ServerFixupMenuDC(HDC a1, __int64 a2, unsigned int a3, int a4)
{
  HDC DCEx; // rsi
  unsigned int CurrentProcessId; // ebx
  struct tagWND *v11; // rax
  struct tagWND *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  _DWORD **v15; // rax
  bool v16; // zf
  _QWORD v17[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+30h] [rbp-28h]

  DCEx = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) != (CurrentProcessId & 0xFFFFFFFC) && a1 )
  {
    SmartObjStackRefBase<tagMENU>::Init(v17, 0LL);
    v18 = 0LL;
    v11 = WindowFromDC(a1);
    v12 = v11;
    if ( v11 )
    {
      DCEx = (HDC)_GetDCEx(v11, 0LL, 65539LL);
      GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 4752LL));
      GetDPIMETRICS(v12);
      GreSelectFont(DCEx);
      v13 = ValidateHmenu(a2);
      SmartObjStackRefBase<tagMENU>::operator=(v17, v13);
      if ( SmartObjStackRef<tagMENU>::operator bool((__int64)v17) )
      {
        GreGetTextAlign(a1);
        if ( a4 && *(_QWORD *)(*(_QWORD *)v17[0] + 88LL) )
        {
          v14 = v18;
          if ( !v18 )
            v14 = *(_QWORD *)v17[0];
          v15 = (_DWORD **)MNGetpItemFromIndex(v14, a3);
          if ( !v15 )
            goto LABEL_16;
          v16 = (**v15 & 0x2000) == 0;
          goto LABEL_14;
        }
        if ( *(_QWORD *)(*(_QWORD *)v17[0] + 88LL) )
        {
          v16 = (***(_DWORD ***)(*(_QWORD *)v17[0] + 88LL) & 0x2000) == 0;
LABEL_14:
          if ( !v16 )
            GreSetTextAlign(a1);
        }
      }
    }
LABEL_16:
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v17);
  }
  return DCEx;
}
