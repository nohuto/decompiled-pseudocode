void __fastcall EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext(struct MOVESIZEDATA *a1)
{
  __int64 v2; // r8
  unsigned int v3; // r9d
  __int64 v4; // rax
  int v5; // edx
  char v6; // r10
  __int64 v7; // rcx
  char v8; // dl
  int v9; // r8d
  int v10; // r9d
  char v11; // dl
  __int64 v12; // [rsp+40h] [rbp-19h]
  __int64 v13; // [rsp+48h] [rbp-11h]
  __int64 v14; // [rsp+50h] [rbp-9h]
  unsigned int *v15[8]; // [rsp+70h] [rbp+17h] BYREF
  unsigned int v16; // [rsp+C0h] [rbp+67h] BYREF
  unsigned int v17; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v18; // [rsp+D0h] [rbp+77h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v16 = *((_DWORD *)a1 + 72);
  v3 = *(_DWORD *)(*(_QWORD *)(v2 + 40) + 288LL);
  v17 = v3;
  if ( v16 != v3 && (*(_BYTE *)(*(_QWORD *)(v2 + 40) + 288LL) & 0xF) == 3 )
  {
    *((_DWORD *)a1 + 72) = v3;
    v4 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v2 + 40) + 256LL));
    v5 = v16 >> 8;
    v18 = v4;
    v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qdd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v6,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        1u,
        0x5Au,
        (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
        **((_QWORD **)a1 + 2),
        (v17 >> 8) & 0x1FF,
        (v16 >> 8) & 0x1FF);
    v7 = *((_QWORD *)a1 + 2);
    *(_OWORD *)((char *)a1 + 120) = *(_OWORD *)(*(_QWORD *)(v7 + 40) + 88LL);
    *(_OWORD *)((char *)a1 + 24) = *(_OWORD *)(*(_QWORD *)(v7 + 40) + 88LL);
    *(_OWORD *)((char *)a1 + 56) = *(_OWORD *)(*(_QWORD *)(v7 + 40) + 88LL);
    xxxGetMinMaxTrackInfo(a1, v5);
    v15[0] = &v16;
    v15[1] = (unsigned int *)&v18;
    v15[2] = &v17;
    LogicalToPhysicalDPIRect((char *)a1 + 136, (char *)a1 + 136, v16, &v18);
    PhysicalToLogicalDPIRect((char *)a1 + 136, (char *)a1 + 136, v17, &v18);
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v14) = *((_DWORD *)a1 + 36);
      LODWORD(v13) = *((_DWORD *)a1 + 35);
      LODWORD(v12) = *((_DWORD *)a1 + 34);
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        1u,
        0x5Bu,
        (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
        v12,
        v13,
        v14,
        *((_DWORD *)a1 + 37),
        v14 - v12,
        *((_DWORD *)a1 + 37) - v13);
    }
    lambda_dcff6b42735babe5bbfdec74d1bb422f_::operator()(v15, (__int64)a1 + 260);
    lambda_dcff6b42735babe5bbfdec74d1bb422f_::operator()(v15, (__int64)a1 + 188);
    if ( *((_DWORD *)a1 + 44) == 9 )
    {
      v9 = *((_DWORD *)a1 + 30) - *((_DWORD *)a1 + 65);
      v10 = *((_DWORD *)a1 + 31) - *((_DWORD *)a1 + 66);
      *((_DWORD *)a1 + 43) = v10;
      *((_DWORD *)a1 + 42) = v9;
      v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v13) = v10;
        LODWORD(v12) = v9;
        WPP_RECORDER_AND_TRACE_SF_dd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v11,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          4u,
          1u,
          0x5Cu,
          (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
          v12,
          v13);
      }
    }
  }
}
