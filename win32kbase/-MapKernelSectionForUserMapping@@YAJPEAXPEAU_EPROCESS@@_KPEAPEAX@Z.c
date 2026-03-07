__int64 __fastcall MapKernelSectionForUserMapping(void *a1, struct _EPROCESS *a2, __int64 a3, void **a4)
{
  __int64 result; // rax
  __int64 v6; // [rsp+70h] [rbp+18h] BYREF
  int v7; // [rsp+78h] [rbp+20h] BYREF
  int v8; // [rsp+7Ch] [rbp+24h]

  v6 = a3;
  v7 = 0;
  v8 = 0;
  *a4 = 0LL;
  result = MmMapViewOfSection(a1, a2, a4, 0LL, a3, &v7, &v6, 1, 0, 4);
  if ( (int)result < 0 )
    *a4 = 0LL;
  return result;
}
