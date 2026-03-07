void __fastcall Copy_64(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  __int64 *v2; // r8
  _QWORD *v3; // r9
  int i; // edx
  __int64 v5; // rax

  v2 = (__int64 *)*((_QWORD *)a2 + 1);
  v3 = *(_QWORD **)a2;
  for ( i = *((_DWORD *)a1 + 2); i; --i )
  {
    v5 = *v2++;
    *v3++ = v5;
  }
}
