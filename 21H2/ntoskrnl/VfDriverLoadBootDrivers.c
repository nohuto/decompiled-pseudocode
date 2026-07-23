/*
 * XREFs of VfDriverLoadBootDrivers @ 0x140A4FE74
 * Callers:
 *     VfInitBootDriversLoaded @ 0x140A4FD74 (VfInitBootDriversLoaded.c)
 * Callees:
 *     VfDriverLoadImage @ 0x1409C3090 (VfDriverLoadImage.c)
 */

void __fastcall VfDriverLoadBootDrivers(_QWORD ***a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax

  v2 = **a1;
  v3 = (__int64)(*a1)[6] + *((unsigned int *)*a1 + 16);
  ViDriverKernelBase = (__int64)(*a1)[6];
  for ( ViDriverKernelEnd = v3; v2 != a1; v2 = (_QWORD *)*v2 )
    VfDriverLoadImage((__int64)v2, 0, 0, 0);
}
