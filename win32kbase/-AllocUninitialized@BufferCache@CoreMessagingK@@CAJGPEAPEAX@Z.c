/*
 * XREFs of ?AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z @ 0x1C008169C
 * Callers:
 *     ??$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z @ 0x1C0081668 (--$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z.c)
 * Callees:
 *     ?Remove@BufferCache@CoreMessagingK@@CAXPEAUBufferHeader@12@0@Z @ 0x1C0081768 (-Remove@BufferCache@CoreMessagingK@@CAXPEAUBufferHeader@12@0@Z.c)
 *     ?AllocUninitialized@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z @ 0x1C00C05C8 (-AllocUninitialized@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z.c)
 */

__int64 __fastcall CoreMessagingK::BufferCache::AllocUninitialized(unsigned __int16 a1, void **a2)
{
  unsigned int v2; // ebx
  int v3; // edi
  struct CoreMessagingK::BufferCache::BufferHeader *v4; // rcx
  struct CoreMessagingK::BufferCache::BufferHeader *v6; // r9
  struct CoreMessagingK::BufferCache::BufferHeader *v7; // r8
  struct CoreMessagingK::BufferCache::BufferHeader *v8; // rax
  unsigned __int16 *v9; // rcx
  unsigned __int16 v11; // di
  int v12; // eax
  unsigned __int16 *v13; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v3 = a1;
  v4 = (struct CoreMessagingK::BufferCache::BufferHeader *)CoreMessagingK::BufferCache::s_FreeList;
  *a2 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( !v4 )
    goto LABEL_11;
  v8 = v4;
  do
  {
    if ( *(_WORD *)v8 >= (unsigned __int16)v3 && *(_WORD *)v8 < *(_WORD *)v4 )
    {
      v4 = v8;
      v6 = v7;
    }
    v7 = v8;
    v8 = (struct CoreMessagingK::BufferCache::BufferHeader *)*((_QWORD *)v8 + 1);
  }
  while ( v8 );
  if ( *(_WORD *)v4 >= (unsigned __int16)v3 )
  {
    CoreMessagingK::BufferCache::Remove(v4, v6);
  }
  else
  {
LABEL_11:
    if ( (unsigned int)(v3 + 512) >= 0xFFFF )
      v11 = -1;
    else
      v11 = v3 + 512;
    v13 = 0LL;
    v12 = CoreMessagingK::Runtime::AllocUninitialized(v11 + 16LL, 1128418627LL, &v13, v6);
    if ( v12 < 0 )
      return (unsigned int)v12;
    v9 = v13;
    *v13 = v11;
    *((_QWORD *)v9 + 1) = 0LL;
  }
  *a2 = v9 + 8;
  return v2;
}
