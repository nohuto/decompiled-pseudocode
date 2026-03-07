__int64 __fastcall NtGdiGetDCforBitmap(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  LOBYTE(a2) = 5;
  v2 = 0LL;
  v3 = HmgShareLockCheck(a1, a2);
  if ( v3 )
  {
    v2 = *(_QWORD *)(v3 + 160);
    DEC_SHARE_REF_CNT(v3);
  }
  return v2;
}
