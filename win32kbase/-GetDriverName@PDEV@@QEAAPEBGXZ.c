const unsigned __int16 *__fastcall PDEV::GetDriverName(PDEV *this)
{
  const unsigned __int16 *result; // rax

  result = (const unsigned __int16 *)*((_QWORD *)this + 445);
  if ( !result )
  {
    result = L"unknown";
    if ( (*((_DWORD *)this + 10) & 0x8000) == 0 )
      return L"display";
  }
  return result;
}
