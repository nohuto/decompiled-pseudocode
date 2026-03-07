__int64 __fastcall HUBHSM_ReadingUsb4DromDwordOffset(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  if ( (int)FWUPDATE_GetMMIO(
              v1,
              *(_WORD *)(v1 + 2700) & 0xF,
              *(_QWORD *)(v1 + 2688) + 4LL * *(unsigned int *)(v1 + 2700)) < 0 )
    HUBSM_AddEvent(v1 + 1264, 2004LL);
  return 1000LL;
}
