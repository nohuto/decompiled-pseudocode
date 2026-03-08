/*
 * XREFs of ?AlphaMultiply_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802BA9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AlphaMultiply_32bppARGB(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  unsigned int *v2; // r11
  unsigned int *v3; // r10
  int v4; // r9d
  unsigned int v5; // eax
  unsigned int v6; // ecx

  v2 = (unsigned int *)*((_QWORD *)a2 + 1);
  v3 = *(unsigned int **)a2;
  v4 = *((_DWORD *)a1 + 2);
  while ( v4 )
  {
    v5 = *v2;
    --v4;
    v6 = *v2 & 0xFF000000;
    if ( v6 != -16777216 )
    {
      if ( v6 )
        v5 = (HIBYTE(v5) << 24) | (HIBYTE(v5) * BYTE1(v5)
                                 + 128
                                 + (unsigned __int16)((unsigned int)(HIBYTE(v5) * BYTE1(v5) + 128) >> 8)) & 0xFF00 | ((HIBYTE(v5) * (v5 & 0xFF00FF) + 8388736 + (((HIBYTE(v5) * (v5 & 0xFF00FF) + 8388736) >> 8) & 0xFF00FF)) >> 8) & 0xFF00FF;
      else
        v5 = 0;
    }
    *v3++ = v5;
    ++v2;
  }
}
