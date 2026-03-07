unsigned __int64 __fastcall TR_GetDequeuePointer(__int64 a1)
{
  unsigned __int64 result; // rax

  result = (*(_DWORD *)(*(_QWORD *)(a1 + 176) + 24LL) ^ *(_DWORD *)(a1 + 200)) & 1 ^ (*(_QWORD *)(*(_QWORD *)(a1 + 176)
                                                                                                + 24LL)
                                                                                    + 16LL * *(unsigned int *)(a1 + 192));
  if ( *(_DWORD *)(a1 + 64) )
    return result & 0xFFFFFFFFFFFFFFF1uLL | 2;
  return result;
}
