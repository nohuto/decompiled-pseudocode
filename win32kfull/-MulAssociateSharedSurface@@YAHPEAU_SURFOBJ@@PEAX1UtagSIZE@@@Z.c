__int64 __fastcall MulAssociateSharedSurface(struct _SURFOBJ *a1, void *a2, void *a3, struct tagSIZE a4)
{
  unsigned int v4; // r10d
  __int64 v5; // rcx
  unsigned int (__fastcall *v6)(__int64, void *, void *, struct tagSIZE); // rax

  v4 = 0;
  v5 = *(_QWORD *)(*((_QWORD *)a1->dhsurf + 1) + 8LL * *((unsigned int *)a1->dhsurf + 4));
  v6 = *(unsigned int (__fastcall **)(__int64, void *, void *, struct tagSIZE))(*(_QWORD *)(v5 + 24) + 3432LL);
  if ( v6 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v6)(v5, a2, a3, a4);
  return v4;
}
