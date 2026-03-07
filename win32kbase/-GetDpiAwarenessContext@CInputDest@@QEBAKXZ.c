__int64 __fastcall CInputDest::GetDpiAwarenessContext(CInputDest *this)
{
  __int64 result; // rax

  result = 18LL;
  if ( *((_DWORD *)this + 23) == 2 )
    return *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 10) + 40LL) + 288LL);
  return result;
}
