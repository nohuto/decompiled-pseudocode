void __fastcall VidSchiUpdateFlipTelemetryStats(
        struct _VIDSCH_PROCESS *a1,
        struct _VIDSCH_CALL_EXECUTE_FLIP *a2,
        struct _VIDSCH_PRESENT_INFO *a3)
{
  __int64 v3; // rax

  v3 = *((unsigned int *)a2 + 10);
  if ( (_DWORD)v3 == -1 )
  {
    ++*((_QWORD *)a1 + 346);
    ++*((_QWORD *)a3 + 9842);
  }
  else if ( !(_DWORD)v3 || (_DWORD)v3 == *((_DWORD *)a3 + 20734) )
  {
    ++*((_QWORD *)a1 + 344);
    *((_QWORD *)a1 + 348) += v3;
    ++*((_QWORD *)a3 + 9840);
    *((_QWORD *)a3 + 9844) += v3;
  }
  else if ( *((_DWORD *)a3 + 20733) <= 1u )
  {
    ++*((_QWORD *)a1 + 345);
    *((_QWORD *)a1 + 349) += v3;
    ++*((_QWORD *)a3 + 9841);
    *((_QWORD *)a3 + 9845) += v3;
  }
  else
  {
    ++*((_QWORD *)a1 + 347);
    *((_QWORD *)a1 + 351) += v3;
    ++*((_QWORD *)a3 + 9843);
    *((_QWORD *)a3 + 9847) += v3;
  }
}
