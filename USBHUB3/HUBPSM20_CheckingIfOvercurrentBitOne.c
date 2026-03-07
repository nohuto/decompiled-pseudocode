__int64 __fastcall HUBPSM20_CheckingIfOvercurrentBitOne(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 960);
  if ( (*(_BYTE *)(v3 + 184) & 8) == 0 )
    return 3005LL;
  HUBREG_UpdateSqmHubOvercurrentDetected(*(_QWORD *)v3, a2, a3);
  result = 3089LL;
  *(_DWORD *)(v3 + 1424) = 4;
  return result;
}
