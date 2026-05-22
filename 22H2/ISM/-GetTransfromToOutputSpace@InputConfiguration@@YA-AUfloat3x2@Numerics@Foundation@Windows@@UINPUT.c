/*
 * XREFs of ?GetTransfromToOutputSpace@InputConfiguration@@YA?AUfloat3x2@Numerics@Foundation@Windows@@UINPUT_SPACE_REGION@@UtagRECT@@@Z @ 0x1800BBB7C
 * Callers:
 *     ?UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUInputConfigContextMessage@@@Z @ 0x180189380 (-UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUInputConfigContextMessage@@@Z.c)
 * Callees:
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat3x2@012@AEBU3012@0@Z @ 0x1800BB5FC (--DNumerics@Foundation@Windows@@YA-AUfloat3x2@012@AEBU3012@0@Z.c)
 */

__int64 __fastcall InputConfiguration::GetTransfromToOutputSpace(__int64 a1, __int64 a2, int *a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // ebx
  int v7; // edi
  int v8; // esi
  int v9; // r14d
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm8_4
  float v15; // xmm9_4
  unsigned int v16; // xmm6_4
  __int64 v17; // r11
  __int64 v18; // xmm1_8
  __int64 v19; // r9
  int v20; // eax
  int v21; // ecx
  int v22; // r10d
  int v23; // r10d
  int v24; // r10d
  __int128 v25; // xmm0
  float *v26; // rax
  float *v27; // rax
  __int64 v28; // xmm1_8
  float *v29; // rax
  float *v30; // r11
  __int128 v32; // [rsp+28h] [rbp-79h] BYREF
  float v33; // [rsp+38h] [rbp-69h]
  float v34; // [rsp+3Ch] [rbp-65h]
  __int128 v35; // [rsp+40h] [rbp-61h] BYREF
  __int64 v36; // [rsp+50h] [rbp-51h]
  __int128 v37; // [rsp+58h] [rbp-49h] BYREF
  float v38; // [rsp+68h] [rbp-39h]
  float v39; // [rsp+6Ch] [rbp-35h]
  __int128 v40; // [rsp+70h] [rbp-31h] BYREF
  __int64 v41; // [rsp+80h] [rbp-21h]
  float v42[6]; // [rsp+88h] [rbp-19h] BYREF
  float v43[22]; // [rsp+A0h] [rbp-1h] BYREF

  v4 = a3[1];
  v5 = *a3;
  v6 = *(_DWORD *)a2;
  v7 = *(_DWORD *)(a2 + 4);
  v8 = *(_DWORD *)(a2 + 168);
  v9 = *(_DWORD *)(a2 + 172);
  v10 = (float)(a3[2] - *a3);
  v11 = (float)(a3[3] - v4);
  v12 = (float)(*(_DWORD *)(a2 + 8) - *(_DWORD *)a2);
  v13 = (float)(*(_DWORD *)(a2 + 12) - v7);
  v14 = (float)(*(_DWORD *)(a2 + 176) - v8);
  v15 = (float)(*(_DWORD *)(a2 + 180) - v9);
  if ( (*(_BYTE *)(a2 + 16) & 2) != 0 )
  {
    if ( ((*(_DWORD *)(a2 + 164) - 2) & 0xFFFFFFFD) == 0 )
    {
      v10 = (float)(a3[3] - a3[1]);
      v11 = (float)(a3[2] - *a3);
    }
    DWORD2(v35) = 0;
    v36 = 0LL;
    v32 = _xmm;
    *(_QWORD *)&v35 = COERCE_UNSIGNED_INT(v14 / v10);
    *((float *)&v35 + 3) = v15 / v11;
    v33 = (float)v8 - (float)((float)v5 * (float)(v14 / v10));
    v34 = (float)v9 - (float)((float)v4 * (float)(v15 / v11));
    Windows::Foundation::Numerics::operator*(v43, (float *)&v35, (float *)&v32);
    v20 = *(_DWORD *)(v19 + 184);
    v21 = *(_DWORD *)(v19 + 188);
    *(_QWORD *)((char *)&v32 + 4) = 0LL;
    v33 = 0.0;
    v34 = 0.0;
    v40 = _xmm;
    *(float *)&v41 = (float)(v8 - v20);
    *((float *)&v41 + 1) = (float)(v9 - v21);
    v37 = _xmm;
    *(float *)&v32 = v12 / v14;
    *((float *)&v32 + 3) = v13 / v15;
    v39 = (float)v7 - (float)((float)v21 * (float)(v13 / v15));
    v38 = (float)v6 - (float)((float)v20 * (float)(v12 / v14));
    Windows::Foundation::Numerics::operator*((float *)&v35, (float *)&v32, (float *)&v37);
    v23 = v22 - 2;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( v24 )
      {
        if ( v24 != 1 )
        {
LABEL_13:
          v29 = Windows::Foundation::Numerics::operator*(v42, v43, (float *)&v40);
          Windows::Foundation::Numerics::operator*(v30, v29, (float *)&v35);
          return v17;
        }
        v38 = 0.0;
        v37 = _xmm;
        v25 = _xmm;
        v39 = v13;
LABEL_12:
        v33 = 0.0;
        v34 = 0.0;
        v32 = v25;
        v26 = Windows::Foundation::Numerics::operator*(v42, (float *)&v32, (float *)&v37);
        v27 = Windows::Foundation::Numerics::operator*((float *)&v37, (float *)&v35, v26);
        v28 = *((_QWORD *)v27 + 2);
        v35 = *(_OWORD *)v27;
        v36 = v28;
        goto LABEL_13;
      }
      v37 = _xmm;
      v25 = _xmm_bf8000000000000000000000bf800000;
      v39 = v13;
    }
    else
    {
      v39 = 0.0;
      v37 = _xmm;
      v25 = _xmm;
    }
    v38 = v12;
    goto LABEL_12;
  }
  DWORD2(v35) = 0;
  v36 = 0LL;
  *(float *)&v16 = v12 / v10;
  v32 = _xmm;
  *(_QWORD *)&v35 = v16;
  *((float *)&v35 + 3) = v13 / v11;
  v33 = (float)v6 - (float)((float)v5 * *(float *)&v16);
  v34 = (float)v7 - (float)((float)v4 * (float)(v13 / v11));
  Windows::Foundation::Numerics::operator*((float *)&v40, (float *)&v35, (float *)&v32);
  v18 = v41;
  *(_OWORD *)v17 = v40;
  *(_QWORD *)(v17 + 16) = v18;
  return v17;
}
