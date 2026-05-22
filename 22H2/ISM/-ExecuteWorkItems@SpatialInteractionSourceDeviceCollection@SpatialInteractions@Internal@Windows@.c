/*
 * XREFs of ?ExecuteWorkItems@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXXZ @ 0x1800CFEBC
 * Callers:
 *     ?StaticExecuteWorkItems@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800D29A0 (-StaticExecuteWorkItems@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?pop_front@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@2@@std@@QEAAXXZ @ 0x1800D46D0 (-pop_front@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::ExecuteWorkItems(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  _QWORD *v3; // rax
  __int64 *v4; // rbp
  volatile signed __int32 *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 488);
  while ( 1 )
  {
    EnterCriticalSection(v2);
    if ( *((_BYTE *)this + 528) || !*((_QWORD *)this + 71) )
      break;
    v3 = (_QWORD *)*((_QWORD *)this + 67);
    if ( v3 )
      v3 = (_QWORD *)*v3;
    v4 = *(__int64 **)(v3[1] + 8 * (*((_QWORD *)this + 70) & (v3[2] - 1LL)));
    v5 = (volatile signed __int32 *)v4[1];
    if ( v5 )
    {
      _InterlockedIncrement(v5 + 2);
      v5 = (volatile signed __int32 *)v4[1];
    }
    v6 = *v4;
    std::deque<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>::pop_front((char *)this + 536);
    if ( v2 )
      LeaveCriticalSection(v2);
    v7 = *(_QWORD *)(v6 + 72);
    if ( !v7 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      break;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 16LL))(v7, v6);
    if ( v5 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
