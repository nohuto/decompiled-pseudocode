/*
 * XREFs of ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0049D3C
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00490C0 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00E3758 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 * Callees:
 *     ?HasFallbackInteractionSink@@YAHPEBUtagWND@@@Z @ 0x1C000DC88 (-HasFallbackInteractionSink@@YAHPEBUtagWND@@@Z.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0049E70 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z @ 0x1C0049F70 (-IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004A174 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall IsCompositionInputWindowForHitTest(struct tagWND *a1)
{
  unsigned int v2; // edi
  __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 Prop; // rsi
  int v8; // r14d
  tagObjLock **v9; // rsi
  __int128 v10; // [rsp+48h] [rbp-28h] BYREF
  char v11; // [rsp+58h] [rbp-18h]
  char v12; // [rsp+60h] [rbp-10h]

  v2 = IsCompositionInputWindow(a1);
  if ( !(unsigned int)IsWindowHolographicForHitTest(a1) )
  {
    if ( !v2 )
      return v2;
    if ( a1 )
    {
      if ( (*((_DWORD *)a1 + 80) & 0x1000) == 0 )
        goto LABEL_11;
      v4 = *((_QWORD *)a1 + 18);
      v5 = CoreWindowProp::s_atom;
      v10 = 0LL;
      v11 = 0;
      v12 = 0;
      if ( !IS_USERCRIT_OWNED_EXCLUSIVE() && IS_USERCRIT_OWNED_AT_ALL(v6) )
      {
        v12 = 1;
        if ( v4 == gObjDummyLock )
          v4 = 0LL;
        *(_QWORD *)&v10 = v4;
        v8 = 0;
        v9 = (tagObjLock **)&v10;
        do
        {
          if ( *v9 )
            tagObjLock::LockExclusive(*v9);
          ++v8;
          ++v9;
        }
        while ( !v8 );
        v11 = 1;
      }
      Prop = RealGetProp(*((_QWORD *)a1 + 18), v5, 1LL);
      if ( v12 && v11 )
      {
        if ( (_QWORD)v10 )
          tagObjLock::UnLockExclusive((tagObjLock *)v10);
        v11 = 0;
      }
      if ( Prop && *(_DWORD *)(Prop + 28) )
        return 1LL;
    }
    if ( (*((_DWORD *)a1 + 80) & 0x1000) != 0 )
      return 0LL;
LABEL_11:
    if ( (unsigned int)HasFallbackInteractionSink(a1) )
      return 0;
    return v2;
  }
  return 1LL;
}
