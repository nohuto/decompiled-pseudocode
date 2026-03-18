/*
 * XREFs of SfnINLPWINDOWPOS @ 0x1C006AA10
 * Callers:
 *     <none>
 * Callees:
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C006D934 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall SfnINLPWINDOWPOS(__int64 *a1, int a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  bool v18; // bl
  __int64 v19; // rcx
  int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 result; // rax
  __int64 v27; // [rsp+58h] [rbp-D0h]
  _QWORD v28[7]; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v29; // [rsp+98h] [rbp-90h]
  __int64 v30; // [rsp+B0h] [rbp-78h] BYREF
  int v31; // [rsp+B8h] [rbp-70h]
  int v32; // [rsp+BCh] [rbp-6Ch]
  __int64 v33; // [rsp+C0h] [rbp-68h]
  __int128 v34; // [rsp+C8h] [rbp-60h]
  __int128 v35; // [rsp+D8h] [rbp-50h]
  __int64 v36; // [rsp+E8h] [rbp-40h]
  __int64 v37; // [rsp+F0h] [rbp-38h]
  __int64 v38; // [rsp+F8h] [rbp-30h]
  unsigned __int64 v39; // [rsp+130h] [rbp+8h] BYREF
  int v40; // [rsp+138h] [rbp+10h] BYREF

  v39 = 0LL;
  v40 = 0;
  v28[2] = 0LL;
  v10 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v10 = *ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(v10 + 472);
  else
    v12 = 0LL;
  v32 = 0;
  v30 = v12;
  v31 = a2;
  v33 = a3;
  *((_DWORD *)a4 + 9) = 0;
  v34 = *a4;
  v35 = a4[1];
  v36 = *((_QWORD *)a4 + 4);
  v37 = a5;
  v38 = a6;
  v13 = 0LL;
  v14 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v14 )
    v13 = *v14;
  v28[0] = *(_QWORD *)(v13 + 416);
  *(_QWORD *)(v13 + 416) = v28;
  v28[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v15 = *(_QWORD *)(v10 + 480);
  v29 = *(_OWORD *)(v15 + 64);
  v27 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v12;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v10 + 480) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(a1[5] + 224);
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v10 + 480) + 80LL) = v17;
  v18 = (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() != 0;
  UserSessionSwitchLeaveCrit(v19);
  EtwTraceBeginCallback(17LL);
  v20 = KeUserModeCallback(17LL, &v30, 80LL, &v39, &v40);
  EtwTraceEndCallback(17LL);
  if ( v18 )
    EnterSharedCrit();
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v22, v21, v23);
  v24 = *(_QWORD *)(v10 + 480);
  *(_OWORD *)(v24 + 64) = v29;
  *(_QWORD *)(v24 + 80) = v27;
  if ( v20 < 0 || v40 != 24 )
    return 0LL;
  v25 = (__int64 *)v39;
  if ( v39 + 8 < v39 || v39 + 8 > MmUserProbeAddress )
    v25 = (__int64 *)MmUserProbeAddress;
  result = *v25;
  v28[3] = *v25;
  return result;
}
