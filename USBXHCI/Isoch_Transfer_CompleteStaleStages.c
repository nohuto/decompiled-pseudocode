unsigned __int8 *__fastcall Isoch_Transfer_CompleteStaleStages(__int64 a1, _BYTE *a2, unsigned __int8 *a3)
{
  unsigned __int8 *v3; // rdi
  unsigned __int8 *result; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v6 = a1;
  v7 = 0;
  v3 = a2 + 128;
  LOBYTE(v6) = 0;
  a2[133] = a2[132];
  a2[134] = a2[130];
  while ( 1 )
  {
    result = StageQueue_ForwardScanGetNextStage(v3);
    if ( !result || result == a3 )
      break;
    *((_DWORD *)result + 12) = *((_DWORD *)result + 11) + 1;
    Isoch_Stage_CompleteTD(result, 23, 0, 1, &v6, &v7);
  }
  return result;
}
