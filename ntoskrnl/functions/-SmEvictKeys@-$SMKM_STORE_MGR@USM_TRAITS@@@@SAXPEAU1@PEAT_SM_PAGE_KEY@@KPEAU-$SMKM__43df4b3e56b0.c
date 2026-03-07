__int64 SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(__int64 a1, _DWORD *a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  LODWORD(v4) = *a2;
  return SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreEvictKeys(a1, (__int64 *)va);
}
