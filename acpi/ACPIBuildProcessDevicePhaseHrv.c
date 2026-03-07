__int64 __fastcall ACPIBuildProcessDevicePhaseHrv(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rbp

  v1 = *(_QWORD *)(a1 + 40);
  v3 = AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 1448233055LL);
  v4 = 0;
  *(_DWORD *)(a1 + 32) = 12;
  v5 = v3;
  if ( !v3 )
    goto LABEL_6;
  if ( (*(_BYTE *)(v1 + 1008) & 8) == 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 1008), 8uLL);
    v4 = ACPIGet(v1, 1448233055, 537149442, 0, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 632, 0LL);
    *(_DWORD *)(a1 + 32) = 11;
  }
  AMLIDereferenceHandleEx(v5);
  if ( v4 == 259 )
    return 0;
  else
LABEL_6:
    ACPIBuildCompleteMustSucceed(0LL, v4, 0LL, a1);
  return v4;
}
