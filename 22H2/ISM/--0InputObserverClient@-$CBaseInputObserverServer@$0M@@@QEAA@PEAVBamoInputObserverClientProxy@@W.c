/*
 * XREFs of ??0InputObserverClient@?$CBaseInputObserverServer@$0M@@@QEAA@PEAVBamoInputObserverClientProxy@@W4_MIT_INPUT_OBSERVATION_STATE@@@Z @ 0x180045434
 * Callers:
 *     ?RegisterObserverClient@?$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x1800F5090 (-RegisterObserverClient@-$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E50 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall CBaseInputObserverServer<12>::InputObserverClient::InputObserverClient(
        __int64 *a1,
        __int64 (__fastcall ***a2)(_QWORD))
{
  __int64 v4; // rcx
  __int64 (__fastcall ***v6)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  if ( a2 )
  {
    v6 = a2;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v6);
    v4 = *a1;
    *a1 = (__int64)a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  *((_DWORD *)a1 + 2) = 2;
  return a1;
}
