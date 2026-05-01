/*
 * XREFs of ?GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAI@Z @ 0x1803B8EC0
 * Callers:
 *     ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x1803D09E8 (-ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Interna.c)
 *     ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x1803D0B5C (-ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@U.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18028ECB4 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _lambda_3e53f08b81f91dd8dc90e3c0055f1792_::operator() @ 0x1803B7744 (_lambda_3e53f08b81f91dd8dc90e3c0055f1792_--operator().c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall TouchKeyboardExperienceManager::GetApplicationViewIdIfExists(
        RTL_SRWLOCK *this,
        int a2,
        unsigned int *a3)
{
  RTL_SRWLOCK *v6; // rsi
  KBViewInfo **Ptr; // rdi
  KBViewInfo **v8; // rbx
  char v9; // bl
  std::_Ref_count_base *v11[2]; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+58h] [rbp+10h] BYREF

  *a3 = -1;
  v6 = this + 52;
  AcquireSRWLockShared(this + 52);
  *(_OWORD *)v11 = 0LL;
  Ptr = (KBViewInfo **)this[53].Ptr;
  v12 = a2;
  v8 = (KBViewInfo **)this[54].Ptr;
  while ( Ptr != v8 && !lambda_3e53f08b81f91dd8dc90e3c0055f1792_::operator()((unsigned __int8 *)&v12, Ptr) )
    Ptr += 2;
  if ( Ptr == this[54].Ptr )
  {
    v9 = 0;
  }
  else
  {
    std::shared_ptr<PeoplePaneViewInfo>::operator=(v11, Ptr);
    *a3 = *((_DWORD *)v11[0] + 26);
    v9 = 1;
  }
  if ( v11[1] )
    std::_Ref_count_base::_Decref(v11[1]);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v9;
}
