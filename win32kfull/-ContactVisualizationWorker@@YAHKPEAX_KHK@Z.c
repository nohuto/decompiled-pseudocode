/*
 * XREFs of ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01AE304
 * Callers:
 *     EditionContactVisualization @ 0x1C0143210 (EditionContactVisualization.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C001FD80 (IsCurrentDesktopComposed.c)
 *     ?DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z @ 0x1C0142F44 (-DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z.c)
 *     _GetPointerDeviceType @ 0x1C0146218 (_GetPointerDeviceType.c)
 *     DwmAsyncSendTouchContacts @ 0x1C014D056 (DwmAsyncSendTouchContacts.c)
 *     ?GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z @ 0x1C01AE700 (-GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z.c)
 *     ?GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z @ 0x1C01AE7D0 (-GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z.c)
 *     ?PointerEventIntToDigitizerContactInfo@Feedback@@YAXPEBUtagPOINTEREVENTINT@@HHHPEAUtagDIGITIZER_CONTACT_INFO@@@Z @ 0x1C01AE9A8 (-PointerEventIntToDigitizerContactInfo@Feedback@@YAXPEBUtagPOINTEREVENTINT@@HHHPEAUtagDIGITIZER_.c)
 *     ?SwitchMouseCursors@@YAXK_N@Z @ 0x1C01AEB28 (-SwitchMouseCursors@@YAXK_N@Z.c)
 *     FeedbackGetWindowSetting @ 0x1C01AEDEC (FeedbackGetWindowSetting.c)
 */

_BOOL8 __fastcall ContactVisualizationWorker(unsigned int a1, char *a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v5; // rbx
  int v6; // r14d
  char *v7; // rdi
  void *v8; // r12
  __int64 v9; // r15
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // rax
  const struct tagPOINTEREVENTINT *ContactVisualizationPointerEventInt; // rax
  char *v16; // rbx
  int v17; // r8d
  unsigned int v18; // ecx
  int v19; // eax
  int v20; // esi
  __int64 v21; // rax
  bool v22; // di
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // ecx
  BOOL v26; // edi
  __int64 v27; // rdx
  __int64 v28; // rsi
  _BOOL8 v29; // rdx
  Feedback *v30; // rbx
  int v31; // eax
  __int64 i; // rdi
  __int64 v33; // rbx
  unsigned int v34; // esi
  void *v35; // rax
  struct tagDIGITIZER_CONTACT_INFO *v37; // [rsp+28h] [rbp-50h]
  int v38; // [rsp+30h] [rbp-48h] BYREF
  int v39; // [rsp+34h] [rbp-44h]
  int v40; // [rsp+38h] [rbp-40h] BYREF
  int v41; // [rsp+3Ch] [rbp-3Ch]
  Feedback *v42; // [rsp+40h] [rbp-38h]
  _DWORD v43[4]; // [rsp+48h] [rbp-30h] BYREF
  _DWORD v44[8]; // [rsp+58h] [rbp-20h] BYREF
  int v45; // [rsp+C0h] [rbp+48h] BYREF
  char *v46; // [rsp+C8h] [rbp+50h]
  __int64 v47; // [rsp+D0h] [rbp+58h]
  int v48; // [rsp+D8h] [rbp+60h]

  v48 = a4;
  v47 = a3;
  v46 = a2;
  v5 = a1;
  v6 = 0;
  v41 = 0;
  v7 = a2;
  v8 = 0LL;
  v9 = a1;
  v10 = *(_DWORD *)UPDWORDPointer(8216LL);
  v39 = v10;
  if ( (unsigned int)IsCurrentDesktopComposed() )
    v8 = (void *)Win32AllocPoolZInit(40 * v5, 1987081045LL);
  v12 = 0LL;
  if ( (_DWORD)v5 )
  {
    v13 = v47;
    do
    {
      v40 = 0;
      v14 = SGDGetUserSessionState(v11);
      ContactVisualizationPointerEventInt = CTouchProcessor::GetContactVisualizationPointerEventInt(
                                              *(CTouchProcessor **)(v14 + 3424),
                                              v7,
                                              &v40);
      v42 = ContactVisualizationPointerEventInt;
      if ( ContactVisualizationPointerEventInt )
      {
        v16 = (char *)ContactVisualizationPointerEventInt + 8;
        if ( (unsigned int)(*((_DWORD *)ContactVisualizationPointerEventInt + 2) - 2) <= 1
          && !(unsigned int)GetWorkspaceId(*((_QWORD *)ContactVisualizationPointerEventInt + 3)) )
        {
          if ( *(_DWORD *)v16 == 3 && (unsigned int)GetPointerDeviceType(*((_QWORD *)v16 + 2)) == 1 )
          {
            v18 = *((_DWORD *)v16 + 3);
            Feedback::gfIntegratedPenActive = (v18 >> 1) & 1;
            if ( !Feedback::gfUsingPenCursors || gCursorSuppressionState == 2 || (v18 & 0x10001) != 0 )
              SwitchMouseCursors(3u, 0);
            v43[0] = *((_DWORD *)v16 + 3);
            v43[1] = *((_DWORD *)v16 + 8);
            v43[2] = *((_DWORD *)v16 + 9);
            DeferPointerCursorOperation((const struct tagPOINTER_INFO *)v16, (const struct tagPOINTERCURSORDATA *)v43);
          }
          else if ( !Feedback::gfIntegratedPenActive )
          {
            v19 = *((_DWORD *)v16 + 3);
            if ( (v19 & 0x2000) != 0 )
            {
              v45 = 0;
              v20 = 0;
              v44[0] = v19;
              v44[1] = *((_DWORD *)v16 + 8);
              v44[2] = *((_DWORD *)v16 + 9);
              if ( (unsigned int)(*(_DWORD *)v16 - 2) <= 1 )
              {
                v11 = *((_QWORD *)v16 + 3);
                if ( v11 )
                {
                  v21 = ValidateHwnd(v11);
                  if ( v21 )
                  {
                    if ( (unsigned int)FeedbackGetWindowSetting(v21, 13LL, 1LL, &v45) )
                      v20 = v45;
                  }
                }
              }
              if ( (*((_DWORD *)v16 + 3) & 0x10001) != 0 )
              {
                v22 = 0;
                if ( *(_DWORD *)v16 == 3 && (unsigned int)GetPointerDeviceType(*((_QWORD *)v16 + 2)) == 2 || v20 )
                {
                  v25 = 4;
                }
                else
                {
                  if ( *(_DWORD *)v16 == 2
                    && (v23 = *((_QWORD *)v16 + 3)) != 0
                    && (v24 = ValidateHwnd(v23)) != 0
                    && (unsigned int)FeedbackGetWindowSetting(v24, 12LL, 1LL, &v45)
                    && v45
                    || !(unsigned int)IsCurrentDesktopComposed() )
                  {
                    v22 = 1;
                  }
                  v25 = *(_DWORD *)v16;
                }
                SwitchMouseCursors(v25, v22);
                v7 = v46;
              }
              if ( !v20 )
                DeferPointerCursorOperation(
                  (const struct tagPOINTER_INFO *)v16,
                  (const struct tagPOINTERCURSORDATA *)v44);
              v10 = v39;
            }
          }
          if ( a5 != 3 )
          {
            v38 = 0;
            if ( *(_DWORD *)v16 != 2
              || (unsigned int)Feedback::GetWindowVisualizationSetting(
                                 (Feedback *)v16,
                                 (const struct tagPOINTER_INFO *)(v10 == 0),
                                 a5 == 2,
                                 v10 == 2,
                                 (__int64)&v38,
                                 (int *)v37)
              || v38 )
            {
              if ( v8 )
              {
                v26 = 1;
                v27 = 5 * v12;
                v12 = (unsigned int)(v12 + 1);
                v28 = (__int64)v8 + 8 * v27;
                if ( *(_DWORD *)v16 == 3 )
                  v26 = Feedback::GetWindowBarrelVisualizationSetting(
                          (Feedback *)v16,
                          (const struct tagPOINTER_INFO *)(v40 != 0),
                          v17) != 0;
                v29 = v48 && a5 == 2;
                v30 = v42;
                Feedback::PointerEventIntToDigitizerContactInfo(
                  v42,
                  (const struct tagPOINTEREVENTINT *)v29,
                  v26,
                  v38,
                  v28,
                  v37);
                v31 = *((_DWORD *)v30 + 5);
                if ( (v31 & 0x10000) != 0 )
                {
                  EtwTraceContactVisualizationDown();
                }
                else if ( (v31 & 0x40000) != 0 )
                {
                  EtwTraceContactVisualizationUp();
                }
                v7 = v46;
              }
            }
          }
        }
      }
      v10 = v39;
      v7 += v13;
      v46 = v7;
      --v9;
    }
    while ( v9 );
    v6 = v41;
  }
  if ( v8 )
  {
    for ( i = 0LL; (unsigned int)i < (unsigned int)v12; i = v34 + (unsigned int)i )
    {
      v33 = gdwRitInputDesktopId;
      v34 = v12 - i;
      if ( (unsigned int)(v12 - i) > 0xB )
        v34 = 11;
      v35 = (void *)ReferenceDwmApiPort(v11);
      v6 = DwmAsyncSendTouchContacts(v35, (__int64)v8 + 40 * i, v33, v34);
      if ( v6 < 0 )
        break;
    }
    Win32FreePool(v8);
  }
  return v6 >= 0;
}
