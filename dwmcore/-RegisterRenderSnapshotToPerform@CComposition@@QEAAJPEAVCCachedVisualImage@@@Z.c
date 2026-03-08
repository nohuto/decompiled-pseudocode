/*
 * XREFs of ?RegisterRenderSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z @ 0x1800FB230
 * Callers:
 *     ?ProcessSnapshot@CCachedVisualImage@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE_SNAPSHOT@@@Z @ 0x1800FB204 (-ProcessSnapshot@CCachedVisualImage@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE_SN.c)
 *     ?ProcessFreeze@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_FREEZE@@@Z @ 0x1802178DC (-ProcessFreeze@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_FREEZE@@@Z.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180253ADC (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CComposition::RegisterRenderSnapshotToPerform(CComposition *this, struct CCachedVisualImage *a2)
{
  char *v2; // r10
  unsigned int v3; // edi
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned int v8; // ebx
  struct CCachedVisualImage **v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  struct CCachedVisualImage *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v2 = (char *)this + 720;
  v3 = 0;
  v4 = *((unsigned int *)this + 186);
  v5 = 0;
  v6 = *((_QWORD *)this + 90);
  if ( !(_DWORD)v4 )
  {
LABEL_2:
    v7 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v7 < (unsigned int)v4 )
    {
      v3 = -2147024362;
      v8 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      v8 = 0;
      if ( (unsigned int)v7 <= *((_DWORD *)v2 + 5) )
      {
        *(_QWORD *)(v6 + 8 * v4) = a2;
        *((_DWORD *)v2 + 6) = v7;
        return v8;
      }
      v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8, 1, &v14);
      v8 = v12;
      v3 = v12;
      if ( v12 >= 0 )
        return v8;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC0u, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v8, 0x839u, 0LL);
    return v3;
  }
  v10 = (struct CCachedVisualImage **)*((_QWORD *)this + 90);
  while ( a2 != *v10 )
  {
    ++v5;
    ++v10;
    if ( v5 >= (unsigned int)v4 )
      goto LABEL_2;
  }
  return v3;
}
