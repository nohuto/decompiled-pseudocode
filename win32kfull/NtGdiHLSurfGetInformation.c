/*
 * XREFs of NtGdiHLSurfGetInformation @ 0x1C0029E10
 * Callers:
 *     <none>
 * Callees:
 *     GreDwmGetSurfaceData @ 0x1C0029774 (GreDwmGetSurfaceData.c)
 *     GreSfmGetDirtyRgn @ 0x1C002A00C (GreSfmGetDirtyRgn.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     GreDwmGetRedirectionStyle @ 0x1C026A184 (GreDwmGetRedirectionStyle.c)
 */

__int64 __fastcall NtGdiHLSurfGetInformation(__int64 a1, int a2, void *a3, ULONG64 a4)
{
  _DWORD *v4; // r12
  NTSTATUS v7; // ebx
  unsigned int *v8; // rax
  unsigned int v9; // r8d
  size_t v10; // rsi
  int v11; // edi
  ULONG64 v12; // rax
  int v13; // edx
  int v14; // edx
  NTSTATUS SurfaceData; // eax
  unsigned int v16; // edi
  Gre::Base *HDEV; // rax
  int v19; // edx
  __int64 v20; // rcx
  ULONG v21; // eax
  __int128 Src; // [rsp+58h] [rbp-50h] BYREF
  __int128 v23; // [rsp+68h] [rbp-40h] BYREF
  __int128 v24; // [rsp+78h] [rbp-30h] BYREF
  __int64 v25; // [rsp+88h] [rbp-20h] BYREF

  v4 = (_DWORD *)a4;
  v7 = -1073741811;
  Src = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  if ( a2 >= 11 )
    goto LABEL_31;
  v8 = (unsigned int *)a4;
  if ( a4 >= MmUserProbeAddress )
    v8 = (unsigned int *)MmUserProbeAddress;
  v9 = *v8;
  switch ( a2 )
  {
    case 3:
      if ( !a3 )
        goto LABEL_28;
      v10 = 48LL;
      if ( v9 >= 0x30 )
      {
        v11 = 48;
        goto LABEL_11;
      }
      goto LABEL_35;
    case 4:
      goto LABEL_6;
    case 6:
      if ( !a3 )
        goto LABEL_28;
      v11 = 32;
      if ( v9 >= 0x20 )
      {
        v10 = 32LL;
        goto LABEL_11;
      }
LABEL_35:
      v7 = -1073741306;
      goto LABEL_28;
  }
  if ( a2 != 9 )
  {
LABEL_31:
    v7 = -1073741821;
    goto LABEL_28;
  }
LABEL_6:
  if ( !a3 )
  {
LABEL_28:
    v16 = 0;
    goto LABEL_21;
  }
  v10 = 56LL;
  if ( v9 < 0x38 )
    goto LABEL_35;
  v11 = 56;
  v12 = (ULONG64)a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  Src = *(_OWORD *)v12;
  v23 = *(_OWORD *)(v12 + 16);
  v24 = *(_OWORD *)(v12 + 32);
  v25 = *(_QWORD *)(v12 + 48);
LABEL_11:
  v13 = a2 - 3;
  if ( !v13 )
  {
    HDEV = (Gre::Base *)UserGetHDEV();
    SurfaceData = GreDwmGetSurfaceData(HDEV, a1, (struct tagDWMSURFACEDATA *)&Src);
    goto LABEL_14;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    SurfaceData = GreSfmGetDirtyRgn(a1, Src, (char *)&Src + 8, &v23, 0LL, 0LL, 0LL, &v25, (char *)&v25 + 4);
LABEL_14:
    v7 = SurfaceData;
    goto LABEL_15;
  }
  v19 = v14 - 2;
  if ( !v19 )
  {
    UserGetHDEV();
    SurfaceData = GreDwmGetRedirectionStyle(v20, a1, &Src);
    goto LABEL_14;
  }
  if ( v19 == 3 )
  {
    SurfaceData = GreSfmGetDirtyRgn(
                    a1,
                    Src,
                    (char *)&Src + 8,
                    &v23,
                    (char *)&v23 + 8,
                    &v24,
                    (char *)&v24 + 8,
                    &v25,
                    (char *)&v25 + 4);
    goto LABEL_14;
  }
LABEL_15:
  if ( v7 < 0 )
    goto LABEL_28;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (void *)MmUserProbeAddress;
  memmove(a3, &Src, v10);
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_DWORD *)MmUserProbeAddress;
  *v4 = v11;
  v16 = 1;
LABEL_21:
  if ( !v16 )
  {
    v21 = RtlNtStatusToDosError(v7);
    EngSetLastError(v21);
  }
  return v16;
}
