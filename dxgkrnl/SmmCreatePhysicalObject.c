__int64 __fastcall SmmCreatePhysicalObject(
        struct SYSMM_ADAPTER *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        char a6,
        __int64 a7,
        int a8,
        ULONG_PTR **a9,
        ULONG_PTR **a10)
{
  struct SYSMM_PHYSICAL_OBJECT *PhysicalObjectInternal; // rax
  ULONG_PTR *v12; // rbx
  ULONG_PTR *v13; // rdi
  int v14; // eax
  unsigned int v15; // esi

  PhysicalObjectInternal = (struct SYSMM_PHYSICAL_OBJECT *)SmmCreatePhysicalObjectInternal(a2, a3, a4, a5, a6, a7, a8);
  v12 = 0LL;
  v13 = (ULONG_PTR *)PhysicalObjectInternal;
  if ( PhysicalObjectInternal )
  {
    if ( !a1 )
    {
LABEL_5:
      *a10 = v12;
      *a9 = v13;
      return 0LL;
    }
    v14 = SmmOpenPhysicalObject(PhysicalObjectInternal, a1);
    v15 = v14;
    if ( v14 >= 0 )
    {
      v12 = v13 + 8;
      goto LABEL_5;
    }
    WdLogSingleEntry3(3LL, v13, a1, v14);
    SmmDestroyPhysicalObject(v13);
    return v15;
  }
  else
  {
    *a9 = 0LL;
    *a10 = 0LL;
    return 3221225495LL;
  }
}
