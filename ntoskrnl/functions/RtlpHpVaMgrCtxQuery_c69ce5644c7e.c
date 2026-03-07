__int64 __fastcall RtlpHpVaMgrCtxQuery(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 result; // rax

  v3 = a2;
  v6 = RtlSparseArrayElementAllocated(a1 + 16, (unsigned __int64)(a2 - *(_QWORD *)(a1 + 8)) >> 20);
  if ( v6 )
  {
    *(_DWORD *)(a3 + 28) = 0;
    if ( (*(_BYTE *)v6 & 4) != 0 )
      v7 = *(_QWORD *)(v6 + 24);
    else
      v7 = *(unsigned __int16 *)(v6 + 24);
    *(_QWORD *)a3 = v7 << 20;
    v8 = *(unsigned __int8 *)(v6 + 1);
    *(_QWORD *)(a3 + 16) = v6 + 8;
    *(_DWORD *)(a3 + 24) = 16;
    *(_DWORD *)(a3 + 8) = (*(unsigned __int8 *)(a1 + 48 * (v8 + 45) + 46) >> 1) & 7;
    result = 0LL;
    *(_DWORD *)(a3 + 12) = *(unsigned __int8 *)(a1 + 48 * (v8 + 45) + 45);
  }
  else
  {
    RtlpLogHeapFailure(22, v3, 0, 0, 0LL, 0LL);
    return 3221225473LL;
  }
  return result;
}
