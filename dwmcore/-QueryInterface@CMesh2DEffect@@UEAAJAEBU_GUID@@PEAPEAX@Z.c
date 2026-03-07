__int64 __fastcall CMesh2DEffect::QueryInterface(CMesh2DEffect *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  *a3 = 0LL;
  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_a248fd3f_3e6c_4e63_9f03_7f68ecc91db9.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a248fd3f_3e6c_4e63_9f03_7f68ecc91db9.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_a248fd3f_3e6c_4e63_9f03_7f68ecc91db9.Data4;
  if ( !v4 )
    goto LABEL_17;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_36bfdcb6_9739_435d_a30d_a653beff6a6f.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_36bfdcb6_9739_435d_a30d_a653beff6a6f.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_36bfdcb6_9739_435d_a30d_a653beff6a6f.Data4;
  if ( !v5 )
    goto LABEL_13;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ef1a287d_342a_4f76_8fdb_da0d6ea9f92b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ef1a287d_342a_4f76_8fdb_da0d6ea9f92b.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ef1a287d_342a_4f76_8fdb_da0d6ea9f92b.Data4;
  if ( !v6 )
    goto LABEL_13;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b2efe1e7_729f_4102_949f_505fa21bf666.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b2efe1e7_729f_4102_949f_505fa21bf666.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b2efe1e7_729f_4102_949f_505fa21bf666.Data4;
  if ( !v7 )
  {
LABEL_13:
    *a3 = (void *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
    goto LABEL_19;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v8 )
    v3 = -2147467262;
  else
LABEL_17:
    *a3 = this;
LABEL_19:
  if ( *a3 )
    CMILRefCountImpl::AddReference((CMesh2DEffect *)((char *)this + 24));
  return v3;
}
