/*
 * XREFs of ??0MPCHandProcessor@@QEAA@XZ @ 0x18007D314
 * Callers:
 *     ??$MakeAndInitialize@VMPCHandProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801362D4 (--$MakeAndInitialize@VMPCHandProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@De.c)
 * Callees:
 *     ?CalculateMaximumSize@RayStabilizer@@AEAAXXZ @ 0x18002A9DC (-CalculateMaximumSize@RayStabilizer@@AEAAXXZ.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@QEAA@XZ @ 0x18007D2A8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18007DB1C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x180086618 (-Reset@RayStabilizer@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
MPCHandProcessor *__fastcall MPCHandProcessor::MPCHandProcessor(MPCHandProcessor *this)
{
  RayStabilizer *v2; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>((__int64)this);
  *(_QWORD *)this = &MPCHandProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCSixDofProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &MPCHandProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  *((_BYTE *)this + 4632) = 1;
  *((_QWORD *)this + 580) = 0LL;
  *((_QWORD *)this + 581) = 0LL;
  *((_QWORD *)this + 582) = 0LL;
  memset_0((char *)this + 4664, 0, 0x7F0uLL);
  *((_DWORD *)this + 1172) = 2032;
  memset_0((char *)this + 6696, 0, 0x7F0uLL);
  *((_DWORD *)this + 1680) = 2032;
  memset_0((char *)this + 8728, 0, 0x7F0uLL);
  *((_DWORD *)this + 2188) = 2032;
  *((_BYTE *)this + 10760) = 0;
  *((_DWORD *)this + 2691) = 0;
  *((_WORD *)this + 5384) = 0;
  *(_QWORD *)((char *)this + 10772) = 0LL;
  memset_0((char *)this + 10784, 0, 0xB8uLL);
  *((_BYTE *)this + 10968) = 0;
  *(_QWORD *)((char *)this + 10972) = 0LL;
  *(_QWORD *)((char *)this + 10980) = 0LL;
  *(_QWORD *)((char *)this + 10988) = 0LL;
  memset_0((char *)this + 11000, 0, 0x1B8uLL);
  `vector constructor iterator'(
    (char *)this + 11000,
    0x1CuLL,
    0xFuLL,
    (void *(*)(void *))RollingBuffer<unsigned int,TargetingRay,15>::Entry::`default constructor closure');
  *(_QWORD *)((char *)this + 11420) = 0LL;
  *((_QWORD *)this + 1429) = 0LL;
  *((_QWORD *)this + 1430) = 0LL;
  if ( *((_DWORD *)this + 107) != 4 )
  {
    *((_DWORD *)this + 107) = 4;
    RayStabilizer::CalculateMaximumSize((MPCHandProcessor *)((char *)this + 384));
    RayStabilizer::Reset(v2);
  }
  return this;
}
