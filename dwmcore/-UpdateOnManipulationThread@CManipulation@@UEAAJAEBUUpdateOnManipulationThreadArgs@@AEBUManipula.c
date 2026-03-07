__int64 __fastcall CManipulation::UpdateOnManipulationThread(
        CManipulation *this,
        const struct UpdateOnManipulationThreadArgs *a2,
        const struct ManipulationThreadTelemetryData *a3,
        struct IDCompositionInteractionStats *a4)
{
  CManipulation *v4; // r12
  bool v5; // dl
  unsigned int v6; // edi
  unsigned int *v7; // r11
  char v8; // si
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // r11
  const struct D2DVector3 *v12; // r14
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  const struct D2DVector3 *v15; // rbx
  unsigned __int64 v16; // rcx
  __int64 v17; // r10
  char v18; // si
  __int64 v19; // r11
  __int64 v20; // r10
  char v21; // si
  __int64 v22; // r11
  __int64 v23; // r10
  char v24; // si
  __int64 v25; // r11
  __int64 v26; // r10
  char v27; // si
  __int64 v28; // r11
  char v29; // si
  __int64 v30; // r10
  __int64 v31; // r11
  char v32; // cl
  __int64 *QuadPart; // rdi
  char v34; // cl
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-D0h] BYREF
  const struct ManipulationThreadTelemetryData *v49; // [rsp+38h] [rbp-C8h]
  __int64 v50; // [rsp+40h] [rbp-C0h]
  unsigned int v51; // [rsp+48h] [rbp-B8h]
  CManipulation *v52; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v53; // [rsp+58h] [rbp-A8h]
  __int128 v54; // [rsp+68h] [rbp-98h]
  __int128 v55; // [rsp+78h] [rbp-88h]
  __int128 v56; // [rsp+88h] [rbp-78h]
  __int128 v57; // [rsp+98h] [rbp-68h]
  __int128 v58; // [rsp+A8h] [rbp-58h]
  __int128 v59; // [rsp+B8h] [rbp-48h]
  __int128 v60; // [rsp+C8h] [rbp-38h]
  __int128 v61; // [rsp+D8h] [rbp-28h]
  LARGE_INTEGER v62; // [rsp+E8h] [rbp-18h]
  int v63; // [rsp+108h] [rbp+8h]
  __int16 v64; // [rsp+10Ch] [rbp+Ch]
  int v65; // [rsp+110h] [rbp+10h]
  int v66; // [rsp+114h] [rbp+14h]
  int v67; // [rsp+118h] [rbp+18h]
  int v68; // [rsp+120h] [rbp+20h]

  PerformanceCount.QuadPart = (LONGLONG)a4;
  v4 = (CManipulation *)((char *)this - 72);
  v5 = (*((_BYTE *)a2 + 16) & 4) != 0;
  v49 = a3;
  v6 = 0;
  CManipulation::_UpdateCaptureState((CManipulation *)((char *)this - 72), v5);
  v8 = 0;
  CManipulation::_ResetManipulationThreadDataIfNecessary(v9, *v7);
  v12 = (const struct D2DVector3 *)(v11 + 32);
  v50 = 0x3F8000003F800000LL;
  v13 = *(_QWORD *)(v11 + 32);
  v51 = 1065353216;
  v14 = v13 - 0x3F8000003F800000LL;
  if ( !v14 )
    v14 = *(unsigned int *)(v11 + 40) - (unsigned __int64)v51;
  if ( v14 )
  {
    v8 = 1;
    *(float *)(v10 + 32) = *(float *)v12 * *(float *)(v10 + 32);
    *(float *)(v10 + 36) = *(float *)(v11 + 36) * *(float *)(v10 + 36);
    *(float *)(v10 + 40) = *(float *)(v11 + 40) * *(float *)(v10 + 40);
  }
  v50 = 0LL;
  v15 = (const struct D2DVector3 *)(v11 + 20);
  v16 = *(_QWORD *)(v11 + 20);
  v51 = 0;
  if ( !v16 )
    v16 = *(unsigned int *)(v11 + 28) - (unsigned __int64)v51;
  if ( v16 )
  {
    v8 = 1;
    *(float *)(v10 + 8) = *(float *)(v10 + 8) + *(float *)v15;
    *(float *)(v10 + 12) = *(float *)(v11 + 24) + *(float *)(v10 + 12);
    *(float *)(v10 + 16) = *(float *)(v11 + 28) + *(float *)(v10 + 16);
  }
  *(_QWORD *)(v10 + 44) = *(_QWORD *)v12;
  *(_DWORD *)(v10 + 52) = *(_DWORD *)(v11 + 40);
  *(_QWORD *)(v10 + 20) = *(_QWORD *)v15;
  *(_DWORD *)(v10 + 28) = *(_DWORD *)(v11 + 28);
  v18 = anonymous_namespace_::StoreIfChanged_D2DVector3_(v11 + 48, v10 + 136) | v8;
  v21 = anonymous_namespace_::StoreIfChanged_D2DVector3_(v19 + 60, v17 + 148) | v18;
  v24 = anonymous_namespace_::StoreIfChanged_D2DVector3_(v22 + 76, v20 + 60) | v21;
  v27 = anonymous_namespace_::StoreIfChanged_float_((float *)(v25 + 44), (float *)(v23 + 56)) | v24;
  v29 = anonymous_namespace_::StoreIfChanged_float_((float *)(v28 + 72), (float *)(v26 + 160)) | v27;
  if ( *(_DWORD *)v31 != *(_DWORD *)(v30 + 164)
    || v29
    || *(_DWORD *)(v30 + 168) != *(_DWORD *)(v31 + 88)
    || *(_DWORD *)(v30 + 176) != *(_DWORD *)(v31 + 4)
    || *(_DWORD *)(v30 + 180) != *(_DWORD *)(v31 + 8)
    || *(_DWORD *)(v30 + 184) != *(_DWORD *)(v31 + 12)
    || ((*(_BYTE *)(v31 + 16) ^ *(_BYTE *)(v30 + 188)) & 1) != 0
    || ((*(_BYTE *)(v31 + 16) ^ *(_BYTE *)(v30 + 188)) & 2) != 0 )
  {
    v32 = *(_BYTE *)(v30 + 188);
    QuadPart = (__int64 *)PerformanceCount.QuadPart;
    *(_DWORD *)(v30 + 164) = *(_DWORD *)v31;
    *(_DWORD *)(v30 + 176) = *(_DWORD *)(v31 + 4);
    *(_DWORD *)(v30 + 180) = *(_DWORD *)(v31 + 8);
    *(_DWORD *)(v30 + 184) = *(_DWORD *)(v31 + 12);
    *(_DWORD *)(v30 + 168) = *(_DWORD *)(v31 + 88);
    v34 = *(_BYTE *)(v30 + 188) ^ (*(_BYTE *)(v31 + 16) ^ v32) & 1;
    *(_BYTE *)(v30 + 188) = v34;
    *(_BYTE *)(v30 + 188) = v34 ^ (*(_BYTE *)(v31 + 16) ^ v34) & 2;
    *(_DWORD *)(v30 + 172) = *(_DWORD *)(v31 + 92);
    if ( QuadPart )
    {
      v50 = 0LL;
      v51 = 0;
      v35 = *(_QWORD *)(v31 + 48);
      if ( !v35 )
        v35 = *(unsigned int *)(v31 + 56) - (unsigned __int64)v51;
      if ( v35 )
        goto LABEL_24;
      v50 = 0LL;
      v51 = 0;
      v36 = *(_QWORD *)(v31 + 60);
      if ( !v36 )
        v36 = *(unsigned int *)(v31 + 68) - (unsigned __int64)v51;
      if ( v36 )
      {
LABEL_24:
        QueryPerformanceCounter(&PerformanceCount);
        memset_0(&v52, 0, 0xD8uLL);
        v52 = v4;
        v37 = *((_OWORD *)v49 + 2);
        v53 = *((_OWORD *)v49 + 1);
        v38 = *((_OWORD *)v49 + 3);
        v54 = v37;
        v39 = *((_OWORD *)v49 + 4);
        v55 = v38;
        v40 = *((_OWORD *)v49 + 5);
        v56 = v39;
        v41 = *((_OWORD *)v49 + 6);
        v57 = v40;
        v42 = *((_OWORD *)v49 + 7);
        v58 = v41;
        v43 = *((_OWORD *)v49 + 9);
        v59 = v42;
        v60 = *((_OWORD *)v49 + 8);
        v61 = v43;
        v62 = PerformanceCount;
        v63 = *(_DWORD *)v49;
        v64 = *((_WORD *)v49 + 90);
        v65 = *((_DWORD *)v49 + 2);
        v66 = *((_DWORD *)v49 + 1);
        v68 = *((_DWORD *)v49 + 44);
        v44 = *QuadPart;
        v67 = 1;
        (*(void (__fastcall **)(__int64 *, CManipulation **))(v44 + 208))(QuadPart, &v52);
      }
    }
    v45 = CManipulation::_SendUpdateToRenderThread(v4, v29, v15, v12);
    v6 = v45;
    if ( v45 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x82u, 0LL);
  }
  return v6;
}
