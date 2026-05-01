/*
 * XREFs of ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180031E80
 * Callers:
 *     ?StartActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180031C90 (-StartActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180031DA0 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle.c)
 *     ?zInternalStop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180031E38 (-zInternalStop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflec.c)
 *     ?StopActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1800321C0 (-StopActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800331FC (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag.c)
 *     ?NotifyFailure@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1804E3B70 (-NotifyFailure@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflec.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
        __int64 a1,
        RTL_SRWLOCK **a2)
{
  RTL_SRWLOCK *v3; // rdi
  PSRWLOCK *p_SRWLock; // rax
  char v5; // bl
  PSRWLOCK v7; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v7) = 0;
  v3 = *(RTL_SRWLOCK **)(a1 + 304);
  if ( v3 )
  {
    v3 += 31;
    AcquireSRWLockExclusive(v3);
    p_SRWLock = &SRWLock;
    v5 = 1;
  }
  else
  {
    p_SRWLock = &v7;
    v5 = 2;
  }
  *p_SRWLock = 0LL;
  *a2 = v3;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
  }
  if ( (v5 & 1) != 0 && SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return a2;
}
