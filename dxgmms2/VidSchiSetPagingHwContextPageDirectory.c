void __fastcall VidSchiSetPagingHwContextPageDirectory(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        UINT a4,
        DXGK_MULTIPLANE_OVERLAY_PLANE3 **a5)
{
  __int64 v5; // rax
  ADAPTER_RENDER *v7; // rcx
  _QWORD *v8; // rbx
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 v9; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a1 + 272);
  v7 = *(ADAPTER_RENDER **)(a1 + 8);
  v8 = *(_QWORD **)(v5 + 8LL * a2);
  v9.PlaneCount = 0;
  *(_QWORD *)&v9.VidPnSourceId = v8[6];
  v9.ppPlanes = a5;
  v9.OutputFlags.Value = a4;
  v9.pPostComposition = (DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION *)a3;
  ADAPTER_RENDER::DdiSetRootPageTable(v7, &v9);
  v8[33] = v9.ppPlanes;
  VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
    *(VIDMM_GLOBAL **)(*(_QWORD *)(a1 + 8) + 768LL),
    0LL,
    (struct _DXGKARG_SETROOTPAGETABLE *)&v9,
    v8);
}
