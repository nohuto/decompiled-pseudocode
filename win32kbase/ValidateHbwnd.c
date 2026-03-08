/*
 * XREFs of ValidateHbwnd @ 0x1C01576D0
 * Callers:
 *     NtUserConfigureActivationObject @ 0x1C00C8D70 (NtUserConfigureActivationObject.c)
 *     ValidateHbwndOwnedByCallingThread @ 0x1C0157830 (ValidateHbwndOwnedByCallingThread.c)
 *     NtUserGetInputContainerId @ 0x1C016F9B0 (NtUserGetInputContainerId.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01E3284 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01E388C (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C01E3A44 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01FA4B0 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x1C02228EC (-ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@.c)
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 */

__int64 __fastcall ValidateHbwnd(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  _QWORD *v6; // rbp
  char *v7; // rbx
  __int64 v8; // rsi
  unsigned __int64 v9; // r8
  __int64 v10; // rdi
  char v11; // al
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v13; // r8
  __int16 v14; // ax
  _QWORD *v15; // rax
  __int64 v16; // rax

  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v5 = dword_1C02D0E10 * (unsigned int)(unsigned __int16)a1;
    v6 = gpKernelHandleTable;
    v9 = a1 >> 16;
    v7 = (char *)qword_1C02D0E08 + (unsigned int)v5;
    v8 = 3 * ((__int64)(unsigned int)v5 >> 5);
    LOWORD(v9) = v9 & 0x7FFF;
    if ( ((_WORD)v9 == *((_WORD *)v7 + 13)
       || (_WORD)v9 == 0x7FFF
       || !(_WORD)v9 && PsGetCurrentProcessWow64Process(v5, a2, v9, a4))
      && v7[24] == 23 )
    {
      v10 = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned int)((v7 - (char *)qword_1C02D0E08) >> 5));
      if ( v10 )
      {
        v11 = v7[25];
        if ( (v11 & 1) == 0 )
        {
          if ( v11 >= 0 )
            return v10;
          CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(3LL * (unsigned int)((v7 - (char *)qword_1C02D0E08) >> 5));
          v13 = CurrentProcessWin32Process;
          if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
            return v10;
          v14 = *((_WORD *)&unk_1C028159C + 12 * (unsigned __int8)v7[24]);
          if ( (v14 & 2) != 0 )
          {
            v15 = (_QWORD *)v6[v8 + 1];
          }
          else
          {
            if ( (v14 & 1) == 0 )
              return v10;
            v16 = v6[v8 + 1];
            if ( !v16 )
              return v10;
            v15 = *(_QWORD **)(v16 + 424);
          }
          if ( !v15 || v15 == v13 )
            return v10;
        }
      }
    }
  }
  UserSetLastError(1400);
  return 0LL;
}
