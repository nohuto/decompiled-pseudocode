__int64 __fastcall CmpDecommisssionKcb(ULONG_PTR a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 8) & 0x80000) != 0 )
    return CmpFreeKeyControlBlock(a1);
  return result;
}
