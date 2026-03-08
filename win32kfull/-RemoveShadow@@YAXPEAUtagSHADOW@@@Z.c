/*
 * XREFs of ?RemoveShadow@@YAXPEAUtagSHADOW@@@Z @ 0x1C0224110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RemoveShadow(struct tagSHADOW *a1)
{
  struct tagSHADOW *v1; // rbx
  struct tagSHADOW **v2; // rdx
  struct tagSHADOW **v4; // rax

  v1 = gpshadowFirst;
  v2 = &gpshadowFirst;
  while ( v1 )
  {
    v4 = (struct tagSHADOW **)((char *)v1 + 16);
    if ( v1 == a1 )
    {
      *v2 = *v4;
      HMAssignmentUnlock(a1);
      HMAssignmentUnlock((char *)a1 + 8);
      Win32FreePool(v1);
      return;
    }
    v1 = *v4;
    v2 = v4;
  }
}
