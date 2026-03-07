__int64 __fastcall sub_1406B6FF4(void *a1, ULONG a2, int a3, PMDL *a4, _QWORD *a5)
{
  if ( a3 )
    return WbMakeUserExecutablePagesKernelWritable(a1, a2, a4, a5);
  else
    return sub_140A4AE60(a1, a2);
}
