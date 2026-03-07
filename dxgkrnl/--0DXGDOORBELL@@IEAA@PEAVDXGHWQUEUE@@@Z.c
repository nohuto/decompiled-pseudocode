DXGDOORBELL *__fastcall DXGDOORBELL::DXGDOORBELL(DXGDOORBELL *this, struct DXGHWQUEUE *a2)
{
  __m128i v4; // xmm1
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d

  *(_QWORD *)this = 0LL;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGDOORBELL *)((char *)this + 16));
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGDOORBELL *)((char *)this + 24));
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_OWORD *)this + 5) = 0LL;
  *((_OWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 1) = a2;
  v4 = *(__m128i *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 16LL) + 16LL) + 2928LL)
                  + 1272LL);
  *((_QWORD *)this + 4) = HIDWORD(v4.m128i_i64[0]);
  v5 = _mm_cvtsi128_si32(v4) & 1;
  if ( v5 )
    *((_QWORD *)this + 5) = v4.m128i_u32[2];
  if ( !HIDWORD(v4.m128i_i64[0]) || v5 && !*((_QWORD *)this + 5) )
  {
    WdLogSingleEntry1(1LL, 321LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v7,
        v6,
        v8,
        0LL,
        2,
        -1,
        L"_SizeInBytes > 0 && (!Caps.Flags.SecondaryDoorbellSupported || _SecondaryDoorbellSizeInBytes > 0)",
        321LL,
        0LL,
        0LL,
        0LL,
        0LL,
        v4.m128i_i64[0]);
  }
  return this;
}
