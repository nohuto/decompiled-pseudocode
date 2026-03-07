unsigned __int64 __fastcall TtmpPublishDisplayRequiredPowerRequestEvents(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rbx
  unsigned __int64 result; // rax

  v2 = *(_QWORD **)(a1 + 280);
  v4 = v2;
  while ( v4 )
  {
    result = *v4 & 0x8000000000000002uLL;
    if ( result == 0x8000000000000002uLL )
      result = MEMORY[0];
    v4 = (_QWORD *)*v4;
    if ( ((unsigned __int8)v4 & 1) != 0 )
      break;
LABEL_11:
    if ( !v4 )
      return result;
    if ( *((_DWORD *)v4 + 10) )
      TtmpWriteDisplayRequiredPowerRequestUpdatedEvent(a1, a2, v4);
  }
  ++v2;
  result = *(_QWORD *)(a1 + 280);
  while ( (unsigned __int64)v2 < result + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 276) >> 5) )
  {
    v4 = (_QWORD *)*v2;
    if ( (*v2 & 1) == 0 )
      goto LABEL_11;
    ++v2;
  }
  return result;
}
