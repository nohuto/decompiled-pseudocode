__int64 __fastcall VIDSCH_VSYNC_SMOOTHER::GetSmoothenedFrameTimeQpc(
        VIDSCH_VSYNC_SMOOTHER *this,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned int a5)
{
  __int64 v5; // rdx
  unsigned int v6; // ebp
  unsigned int v9; // edi
  __int64 v10; // r8
  char v11; // r10
  double v12; // xmm0_8
  unsigned __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int16 v17; // [rsp+40h] [rbp-48h] BYREF
  int v18; // [rsp+48h] [rbp-40h]
  unsigned int v19; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20; // [rsp+58h] [rbp-30h] BYREF
  __int64 v21; // [rsp+60h] [rbp-28h] BYREF

  v5 = a2 - *((_QWORD *)this + 5);
  v6 = _mm_getcsr();
  v18 = v6 | 1;
  v9 = 0;
  _mm_setcsr(v6 | 1);
  v12 = floor((double)(int)v5 * *((double *)this + 3) + (double)(int)*((_QWORD *)this + 6) + *((double *)this + 2) + 0.5);
  v13 = (unsigned int)(int)v12;
  *a4 = v13;
  if ( (int)abs32(v10 - v13) > (unsigned __int64)a5 >> 1 )
  {
    WdLogSingleEntry2(3LL, (unsigned int)(int)v12, v10);
    VIDSCH_VSYNC_SMOOTHER::ResetSmoother(this, a5, a5);
    *a4 = 0LL;
    v11 = 1;
    v9 = -1073741823;
  }
  v18 = v6;
  _mm_setcsr(v6);
  if ( v11 && (unsigned int)dword_1C0076048 > 5 && tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000010LL) )
  {
    v20 = 1LL;
    v19 = a5;
    v17 = 1;
    v21 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v14,
      byte_1C0056911,
      v15,
      (__int64)&v21,
      (__int64)&v17,
      (__int64)&v19,
      (__int64)&v20);
  }
  return v9;
}
