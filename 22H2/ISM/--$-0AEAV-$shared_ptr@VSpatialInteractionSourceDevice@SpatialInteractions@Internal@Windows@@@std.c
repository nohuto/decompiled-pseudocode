/*
 * XREFs of ??$?0AEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@AEAV?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@1@AEA_N@?$_Ref_count_obj@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@QEAA@AEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@1@AEAV?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@1@AEA_N@Z @ 0x1800CC9FC
 * Callers:
 *     ??$make_shared@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@AEAV?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@7@AEA_N@std@@YA?AV?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@0@AEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@0@AEAV?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@0@AEA_N@Z @ 0x1800CDDA4 (--$make_shared@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteraction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??0?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800CE0E4 (--0-$function@$$A6AXAEBV-$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Interna.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::_Ref_count_obj<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>::_Ref_count_obj<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        char *a4)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  char v9; // bl
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-68h] BYREF

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>::`vftable';
  v7 = a1 + 16;
  v8 = std::function<void (std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice> const &)>::function<void (std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice> const &)>(
         &v14,
         a3);
  v9 = *a4;
  *(_QWORD *)v7 = 0LL;
  *(_QWORD *)(v7 + 8) = 0LL;
  v10 = a2[1];
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  *(_QWORD *)v7 = *a2;
  *(_QWORD *)(v7 + 8) = a2[1];
  std::function<void (std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice> const &)>::function<void (std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice> const &)>(
    v7 + 16,
    v8);
  *(_BYTE *)(v7 + 80) = v9;
  v12 = *(_QWORD *)(v8 + 56);
  if ( v12 )
  {
    LOBYTE(v11) = v12 != v8;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v11);
    *(_QWORD *)(v8 + 56) = 0LL;
  }
  return a1;
}
