/*
 * XREFs of ?EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z @ 0x180020218
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18000BF90 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001B930 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     PixelAligningFactor @ 0x180098BCC (PixelAligningFactor.c)
 */

void __fastcall CWindowData::EstablishPixelAlignedScale(CWindowData *this, bool *a2)
{
  bool v2; // di
  double v4; // xmm6_8
  double v6; // xmm9_8
  float v7; // xmm1_4
  int v8; // esi
  int v9; // ebp
  int v10; // esi
  int v11; // ebp
  double v12; // xmm10_8
  __int64 v13; // rcx
  double v14; // xmm0_8
  double v15; // xmm1_8
  float v16; // xmm2_4
  float v17; // xmm1_4
  double v18; // [rsp+90h] [rbp+8h] BYREF
  double v19; // [rsp+98h] [rbp+10h] BYREF
  double v20; // [rsp+A0h] [rbp+18h] BYREF
  double v21; // [rsp+A8h] [rbp+20h] BYREF

  v2 = 0;
  v4 = *((double *)this + 37);
  v6 = v4;
  v7 = v4;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 76) - v7) & _xmm) > 0.0000011920929 )
  {
    *((float *)this + 76) = v7;
    v2 = 1;
  }
  if ( v4 == 1.0 )
  {
    if ( *((float *)this + 43) == 1.0 && *((float *)this + 44) == 1.0 )
      goto LABEL_6;
    *((_DWORD *)this + 44) = 1065353216;
    *((_DWORD *)this + 43) = 1065353216;
LABEL_23:
    v2 = 1;
    goto LABEL_6;
  }
  v8 = 0;
  v9 = 0;
  if ( *((_DWORD *)this + 47) - *((_DWORD *)this + 45) >= 0 )
    v8 = *((_DWORD *)this + 47) - *((_DWORD *)this + 45);
  v10 = v8 - *((_DWORD *)this + 62) - *((_DWORD *)this + 61);
  if ( *((_DWORD *)this + 48) - *((_DWORD *)this + 46) >= 0 )
    v9 = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
  v11 = v9 - *((_DWORD *)this + 64) - *((_DWORD *)this + 63);
  if ( v11 && v10 )
  {
    v12 = PixelAligningFactor(this, (unsigned int)v10, &v20, &v18);
    v14 = PixelAligningFactor(v13, (unsigned int)v11, &v21, &v19);
    if ( v18 <= 0.02 && v19 <= 0.02 )
    {
      v15 = ((double)v10 / (double)v11 - v20 / v21) / ((double)v10 / (double)v11);
      if ( v15 < 0.0 )
        *(_QWORD *)&v15 ^= _xmm;
      if ( v15 <= 0.02 )
      {
        v4 = v12;
        v6 = v14;
      }
    }
    v16 = v4;
    v17 = v6;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 43) - v16) & _xmm) > 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 44) - v17) & _xmm) > 0.0000011920929 )
    {
      *((float *)this + 43) = v16;
      *((float *)this + 44) = v17;
      goto LABEL_23;
    }
  }
LABEL_6:
  *a2 = v2;
}
