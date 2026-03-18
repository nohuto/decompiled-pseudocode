/*
 * XREFs of TrimBGRMapCache @ 0x1C025F768
 * Callers:
 *     AddBGRMapCache @ 0x1C025E564 (AddBGRMapCache.c)
 *     FindBGRMapCache @ 0x1C025F284 (FindBGRMapCache.c)
 * Callees:
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 TrimBGRMapCache()
{
  unsigned int v0; // ebx
  int v1; // esi
  PVOID *v2; // rdi
  PVOID *v3; // rbp
  int i; // r14d
  int v5; // eax

  v0 = 0;
  EngAcquireSemaphore(qword_1C0336428);
  v1 = dword_1C0336448;
  if ( dword_1C0336448 > 5 && HIDWORD(qword_1C033644C) )
  {
    v2 = (PVOID *)Src;
    v0 = dword_1C0336448;
    v3 = (PVOID *)Src;
    for ( i = dword_1C0336448; i; v2 += 2 )
    {
      --i;
      if ( v1 <= 5 )
        break;
      if ( *((_DWORD *)v2 + 2) )
      {
        if ( v3 != v2 )
          *(_OWORD *)v3 = *(_OWORD *)v2;
        v3 += 2;
      }
      else
      {
        EngFreeMem(*v2);
        v1 = dword_1C0336448 - 1;
        --HIDWORD(qword_1C033644C);
        --dword_1C0336448;
      }
    }
    if ( v0 != v1 )
    {
      if ( v2 > v3 )
      {
        v5 = (_DWORD)Src + 16 * v0 - (_DWORD)v2;
        if ( v5 > 0 )
          memmove(v3, v2, v5);
      }
      v0 -= v1;
    }
  }
  EngReleaseSemaphore(qword_1C0336428);
  return v0;
}
