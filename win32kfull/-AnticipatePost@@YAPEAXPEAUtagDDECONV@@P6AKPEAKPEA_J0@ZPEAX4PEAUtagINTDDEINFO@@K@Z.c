void *__fastcall AnticipatePost(
        struct tagDDECONV *a1,
        unsigned int (*a2)(unsigned int *, __int64 *, struct tagDDECONV *),
        void *a3,
        void *a4,
        struct tagINTDDEINFO *a5,
        unsigned int a6)
{
  struct tagXSTATE *v7; // rbx
  void *result; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // [rsp+30h] [rbp-10h] BYREF
  struct tagXSTATE *v12; // [rsp+38h] [rbp-8h]

  v7 = Createpxs(a2, a3, a4, a5, a6);
  result = 0LL;
  if ( v7 )
  {
    *((_QWORD *)v7 + 2) = *((_QWORD *)a1 + 2);
    v9 = (_QWORD *)((char *)a1 + 56);
    v10 = (_QWORD *)((char *)a1 + 64);
    v12 = v7;
    if ( *v9 )
      v11 = *v10 + 24LL;
    else
      v11 = (__int64)v9;
    HMAssignmentLock(&v11, 0LL);
    v11 = (__int64)v10;
    v12 = v7;
    HMAssignmentLock(&v11, 0LL);
    return *(void **)v7;
  }
  return result;
}
