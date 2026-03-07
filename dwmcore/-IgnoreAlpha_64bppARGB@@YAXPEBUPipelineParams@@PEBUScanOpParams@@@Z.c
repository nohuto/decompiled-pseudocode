void __fastcall IgnoreAlpha_64bppARGB(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  __int64 *v2; // r8
  _QWORD *v3; // r9
  int i; // edx
  __int64 v5; // rax
  __int64 v6; // [rsp+8h] [rbp+8h]

  v2 = (__int64 *)*((_QWORD *)a2 + 1);
  v3 = *(_QWORD **)a2;
  for ( i = *((_DWORD *)a1 + 2); i; --i )
  {
    v5 = *v2++;
    v6 = v5;
    HIWORD(v6) = -1;
    *v3++ = v6;
  }
}
