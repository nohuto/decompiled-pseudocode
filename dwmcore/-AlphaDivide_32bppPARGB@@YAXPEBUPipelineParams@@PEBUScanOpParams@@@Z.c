void __fastcall AlphaDivide_32bppPARGB(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  unsigned int *v2; // rsi
  unsigned int *v3; // rdi
  int v4; // ebx
  unsigned int v5; // eax

  v2 = (unsigned int *)*((_QWORD *)a2 + 1);
  v3 = *(unsigned int **)a2;
  v4 = *((_DWORD *)a1 + 2);
  while ( v4 )
  {
    v5 = *v2;
    --v4;
    if ( HIBYTE(*v2) != 0xFF )
    {
      if ( HIBYTE(*v2) )
        v5 = Unpremultiply(v5);
      else
        v5 = 0;
    }
    *v3++ = v5;
    ++v2;
  }
}
