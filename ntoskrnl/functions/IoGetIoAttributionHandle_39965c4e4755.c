__int64 __fastcall IoGetIoAttributionHandle(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 || !v2 || (*(_BYTE *)(v2 + 2) & 0x40) == 0 )
    return 3221226021LL;
  result = 0LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 200) + 16LL);
  return result;
}
