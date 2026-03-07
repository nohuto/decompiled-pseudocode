NTSTATUS __fastcall Win8RtlGetVersion(struct _OSVERSIONINFOW *a1)
{
  NTSTATUS result; // eax
  int v3; // edx

  result = RtlGetVersion(a1);
  if ( result >= 0 )
  {
    a1->szCSDVersion[0] = 0;
    v3 = a1->dwOSVersionInfoSize - 284;
    a1->dwMajorVersion = 6;
    a1->dwMinorVersion = 2;
    a1->dwBuildNumber = 9200;
    if ( (v3 & 0xFFFFFFF7) == 0 )
      a1[1].dwOSVersionInfoSize = 0;
  }
  return result;
}
