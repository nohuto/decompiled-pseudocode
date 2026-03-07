__int64 __fastcall CResource::UnmarshalResourceArray<CCompositionGlyphRun>(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        _QWORD *a6,
        __int64 a7)
{
  __int64 result; // rax
  void *v8; // [rsp+40h] [rbp-18h] BYREF

  result = CResource::UnmarshalResourceArray(a1, a2, a3, 0x23u, a5, &v8, a7, 0);
  *a6 = v8;
  return result;
}
