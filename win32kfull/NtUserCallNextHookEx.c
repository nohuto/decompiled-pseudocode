/*
 * XREFs of NtUserCallNextHookEx @ 0x1C0147340
 * Callers:
 *     <none>
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0009C64 (xxxCallNextHookEx.c)
 *     ?NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z @ 0x1C0146E80 (-NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z @ 0x1C0146F0A (-NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z.c)
 *     ?NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z @ 0x1C0146FA4 (-NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z.c)
 *     ?NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z @ 0x1C01470B0 (-NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z @ 0x1C01CD20C (-NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C01CD264 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z.c)
 *     ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z @ 0x1C01CD4D8 (-NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z.c)
 *     ?NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z @ 0x1C01CD5A8 (-NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z.c)
 *     ?NtUserfnHkOPTINLPEVENTMSG@@YA_JK_KPEAUtagEVENTMSG@@@Z @ 0x1C01CD620 (-NtUserfnHkOPTINLPEVENTMSG@@YA_JK_KPEAUtagEVENTMSG@@@Z.c)
 */

__int64 __fastcall NtUserCallNextHookEx(unsigned int a1, unsigned __int64 a2, struct tagMSLLHOOKSTRUCT *a3, int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  struct tagRECT *v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx

  EnterCrit(0LL, 0LL);
  v9 = 0LL;
  v10 = *(_QWORD *)(gptiCurrent + 688LL);
  if ( !v10 )
    goto LABEL_34;
  v8 = *(unsigned int *)(v10 + 48);
  if ( (int)v8 > 6 )
  {
    v15 = v8 - 7;
    if ( !v15 )
      goto LABEL_32;
    v16 = v15 - 2;
    if ( !v16 )
    {
      v13 = NtUserfnHkINLPDEBUGHOOKSTRUCT(a1, a2, a3);
      goto LABEL_33;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      v11 = (struct tagRECT *)a3;
      v12 = a2;
      if ( a1 != 5 )
        goto LABEL_14;
      v14 = 5;
      goto LABEL_18;
    }
    v18 = v17 - 1;
    if ( v18 )
    {
      v8 = (unsigned int)(v18 - 2);
      if ( !(_DWORD)v8 )
      {
        v13 = NtUserfnHkINLPKBDLLHOOKSTRUCT(a1, a2, a3);
        goto LABEL_33;
      }
      if ( (_DWORD)v8 == 1 )
      {
        v13 = NtUserfnHkINLPMSLLHOOKSTRUCT(a1, a2, a3);
        goto LABEL_33;
      }
      goto LABEL_34;
    }
    goto LABEL_13;
  }
  if ( (_DWORD)v8 == 6 || (_DWORD)v8 == -1 )
    goto LABEL_20;
  if ( (unsigned int)v8 < 2 )
  {
    v13 = NtUserfnHkOPTINLPEVENTMSG(a1, a2, a3);
    goto LABEL_33;
  }
  switch ( (_DWORD)v8 )
  {
    case 2:
LABEL_13:
      v11 = (struct tagRECT *)a3;
      v12 = a2;
LABEL_14:
      v13 = xxxCallNextHookEx(a1, v12, (__int64)v11);
LABEL_33:
      v9 = v13;
      break;
    case 3:
LABEL_20:
      v13 = NtUserfnHkINLPMSG(v8, a1, a2, a3);
      goto LABEL_33;
    case 5:
      if ( a1 )
      {
        if ( a1 == 3 )
        {
          v13 = NtUserfnHkINLPCBTCREATESTRUCT(3u, a2, a3, a4);
          goto LABEL_33;
        }
        if ( a1 == 5 )
        {
          v13 = NtUserfnHkINLPCBTACTIVATESTRUCT(5u, a2, a3);
          goto LABEL_33;
        }
        if ( a1 != 6 )
          goto LABEL_13;
LABEL_32:
        v13 = NtUserfnHkINLPMOUSEHOOKSTRUCTEX(a1, a2, a3);
        goto LABEL_33;
      }
      v11 = (struct tagRECT *)a3;
      v12 = a2;
      v14 = 0;
LABEL_18:
      v13 = NtUserfnHkINLPRECT(v14, v12, v11);
      goto LABEL_33;
  }
LABEL_34:
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
