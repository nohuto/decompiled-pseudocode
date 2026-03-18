/*
 * XREFs of xxxProcessHidInput @ 0x1C01D1B50
 * Callers:
 *     ProcessHidRawInput @ 0x1C01D11E0 (ProcessHidRawInput.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00791A0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     PtiKbdFromQ @ 0x1C00AC810 (PtiKbdFromQ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_TABLE@@@Z @ 0x1C01D0AA8 (-HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_T.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01D0B1C (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 */

__int64 __fastcall xxxProcessHidInput(struct DEVICEINFO *a1)
{
  __int64 v1; // r13
  int v2; // r15d
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // rcx
  struct tagPROCESS_HID_REQUEST *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagWND *v11; // rdi
  struct tagQ *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  int *v15; // rsi
  struct tagPROCESS_HID_REQUEST *v16; // rax
  __int64 v17; // r9
  struct tagWND *v18; // rdi
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int16 v22; // cx
  __int16 v23; // dx
  bool v24; // zf
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rbp
  __int64 v29; // rcx
  int v30; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0LL;
  v2 = 0;
  result = (unsigned int)*gpsi;
  if ( (result & 0x2000) != 0 )
    return result;
  if ( (result & 0x4000) != 0 )
  {
    result = *((unsigned int *)a1 + 50);
    if ( (result & 0x80u) == 0LL )
      return result;
    result = *((_QWORD *)a1 + 57);
    if ( *(_DWORD *)(result + 40) != 851973 )
      return result;
  }
  if ( *((int *)a1 + 64) < 0 )
    return result;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v30);
  v5 = 1LL;
  v6 = gpqForeground;
  if ( gpqForeground )
  {
    v1 = *(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424);
    v7 = HidIsRequestedByThisProcess(a1, *(struct tagPROCESS_HID_TABLE **)(v1 + 832));
    if ( v7 )
    {
      v6 = gpqForeground;
      v11 = (struct tagWND *)*((_QWORD *)v7 + 4);
      v12 = (struct tagQ *)gpqForeground;
      if ( !v11 || (v12 = *(struct tagQ **)(*((_QWORD *)v11 + 2) + 432LL), *(char *)(*((_QWORD *)v11 + 5) + 20LL) >= 0) )
      {
        if ( (*((_DWORD *)a1 + 46) & 0x20) == 0
          || (v13 = *(unsigned int *)(*((_QWORD *)a1 + 59) + 360LL), (v13 & 0x10) != 0)
          || (!(unsigned __int8)IsInputThread(v13, v8, v9, v10)
            ? (v14 = *(_QWORD *)(gptiCurrent + 424LL) + 880LL)
            : (v14 = *((_QWORD *)a1 + 59) + 944LL),
              v5 = 1LL,
              (unsigned __int8)CheckAccess(v14, (char *)v12 + 424)) )
        {
          v5 = 1LL;
          if ( (unsigned int)PostHidInput(a1, v12, v11, 0LL) )
          {
            v2 = 1;
            v5 = 0LL;
          }
        }
      }
    }
  }
  result = (__int64)&RawInputManagerObject::gHidRequestTable[4];
  v15 = (int *)RawInputManagerObject::gHidRequestTable[4];
  while ( v15 != (int *)result )
  {
    if ( v15[20] <= 0 )
      goto LABEL_49;
    v16 = HidIsRequestedByThisProcess(a1, (struct tagPROCESS_HID_TABLE *)v15);
    if ( !v16 )
      goto LABEL_49;
    v6 = *((unsigned int *)v16 + 5);
    if ( (v6 & 1) == 0 || (v6 & 2) != 0 && !v5 )
      goto LABEL_49;
    if ( *((_QWORD *)v16 + 5) )
    {
      (*((void (__fastcall **)(struct DEVICEINFO *))v16 + 5))(a1);
      goto LABEL_49;
    }
    v18 = (struct tagWND *)*((_QWORD *)v16 + 4);
    v19 = *((_QWORD *)v18 + 2);
    if ( *(_QWORD *)(v19 + 424) == v1 )
      goto LABEL_49;
    v6 = grpdeskRitInput;
    if ( *((_QWORD *)v18 + 3) != grpdeskRitInput )
      goto LABEL_49;
    v20 = *((_QWORD *)v18 + 5);
    if ( *(char *)(v20 + 20) < 0 || *(char *)(v20 + 19) < 0 )
      goto LABEL_49;
    v21 = *((_QWORD *)a1 + 58);
    v22 = *(_WORD *)(v21 + 16);
    v23 = *(_WORD *)(v21 + 18);
    if ( v22 == 12 )
    {
      v24 = v23 == 1;
      goto LABEL_32;
    }
    if ( v22 == 1 )
    {
      v24 = v23 == 9;
LABEL_32:
      if ( v24 )
        goto LABEL_47;
      goto LABEL_37;
    }
    if ( v22 >= 0xFF00u )
      goto LABEL_47;
LABEL_37:
    v25 = gpqForeground;
    if ( gpqForeground )
    {
      if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(v19 + 432) + 424LL, gpqForeground + 424LL) )
      {
        v26 = *((_QWORD *)v18 + 2);
        if ( *(int *)(*(_QWORD *)(v26 + 424) + 12LL) >= 0 )
        {
          EtwTraceUIPIInputError(v26, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 424LL), 5);
          goto LABEL_49;
        }
      }
    }
    if ( (*((_DWORD *)a1 + 46) & 0x2000) == 0
      || (v27 = *(unsigned int *)(*((_QWORD *)a1 + 59) + 360LL), (v27 & 0x10) != 0)
      || ((v28 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 432LL), !(unsigned __int8)IsInputThread(v27, v25, v19, v17))
        ? (v29 = *(_QWORD *)(gptiCurrent + 424LL) + 880LL)
        : (v29 = *((_QWORD *)a1 + 59) + 944LL),
          (unsigned __int8)CheckAccess(v29, v28 + 424)) )
    {
LABEL_47:
      result = PostHidInput(a1, *(struct tagQ **)(*((_QWORD *)v18 + 2) + 432LL), v18, 1uLL);
      if ( !(_DWORD)result )
        break;
      v2 = 1;
    }
LABEL_49:
    v15 = *(int **)v15;
    result = (__int64)&RawInputManagerObject::gHidRequestTable[4];
  }
  if ( v2 )
  {
    result = *((unsigned int *)a1 + 50);
    if ( (result & 0x40) == 0 )
      result = CInputGlobals::UpdateInputGlobals(
                 gpInputGlobals,
                 (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                 4LL);
  }
  if ( !v30 )
    return UserSessionSwitchLeaveCrit(v6);
  return result;
}
