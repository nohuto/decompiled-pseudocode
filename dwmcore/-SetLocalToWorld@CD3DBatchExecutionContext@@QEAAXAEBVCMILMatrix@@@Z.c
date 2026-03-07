void __fastcall CD3DBatchExecutionContext::SetLocalToWorld(CD3DBatchExecutionContext *this, __m128 *a2)
{
  __int64 v3; // rbx
  __m128 v4; // xmm0
  __m128 v5; // xmm1
  __m128 v6; // xmm0
  __m128 v7; // xmm1
  __m128 Buf2[4]; // [rsp+40h] [rbp-48h] BYREF

  v3 = *((_QWORD *)this + 4) + 160LL;
  Windows::Foundation::Numerics::transpose(Buf2, a2);
  if ( memcmp_0((const void *)(v3 + 48), Buf2, 0x40uLL) )
  {
    v4 = Buf2[0];
    v5 = Buf2[1];
    *(_BYTE *)(v3 + 8) = 1;
    *(__m128 *)(v3 + 48) = v4;
    v6 = Buf2[2];
    *(__m128 *)(v3 + 64) = v5;
    v7 = Buf2[3];
    *(__m128 *)(v3 + 80) = v6;
    *(__m128 *)(v3 + 96) = v7;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 1)
                                                                                                  + 560LL)
                                                                                    + 384LL))(
      *(_QWORD *)(*((_QWORD *)this + 1) + 560LL),
      *(_QWORD *)v3,
      0LL,
      0LL,
      v3 + 16,
      0,
      0);
    *(_BYTE *)(v3 + 8) = 0;
  }
}
