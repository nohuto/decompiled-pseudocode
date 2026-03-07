void __fastcall EtwpFreeFilterInfo(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx

  v2 = (void *)a1[1];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = (void *)a1[2];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = (void *)a1[3];
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v5 = (void *)a1[4];
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = (void *)a1[5];
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  v7 = (void *)a1[6];
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  v8 = (void *)a1[7];
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  v9 = (void *)a1[8];
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  v10 = (void *)a1[9];
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  v11 = (void *)a1[10];
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v12 = (void *)a1[11];
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  v13 = (void *)a1[12];
  if ( v13 )
    EtwpFreeEventNameFilter(v13);
}
