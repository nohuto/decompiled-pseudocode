__int64 __fastcall MI_IS_PTE_IN_WS_SWAP_SET(__int64 a1, _WORD *a2)
{
  __int16 v2; // cx
  __int64 result; // rax

  v2 = *(_WORD *)(*(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*a2) >> 4) + 17056) + 204LL);
  result = 1LL;
  if ( (v2 & 0x10) == 0 && ((v2 & 0x20) == 0 || (*(_QWORD *)a2 & 2) == 0) )
    return 0LL;
  return result;
}
