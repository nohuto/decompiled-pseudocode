/*
 * XREFs of NtUserCallNextHookEx @ 0x1C0154060
 * Callers:
 *     <none>
 * Callees:
 *     xxxCallNextHookEx @ 0x1C000A1E4 (xxxCallNextHookEx.c)
 *     ?NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z @ 0x1C0153BA0 (-NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z @ 0x1C0153C2A (-NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z.c)
 *     ?NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z @ 0x1C0153CC4 (-NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z.c)
 *     ?NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z @ 0x1C0153DD0 (-NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z @ 0x1C01CC1B0 (-NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C01CC208 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z.c)
 *     ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z @ 0x1C01CC47C (-NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z.c)
 *     ?NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z @ 0x1C01CC54C (-NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z.c)
 *     ?NtUserfnHkOPTINLPEVENTMSG@@YA_JK_KPEAUtagEVENTMSG@@@Z @ 0x1C01CC5C4 (-NtUserfnHkOPTINLPEVENTMSG@@YA_JK_KPEAUtagEVENTMSG@@@Z.c)
 */

__int64 __fastcall NtUserCallNextHookEx(unsigned int a1, unsigned __int64 a2, struct tagMSLLHOOKSTRUCT *a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rax
  struct tagRECT *v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx

  EnterCrit(0LL, 0LL);
  v12 = 0LL;
  v13 = *(_QWORD *)(gptiCurrent + 688LL);
  if ( !v13 )
    goto LABEL_34;
  v9 = *(unsigned int *)(v13 + 48);
  if ( (int)v9 > 6 )
  {
    v18 = v9 - 7;
    if ( !v18 )
      goto LABEL_32;
    v19 = v18 - 2;
    if ( !v19 )
    {
      v16 = NtUserfnHkINLPDEBUGHOOKSTRUCT(a1, a2, a3);
      goto LABEL_33;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      v14 = (struct tagRECT *)a3;
      v15 = a2;
      if ( a1 != 5 )
        goto LABEL_14;
      v17 = 5;
      goto LABEL_18;
    }
    v21 = v20 - 1;
    if ( v21 )
    {
      v9 = (unsigned int)(v21 - 2);
      if ( !(_DWORD)v9 )
      {
        v16 = NtUserfnHkINLPKBDLLHOOKSTRUCT(a1, a2, a3);
        goto LABEL_33;
      }
      if ( (_DWORD)v9 == 1 )
      {
        v16 = NtUserfnHkINLPMSLLHOOKSTRUCT(a1, a2, a3);
        goto LABEL_33;
      }
      goto LABEL_34;
    }
    goto LABEL_13;
  }
  if ( (_DWORD)v9 == 6 || (_DWORD)v9 == -1 )
    goto LABEL_20;
  if ( (unsigned int)v9 < 2 )
  {
    v16 = NtUserfnHkOPTINLPEVENTMSG(a1, a2, a3);
    goto LABEL_33;
  }
  switch ( (_DWORD)v9 )
  {
    case 2:
LABEL_13:
      v14 = (struct tagRECT *)a3;
      v15 = a2;
LABEL_14:
      v16 = xxxCallNextHookEx(a1, v15, (__int64)v14);
LABEL_33:
      v12 = v16;
      break;
    case 3:
LABEL_20:
      v16 = NtUserfnHkINLPMSG(v9, a1, a2, a3);
      goto LABEL_33;
    case 5:
      if ( a1 )
      {
        if ( a1 == 3 )
        {
          v16 = NtUserfnHkINLPCBTCREATESTRUCT(3u, a2, a3, a4);
          goto LABEL_33;
        }
        if ( a1 == 5 )
        {
          v16 = NtUserfnHkINLPCBTACTIVATESTRUCT(5u, a2, a3);
          goto LABEL_33;
        }
        if ( a1 != 6 )
          goto LABEL_13;
LABEL_32:
        v16 = NtUserfnHkINLPMOUSEHOOKSTRUCTEX(a1, a2, a3);
        goto LABEL_33;
      }
      v14 = (struct tagRECT *)a3;
      v15 = a2;
      v17 = 0;
LABEL_18:
      v16 = NtUserfnHkINLPRECT(v17, v15, v14);
      goto LABEL_33;
  }
LABEL_34:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v12;
}
