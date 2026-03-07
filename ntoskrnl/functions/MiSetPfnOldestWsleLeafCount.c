__int64 __fastcall MiSetPfnOldestWsleLeafCount(_DWORD *a1, int a2)
{
  __int64 result; // rax

  result = (*a1 ^ (16 * a2)) & 0x3FF0;
  *(_QWORD *)a1 ^= result;
  return result;
}
