__int64 __fastcall Bulk_EvtDmaCallback(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = *(_QWORD *)(*a4 + 56LL);
  a4[7] = a3;
  result = (__int64)Bulk_Stage_MapIntoRing((__int64)a4);
  if ( !_InterlockedXor((volatile signed __int32 *)(v4 + 336), 1u) )
  {
    result = TR_AttemptStateChange(v4, 3, 3);
    if ( (_DWORD)result == 3 )
      return Bulk_MapTransfers(v4);
  }
  return result;
}
