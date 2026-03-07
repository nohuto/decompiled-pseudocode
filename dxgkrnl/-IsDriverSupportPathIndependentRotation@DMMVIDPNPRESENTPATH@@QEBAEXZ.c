unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(DMMVIDPNPRESENTPATH *this)
{
  __int64 v1; // rdi
  char v2; // bl
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rax

  v1 = *((_QWORD *)this + 11);
  v2 = 0;
  if ( !*(_QWORD *)(v1 + 40) )
    WdLogSingleEntry0(1LL);
  v3 = *(_QWORD *)(v1 + 40);
  if ( !*(_QWORD *)(v3 + 72) )
    WdLogSingleEntry0(1LL);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 72) + 48LL);
  if ( !*(_QWORD *)(v4 + 8) )
    WdLogSingleEntry0(1LL);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL);
  if ( !v5 )
    WdLogSingleEntry0(1LL);
  v6 = *(_QWORD *)(v5 + 2920);
  if ( *(_BYTE *)(v6 + 289) && *(_BYTE *)(v6 + 290)
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 216) + 64LL) + 40LL) + 28LL) >= 0x4003u )
  {
    return 1;
  }
  return v2;
}
