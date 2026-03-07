__int64 __fastcall CManipulation::GetProperty(CManipulation *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // xmm0_4
  int v13; // eax
  unsigned int v14; // edx

  v3 = 0;
  if ( !a3 )
    return 2147942487LL;
  if ( !a2 )
  {
    *((_DWORD *)a3 + 18) = 52;
    *(_QWORD *)a3 = *((_QWORD *)this + 33);
    *((_DWORD *)a3 + 2) = *((_DWORD *)this + 68);
    goto LABEL_25;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    *((_DWORD *)a3 + 18) = 52;
    v14 = 1;
    *(_QWORD *)a3 = *(_QWORD *)((char *)this + 276);
    *((_DWORD *)a3 + 2) = *((_DWORD *)this + 71);
    goto LABEL_23;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v12 = *((_DWORD *)this + 72);
    goto LABEL_15;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v14 = 3;
    *(_DWORD *)a3 = *((_DWORD *)this + 75);
    *((_DWORD *)a3 + 18) = 18;
LABEL_23:
    *((_BYTE *)a3 + 76) = 1;
    CManipulation::_EnqueueDeferredDeltaReset(this, v14);
    return v3;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    *((_DWORD *)a3 + 18) = 52;
    *(_QWORD *)a3 = *(_QWORD *)((char *)this + 316);
    v13 = *((_DWORD *)this + 81);
    goto LABEL_17;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    *((_DWORD *)a3 + 18) = 265;
    *(_OWORD *)a3 = *(_OWORD *)((char *)this + 328);
    *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + 344);
    *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + 360);
    *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)this + 376);
    goto LABEL_25;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    *((_DWORD *)a3 + 18) = 52;
    *(_QWORD *)a3 = *((_QWORD *)this + 49);
    v13 = *((_DWORD *)this + 100);
LABEL_17:
    *((_DWORD *)a3 + 2) = v13;
    goto LABEL_25;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v12 = *((_DWORD *)this + 101);
LABEL_15:
    *(_DWORD *)a3 = v12;
    *((_DWORD *)a3 + 18) = 18;
    goto LABEL_25;
  }
  if ( v11 == 2 )
  {
    *((_DWORD *)a3 + 18) = 17;
    *(_BYTE *)a3 = 1;
LABEL_25:
    *((_BYTE *)a3 + 76) = 1;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x1F6u, 0LL);
  return v3;
}
