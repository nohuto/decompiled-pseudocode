__int64 __fastcall PiDmPnpObjectMatchCallback(__int64 a1, __int64 a2, char *a3)
{
  char v4; // al

  if ( *(_QWORD *)a2 )
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))a2)(
           *(_QWORD *)&PiPnpRtlCtx,
           *(_QWORD *)(a1 + 16),
           *(unsigned int *)(a1 + 28),
           *(_QWORD *)(a2 + 8));
  else
    v4 = 1;
  *a3 = v4;
  return 0LL;
}
