/*
 * XREFs of NtUserGetPointerInfoList @ 0x1C012F190
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     EnterSharedCrit @ 0x1C0035E30 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     ApiSetEditionConvertUserToPseudoWindow @ 0x1C0097760 (ApiSetEditionConvertUserToPseudoWindow.c)
 *     GetPointerInfoSize @ 0x1C01289FC (GetPointerInfoSize.c)
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C019370C (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 *     ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C0193F30 (-GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0193FD4 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall NtUserGetPointerInfoList(
        int a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        ULONG64 a6,
        ULONG64 a7,
        volatile void *Address)
{
  int v8; // esi
  int v11; // ebx
  __int64 v12; // rdx
  int v13; // r11d
  int PointerInfoSize; // eax
  __int64 v15; // r10
  _DWORD *v16; // r15
  _DWORD *v17; // r12
  int v18; // r9d
  _OWORD *v19; // rdi
  __int64 v20; // rcx
  unsigned int *v21; // rax
  __int64 v22; // r8
  unsigned int *v23; // rax
  CTouchProcessor *v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  __int64 CurrentProcessWow64Process; // rax
  _DWORD *v28; // rcx
  __int64 v29; // rcx
  int PointerFrameInfoInternal; // eax
  unsigned int v32; // [rsp+50h] [rbp-158h] BYREF
  unsigned int v33; // [rsp+54h] [rbp-154h]
  struct tagTHREADINFO *v34; // [rsp+78h] [rbp-130h]
  __int64 v35[7]; // [rsp+80h] [rbp-128h] BYREF
  __int128 v36; // [rsp+B8h] [rbp-F0h]
  __int128 v37; // [rsp+C8h] [rbp-E0h]
  __int128 v38; // [rsp+D8h] [rbp-D0h]
  __int128 v39; // [rsp+E8h] [rbp-C0h]
  __int128 v40; // [rsp+F8h] [rbp-B0h]
  __int128 v41; // [rsp+110h] [rbp-98h]
  __m128i v42; // [rsp+120h] [rbp-88h]
  __int128 v43; // [rsp+130h] [rbp-78h]
  __int128 v44; // [rsp+140h] [rbp-68h]
  __int128 v45; // [rsp+150h] [rbp-58h]
  __int128 v46; // [rsp+160h] [rbp-48h]
  unsigned int v47; // [rsp+1B0h] [rbp+8h] BYREF
  int v48; // [rsp+1C0h] [rbp+18h]
  int v49; // [rsp+1C8h] [rbp+20h]

  v49 = a4;
  v48 = a3;
  v8 = a4;
  v47 = 0;
  v32 = 0;
  v33 = 0;
  v11 = 1;
  v34 = EnterSharedCrit(0, 1);
  v13 = 0;
  if ( !a1 )
    goto LABEL_45;
  if ( HIWORD(a1) )
    goto LABEL_45;
  v12 = a5;
  if ( !a5 )
    goto LABEL_45;
  PointerInfoSize = GetPointerInfoSize(a2);
  if ( (_DWORD)v12 != PointerInfoSize )
    goto LABEL_45;
  v16 = (_DWORD *)a6;
  if ( !a6 )
    goto LABEL_45;
  v17 = (_DWORD *)a7;
  if ( !a7 )
    goto LABEL_45;
  v18 = v48;
  if ( v48 || v8 )
  {
    v19 = Address;
  }
  else
  {
    v19 = Address;
    if ( !Address )
    {
LABEL_45:
      v20 = 87LL;
      goto LABEL_46;
    }
  }
  if ( v8 && (*(_DWORD *)(v15 + 1232) & 0x100) != 0 )
  {
    v20 = 5LL;
LABEL_46:
    v11 = v13;
    goto LABEL_47;
  }
  v21 = (unsigned int *)a6;
  if ( a6 >= MmUserProbeAddress )
    v21 = (unsigned int *)MmUserProbeAddress;
  v22 = *v21;
  v47 = *v21;
  v23 = (unsigned int *)a7;
  if ( a7 >= MmUserProbeAddress )
    v23 = (unsigned int *)MmUserProbeAddress;
  v24 = (CTouchProcessor *)*v23;
  v32 = *v23;
  if ( v19 )
  {
    if ( !(_DWORD)v22 )
      goto LABEL_45;
    if ( !(_DWORD)v24 )
      goto LABEL_45;
    v25 = v22 * (_QWORD)v24;
    if ( v25 > 0xFFFFFFFF )
      goto LABEL_45;
    v26 = v12 * (unsigned int)v25;
    if ( v26 > 0xFFFFFFFF )
      goto LABEL_45;
    v33 = v12 * v25;
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v25);
    ProbeForWrite(v19, (unsigned int)v26, CurrentProcessWow64Process != 0 ? 1 : 4);
    v8 = v49;
    v18 = v48;
  }
  if ( a1 == 1 )
  {
    v28 = *(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1280);
    if ( !v28 || (*v28 & 1) == 0 )
    {
      v11 = 0;
      v20 = 87LL;
LABEL_47:
      UserSetLastError(v20, v12);
      goto LABEL_48;
    }
    v47 = 1;
    v32 = 1;
    if ( v19 )
    {
      v29 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1280);
      v36 = *(_OWORD *)(v29 + 24);
      v41 = v36;
      v42 = *(__m128i *)(v29 + 40);
      v37 = *(_OWORD *)(v29 + 56);
      v43 = v37;
      v38 = *(_OWORD *)(v29 + 72);
      v44 = v38;
      v39 = *(_OWORD *)(v29 + 88);
      v45 = v39;
      v40 = *(_OWORD *)(v29 + 104);
      v46 = v40;
      v35[0] = 0LL;
      ApiSetEditionConvertUserToPseudoWindow(_mm_srli_si128(v42, 8).m128i_i64[0], v35);
      v42.m128i_i64[1] = v35[0];
      if ( (unsigned __int64)v19 >= MmUserProbeAddress )
        v19 = (_OWORD *)MmUserProbeAddress;
      *v19 = v36;
      v19[1] = v42;
      v19[2] = v37;
      v19[3] = v38;
      v19[4] = v39;
      v19[5] = v40;
    }
  }
  else
  {
    if ( v8 )
    {
      PointerFrameInfoInternal = CTouchProcessor::GetPointerFrameInfoInternal(
                                   v24,
                                   v34,
                                   a1,
                                   a2,
                                   v18,
                                   v33,
                                   &v47,
                                   &v32,
                                   (unsigned __int8 *)v19);
    }
    else
    {
      v32 = 1;
      if ( v18 )
      {
        PointerFrameInfoInternal = CTouchProcessor::GetPointerInfoHistoryInternal(
                                     v24,
                                     v34,
                                     a1,
                                     a2,
                                     v33,
                                     &v47,
                                     (unsigned __int8 *)v19);
      }
      else
      {
        v47 = 1;
        PointerFrameInfoInternal = CTouchProcessor::GetPointerInfoInternal(
                                     v24,
                                     v34,
                                     a1,
                                     a2,
                                     v33,
                                     (struct tagPOINTER_INFO *)v19);
      }
    }
    v11 = PointerFrameInfoInternal;
    if ( !PointerFrameInfoInternal )
      goto LABEL_48;
  }
  if ( (unsigned __int64)v16 >= MmUserProbeAddress )
    v16 = (_DWORD *)MmUserProbeAddress;
  *v16 = v47;
  if ( (unsigned __int64)v17 >= MmUserProbeAddress )
    v17 = (_DWORD *)MmUserProbeAddress;
  *v17 = v32;
LABEL_48:
  UserSessionSwitchLeaveCrit();
  return v11;
}
