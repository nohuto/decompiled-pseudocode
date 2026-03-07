unsigned __int64 __fastcall MiAddMdlPageToTradeBlock(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    result = (unsigned __int64)*(unsigned int *)(v2 + 40) >> 12;
    *(_QWORD *)(v2 + 8 * result + 48) = a2;
    *(_DWORD *)(v2 + 40) += 4096;
  }
  return result;
}
