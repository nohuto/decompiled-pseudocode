/*
 * XREFs of fnHkINLPMSG @ 0x1C0076120
 * Callers:
 *     xxxHkCallHook @ 0x1C0053C4C (xxxHkCallHook.c)
 *     xxxCallCtfHook @ 0x1C0075F08 (xxxCallCtfHook.c)
 *     ?CallfnHkINLPMSG@@YA_JHH_K_JP6A_JXZPEAU_PFNCLIENT@@K@Z @ 0x1C0140CEC (-CallfnHkINLPMSG@@YA_JHH_K_JP6A_JXZPEAU_PFNCLIENT@@K@Z.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C014FA38 (RtlWCSMessageWParamCharToMB.c)
 *     _FreeTouchInputInfo @ 0x1C01D7140 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C0221710 (_FreeGestureInfo.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C025A63C (RtlMBMessageWParamCharToWCS.c)
 */

__int64 __fastcall fnHkINLPMSG(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5, int a6, _DWORD *a7)
{
  char v9; // bl
  __int64 v10; // r12
  __int64 v11; // r15
  unsigned int v12; // r14d
  __int64 v13; // rcx
  int v14; // r13d
  __int64 *v15; // rcx
  __int64 v16; // r13
  ULONG64 v17; // rcx
  __int128 *v18; // xmm0_8
  __int64 v19; // rcx
  int v20; // edx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 ThreadWin32Thread; // rax
  _QWORD *v25; // rdx
  __int64 v26; // [rsp+38h] [rbp-F0h]
  _DWORD v27[2]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-D0h]
  __int128 v29; // [rsp+60h] [rbp-C8h]
  __int128 v30; // [rsp+70h] [rbp-B8h]
  _OWORD v31[2]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-88h]
  __int64 v33; // [rsp+B0h] [rbp-78h]
  __int128 v34; // [rsp+C8h] [rbp-60h]
  volatile void *Address; // [rsp+D8h] [rbp-50h]
  __int128 v36; // [rsp+E0h] [rbp-48h]
  __int128 *v37; // [rsp+F0h] [rbp-38h]
  int v38; // [rsp+130h] [rbp+8h] BYREF
  unsigned __int64 v39; // [rsp+138h] [rbp+10h] BYREF
  __int64 v40; // [rsp+140h] [rbp+18h]

  v9 = 0;
  v39 = 0LL;
  v38 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v40 = 0LL;
  v26 = 0LL;
  v27[1] = 0;
  v29 = 0LL;
  v32 = 0LL;
  v27[0] = a1;
  v28 = a2;
  *((_DWORD *)a3 + 3) = 0;
  *((_DWORD *)a3 + 11) = 0;
  v30 = *a3;
  v31[0] = a3[1];
  v31[1] = a3[2];
  v12 = *((_DWORD *)a3 + 2);
  if ( ((v12 - 258) & 0xFFFFFFFB) != 0 || !a6 )
  {
    if ( v12 == 576 || ((v12 - 281) & 0xFFFFFFFD) == 0 )
    {
      v10 = *((_QWORD *)a3 + 2);
      v11 = *((_QWORD *)a3 + 3);
      v22 = HMValidateHandle(v11, 0xFFu);
      v23 = v22;
      if ( !v22
        || *((_DWORD *)a3 + 2) == 576 && *(_BYTE *)(_HMPheFromObject(v22) + 24) != 20
        || ((*((_DWORD *)a3 + 2) - 281) & 0xFFFFFFFD) == 0 && *(_BYTE *)(_HMPheFromObject(v23) + 24) != 21 )
      {
        return 0LL;
      }
      v40 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 704);
      v26 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 712);
      *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 704) = v11;
      *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 712) = v10;
      v9 = 0;
    }
  }
  else
  {
    v10 = *((_QWORD *)a3 + 2);
    RtlWCSMessageWParamCharToMB(v12, v31);
  }
  *(_QWORD *)&v29 = a4;
  *((_QWORD *)&v29 + 1) = a5;
  LODWORD(v32) = *a7;
  if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser) )
    v9 = 1;
  UserSessionSwitchLeaveCrit(v13);
  EtwTraceBeginCallback(47LL);
  v14 = KeUserModeCallback(47LL, v27, 88LL, &v39, &v38);
  EtwTraceEndCallback(47LL);
  if ( v9 )
    EnterSharedCrit();
  else
    EnterCrit(0LL, 0LL);
  if ( v12 == 576 || ((v12 - 281) & 0xFFFFFFFD) == 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(ThreadWin32Thread + 704) = v40;
    *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 712) = v26;
  }
  if ( v14 < 0 || v38 != 24 )
    return 0LL;
  v15 = (__int64 *)v39;
  if ( v39 + 8 < v39 || v39 + 8 > MmUserProbeAddress )
    v15 = (__int64 *)MmUserProbeAddress;
  v16 = *v15;
  v33 = *v15;
  v17 = v39;
  if ( v39 + 24 < v39 || v39 + 24 > MmUserProbeAddress )
    v17 = MmUserProbeAddress;
  v34 = *(_OWORD *)v17;
  v18 = *(__int128 **)(v17 + 16);
  Address = v18;
  v36 = v34;
  v37 = v18;
  ProbeForRead(v18, 0x38uLL, 4u);
  *a3 = *v18;
  a3[1] = v18[1];
  a3[2] = v18[2];
  *a7 ^= ((unsigned __int8)*a7 ^ (unsigned __int8)*((_DWORD *)v18 + 12)) & 0x10;
  v19 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v19 == 258 || (v20 = *((_DWORD *)a3 + 2), (_DWORD)v19 == 262) )
  {
    v20 = *((_DWORD *)a3 + 2);
    if ( a6 )
    {
      v25 = a3 + 1;
      if ( *(_QWORD *)&v31[0] == *((_QWORD *)a3 + 2) )
      {
        *v25 = v10;
        v20 = v19;
      }
      else
      {
        RtlMBMessageWParamCharToWCS(v19, v25);
        v20 = *((_DWORD *)a3 + 2);
      }
    }
  }
  if ( v20 == 576 || ((v20 - 281) & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)a3 + 2) = v12;
    *((_QWORD *)a3 + 2) = v10;
    *((_QWORD *)a3 + 3) = v11;
  }
  else if ( v10 == 1 )
  {
    if ( v12 == 576 )
      FreeTouchInputInfo(v11, v12 - 576 + 1);
    if ( ((v12 - 281) & 0xFFFFFFFD) == 0 )
      FreeGestureInfo(v11, 1LL);
  }
  return v16;
}
