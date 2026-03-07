ULONGLONG __fastcall umptr<_POINTL>::internal_get_bytecount(__int64 a1, ULONGLONG *a2, _QWORD *a3)
{
  __int64 v3; // r10
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  pullResult = 0LL;
  v3 = a1;
  if ( *a2 > *(_QWORD *)(a1 + 8) - *a3 || ULongLongMult(*a2, 8uLL, &pullResult) < 0 )
    *(_BYTE *)(v3 + 24) = 1;
  return pullResult;
}
