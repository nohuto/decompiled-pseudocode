__int64 *__fastcall Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 ExportedRoutineByName; // rax

  ExportedRoutineByName = RtlFindExportedRoutineByName(a2, a3);
  *a1 = ExportedRoutineByName;
  if ( !ExportedRoutineByName )
    *a1 = a4;
  return a1;
}
