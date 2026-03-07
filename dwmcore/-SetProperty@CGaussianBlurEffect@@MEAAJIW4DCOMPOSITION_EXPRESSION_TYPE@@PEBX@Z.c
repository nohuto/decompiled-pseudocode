__int64 __fastcall CGaussianBlurEffect::SetProperty(_QWORD *a1, int a2, int a3, float *a4)
{
  float *v4; // rbx
  float v5; // xmm1_4
  __int64 v6; // rax
  unsigned int v7; // ebx

  if ( a3 != 18 || a2 || (v4 = (float *)(a1 + 22), v5 = fmaxf(0.0, *a4), a1 == (_QWORD *)-176LL) )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0x4Eu, 0LL);
  }
  else
  {
    if ( *v4 != v5 )
    {
      v6 = *a1;
      *v4 = v5;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v6 + 72))(a1, 0LL, 0LL);
    }
    return v4 == 0LL ? 0x80070057 : 0;
  }
  return v7;
}
