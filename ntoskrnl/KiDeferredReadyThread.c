__int64 __fastcall KiDeferredReadyThread(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)(a2 + 216) = 0LL;
  v3 = a2 + 216;
  return KiReadyDeferredReadyList(a1, &v3);
}
