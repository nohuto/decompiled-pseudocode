void __fastcall VIDMM_GLOBAL::DoDeferredUnlock(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  char *v3; // rdi
  PMDL **v4; // rbx
  PMDL *v5; // rax
  PMDL *v6; // rcx

  v3 = (char *)this + 40008;
  while ( 1 )
  {
    v4 = *(PMDL ***)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = *v4, (*v4)[1] != (PMDL)v4) )
      __fastfail(3u);
    *(_QWORD *)v3 = v5;
    v5[1] = (PMDL)v3;
    if ( v4 == (PMDL **)v3 )
      break;
    VidMmiUnlockAllocation(v4[2], a2, a3);
    v6 = v4[3];
    v4[2] = 0LL;
    ObfDereferenceObject(v6);
    operator delete(v4);
  }
}
