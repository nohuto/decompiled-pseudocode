__int64 __fastcall AMLIIterateParentNext(volatile signed __int32 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx

  v2 = AMLIGetParent((__int64)a1);
  AMLIDereferenceHandleEx(a1, v3);
  return v2;
}
