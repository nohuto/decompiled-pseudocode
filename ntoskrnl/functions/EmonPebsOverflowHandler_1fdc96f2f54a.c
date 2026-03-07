__int64 __fastcall EmonPebsOverflowHandler()
{
  __int64 v0; // rax
  __int64 v1; // r9
  __int64 v2; // rbx
  __int64 v3; // r10
  unsigned int v4; // r8d
  unsigned __int64 v5; // rax
  __int64 result; // rax

  LODWORD(v0) = KeGetPcr()->Prcb.Number;
  v1 = EmonReservedResourcesList;
  v2 = EmonDsManagementAreas + 160 * v0;
  while ( (__int64 *)v1 != &EmonReservedResourcesList )
  {
    if ( *(_QWORD *)(v1 + 24) )
    {
      if ( EmonPebs64Bit )
      {
        v3 = *(_QWORD *)(v2 + 32);
        v4 = EmonPebsEntrySizeInUse;
        v5 = (*(_QWORD *)(v2 + 40) - v3) / (unsigned __int64)(unsigned int)EmonPebsEntrySizeInUse;
      }
      else
      {
        v3 = *(unsigned int *)(v2 + 16);
        v4 = EmonPebsEntrySizeInUse;
        v5 = (*(_DWORD *)(v2 + 20) - (int)v3) / (unsigned int)EmonPebsEntrySizeInUse;
      }
      (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64))(v1 + 24))(v3, v4, v5);
      break;
    }
    v1 = *(_QWORD *)v1;
  }
  if ( EmonPebs64Bit )
  {
    result = *(_QWORD *)(v2 + 32);
    *(_QWORD *)(v2 + 40) = result;
  }
  else
  {
    result = *(unsigned int *)(v2 + 16);
    *(_DWORD *)(v2 + 20) = result;
  }
  return result;
}
