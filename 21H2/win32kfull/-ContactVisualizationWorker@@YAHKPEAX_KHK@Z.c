/*
 * XREFs of ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01DA314
 * Callers:
 *     EditionContactVisualization @ 0x1C01DB050 (EditionContactVisualization.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C0014620 (IsCurrentDesktopComposed.c)
 *     ?DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DA714 (-DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z @ 0x1C01DA8B0 (-GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z.c)
 *     ?GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z @ 0x1C01DA970 (-GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z.c)
 *     ?PointerEventIntToDigitizerContactInfo@Feedback@@YAXPEBUtagPOINTEREVENTINT@@HHHPEAUtagDIGITIZER_CONTACT_INFO@@@Z @ 0x1C01DAB14 (-PointerEventIntToDigitizerContactInfo@Feedback@@YAXPEBUtagPOINTEREVENTINT@@HHHPEAUtagDIGITIZER_.c)
 *     ?SwitchMouseCursors@@YAXK_N@Z @ 0x1C01DADDC (-SwitchMouseCursors@@YAXK_N@Z.c)
 *     FeedbackGetWindowSetting @ 0x1C01DB0D0 (FeedbackGetWindowSetting.c)
 *     _GetPointerDeviceType @ 0x1C01EF528 (_GetPointerDeviceType.c)
 *     DwmAsyncSendTouchContacts @ 0x1C02753E0 (DwmAsyncSendTouchContacts.c)
 */

_BOOL8 __fastcall ContactVisualizationWorker(unsigned int a1, char *a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v5; // rbx
  int v6; // edi
  char *v7; // rsi
  void *v8; // r13
  __int64 v9; // r15
  int v10; // r14d
  __int64 v11; // rdx
  unsigned int v12; // r12d
  __int64 v13; // rdi
  const struct tagPOINTEREVENTINT *ContactVisualizationPointerEventInt; // rax
  char *v15; // rbx
  int v16; // r8d
  int PointerDeviceType; // eax
  unsigned int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // r12d
  __int64 v22; // rcx
  __int64 v23; // rax
  bool v24; // r14
  int v25; // esi
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // r14
  BOOL v31; // esi
  _BOOL8 v32; // rdx
  Feedback *v33; // rbx
  int v34; // eax
  __int64 i; // rsi
  int v36; // r14d
  void *v37; // rax
  struct tagDIGITIZER_CONTACT_INFO *v39; // [rsp+28h] [rbp-50h]
  unsigned int v40; // [rsp+30h] [rbp-48h]
  int v41; // [rsp+34h] [rbp-44h] BYREF
  int v42; // [rsp+38h] [rbp-40h] BYREF
  int v43; // [rsp+3Ch] [rbp-3Ch]
  int v44; // [rsp+40h] [rbp-38h]
  Feedback *v45; // [rsp+48h] [rbp-30h]
  _DWORD v46[4]; // [rsp+50h] [rbp-28h] BYREF
  _DWORD v47[6]; // [rsp+60h] [rbp-18h] BYREF
  int v48; // [rsp+C0h] [rbp+48h] BYREF
  char *v49; // [rsp+C8h] [rbp+50h]
  __int64 v50; // [rsp+D0h] [rbp+58h]
  int v51; // [rsp+D8h] [rbp+60h]

  v51 = a4;
  v50 = a3;
  v49 = a2;
  v5 = a1;
  v6 = 0;
  v44 = 0;
  v7 = a2;
  v8 = 0LL;
  v9 = a1;
  v10 = *(_DWORD *)UPDWORDPointer(8216LL);
  v43 = v10;
  if ( (unsigned int)IsCurrentDesktopComposed() )
    v8 = (void *)Win32AllocPool(40 * v5, 1987081045LL);
  v12 = 0;
  v40 = 0;
  if ( (_DWORD)v5 )
  {
    v13 = v50;
    while ( 1 )
    {
      v42 = 0;
      ContactVisualizationPointerEventInt = CTouchProcessor::GetContactVisualizationPointerEventInt(
                                              gpTouchProcessor,
                                              v7,
                                              &v42);
      v45 = ContactVisualizationPointerEventInt;
      if ( ContactVisualizationPointerEventInt )
      {
        v15 = (char *)ContactVisualizationPointerEventInt + 8;
        if ( (unsigned int)(*((_DWORD *)ContactVisualizationPointerEventInt + 2) - 2) <= 1
          && !(unsigned int)GetWorkspaceId(*((_QWORD *)ContactVisualizationPointerEventInt + 3)) )
        {
          break;
        }
      }
LABEL_57:
      v10 = v43;
      v7 += v13;
      v49 = v7;
      if ( !--v9 )
      {
        v6 = v44;
        goto LABEL_59;
      }
    }
    if ( *(_DWORD *)v15 == 3 )
    {
      PointerDeviceType = GetPointerDeviceType(*((_QWORD *)v15 + 2));
      v11 = 1LL;
      if ( PointerDeviceType == 1 )
      {
        v18 = *((_DWORD *)v15 + 3);
        Feedback::gfIntegratedPenActive = (v18 >> 1) & 1;
        if ( !Feedback::gfUsingPenCursors || gCursorSuppressionState == 2 || (v18 & 0x10001) != 0 )
        {
          SwitchMouseCursors(3u, 0);
          v18 = *((_DWORD *)v15 + 3);
        }
        v46[1] = *((_DWORD *)v15 + 8);
        v19 = *((_DWORD *)v15 + 9);
        v46[0] = v18;
        v46[2] = v19;
        DeferPointerCursorOperation((const struct tagPOINTER_INFO *)v15, (const struct tagPOINTERCURSORDATA *)v46);
LABEL_41:
        if ( a5 != 3 )
        {
          v41 = 0;
          if ( *(_DWORD *)v15 != 2
            || (unsigned int)Feedback::GetWindowVisualizationSetting(
                               (Feedback *)v15,
                               (const struct tagPOINTER_INFO *)(v10 == 0),
                               a5 == 2,
                               v10 == 2,
                               (__int64)&v41,
                               (int *)v39)
            || v41 )
          {
            if ( v8 )
            {
              v29 = 5LL * v12++;
              v30 = (__int64)v8 + 8 * v29;
              v40 = v12;
              v31 = 1;
              if ( *(_DWORD *)v15 == 3 )
                v31 = Feedback::GetWindowBarrelVisualizationSetting(
                        (Feedback *)v15,
                        (const struct tagPOINTER_INFO *)(v42 != 0),
                        v16) != 0;
              v32 = v51 && a5 == 2;
              v33 = v45;
              Feedback::PointerEventIntToDigitizerContactInfo(
                v45,
                (const struct tagPOINTEREVENTINT *)v32,
                v31,
                v41,
                v30,
                v39);
              v34 = *((_DWORD *)v33 + 5);
              if ( (v34 & 0x10000) != 0 )
              {
                EtwTraceContactVisualizationDown();
              }
              else if ( (v34 & 0x40000) != 0 )
              {
                EtwTraceContactVisualizationUp();
              }
              v7 = v49;
            }
          }
        }
        goto LABEL_57;
      }
    }
    else
    {
      v11 = 1LL;
    }
    if ( !Feedback::gfIntegratedPenActive )
    {
      v20 = *((_DWORD *)v15 + 3);
      if ( (v20 & 0x2000) != 0 )
      {
        v48 = 0;
        v21 = 0;
        v47[0] = v20;
        v47[1] = *((_DWORD *)v15 + 8);
        v47[2] = *((_DWORD *)v15 + 9);
        if ( (unsigned int)(*(_DWORD *)v15 - 2) <= 1 )
        {
          v22 = *((_QWORD *)v15 + 3);
          if ( v22 )
          {
            v23 = ValidateHwnd(v22);
            if ( v23 )
            {
              if ( (unsigned int)FeedbackGetWindowSetting(v23, 13LL, 1LL, &v48) )
                v21 = v48;
            }
          }
        }
        if ( (*((_DWORD *)v15 + 3) & 0x10001) != 0 )
        {
          v24 = 0;
          v25 = v21;
          if ( *(_DWORD *)v15 == 3 && (unsigned int)GetPointerDeviceType(*((_QWORD *)v15 + 2)) == 2 )
            v25 = 1;
          if ( v25 )
          {
            v28 = 4;
          }
          else
          {
            if ( *(_DWORD *)v15 == 2
              && (v26 = *((_QWORD *)v15 + 3)) != 0
              && (v27 = ValidateHwnd(v26)) != 0
              && (unsigned int)FeedbackGetWindowSetting(v27, 12LL, 1LL, &v48)
              && v48
              || !(unsigned int)IsCurrentDesktopComposed() )
            {
              v24 = 1;
            }
            v28 = *(_DWORD *)v15;
          }
          SwitchMouseCursors(v28, v24);
          v7 = v49;
          v10 = v43;
        }
        if ( !v21 )
          DeferPointerCursorOperation((const struct tagPOINTER_INFO *)v15, (const struct tagPOINTERCURSORDATA *)v47);
        v12 = v40;
      }
    }
    goto LABEL_41;
  }
LABEL_59:
  if ( v8 )
  {
    for ( i = 0LL; (unsigned int)i < v12; i = (unsigned int)(v36 + i) )
    {
      v36 = v12 - i;
      if ( v12 - (unsigned int)i > 0xB )
        v36 = 11;
      v37 = (void *)ReferenceDwmApiPort(5 * i, v11);
      v6 = DwmAsyncSendTouchContacts(v37);
      if ( v6 < 0 )
        break;
    }
    Win32FreePool(v8);
  }
  return v6 >= 0;
}
