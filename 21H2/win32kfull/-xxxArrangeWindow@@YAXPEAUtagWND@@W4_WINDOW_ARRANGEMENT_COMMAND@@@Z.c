/*
 * XREFs of ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020D62C
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00C1918 (xxxProcessEventMessage.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DF30 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C0223D04 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C004B630 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BFD00 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?DisableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C016974C (-DisableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 *     ?TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C01697D8 (-TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C020A774 (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C020AE2C (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020CEC0 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C020ECE4 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0223BA8 (-WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 */

void __fastcall xxxArrangeWindow(__int64 a1, int a2)
{
  __int64 v2; // rdi
  unsigned int v4; // eax
  unsigned int v5; // esi
  unsigned int v6; // edi
  int v7; // r12d
  __int64 v8; // r15
  struct _MOVESIZEDATA *v9; // r14
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v11[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+40h] [rbp-C0h]
  __int128 v13; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h]
  _QWORD v15[44]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = a2;
  if ( WindowArrangementAllowed((struct tagWND *)a1)
    && (unsigned int)(v2 - 16) <= 7
    && (*(_DWORD *)*gpDispInfo > 1u || (unsigned int)(v2 - 22) > 1)
    && ((_DWORD)v2 != 18
     || !ShellWindowManagement::BehaviorEnabled(*(ShellWindowManagement **)(a1 + 24), (const struct tagDESKTOP *)2)) )
  {
    v4 = EvaluateArrangeState(a1);
    v5 = v4;
    if ( v4 != 6 )
    {
      v6 = *(_DWORD *)&asc_1C02F7210[24 * v2 - 384 + 4 * (int)v4];
      if ( v6 != 8 )
      {
        if ( (unsigned int)ArrangeActionCompatibleWithStyle(a1, v6) )
        {
          v7 = 0;
          v10 = 0;
          memset(v15, 0, 0x158uLL);
          v8 = 0LL;
          v14 = 0LL;
          v9 = 0LL;
          v11[0] = 0;
          v12 = 0LL;
          v13 = 0LL;
          if ( v6 - 3 <= 4 )
          {
            v9 = (struct _MOVESIZEDATA *)v15;
            if ( *(__int64 **)(gActiveMoveSizeDataList + 8) != &gActiveMoveSizeDataList )
              __fastfail(3u);
            v15[1] = &gActiveMoveSizeDataList;
            v15[0] = gActiveMoveSizeDataList;
            *(_QWORD *)(gActiveMoveSizeDataList + 8) = v15;
            gActiveMoveSizeDataList = (__int64)v15;
            PushW32ThreadLock((__int64)v15, &v13, (__int64)EditionRemoveFromMsdList);
            CKernelStackSwap::DisableStackSwap((CKernelStackSwap *)v11);
            xxxInitializeMoveSizeDataProgrammaticArrangement(a1, v6, v5, 0LL, v15, &v10);
            v7 = v10;
            v8 = v12;
          }
          xxxApplyArrangeAction((struct tagWND *)a1, v5, v6, v7, v9);
          if ( v9 )
            PopAndFreeAlwaysW32ThreadLock((__int64)&v13);
          if ( v8 )
            CKernelStackSwap::TryEnableStackSwap((CKernelStackSwap *)v11);
        }
      }
    }
  }
}
