/*
 * XREFs of ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x18021E498
 * Callers:
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x18021E908 (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x180023404 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x18004A69C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800E746C (-UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTa.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 *     ?HrMallocClear@@YAJ_K0PEAPEAX@Z @ 0x180278D14 (-HrMallocClear@@YAJ_K0PEAPEAX@Z.c)
 */

__int64 __fastcall CGeometryGroup::ProcessAppend(
        CGeometryGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GEOMETRYGROUP *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // r8d
  void *v6; // r14
  int v8; // eax
  unsigned __int64 v9; // rcx
  void *v10; // rsi
  unsigned int v11; // ebx
  unsigned __int64 v12; // rbp
  unsigned int v13; // eax
  unsigned int v14; // r15d
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  char *v18; // r14
  void *v19; // rcx
  void *v20; // rcx
  unsigned int v22; // [rsp+20h] [rbp-58h]
  void *Src; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v24; // [rsp+90h] [rbp+18h] BYREF
  void *lpMem; // [rsp+98h] [rbp+20h] BYREF

  v5 = *((_DWORD *)a3 + 2);
  v6 = 0LL;
  LODWORD(v24) = 0;
  lpMem = 0LL;
  v8 = CResource::UnmarshalResourceArray(a4, a5, v5, 0x43u, (unsigned int *)&v24, &Src, (__int64)a2, 0);
  v10 = Src;
  v11 = v8;
  if ( v8 < 0 )
  {
    v22 = 285;
  }
  else
  {
    v12 = (unsigned int)v24;
    if ( !(_DWORD)v24 )
      return v11;
    v13 = *((_DWORD *)this + 42);
    v14 = v13 + v24;
    if ( v13 + (unsigned int)v24 < v13 )
    {
      v11 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024362, 0x123u, 0LL);
      goto LABEL_16;
    }
    v8 = CResource::RegisterNNotifiersInternal(this, (struct CResource **)Src, (unsigned int)v24);
    v11 = v8;
    if ( v8 >= 0 )
    {
      v15 = HrMallocClear(v9, v14, &lpMem);
      v11 = v15;
      if ( v15 >= 0 )
      {
        v17 = *((_DWORD *)this + 42);
        v18 = (char *)lpMem;
        if ( v17 )
          memcpy_0(lpMem, *((const void **)this + 22), 8LL * v17);
        memcpy_0(&v18[8 * *((unsigned int *)this + 42)], v10, 8 * v12);
        v19 = (void *)*((_QWORD *)this + 22);
        if ( v19 )
          operator delete(v19);
        *((_QWORD *)this + 22) = v18;
        v20 = v10;
        *((_DWORD *)this + 42) = v14;
        goto LABEL_20;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x12Cu, 0LL);
      CResource::UnRegisterNNotifiersInternal(this, (struct CResource **)v10, v12);
      v6 = lpMem;
      goto LABEL_16;
    }
    v22 = 294;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v22, 0LL);
LABEL_16:
  if ( v10 )
    operator delete(v10);
  if ( v6 )
  {
    v20 = v6;
LABEL_20:
    operator delete(v20);
  }
  return v11;
}
