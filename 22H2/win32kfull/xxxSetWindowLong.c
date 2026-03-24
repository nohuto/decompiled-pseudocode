/*
 * XREFs of xxxSetWindowLong @ 0x1C00FACB8
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00462FC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtUserSetWindowLong @ 0x1C00FABB0 (NtUserSetWindowLong.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C008A18C (--1CProcessAttachDetach@@QEAA@XZ.c)
 *     xxxSetWindowData @ 0x1C008A1A8 (xxxSetWindowData.c)
 *     FCallerOk @ 0x1C00FB0AC (FCallerOk.c)
 *     ??8?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z @ 0x1C0124ACC (--8-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z.c)
 *     safe_cast_wf_to_PDIALOG @ 0x1C0161D08 (safe_cast_wf_to_PDIALOG.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxSetWindowLong(struct tagWND *a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v6; // r15
  __int64 v7; // rsi
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rcx
  unsigned int *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r9
  unsigned int v21; // ebx
  __int64 v23; // r9
  unsigned __int64 v24; // r9
  int v25; // ecx
  _WORD *v26; // rdx
  unsigned int v27; // ecx
  _DWORD *v28; // r10
  int v29; // esi
  __int64 v30; // rdx
  unsigned int *v31; // rax
  __int64 v32; // rcx
  _BYTE v33[4]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v34; // [rsp+24h] [rbp-54h]
  _DWORD v35[20]; // [rsp+28h] [rbp-50h] BYREF

  v6 = a3;
  v7 = a2;
  v9 = 0;
  v33[0] = 0;
  if ( !(unsigned int)FCallerOk(a1) )
    goto LABEL_53;
  if ( (int)v7 >= 0 )
  {
    v12 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 252LL);
    v10 = v7 + 4;
    if ( v7 + 4 > v12 )
    {
      v13 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      if ( v13 != PsGetCurrentProcessWin32Process(v12) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) == 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
        if ( !(unsigned __int8)CheckAccess(CurrentProcessWin32Process + 880, v13 + 880)
          && *(int *)(PsGetCurrentProcessWin32Process(v16) + 12) >= 0 )
        {
          goto LABEL_53;
        }
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
        v33[0] = 1;
      }
    }
  }
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0 )
    goto LABEL_34;
  v17 = (unsigned int *)safe_cast_wf_to_PDIALOG(a1);
  if ( v17 )
  {
    if ( !(_DWORD)v7 )
    {
      v21 = *v17;
      v34 = *v17;
      *(_QWORD *)v17 = (int)v6;
LABEL_24:
      CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v33);
      return v21;
    }
    if ( (_DWORD)v7 == 16 )
    {
      v35[0] = 0;
      if ( (unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==((char *)a1 + 321, v35)
        && *(int *)(*((_QWORD *)a1 + 5) + 200LL) >= 30 )
      {
        v9 = *(_DWORD *)(v20 + 16);
        v34 = v9;
        *(_QWORD *)(v20 + 16) = (int)v6;
      }
      else
      {
        v35[0] = 0;
        if ( !(unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(v19, v35) )
        {
          v35[0] = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 687LL);
        }
        if ( *(int *)(*((_QWORD *)a1 + 5) + 200LL) < 30 )
        {
          v35[0] = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 688LL);
        }
      }
      goto LABEL_55;
    }
    if ( (unsigned int)v7 <= 0x1D )
    {
      v18 = 1415LL;
LABEL_54:
      UserSetLastError(v18, v10, v11);
      goto LABEL_55;
    }
    goto LABEL_34;
  }
  if ( (int)v7 >= 0 )
  {
    v23 = *((_QWORD *)a1 + 5);
    v11 = *(_WORD *)(v23 + 42) & 0x2FFF;
    v10 = (unsigned int)(v11 - 666);
    if ( (int)v7 < *(unsigned __int16 *)(gpsi + 2 * v10 + 328) - 320 )
    {
      if ( (_DWORD)v11 != 679 )
        goto LABEL_33;
      if ( (_DWORD)v7 )
      {
        if ( (_DWORD)v7 != 8 )
          goto LABEL_33;
        v34 = **(_DWORD **)(v23 + 296);
        if ( v34 )
        {
          if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
            goto LABEL_33;
        }
      }
      goto LABEL_32;
    }
LABEL_34:
    if ( (int)v7 < 0 )
      goto LABEL_35;
LABEL_32:
    v11 = *((_QWORD *)a1 + 5);
    v24 = *(unsigned int *)(v11 + 252);
    if ( (unsigned __int64)(unsigned int)v7 + 4 > (unsigned int)(v24 + *(_DWORD *)(v11 + 200)) )
    {
LABEL_33:
      v18 = 1413LL;
      goto LABEL_54;
    }
    if ( !a5 )
      goto LABEL_47;
    v26 = *(_WORD **)(*((_QWORD *)a1 + 17) + 8LL);
    if ( (v26[3] & 0x100) == 0 )
      goto LABEL_47;
    v27 = 0;
    v28 = &gDefaultServerClasses;
    while ( *v26 != *(_WORD *)(gpsi + 2LL * ((*v28 >> 3) & 0x1F) + 868) )
    {
      ++v27;
      v28 += 12;
      if ( v27 >= 8 )
        goto LABEL_47;
    }
    if ( (int)v7 >= *((_DWORD *)&gDefaultServerClasses + 12 * v27 + 6)
      || (v10 = *v28 & 0xF8, (*(_BYTE *)v28 & 0xF8) == 0xB0)
      && (unsigned __int64)((int)v7 + 4LL) <= 0xFFFFFFFFFFFFFEE0uLL )
    {
LABEL_47:
      if ( (int)v7 + 4LL <= v24 )
      {
        v32 = *((_QWORD *)a1 + 35);
        v21 = *(_DWORD *)((int)v7 + v32);
        *(_DWORD *)((int)v7 + v32) = v6;
      }
      else
      {
        v29 = v7 - v24;
        v30 = *(_QWORD *)(v11 + 296);
        if ( (*(_DWORD *)(v11 + 232) & 0x800) != 0 )
          v31 = (unsigned int *)(v30 + v29 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
        else
          v31 = (unsigned int *)(v29 + v30);
        v21 = *v31;
        v34 = *v31;
        *v31 = v6;
      }
      goto LABEL_24;
    }
LABEL_53:
    v18 = 5LL;
    goto LABEL_54;
  }
LABEL_35:
  if ( (unsigned int)(v7 + 21) > 9 )
    goto LABEL_33;
  v25 = 547;
  if ( !_bittest(&v25, v7 + 21) )
    goto LABEL_33;
  v9 = xxxSetWindowData(a1, v7, v6, a4);
LABEL_55:
  CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v33);
  return v9;
}
