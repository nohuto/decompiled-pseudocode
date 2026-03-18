/*
 * XREFs of NtUserEndPaint @ 0x1C00964C0
 * Callers:
 *     <none>
 * Callees:
 *     zzzInternalShowCaret @ 0x1C00062D4 (zzzInternalShowCaret.c)
 *     InternalInvalidate3 @ 0x1C0034D50 (InternalInvalidate3.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C8EAC (DwmAsyncChildStyleChange.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EE714 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x1C00F319C (DirtyVisRgnTrackers.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall NtUserEndPaint(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edi
  __int64 v10; // rax
  int v11; // ebx
  int v12; // r12d
  int v13; // r13d
  _DWORD *v14; // rax
  int v15; // r15d
  int v16; // r14d
  int v17; // eax
  int v18; // r15d
  __int64 v19; // rax
  int v20; // ebx
  int v21; // r14d
  int v22; // r15d
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned int *v25; // rax
  int v26; // r12d
  int v27; // ecx
  int v28; // r13d
  __int64 v29; // rcx
  int v31; // ecx
  __int64 v32; // rcx
  void *v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  void *v36; // rax
  __int128 v37; // [rsp+30h] [rbp-88h] BYREF
  __int64 v38; // [rsp+40h] [rbp-78h]
  _OWORD v39[4]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v40; // [rsp+90h] [rbp-28h]

  memset_0(v39, 0, 0x48uLL);
  v37 = 0LL;
  v38 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = (_QWORD *)ValidateHwnd(a1);
  v9 = 0;
  if ( v6 )
  {
    *(_QWORD *)&v37 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v37;
    *((_QWORD *)&v37 + 1) = v6;
    HMLockObject(v6);
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v39[0] = *(_OWORD *)a2;
    v39[1] = *(_OWORD *)(a2 + 16);
    v39[2] = *(_OWORD *)(a2 + 32);
    v39[3] = *(_OWORD *)(a2 + 48);
    v40 = *(_QWORD *)(a2 + 64);
    ReleaseCacheDC(*(_QWORD *)&v39[0], 1LL);
    if ( (*(_BYTE *)(v6[5] + 20LL) & 2) != 0 )
    {
      if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink )
      {
        InternalInvalidate3(v6, (__int64)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink, (unsigned int)gRdwFlags);
        if ( !--LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
        {
          GreDeleteObject(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink);
          WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink = 0LL;
          gRdwFlags = 0;
        }
      }
      SetOrClrWF(0LL, v6, 1026LL, 1LL);
    }
    v10 = v6[5];
    v11 = *(_DWORD *)(v10 + 28);
    v12 = *(_DWORD *)(v10 + 24);
    v13 = *(_DWORD *)(v10 + 232);
    *(_BYTE *)(v10 + 20) &= ~1u;
    if ( (unsigned int)IsWindowDesktopComposed(v6) )
    {
      v14 = (_DWORD *)v6[5];
      v15 = v14[7];
      v16 = v12 ^ v14[6];
      v17 = v13 ^ v14[58];
      v18 = v11 ^ v15;
      if ( v18 || v16 || v17 )
      {
        v31 = 0;
        if ( (v18 & 0xB1CF0000) != 0 || (v16 & 0x4E27A9) != 0 || (v17 & 0x12C0) != 0 )
          v31 = 1;
        if ( v31 )
        {
          DirtyVisRgnTrackers(v6);
          v33 = (void *)ReferenceDwmApiPort(v32);
          DwmAsyncChildStyleChange(v33);
        }
        if ( (v16 & 0x200A0381) != 0 || (v18 & 0xC40000) != 0 )
          WindowMargins::CheckForChanges(v6, 1LL);
      }
    }
    v19 = v6[5];
    v20 = *(_DWORD *)(v19 + 28);
    v21 = *(_DWORD *)(v19 + 24);
    v22 = *(_DWORD *)(v19 + 232);
    *(_BYTE *)(v19 + 20) &= ~4u;
    if ( (unsigned int)IsWindowDesktopComposed(v6) )
    {
      v25 = (unsigned int *)v6[5];
      v23 = v25[7];
      v24 = v25[6];
      v26 = v21 ^ v25[6];
      v27 = v22 ^ v25[58];
      v28 = v20 ^ v25[7];
      if ( v28 || v26 || v27 )
      {
        v34 = 0;
        if ( (v28 & 0xB1CF0000) != 0 || (v26 & 0x4E27A9) != 0 || (v27 & 0x12C0) != 0 )
          v34 = 1;
        if ( v34 )
        {
          DirtyVisRgnTrackers(v6);
          v36 = (void *)ReferenceDwmApiPort(v35);
          DwmAsyncChildStyleChange(v36);
        }
        if ( (v28 & 0xC40000) != 0 || (v26 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges(v6, 1LL);
      }
    }
    v29 = gptiCurrent;
    if ( v6 == *(_QWORD **)(*(_QWORD *)(gptiCurrent + 432LL) + 304LL) )
      zzzInternalShowCaret();
    v9 = 1;
    ThreadUnlock1(v29, v23, v24);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v7, v8);
  return v9;
}
