/*
 * XREFs of ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z @ 0x1800177A0
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18003127C (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 * Callees:
 *     ?UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z @ 0x180017894 (-UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z.c)
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18003C690 (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwLightCollectionBuffer::Create(
        const struct LightInfo *a1,
        unsigned int a2,
        bool a3,
        struct CHwLightCollectionBuffer **a4)
{
  unsigned int v8; // ebx
  char *v9; // rax
  unsigned int v10; // ecx
  CHwLightCollectionBuffer *v11; // rdi
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0;
  v9 = (char *)DefaultHeap::Alloc(0x208uLL);
  v11 = (CHwLightCollectionBuffer *)v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 2) = 0;
    *((_DWORD *)v9 + 4) = -1;
    *(_QWORD *)v9 = &CHwLightCollectionBuffer::`vftable';
    memset_0(v9 + 20, 0, 0x1F4uLL);
    (**(void (__fastcall ***)(CHwLightCollectionBuffer *))v11)(v11);
    CHwLightCollectionBuffer::UpdateLightInfo(v11, a1, a2, a3);
    v13[0] = 0LL;
    *a4 = v11;
  }
  else
  {
    v13[0] = 0LL;
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x25u, 0LL);
  }
  ReleaseInterface<CHwLightCollectionBuffer>(v13);
  return v8;
}
