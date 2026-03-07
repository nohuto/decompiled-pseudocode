__int64 (__fastcall *__fastcall PpmUpdateTargetProcessorPolicy(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3,
        __int64 a4))(__int64, _QWORD)
{
  void (__fastcall *v4)(__int64, _QWORD); // rax
  __int64 v6; // rsi
  void (__fastcall *v10)(__int64, _QWORD); // rax
  void (__fastcall *v11)(__int64, _QWORD); // rax
  void (__fastcall *v12)(__int64, _QWORD); // rax
  __int64 (__fastcall *result)(__int64, _QWORD); // rax

  v4 = *(void (__fastcall **)(__int64, _QWORD))(a1 + 336);
  v6 = a2[1];
  if ( v4 && (*a3 & 0x20) != 0 )
    v4(v6, *(unsigned int *)(a4 + 52));
  v10 = *(void (__fastcall **)(__int64, _QWORD))(a1 + 344);
  if ( v10 && (*a3 & 0x40) != 0 )
    v10(v6, *(unsigned int *)(a4 + 56));
  v11 = *(void (__fastcall **)(__int64, _QWORD))(a1 + 352);
  if ( v11 && (PpmAllowedActions & 0x100) != 0 )
    v11(v6, *(unsigned int *)(a4 + 72));
  v12 = *(void (__fastcall **)(__int64, _QWORD))(a1 + 360);
  if ( v12 )
  {
    if ( (*a3 & 0x80u) != 0 )
    {
      *(_BYTE *)(a1 + 508) = *(_BYTE *)(a4 + 76);
      v12(v6, *(unsigned __int8 *)(a4 + 76));
      if ( *a2 )
        PpmEventAutonomousModeChange(*a2, *(unsigned __int8 *)(a1 + 508));
    }
  }
  result = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 328);
  if ( result )
  {
    if ( (*a3 & 0x200) != 0 )
      return (__int64 (__fastcall *)(__int64, _QWORD))result(v6, (unsigned int)PpmPerfTimeWindow);
  }
  return result;
}
