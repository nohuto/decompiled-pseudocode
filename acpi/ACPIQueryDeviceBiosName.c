__int64 __fastcall ACPIQueryDeviceBiosName(ULONG_PTR a1, struct _UNICODE_STRING *a2)
{
  return ACPIQueryDeviceBiosNameEx(a1, 1, a2);
}
