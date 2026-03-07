void __fastcall EtwpCoverageSamplerCleanup(__int64 a1)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  ULONG_PTR v5; // rcx
  void *v6; // rcx

  EtwpCovSampContextCleanup(a1 + 16);
  v2 = (_QWORD **)(a1 + 1680);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    if ( v3 == *(_QWORD **)(a1 + 1664) )
      *(_QWORD *)(a1 + 1664) = 0LL;
    EtwpCoverageSamplerFreeTable(v3);
  }
  *(_DWORD *)(a1 + 1696) = 0;
  v5 = *(_QWORD *)(a1 + 1704);
  if ( v5 )
  {
    MiRemoveFromSystemSpace(v5, 1);
    *(_QWORD *)(a1 + 1704) = 0LL;
    *(_DWORD *)(a1 + 1716) = 0;
    *(_DWORD *)(a1 + 1712) = 0;
    *(_DWORD *)(a1 + 1720) = 0;
  }
  v6 = *(void **)(a1 + 1672);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *(_QWORD *)(a1 + 1672) = 0LL;
  }
}
