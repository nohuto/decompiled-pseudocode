__int64 __fastcall SdbpCheckMatchingWildcardRegistry(_DWORD *a1, __int64 a2, int a3, __int64 a4, int a5, __int64 a6)
{
  int v6; // edx
  unsigned int v7; // ebx
  unsigned int v10; // [rsp+58h] [rbp-1h] BYREF
  int v11; // [rsp+5Ch] [rbp+3h] BYREF
  __int64 v12; // [rsp+60h] [rbp+7h] BYREF
  __int64 v13; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v14; // [rsp+70h] [rbp+17h] BYREF
  __int64 v15; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v16; // [rsp+80h] [rbp+27h] BYREF
  __int64 v17; // [rsp+88h] [rbp+2Fh] BYREF
  int v18; // [rsp+A8h] [rbp+4Fh] BYREF

  v6 = a5;
  v7 = 0;
  *a1 = 0;
  v11 = 0;
  v17 = 0LL;
  v16 = 0LL;
  v10 = 0;
  v15 = 0LL;
  v18 = 0;
  v14 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  if ( (unsigned int)SdbpGetRegistryMatchingAttributes(
                       a3,
                       v6,
                       (unsigned int)&v17,
                       (unsigned int)&v16,
                       (__int64)&v10,
                       (__int64)&v15,
                       (__int64)&v18,
                       (__int64)&v14,
                       (__int64)&v13,
                       (__int64)&v12)
    && (unsigned int)SdbpCheckMatchingWildcardRegistryEntry(v17, v16, v10, v15, v18, v14, v13, v12, &v11) )
  {
    v7 = 1;
    *(_DWORD *)(a6 + 80) = 1;
    *a1 = v11;
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return v7;
}
