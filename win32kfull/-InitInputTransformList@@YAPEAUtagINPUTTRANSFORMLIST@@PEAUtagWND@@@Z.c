struct tagINPUTTRANSFORMLIST *__fastcall InitInputTransformList(struct tagWND *a1)
{
  struct tagINPUTTRANSFORMLIST *result; // rax

  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
    return 0LL;
  result = (struct tagINPUTTRANSFORMLIST *)*((_QWORD *)a1 + 34);
  if ( result )
    return result;
  if ( !gliQpcFreq )
    return 0LL;
  result = (struct tagINPUTTRANSFORMLIST *)Win32AllocPoolZInit(104LL, 2020176725LL);
  *((_QWORD *)a1 + 34) = result;
  if ( !result )
    return 0LL;
  *(_QWORD *)result = 0LL;
  *((_QWORD *)result + 2) = (char *)result + 8;
  *((_QWORD *)result + 1) = (char *)result + 8;
  return result;
}
