__int64 __fastcall KiOp_PREFETCH3(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 result; // rax

  v1 = (unsigned int)(*(_DWORD *)(a1 + 16) - *(_DWORD *)a1);
  v2 = *(_QWORD *)(a1 + 24);
  LODWORD(KiOpPrefetchPatchSkip) = KiOpPrefetchPatchSkip + 1;
  *(_QWORD *)(v2 + 248) += v1;
  result = 0LL;
  *(_BYTE *)(a1 + 96) = 1;
  return result;
}
