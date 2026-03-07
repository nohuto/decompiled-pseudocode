__int64 __fastcall AlpcpAllocateFromBitmap(unsigned int *a1, unsigned int *a2, int a3)
{
  unsigned int v3; // r9d
  __int64 v7; // r8
  unsigned int *v8; // rax
  unsigned int v9; // edx
  int v10; // ecx
  signed __int32 *v12; // rdx
  int v13; // r11d
  unsigned int v14; // esi
  int v15; // r10d
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  signed __int32 v18; // eax
  int v19; // r10d
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  unsigned int v22; // edi

  v3 = 0;
  v7 = 0xFFFFFFFFLL;
  v8 = a1;
  if ( a1 == a2 )
    return 0xFFFFFFFFLL;
LABEL_2:
  v9 = *v8;
  v10 = 0;
  while ( (v9 & 1) != 0 )
  {
    v7 = 0xFFFFFFFFLL;
    v3 = 0;
LABEL_8:
    v9 >>= 1;
    if ( (unsigned int)++v10 >= 0x20 )
    {
      if ( ++v8 != a2 )
        goto LABEL_2;
      return 0xFFFFFFFFLL;
    }
  }
  if ( (_DWORD)v7 == -1 )
    v7 = v10 + 32 * (unsigned int)(v8 - a1);
  if ( ++v3 != a3 )
    goto LABEL_8;
  v12 = (signed __int32 *)&a1[(unsigned __int64)(unsigned int)v7 >> 5];
  v13 = v7 & 0x1F;
  if ( (v7 & 0x1F) != 0 )
  {
    v14 = v3;
    if ( v3 >= 32 - v13 )
      v14 = 32 - v13;
    v15 = ((1 << v14) - 1) << v13;
    _m_prefetchw(v12);
    v16 = *v12;
    while ( (v16 & v15) == 0 )
    {
      v17 = v16;
      v16 = _InterlockedCompareExchange(v12, v15 | v16, v16);
      if ( v17 == v16 )
      {
        v3 -= v14;
LABEL_24:
        ++v12;
        goto LABEL_25;
      }
    }
    return 4294967294LL;
  }
LABEL_25:
  if ( v3 >= 0x20 )
  {
    _m_prefetchw(v12);
    v18 = *v12;
    while ( !v18 )
    {
      v18 = _InterlockedCompareExchange(v12, -1, 0);
      if ( !v18 )
      {
        v3 -= 32;
        goto LABEL_24;
      }
    }
    goto LABEL_30;
  }
  if ( v3 )
  {
    v19 = (1 << v3) - 1;
    _m_prefetchw(v12);
    v20 = *v12;
    while ( (v20 & v19) == 0 )
    {
      v21 = v20;
      v20 = _InterlockedCompareExchange(v12, v19 | v20, v20);
      if ( v21 == v20 )
        return (unsigned int)v7;
    }
LABEL_30:
    v22 = a3 - v3;
    if ( v22 )
      AlpcpFreeBitmap(a1, v12, v7, v22);
    return 4294967294LL;
  }
  return (unsigned int)v7;
}
