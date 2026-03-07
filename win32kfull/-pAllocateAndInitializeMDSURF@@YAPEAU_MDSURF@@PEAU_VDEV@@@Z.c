struct _MDSURF *__fastcall pAllocateAndInitializeMDSURF(struct _VDEV *a1)
{
  __int64 v1; // r8
  _QWORD *v2; // rdx
  _QWORD *v3; // rax

  v1 = *((unsigned int *)a1 + 4);
  v2 = 0LL;
  if ( (unsigned int)v1 <= 0x1FFFFFFF && 8 * v1 + 24 > (unsigned __int64)(8 * v1) )
  {
    v3 = EngAllocMem(1u, 8 * (int)v1 + 24, 0x66735647u);
    v2 = v3;
    if ( v3 )
      v3[1] = v3 + 3;
  }
  return (struct _MDSURF *)v2;
}
