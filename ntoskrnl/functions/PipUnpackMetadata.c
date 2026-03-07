__int64 __fastcall PipUnpackMetadata(__int64 a1, _WORD *a2, _DWORD *a3)
{
  __int64 result; // rax

  if ( a2 )
  {
    result = *(unsigned __int16 *)(a1 + 16);
    *a2 = result;
  }
  if ( a3 )
  {
    result = *(unsigned int *)(a1 + 20);
    *a3 = result;
  }
  return result;
}
