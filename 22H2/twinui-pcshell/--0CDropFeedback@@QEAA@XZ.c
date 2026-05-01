/*
 * XREFs of ??0CDropFeedback@@QEAA@XZ @ 0x1804919F4
 * Callers:
 *     ??$MakeAndInitialize@VCDropFeedback@@V1@AEAPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@AEAW4DROP_FEEDBACK_INIT_FLAGS@@@Details@WRL@Microsoft@@YAJPEAPEAVCDropFeedback@@AEAPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@AEAW4DROP_FEEDBACK_INIT_FLAGS@@@Z @ 0x1804918B0 (--$MakeAndInitialize@VCDropFeedback@@V1@AEAPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@AEAW4DR.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIDropFeedback@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@WRL@Microsoft@@QEAA@XZ @ 0x180491958 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIDropFeedback@@U.c)
 */

CDropFeedback *__fastcall CDropFeedback::CDropFeedback(CDropFeedback *this)
{
  CDropFeedback *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>((__int64)this);
  *(_QWORD *)this = &CDropFeedback::`vftable';
  *((_QWORD *)this + 3) = &CDropFeedback::`vftable'{for `IDropFeedback'};
  *((_QWORD *)this + 4) = &CDropFeedback::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>'};
  *((_QWORD *)this + 5) = &CDropFeedback::`vftable'{for `IImmersiveApplicationNotification'};
  *((_QWORD *)this + 6) = &CDropFeedback::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITempAppVisualHost>'};
  *((_DWORD *)this + 28) = -3;
  *((_DWORD *)this + 29) = -3;
  result = this;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_BYTE *)this + 124) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  return result;
}
