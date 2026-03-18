/*
 * XREFs of xxxCallCtfHook @ 0x1C00A0F14
 * Callers:
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C0008F78 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     fnHkINDWORD @ 0x1C00A10A8 (fnHkINDWORD.c)
 *     fnHkINLPCHARHOOKSTRUCT @ 0x1C00A1208 (fnHkINLPCHARHOOKSTRUCT.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     fnHkINLPMSG @ 0x1C0124E30 (fnHkINLPMSG.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C02102D8 (fnHkINLPCBTACTIVATESTRUCT.c)
 */

__int64 __fastcall xxxCallCtfHook(int a1, int a2, __int64 a3, __int128 *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  int v9; // ebp
  __int16 v10; // r12
  int v11; // edi
  int v12; // edi
  int v13; // edi
  __int64 v16; // r8
  int v17; // r9d
  struct _KTHREAD *v18; // rcx
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
            || (v18 = (struct _KTHREAD *)*gptiCurrent,
                v22 = 0,
                v20[0] = (unsigned int)PsGetThreadId(v18),
                v21 = a2,
                v20[2] = a3,
                v20[1] = (__int64)a4,
                !(unsigned int)xxxCallHook(0, v5, (__int64)v20, 9)) )
          {
            v11 = v5 - 2;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( v12 )
              {
                v13 = v12 - 2;
                if ( v13 )
                {
                  if ( v13 != 2 )
                    return v4;
                  return (unsigned int)fnHkINLPMOUSEHOOKSTRUCTEX(v9, a3, a4, 0LL, *(_QWORD *)(gpsi + 856LL), &v19);
                }
                else if ( a2 == 5 )
                {
                  return (unsigned int)fnHkINLPCBTACTIVATESTRUCT(v9, a3, (_DWORD)a4, 0, *(_QWORD *)(gpsi + 856LL));
                }
                else
                {
                  return (unsigned int)fnHkINDWORD(v9, a3, (_DWORD)a4, 0, *(_QWORD *)(gpsi + 856LL), (__int64)&v19);
                }
              }
              else
              {
                return (unsigned int)fnHkINLPMSG(v9, a3, (_DWORD)a4, 0, *(_QWORD *)(gpsi + 856LL), 0, (__int64)&v19);
              }
            }
            else
            {
              v16 = *((_QWORD *)PtiCurrentShared() + 55);
              if ( v16 )
                v10 = InternalMapVirtualKeyEx((unsigned int)a3, 0LL, *(_QWORD *)(*(_QWORD *)(v16 + 48) + 32LL));
              if ( a3 == 231 && !(_BYTE)v10 && (v10 & 0x8000) == 0 )
                LODWORD(a3) = (*(unsigned __int16 *)(gptiCurrent + 882LL) << 16) | 0xE7;
              return (unsigned int)fnHkINLPCHARHOOKSTRUCT(v9, a3, (_DWORD)a4, v17, *(_QWORD *)(gpsi + 856LL));
            }
          }
        }
      }
    }
  }
  return 0LL;
}
