__int64 __fastcall GetSrbExtension(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 2) == 40 )
    result = *(_QWORD *)(a1 + 104);
  else
    result = *(_QWORD *)(a1 + 56);
  if ( (result & 0xFFF) != 0 )
    return result - (result & 0xFFF) + 4096;
  return result;
}
