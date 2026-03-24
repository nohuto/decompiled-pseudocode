/*
 * XREFs of ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180038D0C
 * Callers:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180038804 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z @ 0x1800389F8 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRI.c)
 * Callees:
 *     ?Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180038E50 (-Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTE.c)
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1800393E8 (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCS.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009B594 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x18009CA7C (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVISwapChainRealization@@@Z @ 0x180264B04 (-Create@CDxHandleStereoBitmapRealization@@SAHU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x180265548 (-Create@CDxHandleYUVBitmapRealization@@SAJU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 *     ?CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x18026564C (-CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUC.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
        struct _LUID **this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        char a4,
        struct ISwapChainRealization **a5)
{
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ecx
  int v12; // ebx
  int SubResource; // eax
  char *v14; // rcx
  struct CDecodeBitmap *v16; // r13
  struct _LUID v17; // rbx
  int v18; // r9d
  struct _LUID *v19; // rdx
  __int64 v20; // r14
  __int64 v21; // rax
  void (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v23; // rcx
  char *v24; // rcx
  int v25; // [rsp+20h] [rbp-71h]
  unsigned int v26; // [rsp+20h] [rbp-71h]
  HGDIOBJ ho; // [rsp+30h] [rbp-61h] BYREF
  __int64 v28; // [rsp+38h] [rbp-59h] BYREF
  int *v29; // [rsp+40h] [rbp-51h] BYREF
  int v30; // [rsp+48h] [rbp-49h] BYREF

  ho = 0LL;
  *a5 = 0LL;
  v9 = NtOpenCompositionSurfaceDirtyRegion(*(_QWORD *)&(*this)[4], this + 3, a3, &ho);
  v10 = (__int64)ho;
  if ( v9 < 0 )
    v10 = 1LL;
  ho = (HGDIOBJ)v10;
  v11 = *(_DWORD *)a3 - 1;
  if ( *(_DWORD *)a3 == 1 )
  {
    v12 = -2003292287;
    v26 = 1135;
    goto LABEL_32;
  }
  if ( *(_DWORD *)a3 == 2 )
  {
    v12 = CDxHandleAdvancedDirectFlipBitmapRealization::Create(
            *((unsigned int *)this + 8),
            *(_QWORD *)&(*this)[5],
            a2,
            a3,
            this[1],
            a5);
    if ( v12 >= 0 )
      goto LABEL_7;
    LOBYTE(v25) = a4;
    SubResource = CDxHandleBitmapRealization::Create(
                    *((unsigned int *)this + 8),
                    *(_QWORD *)&(*this)[5],
                    a2,
                    a3,
                    v25,
                    a5);
    v12 = SubResource;
    if ( SubResource >= 0 )
      goto LABEL_7;
    v26 = 1155;
    goto LABEL_21;
  }
  v11 = *(_DWORD *)a3 - 3;
  if ( *(_DWORD *)a3 == 3 )
  {
    SubResource = CDxHandleStereoBitmapRealization::Create((*this)[5], a2, a3, a5);
    v12 = SubResource;
    if ( SubResource < 0 )
    {
      v26 = 1165;
      goto LABEL_21;
    }
  }
  else
  {
    if ( *(_DWORD *)a3 != 4 )
    {
      v12 = -2147024809;
      v26 = 1196;
LABEL_32:
      v18 = v12;
      goto LABEL_33;
    }
    v16 = (struct CDecodeBitmap *)this[1];
    v17 = (*this)[5];
    if ( *((_DWORD *)a3 + 6) )
    {
      v19 = this[6];
      v20 = 0LL;
      v21 = (char *)this[7] - (char *)v19;
      v28 = 0LL;
      if ( v21 >> 3 )
      {
        v22 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(_QWORD *)v19
                                                               + 8LL
                                                               + *(int *)(*(_QWORD *)(*(_QWORD *)v19 + 8LL) + 4LL));
        (**v22)(v22, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, &v28);
        v20 = v28;
      }
      if ( v20 )
      {
        v23 = v20 + *(int *)(*(_QWORD *)(v20 + 8) + 4LL) + 8LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      SubResource = CDxHandleYUVBitmapRealization::CreateSubResource(
                      (struct IYUVSwapChainRealization *)v20,
                      v17,
                      a2,
                      a3,
                      v16,
                      a5);
      v12 = SubResource;
      if ( SubResource >= 0 )
        goto LABEL_7;
      v26 = 1190;
      goto LABEL_21;
    }
    SubResource = CDxHandleYUVBitmapRealization::Create(v17, a2, a3, (struct CDecodeBitmap *)this[1], a5);
    v12 = SubResource;
    if ( SubResource < 0 )
    {
      v26 = 1178;
LABEL_21:
      v18 = SubResource;
LABEL_33:
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1802DC150, 3u, v18, v26, 0LL);
      goto LABEL_11;
    }
  }
LABEL_7:
  if ( !ho )
    return (unsigned int)v12;
  if ( *a5 )
  {
    if ( ho == (HGDIOBJ)1 )
    {
      v14 = (char *)*a5 + *(int *)(*((_QWORD *)*a5 + 1) + 16LL) + 8;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v14 + 40LL))(v14);
    }
    else
    {
      v30 = 0;
      v29 = &v30;
      CRegion::SetHRGN((CRegion *)&v29, (HRGN)ho);
      v24 = (char *)*a5 + *(int *)(*((_QWORD *)*a5 + 1) + 16LL) + 8;
      (*(void (__fastcall **)(char *, int **))(*(_QWORD *)v24 + 32LL))(v24, &v29);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v29);
    }
  }
LABEL_11:
  if ( (unsigned __int64)ho >= 2 )
    DeleteObject(ho);
  return (unsigned int)v12;
}
