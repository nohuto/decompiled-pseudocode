HRESULT __fastcall StringCchCopyNW(unsigned __int16 *a1, size_t a2, size_t *a3, size_t cchToCopy)
{
  HRESULT result; // eax

  if ( a2 - 1 <= 0x7FFFFFFE )
  {
    if ( cchToCopy <= 0x7FFFFFFE )
      return StringCopyWorkerW(a1, a2, a3, (STRSAFE_PCNZWCH)a3, cchToCopy);
    result = -2147024809;
LABEL_8:
    *a1 = 0;
    return result;
  }
  result = -2147024809;
  if ( a2 )
    goto LABEL_8;
  return result;
}
