__int64 __fastcall ACPIBuildProcessDevicePhaseSub(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rbp

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 32) = 16;
    goto LABEL_8;
  }
  v4 = AMLIGetNamedChild(*(_QWORD *)(v2 + 760), 1112888159LL);
  *(_DWORD *)(a1 + 32) = 11;
  v5 = v4;
  if ( !v4 )
    goto LABEL_8;
  if ( (*(_BYTE *)(v2 + 1008) & 0x10) != 0 )
  {
    strnlen(*(const char **)(v2 + 624), 9uLL);
    AMLIDereferenceHandleEx(v5);
    goto LABEL_8;
  }
  AMLIDereferenceHandleEx(v4);
  _InterlockedOr64((volatile signed __int64 *)(v2 + 1008), 0x10uLL);
  *(_DWORD *)(a1 + 32) = 10;
  v1 = ACPIGet(v2, 1112888159, 671612932, 0, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v2 + 624, 0LL);
  if ( v1 != 259 )
  {
LABEL_8:
    ACPIBuildCompleteMustSucceed(0LL, v1, 0LL, a1);
    return v1;
  }
  return 0;
}
