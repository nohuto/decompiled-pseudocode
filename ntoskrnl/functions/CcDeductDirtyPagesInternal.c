void __fastcall CcDeductDirtyPagesInternal(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v4; // r10
  _QWORD *v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // rax

  *(_QWORD *)(a3 + 1056) -= a2;
  if ( a4 )
    a4[124] -= a2;
  if ( a1 )
  {
    if ( a2 == -1 )
      KeBugCheckEx(0x34u, 0x3586uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(a1 + 112) -= a2;
    v4 = -(__int64)a2;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 512) + 32LL), v4);
    v5 = *(_QWORD **)(a1 + 512);
    v5[30] += v5[4];
    v6 = v5[31];
    v7 = *(_QWORD *)(a1 + 512);
    if ( v6 <= *(_QWORD *)(v7 + 32) )
      v6 = *(_QWORD *)(v7 + 32);
    v5[31] = v6;
    if ( a4 )
    {
      v5[32] += a4[127];
      v5[33] = a4[128];
      v5[34] = a4[129];
    }
    ++v5[35];
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 248) + 24LL), v4);
  }
}
