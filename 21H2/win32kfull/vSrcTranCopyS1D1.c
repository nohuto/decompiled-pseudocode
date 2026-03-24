/*
 * XREFs of vSrcTranCopyS1D1 @ 0x1C01245C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSrcTranCopyS1D1(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8, int a9)
{
  __int64 v9; // rbx
  unsigned __int32 v10; // r11d
  __int64 v11; // rsi
  unsigned __int32 v12; // r10d
  int v13; // r8d
  int v14; // edi
  int v15; // ebp
  _DWORD *v16; // rdx
  unsigned int *v17; // rax
  unsigned int *v18; // rcx
  unsigned int *v19; // r9
  int v20; // r8d
  __int64 result; // rax
  __int64 v22; // r14
  int v23; // ebx
  __int64 v24; // rsi
  unsigned int *v25; // r8
  int v26; // eax
  __int64 v27; // r14
  int v28; // ebx
  __int64 v29; // rsi
  unsigned int *v30; // r8
  int v31; // r10d
  unsigned int v32; // eax
  int v33; // r10d
  unsigned int v34; // eax

  v9 = a3;
  v10 = -1;
  v11 = a2;
  v12 = -1;
  v13 = a6 + a2 - a5;
  v14 = ((_BYTE)a6 + (_BYTE)a2 - (_BYTE)a5) & 0x1F;
  v15 = a2 & 0x1F;
  if ( (a2 & 0x1F) != 0 )
    v12 = _byteswap_ulong(0xFFFFFFFF >> v15);
  if ( (((_BYTE)a6 + (_BYTE)a2 - (_BYTE)a5) & 0x1F) != 0 )
    v10 = _byteswap_ulong(-1 << (32 - v14));
  v16 = (_DWORD *)(a4 + (((__int64)a5 >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v17 = (unsigned int *)(a1 + (((__int64)v13 >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v18 = (unsigned int *)(a1 + ((v11 >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v19 = (unsigned int *)((char *)v18 + v9 * a8);
  v20 = ((v13 >> 3) & 0xFFFFFFFC) - ((v11 >> 3) & 0xFFFFFFFC);
  if ( a9 )
  {
    if ( v18 == v17 )
    {
      v31 = v10 & v12;
      do
      {
        v32 = *v18;
        v18 = (unsigned int *)((char *)v18 + v9);
        result = v31 & v32;
        *v16 |= result;
        v16 = (_DWORD *)((char *)v16 + a7);
      }
      while ( v18 != v19 );
    }
    else
    {
      result = (unsigned int)(a7 - v20);
      v27 = v20;
      v28 = v9 - v20;
      v29 = (int)result;
      do
      {
        v30 = (unsigned int *)((char *)v18 + v27);
        if ( v15 )
        {
          result = v12 & *v18;
          *v16++ |= result;
          ++v18;
        }
        while ( v18 != v30 )
        {
          result = *v18++;
          *v16++ |= result;
        }
        if ( v14 )
        {
          result = v10 & *v18;
          *v16 |= result;
        }
        v18 = (unsigned int *)((char *)v18 + v28);
        v16 = (_DWORD *)((char *)v16 + v29);
      }
      while ( v18 != v19 );
    }
  }
  else if ( v18 == v17 )
  {
    v33 = v10 & v12;
    do
    {
      v34 = *v18;
      v18 = (unsigned int *)((char *)v18 + v9);
      result = ~(v33 & v34);
      *v16 &= result;
      v16 = (_DWORD *)((char *)v16 + a7);
    }
    while ( v18 != v19 );
  }
  else
  {
    result = (unsigned int)(a7 - v20);
    v22 = v20;
    v23 = v9 - v20;
    v24 = (int)result;
    do
    {
      v25 = (unsigned int *)((char *)v18 + v22);
      if ( v15 )
      {
        result = ~(v12 & *v18);
        *v16++ &= result;
        ++v18;
      }
      while ( v18 != v25 )
      {
        v26 = *v18++;
        result = (unsigned int)~v26;
        *v16++ &= result;
      }
      if ( v14 )
      {
        result = ~(v10 & *v18);
        *v16 &= result;
      }
      v18 = (unsigned int *)((char *)v18 + v23);
      v16 = (_DWORD *)((char *)v16 + v24);
    }
    while ( v18 != v19 );
  }
  return result;
}
