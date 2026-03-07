__int64 __fastcall VidSchSetPagingNodePageDirectory(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3,
        UINT a4,
        DXGK_MULTIPLANE_OVERLAY_PLANE3 **a5)
{
  __int64 v6; // rdi
  __int64 v9; // rax
  char i; // bp
  _QWORD *v11; // rsi
  ADAPTER_RENDER *v12; // rcx
  __int64 result; // rax
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 v14[2]; // [rsp+30h] [rbp-68h] BYREF

  v6 = a2;
  if ( *(_QWORD *)(a1[34] + 8LL * a2) )
    return VidSchiSetPagingHwContextPageDirectory((_DWORD)a1, a2, a3, a4, (__int64)a5);
  v9 = a1[33];
  for ( i = 0; ; i = 1 )
  {
    v11 = *(_QWORD **)(v9 + 8 * v6);
    v14[0].PlaneCount = 0;
    v12 = (ADAPTER_RENDER *)a1[1];
    *(_QWORD *)&v14[0].VidPnSourceId = v11[8];
    v14[0].OutputFlags.Value = a4;
    v14[0].ppPlanes = a5;
    v14[0].pPostComposition = (DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION *)a3;
    ADAPTER_RENDER::DdiSetRootPageTable(v12, v14);
    v11[103] = v14[0].ppPlanes;
    VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
      *(VIDMM_GLOBAL **)(a1[1] + 768LL),
      0LL,
      (struct _DXGKARG_SETROOTPAGETABLE *)v14,
      v11);
    result = a1[2];
    if ( i )
      break;
    result = *(_QWORD *)(result + 2808);
    if ( (*(_BYTE *)(result + 344 * v6 + 16) & 0xC) != 0xC )
      break;
    v9 = a1[36];
  }
  return result;
}
