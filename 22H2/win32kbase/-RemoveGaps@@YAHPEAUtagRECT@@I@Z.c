/*
 * XREFs of ?RemoveGaps@@YAHPEAUtagRECT@@I@Z @ 0x1C01D18C0
 * Callers:
 *     AlignRects @ 0x1C0014978 (AlignRects.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C002C2D0 (Win32AllocPool.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     ?AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z @ 0x1C01D15DC (-AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z.c)
 *     ?CenterRectangles@@YAXPEAUtagRECT@@I@Z @ 0x1C01D1818 (-CenterRectangles@@YAXPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall RemoveGaps(struct tagRECT *a1, unsigned int a2)
{
  __int64 v2; // rbp
  struct tagRECT **v4; // rdi
  __int64 result; // rax
  unsigned int v6; // r11d
  struct tagRECT **v7; // rsi
  struct tagRECT *v8; // rbx
  struct tagRECT **v9; // r9
  struct tagRECT *v10; // r10
  unsigned int v11; // ecx
  struct tagRECT **v12; // rax
  struct tagRECT *v13; // rcx
  struct tagRECT *v14; // r14
  struct tagRECT **v15; // rsi
  unsigned __int64 v16; // rbx
  struct tagRECT **ContiguousRectangle; // rax
  struct tagRECT *v18; // rdx
  struct tagRECT *v19[16]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = a2;
  memset(v19, 0, sizeof(v19));
  v4 = v19;
  if ( (unsigned int)v2 <= 0x10
    || (result = Win32AllocPool((unsigned int)(8 * v2), 0x74727355u), (v4 = (struct tagRECT **)result) != 0LL) )
  {
    CenterRectangles(a1, v2);
    v6 = -1;
    v7 = v4;
    v8 = &a1[v2];
    v9 = v4;
    v10 = a1;
    if ( a1 < v8 )
    {
      do
      {
        *v7 = v10;
        v11 = abs32((v10->right - v10->left) / 2 + v10->left) + abs32((v10->bottom - v10->top) / 2 + v10->top);
        v12 = v7;
        if ( v11 >= v6 )
          v12 = v9;
        ++v7;
        ++v10;
        v9 = v12;
        if ( v11 >= v6 )
          v11 = v6;
        v6 = v11;
      }
      while ( v10 < v8 );
      if ( v12 != v4 )
      {
        v13 = *v12;
        *v12 = *v4;
        *v4 = v13;
      }
    }
    v14 = a1 + 1;
    v15 = v4 + 1;
    if ( v14 < v8 )
    {
      v16 = ((unsigned __int64)((char *)v8 - (char *)v14 - 1) >> 4) + 1;
      do
      {
        ContiguousRectangle = AddNextContiguousRectangle(v4, v15, v2);
        if ( ContiguousRectangle != v15 )
        {
          v18 = *ContiguousRectangle;
          *ContiguousRectangle = *v15;
          *v15 = v18;
        }
        ++v15;
        --v16;
      }
      while ( v16 );
    }
    if ( v4 != v19 )
      Win32FreePool((__int64)v4);
    return 1LL;
  }
  return result;
}
