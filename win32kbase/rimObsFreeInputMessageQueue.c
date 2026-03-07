void __fastcall rimObsFreeInputMessageQueue(__int64 a1)
{
  char *v1; // rdi
  char *v3; // rbx
  char *v4; // rax
  char *v5; // rdx
  char **v6; // rcx

  v1 = (char *)(a1 + 144);
  v3 = *(char **)(a1 + 144);
  while ( v3 != v1 )
  {
    v4 = *(char **)v3;
    v5 = v3;
    v3 = v4;
    v6 = (char **)*((_QWORD *)v5 + 1);
    if ( *((char **)v4 + 1) != v5 || *v6 != v5 )
      __fastfail(3u);
    *v6 = v4;
    *((_QWORD *)v4 + 1) = v6;
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
  }
  *(_DWORD *)(a1 + 160) = -1;
}
