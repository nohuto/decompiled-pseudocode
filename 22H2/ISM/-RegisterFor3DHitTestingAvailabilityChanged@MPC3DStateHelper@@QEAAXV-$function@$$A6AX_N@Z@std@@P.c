/*
 * XREFs of ?RegisterFor3DHitTestingAvailabilityChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x1800209D8
 * Callers:
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x180020E84 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 * Callees:
 *     ??4?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x180020B18 (--4-$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x18003649C (--$_Try_emplace@AEBI$$V@-$map@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocator@U-$pair@$$CB.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A54 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPC3DStateHelper::RegisterFor3DHitTestingAvailabilityChanged(
        PSRWLOCK SRWLock,
        __int64 a2,
        _DWORD *a3)
{
  int Ptr; // ecx
  _QWORD v8[3]; // [rsp+28h] [rbp-40h] BYREF

  v8[2] = a2;
  AcquireSRWLockExclusive(SRWLock);
  Ptr = (int)SRWLock[2].Ptr;
  LODWORD(SRWLock[2].Ptr) = Ptr + 1;
  *a3 = Ptr;
  std::map<unsigned int,std::function<void (bool)>>::_Try_emplace<unsigned int const &,>(&SRWLock[6], v8, a3);
  std::function<void (bool)>::operator=(v8[0] + 40LL, a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a2);
}
