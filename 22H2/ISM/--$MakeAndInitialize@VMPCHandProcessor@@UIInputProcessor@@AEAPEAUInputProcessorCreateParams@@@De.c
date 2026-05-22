/*
 * XREFs of ??$MakeAndInitialize@VMPCHandProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801362D4
 * Callers:
 *     ?Create@MPCHandProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801366F0 (-Create@MPCHandProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180018F00 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D030 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??0MPCHandProcessor@@QEAA@XZ @ 0x18007D314 (--0MPCHandProcessor@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIInputProcessorDeviceUpdate@@UIInputFocusListener@@UIMPCInputProviderBase@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007DB7C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIInputProcessorDeviceU.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F0B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPC_ea_18007F0B0.c)
 *     ?RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18007F190 (-RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MPCHandProcessor,IInputProcessor,InputProcessorCreateParams * &>(
        MPCHandProcessor **a1,
        const struct InputProcessorCreateParams **a2)
{
  MPCHandProcessor *v4; // rax
  int CanCastTo; // ebx
  MPCHandProcessor *v6; // rdi
  __int64 v7; // r8
  const char *v8; // r9
  volatile int *v9; // rdx
  _DWORD *v10; // rcx
  _DWORD *v11; // r9

  *a1 = 0LL;
  v4 = (MPCHandProcessor *)operator new(0x2CB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = MPCHandProcessor::MPCHandProcessor(v4);
    CanCastTo = MPCHandProcessor::RuntimeClassInitialize(v6, *a2, v7, v8);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_603ffbaf_2fd6_4711_8c68_de56f864f999, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v6;
        (*(void (__fastcall **)(MPCHandProcessor *))(*(_QWORD *)v6 + 8LL))(v6);
        CanCastTo = 0;
      }
      else
      {
        if ( InlineIsEqualGUID(v10, v11) )
        {
          *a1 = v6;
          CanCastTo = 0;
        }
        else
        {
          CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>::CanCastTo(
                        (__int64)v6 + 8,
                        v9);
          if ( CanCastTo == -2147467262 )
            CanCastTo = -2147467262;
        }
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(MPCHandProcessor *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,MPCInputProviderBase>::Release(
        (__int64)v6,
        v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
