bool __fastcall CitpAllowForegroundProcess(const struct _CIT_IMPACT_CONTEXT *a1)
{
  bool result; // al

  result = 0;
  if ( (*((_BYTE *)a1 + 112) & 2) != 0 )
    return *((_DWORD *)a1 + 50) != 0;
  return result;
}
