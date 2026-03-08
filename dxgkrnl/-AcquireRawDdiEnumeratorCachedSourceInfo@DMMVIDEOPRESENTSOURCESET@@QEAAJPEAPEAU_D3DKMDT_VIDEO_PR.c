/*
 * XREFs of ?AcquireRawDdiEnumeratorCachedSourceInfo@DMMVIDEOPRESENTSOURCESET@@QEAAJPEAPEAU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C021099C
 * Callers:
 *     ?CreateNewSourceInfo@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEAPEAU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C02107A0 (-CreateNewSourceInfo@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPR.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_SOURCE@@@?$Set@VDMMVIDEOPRESENTSOURCE@@@@SAPEAV12@QEBVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0021274 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_SOURCE@@@-$Set@VDMMVIDEOPRESENTSOURCE@@@.c)
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_SOURCE@@@?$Set@VDMMVIDEOPRESENTSOURCE@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_SOURCE@@@?$Set@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1C00212D4 (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_SOURCE@@@-$Set@VDMMVIDEOPRESENTSOURCE.c)
 */

__int64 __fastcall DMMVIDEOPRESENTSOURCESET::AcquireRawDdiEnumeratorCachedSourceInfo(
        DMMVIDEOPRESENTSOURCESET *this,
        struct _D3DKMDT_VIDEO_PRESENT_SOURCE **a2)
{
  unsigned int v2; // ebx
  void *Instance; // rax
  struct _D3DKMDT_VIDEO_PRESENT_SOURCE *v6; // rax
  unsigned int v7; // ecx
  struct _D3DKMDT_VIDEO_PRESENT_SOURCE *v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  *a2 = 0LL;
  v9 = 0LL;
  Instance = (void *)Set<DMMVIDEOPRESENTSOURCE>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_SOURCE>::CreateInstance(0LL);
  auto_ptr<Set<DMMVIDEOPRESENTSOURCE>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_SOURCE>>::reset((void **)&v9, Instance);
  if ( v9 )
  {
    v6 = v9 + 2;
    v7 = ++*((_DWORD *)this + 14);
    *a2 = v6;
    *v6 = (struct _D3DKMDT_VIDEO_PRESENT_SOURCE)v7;
  }
  else
  {
    v2 = -1073741801;
  }
  operator delete(0LL);
  return v2;
}
