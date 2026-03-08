/*
 * XREFs of ?DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z @ 0x1C0072FCC
 * Callers:
 *     ?DisplayID_GetSupportedModes@@YAJPEBUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z @ 0x1C0072ED8 (-DisplayID_GetSupportedModes@@YAJPEBUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?AddVideoModesWithStereoCode@@YAXW4__WMI_MONITOR_VIDEO_MODE_STEREO_TYPE@@_NGPEAU_VideoModeDescriptor@@AEAG2@Z @ 0x1C00729CC (-AddVideoModesWithStereoCode@@YAXW4__WMI_MONITOR_VIDEO_MODE_STEREO_TYPE@@_NGPEAU_VideoModeDescri.c)
 *     ?DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEBU_DISPLAYID_BLOCK_HEADER@@@Z @ 0x1C0072A9C (-DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEBU_DISPLAYID_BLOCK_.c)
 *     ?DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z @ 0x1C0072CD0 (-DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z.c)
 *     ?DisplayID_GetVideoModeFromType7Desc@@YAJAEBU_DISPLAYID_DETAILED_TIMING_DESCRIPTOR@@AEAU_VideoModeDescriptor@@@Z @ 0x1C00733DC (-DisplayID_GetVideoModeFromType7Desc@@YAJAEBU_DISPLAYID_DETAILED_TIMING_DESCRIPTOR@@AEAU_VideoMo.c)
 *     ?IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ @ 0x1C0073690 (-IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ.c)
 */

__int64 __fastcall DisplayID_GetVideoModeDescriptors(
        const struct DisplayIDObj *a1,
        unsigned __int16 *a2,
        struct _VideoModeDescriptor *a3,
        unsigned __int16 *a4,
        unsigned __int16 a5)
{
  unsigned __int16 *v5; // r14
  const struct DisplayIDObj *v7; // r13
  __int64 result; // rax
  bool v9; // r12
  unsigned __int64 v10; // rax
  char v11; // bl
  char v12; // al
  int v13; // edx
  __int64 v14; // rcx
  unsigned __int16 v15; // di
  __int16 v16; // r11
  unsigned int v17; // r15d
  _BYTE *v18; // r14
  char v19; // al
  unsigned __int64 v20; // rcx
  int v21; // r9d
  unsigned int v22; // r10d
  unsigned __int8 v23; // r8
  unsigned __int8 v24; // r13
  __int64 v25; // rax
  const struct _DISPLAYID_DETAILED_TIMING_DESCRIPTOR *v26; // rcx
  __int64 v27; // r8
  unsigned __int8 v28; // al
  unsigned __int16 v29; // dx
  USHORT v30; // dx
  USHORT *p_HorizontalImageSize; // rax
  USHORT v32; // r8
  __int64 v33; // rcx
  int v34; // [rsp+38h] [rbp-91h] BYREF
  int v35; // [rsp+3Ch] [rbp-8Dh]
  unsigned int v36[2]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v37; // [rsp+48h] [rbp-81h]
  _BYTE *v38; // [rsp+50h] [rbp-79h] BYREF
  PVOID P; // [rsp+58h] [rbp-71h]
  __int64 v40; // [rsp+60h] [rbp-69h]
  struct _VideoModeDescriptor *v41; // [rsp+68h] [rbp-61h]
  unsigned __int64 v42; // [rsp+70h] [rbp-59h]
  __int64 v43; // [rsp+78h] [rbp-51h]
  _BYTE *v44; // [rsp+80h] [rbp-49h] BYREF
  char v45; // [rsp+88h] [rbp-41h]
  char v48; // [rsp+138h] [rbp+6Fh]

  v5 = a4;
  v7 = a1;
  if ( !a3 )
    return 3221225485LL;
  v37 = *a2;
  memset(a3, 0, 56 * v37);
  v36[0] = 0;
  *v5 = -1;
  v36[1] = 0;
  result = DisplayID_GetPhysicalSize(v7, v36, &v36[1]);
  if ( (int)result >= 0 )
  {
    v38 = 0LL;
    v48 = 0;
    v9 = (int)DisplayID_GetBlock((__int64 *)v7, 39, &v38) >= 0;
    P = 0LL;
    if ( !a5 )
      goto LABEL_9;
    v10 = 56LL * a5;
    if ( !is_mul_ok(a5, 0x38uLL) )
      v10 = -1LL;
    P = (PVOID)operator new[](v10, 0x32444944u, 256LL);
    if ( P )
    {
LABEL_9:
      v11 = 0;
      if ( v9 )
      {
        if ( *v38 == 39 && (unsigned __int8)(v38[2] - 3) <= 0xF5u && v38[3] > 1u )
        {
          v12 = v38[1];
          if ( (v12 & 7) != 0 )
          {
            if ( (v12 & 0x40) != 0 )
            {
              v9 = 0;
            }
            else if ( v12 < 0 )
            {
              v48 = 1;
            }
          }
          else
          {
            v48 = (unsigned __int8)v12 >> 7;
          }
          v11 = 5;
          if ( v38[4] )
          {
            if ( v38[4] == 1 )
            {
              v11 = 6;
            }
            else if ( v38[4] == 3 )
            {
              v11 = (v38[5] != 0) + 3;
            }
          }
          else
          {
            v11 = (v38[5] != 0) + 1;
          }
        }
        else
        {
          v9 = 0;
        }
      }
      v13 = 0;
      v14 = *(_QWORD *)v7;
      v15 = 0;
      v40 = *(_QWORD *)v7;
      v35 = 0;
      LOWORD(v34) = 0;
      if ( *((int *)v7 + 5) > 0 )
      {
        v16 = v37;
        do
        {
          v17 = *(unsigned __int8 *)(v14 + 1);
          if ( v17 >= 3 )
          {
            v18 = (_BYTE *)((v14 + 4) & -(__int64)((_BYTE)v17 != 0));
            do
            {
              v19 = *v18;
              if ( !*v18 )
                break;
              v20 = (unsigned __int8)v18[2];
              v21 = v20 + 3;
              LODWORD(v38) = v20 + 3;
              v22 = v20 + 3;
              v43 = (unsigned int)(v20 + 3);
              if ( (int)v17 < (int)v20 + 3 )
                break;
              if ( v19 == 34 )
              {
                v44 = v18;
                v42 = v20 / 0x14;
                v45 = v20 / 0x14;
                if ( DisplayID_Type7Timing_Parser::IsValidBlock((DisplayID_Type7Timing_Parser *)&v44) )
                {
                  v24 = 0;
                  if ( v23 )
                  {
                    while ( 1 )
                    {
                      v25 = v37;
                      if ( !(_WORD)v37 )
                        break;
                      LOWORD(v25) = v37 - 1;
                      v37 = v25;
                      v41 = &a3[v15];
                      if ( v24 >= v23 )
                        v26 = 0LL;
                      else
                        v26 = (const struct _DISPLAYID_DETAILED_TIMING_DESCRIPTOR *)&v18[20 * v24 + 3];
                      if ( (int)DisplayID_GetVideoModeFromType7Desc(v26, &a3[v15]) >= 0 )
                      {
                        if ( v9 )
                        {
                          AddVideoModesWithStereoCode(v11, v48, v27, (__int64)P, &v34, (__int64)a3);
                          v15 = v34;
                        }
                        else
                        {
                          v41->StereoModeType = 0;
                          LOWORD(v34) = ++v15;
                        }
                      }
                      v23 = v42;
                      if ( ++v24 >= (unsigned __int8)v42 )
                      {
                        v21 = (int)v38;
                        v22 = v43;
                        v16 = v37;
                        goto LABEL_45;
                      }
                    }
                    v16 = 0;
                    break;
                  }
LABEL_45:
                  if ( !v16 )
                    break;
                }
              }
              v17 -= v21;
              v18 += v22;
            }
            while ( v17 >= 3 );
            v14 = v40;
            v5 = a4;
            v13 = v35;
            v7 = a1;
          }
          if ( !v13 && v15 )
            *v5 = 0;
          if ( !v16 )
            break;
          ++v13;
          v28 = *(_BYTE *)(v14 + 1) + 5;
          v35 = v13;
          v14 += v28;
          v40 = v14;
        }
        while ( v13 < *((_DWORD *)v7 + 5) );
      }
      *a2 = v15;
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v15 )
      {
        if ( *v5 == 0xFFFF )
        {
          *v5 = 0;
          v29 = 0;
          while ( !(unsigned __int16)_mm_extract_epi16(*(__m128i *)&a3[v29].HorizontalSyncPulseWidth, 2) )
          {
            if ( ++v29 >= v15 )
              goto LABEL_65;
          }
          *v5 = v29;
        }
LABEL_65:
        v30 = v36[0];
        p_HorizontalImageSize = &a3->HorizontalImageSize;
        v32 = v36[1];
        v33 = v15;
        do
        {
          *((_BYTE *)p_HorizontalImageSize + 17) = 2;
          *p_HorizontalImageSize = v30;
          p_HorizontalImageSize[1] = v32;
          p_HorizontalImageSize += 28;
          --v33;
        }
        while ( v33 );
        return 0LL;
      }
      else
      {
        return 3221225659LL;
      }
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
