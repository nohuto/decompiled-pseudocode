/*
 * XREFs of ?SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z @ 0x1C020F0C8
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C020E0C0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C0226E60 (-SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 */

void __fastcall CPTPProcessor::SendPTPInertiaEndToContainer(CPTPProcessor *this, const struct PTPEngineOutput *a2)
{
  int v2; // r9d
  __int64 v3; // r8
  void *v4; // rdx
  __int64 v5; // rcx
  int v6; // r9d
  const struct CONTAINER_ID *v7; // [rsp+20h] [rbp-8h]

  v2 = (int)this;
  if ( *((_DWORD *)a2 + 1) == 2 || *((_DWORD *)a2 + 1) == 3 )
  {
    v3 = *((_QWORD *)this + 66);
    v4 = 0LL;
    v5 = *(_QWORD *)(*(_QWORD *)(v3 + 256) + 16LL);
    if ( v5 )
    {
      v6 = v2 + 376;
      if ( v3 )
        v4 = *(void **)(v3 + 216);
      IVRootDeliver::Pointer::SendPTPInertiaInput(
        *(IVRootDeliver::Pointer **)(v5 + 16),
        v4,
        (unsigned int)-__CFSHR__(*(_DWORD *)(v5 + 184), 14),
        v6,
        v7);
    }
  }
}
