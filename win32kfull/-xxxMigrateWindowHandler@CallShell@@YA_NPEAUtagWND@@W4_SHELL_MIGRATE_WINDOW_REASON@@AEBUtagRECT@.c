char __fastcall CallShell::xxxMigrateWindowHandler(
        struct tagRECT *a1,
        int a2,
        __int64 *a3,
        __int64 *a4,
        unsigned __int16 a5,
        struct tagWND *a6,
        __int64 a7,
        __m128i *a8,
        int *a9,
        int *a10)
{
  struct tagRECT v14; // xmm6
  __int64 v15; // rax
  unsigned __int16 v16; // cx
  __int128 v17; // xmm0
  __int64 v18; // r9
  __int64 v19; // rcx
  char v20; // si
  char v21; // dl
  const char *v22; // rax
  char v23; // dl
  char v24; // r8
  char v25; // dl
  char v26; // r8
  char v27; // dl
  char v28; // r8
  char v29; // dl
  char v30; // r8
  int v31; // edx
  int v32; // r8d
  int v33; // ecx
  int v34; // eax
  char v35; // dl
  const char *v36; // rax
  __m128i v38; // xmm6
  char v39; // dl
  BOOL v40; // ebx
  __int64 v41; // rcx
  int v42; // ecx
  const char *v43; // rax
  __int64 v44; // [rsp+48h] [rbp-C0h]
  __int64 v45; // [rsp+50h] [rbp-B8h]
  __int64 v46; // [rsp+58h] [rbp-B0h]
  __int64 v47; // [rsp+60h] [rbp-A8h]
  __int64 v48; // [rsp+68h] [rbp-A0h]
  __int64 v49; // [rsp+70h] [rbp-98h]
  __m128i v50; // [rsp+78h] [rbp-90h] BYREF
  __m128i *v51; // [rsp+88h] [rbp-80h]
  __int128 v52; // [rsp+98h] [rbp-70h] BYREF
  int v53; // [rsp+A8h] [rbp-60h]
  int v54; // [rsp+ACh] [rbp-5Ch]
  __int128 v55; // [rsp+B0h] [rbp-58h]
  unsigned __int16 v56; // [rsp+C0h] [rbp-48h]
  struct tagRECT v57; // [rsp+C4h] [rbp-44h]
  __m128i v58; // [rsp+D4h] [rbp-34h]
  unsigned __int16 v59; // [rsp+E4h] [rbp-24h]
  struct tagRECT v60; // [rsp+E8h] [rbp-20h]
  int v61; // [rsp+F8h] [rbp-10h]
  struct tagRECT v62; // [rsp+108h] [rbp+0h] BYREF
  struct tagRECT v63; // [rsp+118h] [rbp+10h] BYREF

  *a9 = 3;
  v51 = a8;
  *a8 = 0LL;
  v14 = *WindowMargins::ReduceRect(&v62, a1, a6, (const struct tagRECT *)a5);
  v15 = *(_QWORD *)&a1[2].right;
  v50 = (__m128i)v14;
  v16 = (*(_DWORD *)(v15 + 288) >> 8) & 0x1FF;
  if ( v16 )
  {
    ScaleDPIRect(&v50, &v50, a5, v16, *a3, *a4);
    v14 = (struct tagRECT)v50;
  }
  memset_0(&v52, 0, 0x68uLL);
  v17 = *(_OWORD *)a3;
  v18 = *(_QWORD *)&a1->left;
  v54 = *a10;
  v55 = v17;
  DWORD2(v52) = 3;
  *(_QWORD *)&v52 = v18;
  v19 = *(_QWORD *)(a7 + 40);
  v53 = a2;
  v56 = a5;
  v57 = v14;
  v58 = *(__m128i *)(v19 + 44);
  v59 = *(_WORD *)(v19 + 60);
  v60 = 0LL;
  v61 = 3;
  v20 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
    || (v21 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v21 = 0;
  }
  if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( a2 )
    {
      v22 = "programmatic";
      if ( a2 != 1 )
        v22 = "restore from minimize";
    }
    else
    {
      v22 = "recalc";
    }
    WPP_RECORDER_AND_TRACE_SF_qs(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v21,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      0x19u,
      0x1Bu,
      (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
      v18,
      v22);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
    || (v23 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v23 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v24 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v24 = 0;
  }
  if ( v23 || v24 )
  {
    LODWORD(v45) = DWORD1(v55);
    LODWORD(v44) = v55;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v23,
      v24,
      (__int64)gFullLog,
      5u,
      0x19u,
      0x1Cu,
      (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
      v44,
      v45,
      DWORD2(v55),
      HIDWORD(v55),
      DWORD2(v55) - (_DWORD)v55,
      HIDWORD(v55) - DWORD1(v55));
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
    || (v25 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v25 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v26 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v26 = 0;
  }
  if ( v25 || v26 )
  {
    LODWORD(v49) = v58.m128i_i32[3] - v58.m128i_i32[1];
    LODWORD(v48) = v58.m128i_i32[2] - v58.m128i_i32[0];
    LODWORD(v47) = v58.m128i_i32[3];
    LODWORD(v46) = v58.m128i_i32[2];
    LODWORD(v45) = v58.m128i_i32[1];
    LODWORD(v44) = v58.m128i_i32[0];
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v25,
      v26,
      (__int64)gFullLog,
      5u,
      0x19u,
      0x1Du,
      (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
    || (v27 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v27 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v28 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v28 = 0;
  }
  if ( v27 || v28 )
  {
    LODWORD(v45) = v59;
    LODWORD(v44) = v56;
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v27,
      v28,
      (__int64)gFullLog,
      5u,
      0x19u,
      0x1Eu,
      (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
      v44,
      v45);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
    || (v29 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v29 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v30 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v30 = 0;
  }
  if ( v29 || v30 )
  {
    LODWORD(v49) = v57.bottom - v57.top;
    LODWORD(v48) = v57.right - v57.left;
    LODWORD(v47) = v57.bottom;
    LODWORD(v46) = v57.right;
    LODWORD(v45) = v57.top;
    LODWORD(v44) = v57.left;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v29,
      v30,
      (__int64)gFullLog,
      5u,
      0x19u,
      0x1Fu,
      (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  if ( (unsigned int)anonymous_namespace_::xxxCallIAMWindowManagementHandler(&v52, 0) )
  {
    v33 = v61;
    if ( v61 != 2 )
    {
      if ( v61 > 3 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v20 = 0;
        }
        if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v44) = v61;
          WPP_RECORDER_AND_TRACE_SF_d(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v20,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gFullLog,
            2u,
            0x19u,
            0x22u,
            (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
            v44);
        }
        return 0;
      }
      v34 = v54;
      *a9 = v61;
      *a10 = v34;
      if ( v33 == 3 )
      {
        v38 = (__m128i)v60;
        v50 = v58;
        v63 = v60;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
          || (v39 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v39 = 0;
        }
        if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v49) = v60.bottom - v60.top;
          LODWORD(v48) = v60.right - v60.left;
          LODWORD(v47) = v60.bottom;
          LODWORD(v46) = v60.right;
          LODWORD(v45) = v60.top;
          LODWORD(v44) = v60.left;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v39,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gFullLog,
            4u,
            0x19u,
            0x24u,
            (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49);
        }
        v62 = 0LL;
        v40 = IsRectEmptyInl(&v63);
        if ( v40 || !(unsigned int)IntersectRect(&v62, &v63.left, v50.m128i_i32) )
          goto LABEL_116;
        v41 = *(_QWORD *)&v62.left - v38.m128i_i64[0];
        if ( *(_QWORD *)&v62.left == v38.m128i_i64[0] )
          v41 = *(_QWORD *)&v62.right - *(_QWORD *)&v63.right;
        if ( v41 )
        {
LABEL_116:
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v20 = 0;
          }
          if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v43 = "rect is empty";
            if ( !v40 )
              v43 = "rect not contained by work area";
            WPP_RECORDER_AND_TRACE_SF_s(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v20,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (__int64)gFullLog,
              2u,
              0x19u,
              0x25u,
              (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
              v43);
          }
          return 0;
        }
        v42 = v38.m128i_i32[0] == v50.m128i_i32[0];
        if ( _mm_cvtsi128_si32(_mm_srli_si128(v38, 4)) == v50.m128i_i32[1] )
          ++v42;
        if ( v63.right == v50.m128i_i32[2] )
          ++v42;
        if ( _mm_cvtsi128_si32(_mm_srli_si128(v38, 12)) == v50.m128i_i32[3] )
          ++v42;
        if ( (unsigned int)(v42 - 2) > 1 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v20 = 0;
          }
          if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v44) = v42;
            WPP_RECORDER_AND_TRACE_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v20,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (__int64)gFullLog,
              2u,
              0x19u,
              0x26u,
              (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
              v44);
          }
          return 0;
        }
        *v51 = v38;
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
          || (v35 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v35 = 0;
        }
        if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( v33 )
          {
            v36 = "maximized";
            if ( v33 != 1 )
              v36 = "minimized";
          }
          else
          {
            v36 = "restored";
          }
          WPP_RECORDER_AND_TRACE_SF_s(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v35,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gFullLog,
            4u,
            0x19u,
            0x23u,
            (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
            v36);
        }
      }
      return 1;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v20 = 0;
    }
    if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v31) = v20;
      LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v31,
        v32,
        (unsigned int)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
        2,
        25,
        33,
        (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids);
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
      || (LOBYTE(v31) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v31) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v20 = 0;
    if ( (_BYTE)v31 || v20 )
    {
      LOBYTE(v32) = v20;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v31,
        v32,
        (unsigned int)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
        5,
        25,
        32,
        (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids);
    }
  }
  return 0;
}
