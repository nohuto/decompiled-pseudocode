__int64 __fastcall MiCompactServiceTable(__int64 a1)
{
  unsigned __int64 ExportedRoutineByName; // rsi
  unsigned int *v3; // r14
  unsigned __int8 *v4; // rbp
  unsigned __int64 v5; // rdi
  unsigned int *v6; // r15
  unsigned __int8 *v7; // r12
  int v8; // r13d
  int v10; // [rsp+60h] [rbp+8h]

  ExportedRoutineByName = RtlFindExportedRoutineByName(*(_QWORD *)(a1 + 48), "W32pServiceTable");
  if ( !ExportedRoutineByName )
    return 3221225594LL;
  v3 = (unsigned int *)RtlFindExportedRoutineByName(*(_QWORD *)(a1 + 48), "W32pServiceLimit");
  if ( !v3 )
    return 3221225594LL;
  v4 = (unsigned __int8 *)RtlFindExportedRoutineByName(*(_QWORD *)(a1 + 48), "W32pArgumentTable");
  if ( !v4 )
    return 3221225594LL;
  v5 = RtlFindExportedRoutineByName(*(_QWORD *)(a1 + 48), "W32pServiceTableFilter");
  if ( !v5 )
    return 3221225594LL;
  v6 = (unsigned int *)RtlFindExportedRoutineByName(*(_QWORD *)(a1 + 48), "W32pServiceLimitFilter");
  if ( !v6 )
    return 3221225594LL;
  v7 = (unsigned __int8 *)RtlFindExportedRoutineByName(*(_QWORD *)(a1 + 48), "W32pArgumentTableFilter");
  if ( !v7 )
    return 3221225594LL;
  v8 = 4 * *v3;
  MiSetImageProtection(a1, ExportedRoutineByName, v8);
  v10 = 4 * *v6;
  MiSetImageProtection(a1, v5, v10);
  KeCompactServiceTable(v5, v7, *v6, 3LL, *(_QWORD *)(a1 + 48));
  KeCompactServiceTable(ExportedRoutineByName, v4, *v3, 1LL, *(_QWORD *)(a1 + 48));
  if ( *(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 144) )
  {
    MiSetImageProtection(a1, ExportedRoutineByName, v8);
    MiSetImageProtection(a1, v5, v10);
  }
  return 0LL;
}
