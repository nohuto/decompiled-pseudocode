/*
 * XREFs of ?SetInputDeviceHapticsFeedback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKEEGPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D24C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKKPEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800D0174 (-GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SetInputDeviceHapticsFeedback(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        int a2,
        __int64 a3,
        char a4,
        unsigned __int16 a5)
{
  int v6; // ebx
  int CacheEntry; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  std::_Ref_count_base *v12[2]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = (unsigned __int8)a3;
  *(_OWORD *)v12 = 0LL;
  CacheEntry = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::GetCacheEntry(
                 (__int64)this - 8,
                 a2,
                 a3,
                 v12);
  if ( CacheEntry >= 0 )
  {
    v10 = *(_QWORD *)v12[0];
    if ( (_WORD)v6 == 1 )
    {
      CacheEntry = (*(__int64 (**)(void))(v10 + 192))();
      if ( CacheEntry >= 0 )
        goto LABEL_9;
      v9 = 1017LL;
    }
    else
    {
      LOBYTE(v8) = a4;
      CacheEntry = (*(__int64 (__fastcall **)(std::_Ref_count_base *, _QWORD, __int64, _QWORD))(v10 + 184))(
                     v12[0],
                     (unsigned int)(v6 + 4096),
                     v8,
                     a5);
      if ( CacheEntry >= 0 )
        goto LABEL_9;
      v9 = 1021LL;
    }
  }
  else
  {
    v9 = 1012LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    v9,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
    (const char *)(unsigned int)CacheEntry);
LABEL_9:
  if ( v12[1] )
    std::_Ref_count_base::_Decref(v12[1]);
  return 0LL;
}
