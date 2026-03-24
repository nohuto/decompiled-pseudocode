/*
 * XREFs of xxxCallCtfHook @ 0x1C0052914
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055720 (xxxRealInternalGetMessage.c)
 *     xxxDestroyWindow @ 0x1C007DCA0 (xxxDestroyWindow.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C2120 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     fnHkINDWORD @ 0x1C005147C (fnHkINDWORD.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B900 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     fnHkINLPMSG @ 0x1C005D100 (fnHkINLPMSG.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C0118118 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C015C9DC (fnHkINLPCBTACTIVATESTRUCT.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall xxxCallCtfHook(int a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rbx
  int v9; // r14d
  __int16 v10; // r13
  struct _KTHREAD *v11; // rcx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  __int64 v16; // r8
  int v19; // [rsp+40h] [rbp-78h] BYREF
  __int64 v20[3]; // [rsp+48h] [rbp-70h] BYREF
  int v21; // [rsp+60h] [rbp-58h]
  int v22; // [rsp+64h] [rbp-54h]

  v4 = 0;
  v5 = a1;
  v9 = (unsigned __int16)a2 | ((unsigned __int16)a1 << 16);
  v19 = 0;
  v10 = 0;
  if ( gpsi )
  {
    if ( *(_QWORD *)(gpsi + 856LL) )
    {
      if ( gptiCurrent != gptiRit && (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000000D) == 0 )
      {
        if ( *(_QWORD *)(gptiCurrent + 456LL) )
        {
          if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x400) == 0
            || (v11 = (struct _KTHREAD *)*gptiCurrent,
                v22 = 0,
                v20[0] = (unsigned int)PsGetThreadId(v11),
                v21 = a2,
                v20[2] = a3,
                v20[1] = a4,
                !(unsigned int)xxxCallHook(0, v5, (__int64)v20, 9)) )
          {
            v12 = v5 - 2;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( !v13 )
                return (unsigned int)fnHkINLPMSG(v9, a3, a4, 0, *(_QWORD *)(gpsi + 856LL), 0, (__int64)&v19);
              v14 = v13 - 2;
              if ( v14 )
              {
                v15 = v14 - 2;
                if ( v15 )
                {
                  if ( v15 != 3 || a2 == 5 )
                    return v4;
                  goto LABEL_14;
                }
                return (unsigned int)fnHkINLPMOUSEHOOKSTRUCTEX(v9, a3, a4, 0, *(_QWORD *)(gpsi + 856LL), (__int64)&v19);
              }
              if ( a2 == 5 )
                return (unsigned int)fnHkINLPCBTACTIVATESTRUCT(v9, a3, a4, 0, *(_QWORD *)(gpsi + 856LL));
            }
LABEL_14:
            v16 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 440);
            if ( v16 )
              v10 = InternalMapVirtualKeyEx((unsigned int)a3, 0LL, *(_QWORD *)(*(_QWORD *)(v16 + 48) + 32LL));
            if ( a3 == 231 && !(_BYTE)v10 && (v10 & 0x8000) == 0 )
              a3 = (*(unsigned __int16 *)(gptiCurrent + 874LL) << 16) | 0xE7;
            return (unsigned int)fnHkINDWORD(v9, a3, a4, 0LL, *(_QWORD *)(gpsi + 856LL), &v19);
          }
        }
      }
    }
  }
  return 0LL;
}
