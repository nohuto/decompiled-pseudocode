__int64 __fastcall MiCleanupPageTablePages(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi

  result = MiFreeLargeZeroPages(*(_QWORD *)(a1 + 96), a1, 0LL);
  v3 = *(_QWORD *)(a1 + 104);
  if ( v3 )
  {
    result = *(_QWORD *)(a1 + 112);
    if ( result != v3 )
    {
      v4 = v3 - result;
      MiReturnCommit(*(_QWORD *)(a1 + 96), v4);
      result = MiReturnSystemCharges(*(_QWORD *)(a1 + 96), v4, *(unsigned int *)(a1 + 120));
    }
  }
  *(_QWORD *)(a1 + 104) = 0LL;
  return result;
}
