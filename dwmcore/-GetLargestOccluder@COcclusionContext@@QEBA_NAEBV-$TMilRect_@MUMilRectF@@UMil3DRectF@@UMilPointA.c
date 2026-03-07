char __fastcall COcclusionContext::GetLargestOccluder(
        __int64 a1,
        struct MilRectF *a2,
        char a3,
        unsigned int a4,
        float *a5)
{
  _BYTE *v5; // rbx
  char v9; // bp
  __int128 v11; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF

  v5 = (_BYTE *)(a1 + 1204);
  v11 = 0LL;
  if ( a3 || !*v5 )
    v11 = *(_OWORD *)a2;
  else
    COcclusionContext::PageInPixelsRectToDeviceRect(a1, a2, (float *)&v11);
  v12 = 0LL;
  v9 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int128 *))CArrayBasedCoverageSet::GetLargestOccluder)(
         a1 + 448,
         &v11,
         a4,
         &v12);
  if ( v9 )
  {
    if ( a3 || !*v5 )
      *(_OWORD *)a5 = v12;
    else
      COcclusionContext::DeviceRectToPageInPixelsRect(a1, (struct MilRectF *)&v12, a5);
  }
  return v9;
}
