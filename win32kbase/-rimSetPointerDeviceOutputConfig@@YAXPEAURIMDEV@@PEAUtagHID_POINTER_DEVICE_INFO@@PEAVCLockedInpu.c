/*
 * XREFs of ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C01BCC8C
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C01BDB78 (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C0012EA0 (RIMGetVirtualDesktopPhysicalSize.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C00157DC (--0CLockedInputSpace@@QEAA@XZ.c)
 *     EngMulDiv @ 0x1C003BF30 (EngMulDiv.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C01BD5A0 (RIMGetMonitorPhysicalSize.c)
 *     rimUpdatePointerDeviceOrientation @ 0x1C01BF04C (rimUpdatePointerDeviceOrientation.c)
 *     ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x1C0213630 (-GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z.c)
 *     HMValidateSharedHandleNoRip @ 0x1C0247060 (HMValidateSharedHandleNoRip.c)
 */

void __fastcall rimSetPointerDeviceOutputConfig(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        struct CLockedInputSpace *a3,
        struct CLockedInputSpaceRegion *a4)
{
  _QWORD *v4; // rax
  __int64 v6; // r12
  __int128 v7; // xmm0
  __int128 v9; // xmm0
  struct _LUID *v10; // rbx
  _OWORD *v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // xmm0_8
  __int64 v15; // rax
  _OWORD *v16; // rax
  char *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  INT v21; // r14d
  INT v22; // ebp
  INT v23; // eax
  INT v24; // ebx
  INT v25; // r15d
  INT v26; // edi
  INT v27; // esi
  INT v28; // ebx
  _QWORD v29[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v30[16]; // [rsp+30h] [rbp-38h] BYREF

  v4 = *(_QWORD **)a3;
  v6 = *(_QWORD *)a4;
  v7 = *(_OWORD *)((char *)a2 + 124);
  *((_DWORD *)a2 + 56) = 1;
  *((_OWORD *)a2 + 12) = v7;
  v9 = *(_OWORD *)((char *)a2 + 140);
  *((_OWORD *)a2 + 13) = v9;
  *((_OWORD *)a2 + 11) = v9;
  *((_OWORD *)a2 + 10) = *(_OWORD *)v6;
  *(_QWORD *)((char *)a2 + 228) = *v4;
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v29);
  v10 = (struct _LUID *)((char *)a2 + 240);
  if ( *((_DWORD *)a2 + 59) && InputConfig::GetInputSpace(*v10, (struct CLockedInputSpace *)v29) )
  {
    *(struct _LUID *)((char *)a2 + 228) = *v10;
    if ( *((_DWORD *)a2 + 62) )
      v11 = (_OWORD *)((char *)a2 + 252);
    else
      v11 = (_OWORD *)(v29[0] + 24LL);
    *((_OWORD *)a2 + 10) = *v11;
  }
  else
  {
    *((_DWORD *)a2 + 59) = 0;
    *(_OWORD *)((char *)a2 + 252) = 0LL;
    *v10 = 0LL;
    *((_DWORD *)a2 + 62) = 0;
  }
  v12 = *((_DWORD *)a2 + 90);
  if ( (v12 & 8) == 0 || (v12 & 0x2000) != 0 )
  {
    if ( *((_DWORD *)a1 + 334) && (*(_DWORD *)(v6 + 16) & 2) != 0 )
    {
      v21 = *((_DWORD *)a2 + 37);
      *((_DWORD *)a2 + 56) = *(_DWORD *)(v6 + 164);
      v22 = *(_DWORD *)(v6 + 176);
      v23 = EngMulDiv(*(_DWORD *)(v6 + 192), v21, v22);
      v24 = *(_DWORD *)(v6 + 180);
      v25 = v23;
      v26 = *((_DWORD *)a2 + 38);
      v27 = EngMulDiv(*(_DWORD *)(v6 + 188), v26, v24);
      v28 = EngMulDiv(*(_DWORD *)(v6 + 196), v26, v24);
      *((_DWORD *)a2 + 52) = EngMulDiv(*(_DWORD *)(v6 + 184), v21, v22);
      *((_DWORD *)a2 + 53) = v27;
      *((_DWORD *)a2 + 54) = v25;
      *((_DWORD *)a2 + 55) = v28;
      *((_DWORD *)a2 + 46) = *((_DWORD *)a2 + 54) - *((_DWORD *)a2 + 52);
      *((_DWORD *)a2 + 47) = v28 - *((_DWORD *)a2 + 53);
      rimUpdatePointerDeviceOrientation(a2);
    }
  }
  else
  {
    v13 = *((_QWORD *)a2 + 20);
    v14 = _mm_srli_si128(*((__m128i *)a2 + 10), 8).m128i_u64[0];
    *((_DWORD *)a2 + 50) = v14 - v13;
    *((_DWORD *)a2 + 51) = HIDWORD(v14) - HIDWORD(v13);
    if ( *((_DWORD *)a1 + 334) )
    {
      v15 = HMValidateSharedHandleNoRip(*((_QWORD *)a1 + 168));
      v16 = (_OWORD *)RIMGetMonitorPhysicalSize(v30, v15);
    }
    else
    {
      v16 = (_OWORD *)RIMGetVirtualDesktopPhysicalSize((__int64)v30);
    }
    v17 = (char *)a2 + 30;
    v18 = 6LL;
    *((_OWORD *)a2 + 11) = *v16;
    do
    {
      v19 = *(unsigned int *)(v17 + 2);
      if ( (_DWORD)v19 != -1 && *((_WORD *)v17 - 1) == 1 )
      {
        v20 = 60 * v19;
        if ( *(_WORD *)v17 == 48 )
          *(_DWORD *)((char *)a2 + v20 + 436) = *((_DWORD *)a2 + 50) - 1;
        if ( *(_WORD *)v17 == 49 )
          *(_DWORD *)((char *)a2 + v20 + 436) = *((_DWORD *)a2 + 51) - 1;
      }
      v17 += 16;
      --v18;
    }
    while ( v18 );
  }
  ExReleaseResourceLite(*(PERESOURCE *)v29[1]);
  KeLeaveCriticalRegion();
}
