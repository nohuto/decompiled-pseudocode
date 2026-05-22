/*
 * XREFs of ??0MPCSixDofProcessor@@QEAA@XZ @ 0x18018B2E0
 * Callers:
 *     ??$MakeAndInitialize@VMPCSixDofProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x18018A9B4 (--$MakeAndInitialize@VMPCSixDofProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@.c)
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@QEAA@XZ @ 0x18007D2A8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@.c)
 */

MPCSixDofProcessor *__fastcall MPCSixDofProcessor::MPCSixDofProcessor(MPCSixDofProcessor *this)
{
  MPCSixDofProcessor *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>((__int64)this);
  *((_DWORD *)this + 1160) = 2;
  *((_WORD *)this + 2316) = 0;
  *(_QWORD *)this = &MPCSixDofProcessor::`vftable'{for `IInputProcessor'};
  *((_BYTE *)this + 4634) = 0;
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_DWORD *)this + 1159) = 0;
  *((_QWORD *)this + 2) = &MPCSixDofProcessor::`vftable'{for `IInputFocusListener'};
  *((_WORD *)this + 2322) = 0;
  *((_QWORD *)this + 3) = &MPCSixDofProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  memset_0((char *)this + 4648, 0, 0x148uLL);
  *((_QWORD *)this + 622) = 0LL;
  *((_QWORD *)this + 623) = 0LL;
  *((_QWORD *)this + 624) = 0LL;
  *((_QWORD *)this + 625) = 0LL;
  *((_QWORD *)this + 626) = 0LL;
  *((_QWORD *)this + 627) = 0LL;
  *((_QWORD *)this + 628) = 0LL;
  *((_QWORD *)this + 629) = 0LL;
  *((_QWORD *)this + 630) = 0LL;
  *((_QWORD *)this + 631) = 0LL;
  *((_DWORD *)this + 1264) = 0;
  *(_QWORD *)((char *)this + 5060) = 1065353216LL;
  *(_QWORD *)((char *)this + 5068) = 0LL;
  *(_QWORD *)((char *)this + 5076) = 0LL;
  *(_QWORD *)((char *)this + 5084) = 0LL;
  *(_QWORD *)((char *)this + 5092) = 0LL;
  *(_QWORD *)((char *)this + 5100) = 0LL;
  *(_QWORD *)((char *)this + 5108) = 0LL;
  *(_QWORD *)((char *)this + 5116) = 0LL;
  *(_QWORD *)((char *)this + 5124) = 0LL;
  *(_QWORD *)((char *)this + 5132) = 0LL;
  *(_QWORD *)((char *)this + 5140) = 0LL;
  *((_DWORD *)this + 1287) = -1082130432;
  *((_QWORD *)this + 644) = 0LL;
  *((_QWORD *)this + 645) = 0LL;
  *((_QWORD *)this + 646) = 0LL;
  *((_WORD *)this + 2588) = 0;
  *((_QWORD *)this + 648) = 0LL;
  *((_QWORD *)this + 649) = 0LL;
  *((_QWORD *)this + 650) = 0LL;
  *((_QWORD *)this + 651) = 0LL;
  *((_QWORD *)this + 652) = 0LL;
  *((_QWORD *)this + 653) = 0LL;
  *((_QWORD *)this + 654) = 0LL;
  *((_QWORD *)this + 655) = 0LL;
  memset_0((char *)this + 5248, 0, 0x148uLL);
  memset_0((char *)this + 5576, 0, 0x7F0uLL);
  *((_DWORD *)this + 1400) = 2032;
  result = this;
  *((_BYTE *)this + 7616) = 0;
  *((_QWORD *)this + 953) = 0LL;
  *((_QWORD *)this + 954) = 0LL;
  *((_QWORD *)this + 955) = 0LL;
  *((_DWORD *)this + 1912) = 0;
  *((_QWORD *)this + 951) = 257LL;
  return result;
}
