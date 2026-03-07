void __fastcall ACPIFreePhysicalDeviceLocationDescriptors(char **a1)
{
  char *v2; // rcx
  __int64 v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == (char *)a1 )
      break;
    if ( *((char ***)v2 + 1) != a1 || (v3 = *(_QWORD *)v2, *(char **)(*(_QWORD *)v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = (char *)v3;
    *(_QWORD *)(v3 + 8) = a1;
    ACPIFreePhysicalDeviceLocationDescriptor(v2);
  }
}
