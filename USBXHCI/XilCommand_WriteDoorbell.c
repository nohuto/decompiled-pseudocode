_DWORD *__fastcall XilCommand_WriteDoorbell(__int64 a1)
{
  _DWORD *result; // rax
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !*(_QWORD *)(a1 + 152) )
    return (_DWORD *)XilCommand_SendRequestToRingDoorbell(a1 + 136);
  result = *(_DWORD **)(a1 + 152);
  *result = 0;
  _InterlockedOr(v2, 0);
  return result;
}
