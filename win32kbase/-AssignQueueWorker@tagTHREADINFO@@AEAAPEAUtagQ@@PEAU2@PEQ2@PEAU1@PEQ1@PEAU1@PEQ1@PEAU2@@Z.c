ULONG_PTR __fastcall tagTHREADINFO::AssignQueueWorker(
        tagTHREADINFO *this,
        ULONG_PTR BugCheckParameter2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  ULONG_PTR BugCheckParameter4; // rbp
  __int64 v9; // rdi
  __int64 v10; // rdx
  tagTHREADINFO *v11; // r8
  tagTHREADINFO *v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rcx

  BugCheckParameter4 = *(_QWORD *)((char *)this + a5);
  if ( BugCheckParameter4 == BugCheckParameter2 )
    return 0LL;
  v9 = 0LL;
  if ( BugCheckParameter4
    && !(unsigned __int8)tagTHREADINFO::RemoveThreadFromListWorker(this, *(_QWORD *)((char *)this + a5), a3, a4) )
  {
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)this, BugCheckParameter2, BugCheckParameter4);
  }
  *(_QWORD *)((char *)this + a5) = BugCheckParameter2;
  if ( !BugCheckParameter2 )
    goto LABEL_19;
  v10 = (int)a3;
  v11 = *(tagTHREADINFO **)((int)a3 + BugCheckParameter2);
  v12 = v11;
  if ( v11 )
  {
    while ( v12 != this )
    {
      v13 = (int)a4;
      v12 = *(tagTHREADINFO **)((char *)v12 + (int)a4);
      if ( !v12 )
        goto LABEL_12;
    }
    goto LABEL_18;
  }
  v13 = (int)a4;
LABEL_12:
  if ( *(_QWORD *)((char *)this + v13) )
LABEL_18:
    KeBugCheckEx(0x164u, 0x12uLL, BugCheckParameter2, (ULONG_PTR)this, 0LL);
  *(_QWORD *)((char *)this + v13) = v11;
  *(_QWORD *)(v10 + BugCheckParameter2) = this;
  if ( (unsigned int)Feature_BackportGetActiveWindowInUserMode__private_IsEnabledDeviceUsage() )
  {
LABEL_19:
    if ( a5 == 432 )
    {
LABEL_20:
      if ( BugCheckParameter2 == *((_QWORD *)this + 82) )
        tagTHREADINFO::AssignAttachQueue(this, 0LL);
    }
  }
  else if ( a5 == 432 )
  {
    v14 = *(__int64 **)(*((_QWORD *)this + 54) + 120LL);
    if ( v14 )
      v9 = *v14;
    *(_QWORD *)(*((_QWORD *)this + 56) + 32LL) = v9;
    goto LABEL_20;
  }
  return BugCheckParameter4;
}
