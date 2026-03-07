__int64 __fastcall MulStartDxInterop(struct _SURFOBJ *a1, __int64 a2, void *a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rcx
  unsigned int (__fastcall *v5)(__int64, __int64, void *, _QWORD); // rax

  v3 = 0;
  v4 = *(_QWORD *)(*((_QWORD *)a1->dhsurf + 1) + 8LL * *((unsigned int *)a1->dhsurf + 4));
  v5 = *(unsigned int (__fastcall **)(__int64, __int64, void *, _QWORD))(*(_QWORD *)(v4 + 24) + 3456LL);
  if ( v5 )
    return v5(v4, a2, a3, 0LL);
  return v3;
}
