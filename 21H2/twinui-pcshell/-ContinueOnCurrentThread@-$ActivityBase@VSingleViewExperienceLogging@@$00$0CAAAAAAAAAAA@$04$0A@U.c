/*
 * XREFs of ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18001BC20
 * Callers:
 *     _lambda_65bd7f122925cc900a11f0d0a2dc2897_::operator() @ 0x18014EE7C (_lambda_65bd7f122925cc900a11f0d0a2dc2897_--operator().c)
 *     _lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_::operator() @ 0x18014F188 (_lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_--operator().c)
 * Callees:
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18001BA68 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 */

wil::ActivityThreadWatcher *__fastcall wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
        struct wil::details::IFailureCallback *a1,
        wil::ActivityThreadWatcher *this)
{
  _DWORD *v2; // r8

  v2 = (_DWORD *)*((_QWORD *)a1 + 6);
  if ( *v2 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      this,
      a1,
      (const struct wil::details::StoredCallContextInfo *)(v2 + 10));
  }
  else
  {
    *(_OWORD *)this = 0LL;
    *((_OWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 14) = 0;
    *((_QWORD *)this + 8) = 0LL;
  }
  return this;
}
