__int64 __fastcall KiIpiUpdateThreadTag(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 result; // rax

  result = *a3;
  if ( (_DWORD)result )
    _interlockedbittestandset((volatile signed __int32 *)a2, 0x14u);
  else
    _interlockedbittestandreset((volatile signed __int32 *)a2, 0x14u);
  *(_BYTE *)(a2 + 124) = result;
  return result;
}
