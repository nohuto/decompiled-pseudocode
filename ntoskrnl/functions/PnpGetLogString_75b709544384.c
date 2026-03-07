int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_140A7D864;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_140A7D864;
  return result;
}
