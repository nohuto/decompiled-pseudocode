__int64 __fastcall InvalidateWEFCOMPOSITEDWindow(struct tagWND *a1, __m128i *a2)
{
  __int64 v2; // rax
  __m128i v4; // xmm0
  unsigned int v5; // ebx
  int v6; // r8d
  int v7; // edx
  HRGN v8; // rdi
  _BYTE v10[8]; // [rsp+20h] [rbp-28h] BYREF
  __m128i v11; // [rsp+28h] [rbp-20h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v11 = *a2;
  v4 = v11;
  v6 = *(_DWORD *)(v2 + 92);
  v7 = *(_DWORD *)(v2 + 88);
  v11.m128i_i32[2] += v7;
  v11.m128i_i32[0] = v7 + _mm_cvtsi128_si32(v4);
  v11.m128i_i32[3] += v6;
  v11.m128i_i32[1] += v6;
  v8 = (HRGN)GreCreateRectRgnIndirect(&v11);
  if ( v8 )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v10);
    xxxInternalInvalidate(a1, v8, 0x485u);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v10);
    GreDeleteObject(v8);
    return 1;
  }
  return v5;
}
