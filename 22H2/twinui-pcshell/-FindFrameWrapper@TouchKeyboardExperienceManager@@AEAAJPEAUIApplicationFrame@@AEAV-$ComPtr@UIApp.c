/*
 * XREFs of ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x1803B895C
 * Callers:
 *     _lambda_5fc35d1030d0241eeb48d222f7d22fe1_::operator() @ 0x1800CF6DC (_lambda_5fc35d1030d0241eeb48d222f7d22fe1_--operator().c)
 *     _lambda_f61fa834658c673f1bf417ab36d33a49_::operator() @ 0x1800CFB1C (_lambda_f61fa834658c673f1bf417ab36d33a49_--operator().c)
 *     _lambda_f68384705a080bb04b4187854264e75d_::operator() @ 0x1800CFD58 (_lambda_f68384705a080bb04b4187854264e75d_--operator().c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x1803BC58C (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1803BC9D0 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x1803BCB80 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1803BDB60 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800C7290 (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x1803BBA60 (-IsValid@KBViewInfo@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::FindFrameWrapper(RTL_SRWLOCK *a1, __int64 a2, __int64 *a3)
{
  RTL_SRWLOCK *v6; // rdi
  KBViewInfo **Ptr; // rbx
  KBViewInfo **v8; // rbp
  unsigned int v9; // ebx

  v6 = a1 + 52;
  AcquireSRWLockShared(a1 + 52);
  Ptr = (KBViewInfo **)a1[53].Ptr;
  v8 = (KBViewInfo **)a1[54].Ptr;
  while ( Ptr != v8
       && (!KBViewInfo::IsValid(*Ptr)
        || (*(unsigned int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)*Ptr + 1) + 24LL))(*((_QWORD *)*Ptr + 1), a2) != 1) )
    Ptr += 2;
  if ( Ptr == a1[54].Ptr )
  {
    v9 = -2147023728;
  }
  else
  {
    Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(a3, (__int64 *)*Ptr + 1);
    v9 = 0;
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v9;
}
