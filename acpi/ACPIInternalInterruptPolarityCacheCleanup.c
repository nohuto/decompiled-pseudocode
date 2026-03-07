void __fastcall ACPIInternalInterruptPolarityCacheCleanup(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  v1 = (_QWORD *)(a1 + 712);
  v2 = *(_QWORD **)(a1 + 712);
  if ( v2 != v1 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      ExFreePoolWithTag(v2, 0x43706341u);
      v2 = v3;
    }
    while ( v3 != v1 );
  }
  v1[1] = v1;
  *v1 = v1;
}
