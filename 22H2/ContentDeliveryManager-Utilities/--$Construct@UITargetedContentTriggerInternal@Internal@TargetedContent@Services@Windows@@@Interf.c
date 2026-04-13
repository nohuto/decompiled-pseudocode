/*
 * XREFs of ??$Construct@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@1@PEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Z @ 0x18006F314
 * Callers:
 *     ?SetAt@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@@Z @ 0x18006D740 (-SetAt@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U-.c)
 *     ?ReplaceAll@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@@Z @ 0x18006DCD0 (-ReplaceAll@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Window.c)
 *     ?InsertAtInternal@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@_N@Z @ 0x18006EBC4 (-InsertAtInternal@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@.c)
 * Callees:
 *     ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x180062040 (-Acquire@Git@Details@Internal@Windows@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CFA74 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XWinRT::InterfaceLifetimeTraits::Construct<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>(
        __int64 a1,
        __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  _DWORD *v6; // rax
  Windows::Internal::Details::Git *v7; // rcx
  _DWORD *v8; // rdi
  int v9; // ebp
  __int64 v10; // rcx
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  if ( a2 )
  {
    v12 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a2)(a2, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, &v12) < 0 )
    {
      v6 = operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
      v8 = v6;
      if ( v6 )
      {
        *v6 = 1;
        v6[1] = 0;
      }
      else
      {
        v8 = 0LL;
      }
      if ( v8 )
      {
        v9 = Windows::Internal::Details::Git::Acquire(v7);
        if ( v9 >= 0 )
          v9 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _DWORD *))(*(_QWORD *)qword_18019D4C8 + 24LL))(
                 qword_18019D4C8,
                 a2,
                 &GUID_3b431df6_5dbc_4950_b51f_e8313d975159,
                 v8 + 1);
        if ( v9 < 0 )
        {
          if ( _InterlockedExchangeAdd(v8, 0xFFFFFFFF) == 1 )
          {
            if ( v8[1] )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019D4C8 + 32LL))(qword_18019D4C8);
            operator delete(v8);
          }
        }
        else
        {
          *(_QWORD *)a1 = v8;
          *(_BYTE *)(a1 + 8) = 1;
        }
      }
      else
      {
        v9 = -2147024882;
      }
      v10 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      return (unsigned int)v9;
    }
    else
    {
      *(_BYTE *)(a1 + 8) = 0;
      *(_QWORD *)a1 = a2;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v5 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
  }
  return v4;
}
