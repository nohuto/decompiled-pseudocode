_QWORD *PspInitializeSystemDlls()
{
  int v0; // ebx
  __int64 *v1; // rdi
  _QWORD *result; // rax
  _QWORD *v3; // rsi
  __int64 v4; // r15
  unsigned int i; // ebp
  unsigned __int64 ExportedRoutineByName; // rax
  _QWORD *v7; // rcx

  v0 = 0;
  v1 = &qword_140B9B1F8;
  do
  {
    result = PsQuerySystemDllInfo(v0);
    v3 = result;
    if ( result )
    {
      v4 = *(v1 - 1);
      for ( i = 0; i < *(_DWORD *)v1; *v7 = result )
      {
        ExportedRoutineByName = RtlFindExportedRoutineByName(v3[4], *(char **)(v4 + 16LL * i));
        if ( !ExportedRoutineByName )
          KeBugCheckEx(0x6Bu, 0xFFFFFFFFC000007AuLL, 6uLL, 0LL, 0LL);
        result = (_QWORD *)(v3[3] - v3[4] + ExportedRoutineByName);
        v7 = *(_QWORD **)(v4 + 16LL * i++ + 8);
      }
      if ( v0 == 1 )
      {
        result = PspWow64GetSharedInformation(1);
        result[6] = v3[3];
      }
    }
    ++v0;
    v1 += 2;
  }
  while ( v0 < 7 );
  return result;
}
