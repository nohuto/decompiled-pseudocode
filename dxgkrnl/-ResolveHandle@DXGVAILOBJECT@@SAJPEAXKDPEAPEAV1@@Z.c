__int64 __fastcall DXGVAILOBJECT::ResolveHandle(void *a1, __int64 a2, __int64 a3, struct DXGVAILOBJECT **a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  struct DXGVAILOBJECT *v8; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v8 = 0LL;
  v5 = DxgkCompositionObject::ResolveHandle(a1, 0x60000u, 1, 3, &v8);
  v6 = v5;
  if ( v5 < 0 )
    WdLogSingleEntry1(3LL, v5);
  else
    *a4 = v8;
  return v6;
}
