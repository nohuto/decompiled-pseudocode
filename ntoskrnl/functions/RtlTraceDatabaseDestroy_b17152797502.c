char __fastcall RtlTraceDatabaseDestroy(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)v2[2];
      if ( !v3 )
        v2 -= 27;
      ExFreePoolWithTag(v2, *(_DWORD *)(a1 + 8));
      v2 = v3;
    }
    while ( v3 );
  }
  return 1;
}
