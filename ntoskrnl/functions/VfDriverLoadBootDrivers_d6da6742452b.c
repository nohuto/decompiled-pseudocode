void __fastcall VfDriverLoadBootDrivers(_QWORD ***a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rbx
  __int64 v4; // rax

  v2 = (__int64)(*a1)[6];
  v3 = **a1;
  v4 = v2 + *((unsigned int *)*a1 + 16);
  ViDriverKernelBase = v2;
  for ( ViDriverKernelEnd = v4; v3 != a1; v3 = (_QWORD *)*v3 )
    VfDriverLoadImage((__int64)v3, v2, 0);
}
