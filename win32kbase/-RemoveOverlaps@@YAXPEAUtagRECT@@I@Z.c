/*
 * XREFs of ?RemoveOverlaps@@YAXPEAUtagRECT@@I@Z @ 0x1C0247A38
 * Callers:
 *     AlignRects @ 0x1C00CC4F8 (AlignRects.c)
 * Callees:
 *     IntersectRect @ 0x1C003B560 (IntersectRect.c)
 *     ?CenterRectangles@@YAXPEAUtagRECT@@I@Z @ 0x1C0247430 (-CenterRectangles@@YAXPEAUtagRECT@@I@Z.c)
 *     ?RemoveOverlap@@YAPEAUtagRECT@@PEAU1@00@Z @ 0x1C0247848 (-RemoveOverlap@@YAPEAUtagRECT@@PEAU1@00@Z.c)
 */

void __fastcall RemoveOverlaps(struct tagRECT *a1, unsigned int a2)
{
  __int64 v2; // rbp
  struct tagRECT *v4; // rbx
  struct tagRECT *v5; // rbp
  struct tagRECT *v6; // rdi
  struct tagRECT v7; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  CenterRectangles(a1, a2);
  v4 = a1 + 1;
  v5 = &a1[v2];
  while ( v4 < v5 )
  {
    v6 = a1;
    if ( a1 >= v4 )
    {
LABEL_6:
      ++v4;
    }
    else
    {
      while ( 1 )
      {
        v7 = 0LL;
        if ( (unsigned int)IntersectRect(&v7, &v6->left, &v4->left) )
          break;
        if ( ++v6 >= v4 )
          goto LABEL_6;
      }
      v4 = RemoveOverlap(v6, v4, &v7);
    }
  }
}
