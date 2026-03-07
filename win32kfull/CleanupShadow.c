void __fastcall CleanupShadow(__int64 a1)
{
  struct tagSHADOW *v1; // rbx
  struct tagSHADOW **v2; // rdx
  struct tagSHADOW **v3; // rax

  v1 = gpshadowFirst;
  v2 = &gpshadowFirst;
  while ( v1 )
  {
    v3 = (struct tagSHADOW **)((char *)v1 + 16);
    if ( *((_QWORD *)v1 + 1) == a1 )
    {
      *v2 = *v3;
      HMAssignmentUnlock(v1);
      HMAssignmentUnlock((char *)v1 + 8);
      Win32FreePool(v1);
      return;
    }
    v1 = *v3;
    v2 = v3;
  }
}
