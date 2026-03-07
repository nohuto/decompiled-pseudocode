void __fastcall CScalarForceEvaluator::Reset(
        CScalarForceEvaluator *this,
        float a2,
        float a3,
        struct IAccelerator *a4,
        const struct ForceThreshold *a5)
{
  float v8; // xmm0_4
  char v9; // al
  float v10; // xmm1_4
  float MinAcceleration; // xmm0_4
  __int128 v12; // xmm0
  int v13; // eax

  if ( (*(unsigned __int8 (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a4 + 40LL))(a4) )
  {
    v8 = (*(float (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a4 + 24LL))(a4) - a2;
    v9 = *((_BYTE *)this + 64);
    v10 = (float)(v8 > 0.0);
    *((float *)this + 13) = v10;
    *((_BYTE *)this + 64) = v9 & 0xFE | (COERCE_FLOAT(LODWORD(v10) & _xmm) >= 0.0000011920929);
  }
  *((float *)this + 15) = ForceThreshold::GetMinVelocity(a5);
  MinAcceleration = ForceThreshold::GetMinAcceleration(a5);
  *((_DWORD *)this + 6) = *((_DWORD *)this + 15);
  *((float *)this + 14) = MinAcceleration;
  *((float *)this + 4) = a2;
  *((float *)this + 5) = a3;
  *((float *)this + 7) = MinAcceleration;
  *((float *)this + 3) = (*(float (__fastcall **)(struct IAccelerator *, char *))(*(_QWORD *)a4 + 16LL))(
                           a4,
                           (char *)this + 12);
  v12 = *(_OWORD *)((char *)this + 12);
  v13 = *((_DWORD *)this + 7);
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 64) |= 2u;
  *((_BYTE *)this + 64) &= ~4u;
  *((_OWORD *)this + 2) = v12;
  *((_DWORD *)this + 12) = v13;
}
