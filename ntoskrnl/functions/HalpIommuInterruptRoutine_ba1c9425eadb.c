char HalpIommuInterruptRoutine()
{
  ULONG_PTR *v0; // rbx
  unsigned int v1; // edi
  char v2; // si
  ULONG_PTR *v3; // rcx

  v0 = (ULONG_PTR *)HalpIommuList;
  v1 = 0;
  v2 = 0;
  while ( v0 != &HalpIommuList )
  {
    v3 = v0;
    v0 = (ULONG_PTR *)*v0;
    if ( (v3[61] & 0x120) != 0 && ((unsigned __int8 (__fastcall *)(ULONG_PTR))v3[38])(v3[2]) )
    {
      v2 = 1;
      (*(void (__fastcall **)(_QWORD))(HalIommuDispatch + 96))(v1);
    }
    ++v1;
  }
  return v2;
}
