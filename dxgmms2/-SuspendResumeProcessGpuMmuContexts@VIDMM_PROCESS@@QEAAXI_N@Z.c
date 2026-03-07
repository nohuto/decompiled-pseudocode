void __fastcall VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
        VIDMM_PROCESS *this,
        unsigned int a2,
        unsigned __int8 a3)
{
  int v4; // r15d
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned int i; // esi
  __int64 v8; // r14
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx

  v4 = a3;
  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a2);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 16);
    if ( v6 )
    {
      if ( *(_DWORD *)(**(_QWORD **)v5 + 24LL) == 1 )
      {
        for ( i = 0; i < *(_DWORD *)(v5 + 12); ++i )
        {
          v8 = 184LL * i;
          v9 = (_QWORD *)(v8 + v6 + 40);
          v10 = (_QWORD *)*v9;
          while ( v10 != v9 )
          {
            v11 = v10[4];
            v12 = *(_QWORD *)(v11 + 24);
            if ( v12 && !*(_QWORD *)(v11 + 192) )
              VidSchSuspendResumeDevice(*(_KEVENT **)(v12 + 800), v4, 0, 1);
            v6 = *(_QWORD *)(v5 + 16);
            v10 = (_QWORD *)*v10;
            v9 = (_QWORD *)(v8 + v6 + 40);
          }
        }
      }
    }
  }
  *((_DWORD *)this + 24) = *((_DWORD *)this + 24) & 0xFFFFFFFB | (4 * v4);
}
