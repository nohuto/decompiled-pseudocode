/*
 * XREFs of PspInitializeSystemDlls @ 0x140B686FC
 * Callers:
 *     PspInitPhase2 @ 0x140B685A8 (PspInitPhase2.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     RtlFindExportedRoutineByName @ 0x1406AD3F0 (RtlFindExportedRoutineByName.c)
 *     PsQuerySystemDllInfo @ 0x14076F6C4 (PsQuerySystemDllInfo.c)
 *     PspWow64GetSharedInformation @ 0x14084E398 (PspWow64GetSharedInformation.c)
 */

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
  v1 = &qword_140B9F408;
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
