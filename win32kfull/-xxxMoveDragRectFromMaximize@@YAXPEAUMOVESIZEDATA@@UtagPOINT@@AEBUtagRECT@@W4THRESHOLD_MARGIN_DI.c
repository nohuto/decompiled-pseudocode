void __fastcall xxxMoveDragRectFromMaximize(__int64 a1, __int64 a2, _DWORD *a3, int a4, _DWORD *a5, _DWORD *a6)
{
  unsigned int v8; // edx
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // edi
  int v14; // ebp
  int v15; // r9d
  int v16; // r8d
  int v17; // ecx
  int v18; // r9d
  int v19; // r8d
  int v20; // eax
  int v21; // edx
  char v22; // dl
  char v23; // dl
  unsigned __int64 v24; // rcx
  int v25; // [rsp+20h] [rbp-D8h]
  _QWORD v26[3]; // [rsp+80h] [rbp-78h] BYREF
  int v27; // [rsp+98h] [rbp-60h]
  char v28; // [rsp+9Ch] [rbp-5Ch]
  __int128 v29; // [rsp+A0h] [rbp-58h]

  v8 = *(_DWORD *)(a1 + 200) & 0xFFFFFF7F;
  *(_DWORD *)(a1 + 200) = v8;
  v10 = v8 & 0x7000;
  v11 = a3[2] - *a3;
  if ( a4 )
  {
    v13 = *(_DWORD *)(a1 + 252);
    if ( v10 == 4096 )
    {
      v16 = v11 / 2;
      if ( v13 >= v11 / 2 )
      {
        if ( v13 > *(_DWORD *)(a1 + 128) - *(_DWORD *)(a1 + 120) - v16 )
        {
          v17 = v11 - (*(_DWORD *)(a1 + 128) - *(_DWORD *)(a1 + 120));
LABEL_29:
          v13 += v17;
          goto LABEL_31;
        }
        goto LABEL_25;
      }
LABEL_31:
      v14 = *(_DWORD *)(a1 + 256);
      goto LABEL_32;
    }
    v18 = *(_DWORD *)(a1 + 128) - *(_DWORD *)(a1 + 120);
    if ( v18 <= v11 )
    {
      if ( v13 < v18 / 2 )
        goto LABEL_31;
      if ( v13 <= v18 / 2 )
      {
        v13 = v18 / 2;
        goto LABEL_31;
      }
    }
    else
    {
      v16 = v11 / 2;
      if ( v13 < v11 / 2 )
        goto LABEL_31;
      if ( v13 <= v18 - v16 )
      {
LABEL_25:
        v13 = v16;
        goto LABEL_31;
      }
    }
    v17 = v11 - v18;
    goto LABEL_29;
  }
  if ( v10 == 4096 )
  {
    v12 = *(_DWORD *)(a1 + 24);
    v13 = a2 - v12;
    if ( (int)a2 - v12 >= v11 / 2 )
    {
      if ( v13 <= *(_DWORD *)(a1 + 32) - v12 - v11 / 2 )
        v13 = v11 / 2;
      else
        v13 = v11 - *(_DWORD *)(a1 + 32) + a2;
    }
    v14 = *(_DWORD *)(a1 + 248);
    goto LABEL_17;
  }
  v15 = *(_DWORD *)(a1 + 128) - *(_DWORD *)(a1 + 120);
  v13 = *(_DWORD *)(a1 + 252);
  if ( v15 <= v11 )
  {
    if ( v13 < v15 / 2 )
      goto LABEL_16;
    if ( v13 <= v15 / 2 )
    {
      v13 = v15 / 2;
      goto LABEL_16;
    }
    goto LABEL_14;
  }
  if ( v13 >= v11 / 2 )
  {
    if ( v13 <= v15 - v11 / 2 )
    {
      v13 = v11 / 2;
      goto LABEL_16;
    }
LABEL_14:
    v13 += v11 - v15;
  }
LABEL_16:
  v14 = *(_DWORD *)(a1 + 256);
LABEL_17:
  *(_DWORD *)(a1 + 244) = v13;
  *(_DWORD *)(a1 + 248) = v14;
LABEL_32:
  *(_OWORD *)a5 = *(_OWORD *)a3;
  v19 = a5[1];
  v20 = *a5;
  v21 = HIDWORD(a2) - v19 - v14;
  LODWORD(a2) = a2 - *a5 - v13;
  a5[2] += a2;
  a5[3] += v21;
  *a5 = a2 + v20;
  a5[1] = HIDWORD(a2) - v14;
  v22 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dddddddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v22,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      v25,
      1u,
      0x28u,
      (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
  v23 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v23,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      1u,
      0x29u,
      (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
      *a5,
      a5[1],
      a5[2],
      a5[3],
      a5[2] - *a5,
      a5[3] - a5[1]);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
  {
    LOBYTE(v21) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v21,
        v19,
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        4,
        1,
        42,
        (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
    }
    v26[0] = 0LL;
    v26[2] = 0LL;
    v27 = 0;
    *a6 = 532;
    v24 = *(_QWORD *)(a1 + 16);
    v26[1] = a5;
    v28 = 0;
    v29 = 0LL;
    xxxMinMaximizeEx(v24, 9u, 12, (__int64)v26);
  }
}
