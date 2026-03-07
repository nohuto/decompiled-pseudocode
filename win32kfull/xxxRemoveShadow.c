__int64 __fastcall xxxRemoveShadow(__int64 a1)
{
  struct tagSHADOW *v1; // rdi
  struct tagSHADOW **v2; // rdx
  unsigned int v3; // ebx
  struct tagSHADOW **v5; // rax
  __int64 *v6; // rsi

  v1 = gpshadowFirst;
  v2 = &gpshadowFirst;
  v3 = 0;
  while ( v1 )
  {
    v5 = (struct tagSHADOW **)((char *)v1 + 16);
    if ( *(_QWORD *)v1 == a1 )
    {
      *v2 = *v5;
      v6 = (__int64 *)HMAssignmentUnlock((char *)v1 + 8);
      HMAssignmentUnlock(v1);
      Win32FreePool(v1);
      if ( v6 )
        return (unsigned int)xxxDestroyWindow(v6);
      else
        return 1;
    }
    v1 = *v5;
    v2 = v5;
  }
  return v3;
}
