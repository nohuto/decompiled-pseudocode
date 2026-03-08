/*
 * XREFs of ProducerConsumerCopyToContextBuffer @ 0x140AA2E90
 * Callers:
 *     PopCountDataAsProduced @ 0x140A9EFB4 (PopCountDataAsProduced.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

void *__fastcall ProducerConsumerCopyToContextBuffer(char *Src, size_t Size, __int64 a3, char *a4)
{
  __int64 v6; // r8
  char *v7; // rcx
  unsigned int v8; // ebx
  int v9; // r9d
  __int64 v10; // rdi
  void *result; // rax

  v6 = *(unsigned int *)(a3 + 8);
  v7 = &a4[-v6];
  if ( (unsigned __int64)a4 < v6 + *(_QWORD *)a3 )
    v7 = a4;
  v8 = 0;
  v9 = (_DWORD)v7 - *(_DWORD *)a3;
  if ( v9 + (int)Size > (unsigned int)v6 )
  {
    v8 = Size + v9 - v6;
    LODWORD(Size) = v6 - v9;
  }
  v10 = (unsigned int)Size;
  result = memmove(v7, Src, (unsigned int)Size);
  if ( v8 )
    return memmove(*(void **)a3, &Src[v10], v8);
  return result;
}
