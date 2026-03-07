__int64 __fastcall XmBtOp(_DWORD *a1)
{
  __int64 result; // rax

  result = (a1[4] ^ (a1[26] >> a1[27])) & 1;
  a1[4] ^= result;
  return result;
}
