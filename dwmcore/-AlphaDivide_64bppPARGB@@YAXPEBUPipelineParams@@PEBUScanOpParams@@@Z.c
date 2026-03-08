/*
 * XREFs of ?AlphaDivide_64bppPARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802BA850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AlphaDivide_64bppPARGB(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  int v2; // r8d
  unsigned __int64 *v3; // r10
  unsigned __int64 *i; // r9
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned __int64 v10; // [rsp+8h] [rbp+8h]

  v2 = *((_DWORD *)a1 + 2);
  v3 = (unsigned __int64 *)*((_QWORD *)a2 + 1);
  for ( i = *(unsigned __int64 **)a2; v2; ++i )
  {
    --v2;
    v10 = *v3;
    v5 = *v3;
    if ( HIWORD(*v3) != 0xFFFF )
    {
      if ( HIWORD(*v3) )
      {
        WORD2(v10) = -1;
        v6 = HIWORD(v5);
        v7 = (unsigned int)(WORD2(v5) << 16) / HIWORD(v5);
        if ( v7 <= 0xFFFF )
          WORD2(v10) = v7;
        v8 = (WORD1(v10) << 16) / (unsigned int)v6;
        WORD1(v10) = -1;
        if ( v8 <= 0xFFFF )
          WORD1(v10) = v8;
        v9 = ((unsigned __int16)v10 << 16) / (unsigned int)v6;
        LOWORD(v10) = -1;
        if ( v9 <= 0xFFFF )
          LOWORD(v10) = v9;
        v5 = v10;
      }
      else
      {
        v5 = 0LL;
      }
    }
    *i = v5;
    ++v3;
  }
}
