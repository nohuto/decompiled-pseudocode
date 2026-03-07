__int64 __fastcall xxxSetCapture(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdx

  v1 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( (*(_DWORD *)(v1 + 396) & 0x100000) != 0 || a1 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL) != v1 )
    return 0LL;
  v2 = *(_QWORD *)(v1 + 112);
  v3 = v2 ? *(_QWORD *)v2 : 0LL;
  xxxCapture(gptiCurrent, a1, 2LL);
  if ( !v3 )
    return 0LL;
  LOBYTE(v4) = 1;
  return v2 & -(__int64)(HMValidateHandleNoSecure(v3, v4) != 0);
}
