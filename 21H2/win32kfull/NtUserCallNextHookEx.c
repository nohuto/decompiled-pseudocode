/*
 * XREFs of NtUserCallNextHookEx @ 0x1C01406C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxCallNextHookEx @ 0x1C00EA54C (xxxCallNextHookEx.c)
 *     ?NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z @ 0x1C014078C (-NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z.c)
 *     ?NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z @ 0x1C016C9A0 (-NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z @ 0x1C01F0A50 (-NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C01F0AA8 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z.c)
 *     ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z @ 0x1C01F0D18 (-NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z.c)
 *     ?NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z @ 0x1C01F0DE8 (-NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z.c)
 *     ?NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z @ 0x1C01F0E84 (-NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z @ 0x1C01F0F0C (-NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z.c)
 *     ?NtUserfnHkOPTINLPEVENTMSG@@YA_JK_KPEAUtagEVENTMSG@@@Z @ 0x1C01F0F84 (-NtUserfnHkOPTINLPEVENTMSG@@YA_JK_KPEAUtagEVENTMSG@@@Z.c)
 */

__int64 __fastcall NtUserCallNextHookEx(unsigned int a1, unsigned __int64 a2, struct tagDEBUGHOOKINFO *a3, int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  struct tagRECT *v13; // r8
  unsigned __int64 v14; // rdx
  unsigned int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx

  EnterCrit(0LL, 0LL);
  v9 = 0LL;
  v10 = *(_QWORD *)(gptiCurrent + 688LL);
  if ( v10 )
  {
    v8 = *(unsigned int *)(v10 + 48);
    if ( (int)v8 > 7 )
    {
      v16 = v8 - 9;
      if ( !v16 )
      {
        v11 = NtUserfnHkINLPDEBUGHOOKSTRUCT(a1, a2, a3);
        goto LABEL_6;
      }
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v8 = (unsigned int)(v18 - 2);
          if ( (_DWORD)v8 )
          {
            if ( (_DWORD)v8 != 1 )
              goto LABEL_7;
            v11 = NtUserfnHkINLPMSLLHOOKSTRUCT(a1, a2, a3);
          }
          else
          {
            v11 = NtUserfnHkINLPKBDLLHOOKSTRUCT(a1, a2, a3);
          }
          goto LABEL_6;
        }
        goto LABEL_11;
      }
      v13 = (struct tagRECT *)a3;
      v14 = a2;
      if ( a1 != 5 )
        goto LABEL_12;
      v15 = 5;
    }
    else
    {
      if ( (_DWORD)v8 == 7 )
      {
LABEL_21:
        v11 = NtUserfnHkINLPMOUSEHOOKSTRUCTEX(a1, a2, a3);
        goto LABEL_6;
      }
      if ( (_DWORD)v8 == -1 )
      {
LABEL_5:
        v11 = NtUserfnHkINLPMSG(v8, a1, a2, a3);
LABEL_6:
        v9 = v11;
        goto LABEL_7;
      }
      if ( (int)v8 < 0 )
        goto LABEL_7;
      if ( (int)v8 <= 1 )
      {
        v11 = NtUserfnHkOPTINLPEVENTMSG(a1, a2, a3);
        goto LABEL_6;
      }
      if ( (_DWORD)v8 == 2 )
        goto LABEL_11;
      if ( (_DWORD)v8 == 3 )
        goto LABEL_5;
      if ( (_DWORD)v8 != 5 )
      {
        if ( (_DWORD)v8 != 6 )
          goto LABEL_7;
        goto LABEL_5;
      }
      if ( a1 )
      {
        switch ( a1 )
        {
          case 3u:
            v11 = NtUserfnHkINLPCBTCREATESTRUCT(3u, a2, a3, a4);
            goto LABEL_6;
          case 5u:
            v11 = NtUserfnHkINLPCBTACTIVATESTRUCT(5u, a2, a3);
            goto LABEL_6;
          case 6u:
            goto LABEL_21;
        }
LABEL_11:
        v13 = (struct tagRECT *)a3;
        v14 = a2;
LABEL_12:
        v11 = xxxCallNextHookEx(a1, v14, (__int64)v13);
        goto LABEL_6;
      }
      v13 = (struct tagRECT *)a3;
      v14 = a2;
      v15 = 0;
    }
    v11 = NtUserfnHkINLPRECT(v15, v14, v13);
    goto LABEL_6;
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
