void __fastcall UmfdEscEngCreateFile(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  char *v1; // rbx
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rdi
  wchar_t Str1[264]; // [rsp+30h] [rbp-228h] BYREF

  v1 = (char *)a1 + 8;
  v2 = *((_QWORD *)a1 + 1);
  if ( !v2 )
    goto LABEL_13;
  v3 = *((_QWORD *)v1 + 1);
  if ( v3 > 0x104 )
    goto LABEL_13;
  v4 = 2 * v3;
  if ( v4 )
  {
    if ( (v2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v4 + v2 > MmUserProbeAddress || v4 + v2 < v2 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v5 = *((_QWORD *)v1 + 1);
  memmove(Str1, *(const void **)v1, v5 * 2);
  if ( v5 >= 261 )
    _report_rangecheckfailure();
  Str1[v5] = 0;
  if ( _wcsicmp(Str1, L"FAC.ATM") )
LABEL_13:
    *(_QWORD *)v1 = -1LL;
  else
    *(_QWORD *)v1 = EngCreateFile(Str1);
}
