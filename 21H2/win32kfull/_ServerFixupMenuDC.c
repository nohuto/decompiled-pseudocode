/*
 * XREFs of _ServerFixupMenuDC @ 0x1C00F4650
 * Callers:
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C00F3AC0 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnINLPUAHDRAWMENU @ 0x1C00F3E70 (SfnINLPUAHDRAWMENU.c)
 *     SfnINLPUAHINITMENU @ 0x1C00F40F0 (SfnINLPUAHINITMENU.c)
 *     SfnINLPUAHDRAWMENUITEM @ 0x1C00F4370 (SfnINLPUAHDRAWMENUITEM.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x1C02265A0 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C00684A0 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     GreGetTextAlign @ 0x1C00BCFE4 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C00BD1B8 (GreSetTextAlign.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z @ 0x1C00BD238 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z.c)
 *     MNGetpItemFromIndex @ 0x1C00BF0D8 (MNGetpItemFromIndex.c)
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     _WindowFromDC @ 0x1C00EE034 (_WindowFromDC.c)
 */

HDC __fastcall ServerFixupMenuDC(HDC a1, __int64 a2, unsigned int a3, int a4)
{
  HDC DCEx; // rsi
  unsigned int CurrentProcessId; // ebx
  const struct tagWND *v11; // rax
  const struct tagWND *v12; // rbx
  __int64 *DPIMETRICS; // rax
  __int64 v14; // rax
  int TextAlign; // r8d
  __int64 v16; // rcx
  _DWORD **v17; // rax
  bool v18; // zf
  _QWORD v19[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+30h] [rbp-28h]

  DCEx = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) != (CurrentProcessId & 0xFFFFFFFC) && a1 )
  {
    SmartObjStackRefBase<tagMENU>::Init(v19, 0LL);
    v20 = 0LL;
    v11 = WindowFromDC(a1);
    v12 = v11;
    if ( v11 )
    {
      DCEx = (HDC)_GetDCEx(v11, 0LL, 65539LL);
      GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 4752LL));
      DPIMETRICS = (__int64 *)GetDPIMETRICS(v12);
      GreSelectFontInternal(DCEx, *DPIMETRICS, 1);
      v14 = ValidateHmenu(a2);
      v20 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v19, v14);
      if ( SmartObjStackRef<tagMENU>::operator bool((__int64)v19) )
      {
        TextAlign = GreGetTextAlign(a1);
        if ( a4 && *(_QWORD *)(*(_QWORD *)v19[0] + 88LL) )
        {
          v16 = v20;
          if ( !v20 )
            v16 = *(_QWORD *)v19[0];
          v17 = (_DWORD **)MNGetpItemFromIndex(v16, a3);
          if ( !v17 )
            goto LABEL_16;
          v18 = (**v17 & 0x2000) == 0;
          goto LABEL_14;
        }
        if ( *(_QWORD *)(*(_QWORD *)v19[0] + 88LL) )
        {
          v18 = (***(_DWORD ***)(*(_QWORD *)v19[0] + 88LL) & 0x2000) == 0;
LABEL_14:
          if ( !v18 )
            GreSetTextAlign(a1, TextAlign | 0x100);
        }
      }
    }
LABEL_16:
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v19);
  }
  return DCEx;
}
