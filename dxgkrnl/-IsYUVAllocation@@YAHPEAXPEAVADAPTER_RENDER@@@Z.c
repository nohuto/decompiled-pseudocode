__int64 __fastcall IsYUVAllocation(void *a1, struct ADAPTER_RENDER *a2)
{
  unsigned int v2; // ebx
  struct _DXGKARG_DESCRIBEALLOCATION v4; // [rsp+20h] [rbp-38h] BYREF

  memset(&v4, 0, sizeof(v4));
  v4.hAllocation = a1;
  v2 = 0;
  if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(a2, &v4, (__int64)a2) >= 0 )
    return v4.Format >= 0xFFFFFF;
  return v2;
}
