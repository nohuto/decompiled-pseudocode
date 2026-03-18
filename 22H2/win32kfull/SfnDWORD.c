/*
 * XREFs of SfnDWORD @ 0x1C0123CE0
 * Callers:
 *     xxxDefWindowProc @ 0x1C0020FF0 (xxxDefWindowProc.c)
 *     xxxSendMessageCallback @ 0x1C004D5BC (xxxSendMessageCallback.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 *     xxxDispatchMessage @ 0x1C0117884 (xxxDispatchMessage.c)
 *     xxxHkCallHook @ 0x1C0120850 (xxxHkCallHook.c)
 *     xxxReceiveMessage @ 0x1C01267C0 (xxxReceiveMessage.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0127BE0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01B87A0 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C02239BC (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall SfnDWORD(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rbx
  PERESOURCE *v10; // rax
  __int64 v11; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  PERESOURCE *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  PERESOURCE *v24; // rax
  bool v25; // bl
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 *v34; // rax
  __int64 result; // rax
  __int64 v36; // [rsp+58h] [rbp-C0h]
  __int64 v37; // [rsp+60h] [rbp-B8h] BYREF
  int v38; // [rsp+68h] [rbp-B0h]
  int v39; // [rsp+6Ch] [rbp-ACh]
  __int64 v40; // [rsp+70h] [rbp-A8h]
  __int64 v41; // [rsp+78h] [rbp-A0h]
  __int64 v42; // [rsp+80h] [rbp-98h]
  __int64 v43; // [rsp+88h] [rbp-90h]
  __int64 v44; // [rsp+90h] [rbp-88h]
  __int128 v45; // [rsp+B0h] [rbp-68h]
  __int128 v46; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v47; // [rsp+D0h] [rbp-48h]
  int v48; // [rsp+128h] [rbp+10h]
  int v49; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int64 v50; // [rsp+138h] [rbp+20h] BYREF

  v48 = a2;
  v9 = 0LL;
  v50 = 0LL;
  v49 = 0;
  v46 = 0LL;
  v47 = 0LL;
  v10 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  if ( !ExIsResourceAcquiredSharedLite(*v10) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v11 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v11 = *ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(v11 + 472);
  else
    v13 = 0LL;
  v39 = 0;
  v37 = v13;
  v38 = v48;
  v40 = a3;
  v41 = a4;
  v42 = a5;
  v43 = a6;
  ThreadLock(a1, &v46);
  v17 = *(_QWORD *)(v11 + 480);
  v45 = *(_OWORD *)(v17 + 64);
  v36 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v13;
  v18 = 0LL;
  if ( a1 )
    v18 = *a1;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v18;
  if ( a1 )
    v9 = *(_QWORD *)(a1[5] + 224);
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v9;
  v19 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v18, v14, v15, v16);
  v25 = 0;
  if ( ExIsResourceAcquiredExclusiveLite(*v19) != 1 )
  {
    v24 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v21, v20, v22, v23);
    if ( ExIsResourceAcquiredSharedLite(*v24) )
      v25 = 1;
  }
  UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
  EtwTraceBeginCallback(2LL);
  v26 = KeUserModeCallback(2LL, &v37, 48LL, &v50, &v49);
  EtwTraceEndCallback(2LL);
  if ( v25 )
    EnterSharedCrit(v28, v27, v29);
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v31, v30, v32);
  v33 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v33 + 64) = v45;
  *(_QWORD *)(v33 + 80) = v36;
  if ( v26 < 0 || v49 != 24 )
    return 0LL;
  v34 = (__int64 *)v50;
  if ( v50 + 8 < v50 || v50 + 8 > MmUserProbeAddress )
    v34 = (__int64 *)MmUserProbeAddress;
  result = *v34;
  v44 = result;
  return result;
}
