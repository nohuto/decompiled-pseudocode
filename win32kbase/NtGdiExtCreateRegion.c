__int64 __fastcall NtGdiExtCreateRegion(struct _XFORML *a1, size_t Size, char *Src)
{
  size_t v4; // r14
  __int64 Region; // rbx
  __int64 v7; // rdx
  void *v8; // rdi
  int v9; // eax
  _XFORML v11; // [rsp+40h] [rbp-48h] BYREF

  v4 = (unsigned int)Size;
  memset(&v11, 0, sizeof(v11));
  Region = 0LL;
  if ( (unsigned int)(Size - 32) <= 0x270FFE0 )
  {
    v8 = (void *)AllocFreeTmpBuffer((unsigned int)Size);
    if ( v8 )
    {
      v9 = 1;
      if ( a1 )
      {
        v9 = ProbeAndConvertXFORM(a1, &v11);
        a1 = &v11;
      }
      if ( v9 )
      {
        if ( &Src[v4] < Src || (unsigned __int64)&Src[v4] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v8, Src, v4);
        Region = 1LL;
      }
      if ( Region )
        Region = GreExtCreateRegion(a1, (unsigned int)v4, v8);
      FreeTmpBuffer(v8, v7);
    }
  }
  return Region;
}
