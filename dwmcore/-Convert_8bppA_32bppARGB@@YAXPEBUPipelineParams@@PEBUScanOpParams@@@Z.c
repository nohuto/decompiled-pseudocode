/*
 * XREFs of ?Convert_8bppA_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802BA010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Convert_8bppA_32bppARGB(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  char *v2; // r8
  _DWORD *v3; // r9
  int i; // edx
  char v5; // al
  int v6; // [rsp+8h] [rbp+8h]

  v2 = (char *)*((_QWORD *)a2 + 1);
  v3 = *(_DWORD **)a2;
  for ( i = *((_DWORD *)a1 + 2); i; --i )
  {
    v5 = *v2++;
    v6 = 0;
    HIBYTE(v6) = v5;
    *v3++ = v6;
  }
}
