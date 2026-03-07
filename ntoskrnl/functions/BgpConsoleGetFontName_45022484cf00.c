const wchar_t *__fastcall BgpConsoleGetFontName(int a1, const wchar_t **a2)
{
  const wchar_t *result; // rax

  switch ( a1 )
  {
    case 2:
      result = L"Meiryo Console";
      break;
    case 1:
      result = L"Malgun Gothic Console";
      break;
    case 3:
      result = L"Microsoft YaHei Console";
      break;
    default:
      result = L"Microsoft JhengHei Console";
      if ( a1 != 4 )
        result = L"Segoe Mono Boot";
      break;
  }
  *a2 = result;
  return result;
}
