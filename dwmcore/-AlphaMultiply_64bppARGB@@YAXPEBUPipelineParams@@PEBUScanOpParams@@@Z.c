/*
 * XREFs of ?AlphaMultiply_64bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802BAE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AlphaMultiply_64bppARGB(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  unsigned __int64 *v2; // r10
  unsigned __int64 *v3; // r9
  int v4; // r8d
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // [rsp+8h] [rbp+8h]

  v2 = (unsigned __int64 *)*((_QWORD *)a2 + 1);
  v3 = *(unsigned __int64 **)a2;
  v4 = *((_DWORD *)a1 + 2);
  while ( v4 )
  {
    --v4;
    v7 = *v2;
    v5 = *v2;
    if ( HIWORD(*v2) != 0xFFFF )
    {
      if ( HIWORD(*v2) )
      {
        v6 = HIWORD(v7);
        WORD1(v7) = (unsigned int)(HIWORD(v7) * WORD1(v7)) >> 16;
        WORD2(v7) = ((unsigned int)v6 * WORD2(v5)) >> 16;
        LOWORD(v7) = (unsigned int)(HIWORD(v5) * (unsigned __int16)v7) >> 16;
        v5 = v7;
      }
      else
      {
        v5 = 0LL;
      }
    }
    *v3++ = v5;
    ++v2;
  }
}
