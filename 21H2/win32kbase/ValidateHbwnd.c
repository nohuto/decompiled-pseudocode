/*
 * XREFs of ValidateHbwnd @ 0x1C0144300
 * Callers:
 *     NtUserConfigureActivationObject @ 0x1C00BA470 (NtUserConfigureActivationObject.c)
 *     ValidateHbwndOwnedByCallingThread @ 0x1C0144450 (ValidateHbwndOwnedByCallingThread.c)
 *     NtUserGetInputContainerId @ 0x1C0159470 (NtUserGetInputContainerId.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01B8A54 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01B8DD8 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C01B8EF8 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01CCE84 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x1C01F1704 (-ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@.c)
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 */

__int64 __fastcall ValidateHbwnd(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  _QWORD *v5; // rbp
  char *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdi
  char v9; // al
  __int64 CurrentProcessWin32Process; // rax
  __int16 v11; // cx
  __int64 v12; // rcx
  __int64 v13; // rcx

  v4 = a1;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v5 = gpKernelHandleTable;
    v4 = a1 >> 16;
    v6 = (char *)qword_1C0294B68 + (unsigned int)(unsigned __int16)a1 * dword_1C0294B70;
    v7 = 3 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C0294B70) >> 5);
    LOWORD(v4) = WORD1(a1) & 0x7FFF;
    if ( ((WORD1(a1) & 0x7FFF) == *((_WORD *)v6 + 13)
       || (_WORD)v4 == 0x7FFF
       || !(_WORD)v4 && PsGetCurrentProcessWow64Process())
      && v6[24] == 23 )
    {
      v8 = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned int)((v6 - (char *)qword_1C0294B68) >> 5));
      if ( v8 )
      {
        v9 = v6[25];
        if ( (v9 & 1) == 0 )
        {
          if ( v9 >= 0 )
            return v8;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(3LL * (unsigned int)((v6 - (char *)qword_1C0294B68) >> 5));
          if ( !CurrentProcessWin32Process )
            return v8;
          a2 = 3LL * (unsigned __int8)v6[24];
          v11 = *((_WORD *)&unk_1C024AF4C + 12 * (unsigned __int8)v6[24]);
          if ( (v11 & 2) != 0 )
          {
            v12 = v5[v7 + 1];
          }
          else
          {
            if ( (v11 & 1) == 0 )
              return v8;
            v13 = v5[v7 + 1];
            if ( !v13 )
              return v8;
            v12 = *(_QWORD *)(v13 + 424);
          }
          if ( !v12 || v12 == CurrentProcessWin32Process )
            return v8;
        }
      }
    }
  }
  UserSetLastError(1400LL, a2, v4, a4);
  return 0LL;
}
