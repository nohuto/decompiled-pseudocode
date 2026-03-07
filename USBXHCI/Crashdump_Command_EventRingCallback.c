__int64 __fastcall Crashdump_Command_EventRingCallback(__int64 a1, _OWORD *a2, _BYTE *a3)
{
  if ( *(_QWORD *)a2 == *(_QWORD *)(a1 + 24) )
  {
    *(_OWORD *)(a1 + 60) = *a2;
    *a3 = 0;
  }
  else
  {
    *a3 = 1;
  }
  return 0LL;
}
