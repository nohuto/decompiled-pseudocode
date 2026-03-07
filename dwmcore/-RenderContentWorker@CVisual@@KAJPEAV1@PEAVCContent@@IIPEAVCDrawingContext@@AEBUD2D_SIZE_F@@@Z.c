__int64 __fastcall CVisual::RenderContentWorker(
        struct CVisual *a1,
        struct CContent *a2,
        int a3,
        __int64 a4,
        struct CDrawingContext *a5,
        const struct D2D_SIZE_F *a6)
{
  struct CDrawListCache *v6; // rbx
  int v9; // edi
  const struct IDeviceTarget *v10; // r14
  __int64 **TreeData; // rax
  __int64 v12; // rcx
  int Cache; // eax
  unsigned int v14; // esi
  char *v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  struct CDrawListCache *v19; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0LL;
  v19 = 0LL;
  if ( *((_BYTE *)a5 + 8171) )
  {
    v9 = -2003292412;
    v10 = (const struct IDeviceTarget *)*((_QWORD *)a5 + 4);
    TreeData = CVisual::FindTreeData(a1, *((const struct CVisualTree **)a5 + 1007));
    if ( TreeData )
    {
      Cache = CDrawListCacheSet::GetCache((CDrawListCacheSet *)(TreeData + 2), a3, 0, v10, &v19);
      v9 = Cache;
      if ( Cache < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, Cache, 0x71Du, 0LL);
        v6 = v19;
        v14 = v9;
LABEL_7:
        MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_180338CB8, 3u, v9, 0x102Fu, 0LL);
        goto LABEL_10;
      }
      v6 = v19;
    }
    v14 = v9;
    if ( v9 < 0 )
      goto LABEL_7;
  }
  v15 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 8) + 8LL) + 64;
  v16 = (*(__int64 (__fastcall **)(char *, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *))(*(_QWORD *)v15 + 16LL))(
          v15,
          a5,
          a6,
          v6);
  v14 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_180338CB8, 3u, v16, 0x1034u, 0LL);
LABEL_10:
  if ( v6 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)v6);
  return v14;
}
