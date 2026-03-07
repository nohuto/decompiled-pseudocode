__int64 __fastcall W32GetThreadWin32Thread(__int64 a1)
{
  __int64 result; // rax

  result = PsGetThreadWin32Thread(a1);
  if ( result )
    return *(_QWORD *)result;
  return result;
}
