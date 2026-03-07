void __fastcall NP_CONTEXT::NpNodeFree(struct NP_CONTEXT::NP_CTX *a1, _QWORD *a2, int a3)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax

  v4 = *(_QWORD *)a1;
  if ( a3 && (v5 = *(_QWORD **)(v4 + 72), --*(_DWORD *)(v4 + 40), *v5 < (unsigned __int64)*(unsigned int *)(v4 + 4)) )
  {
    *a2 = *v5 + 1LL;
    **(_QWORD **)(v4 + 72) = a2;
    *(_QWORD *)(v4 + 72) = a2;
  }
  else
  {
    ExFreePoolWithTag(a2, 0);
  }
}
