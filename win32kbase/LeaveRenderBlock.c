__int64 LeaveRenderBlock()
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( result )
    --*(_DWORD *)(result + 332);
  return result;
}
