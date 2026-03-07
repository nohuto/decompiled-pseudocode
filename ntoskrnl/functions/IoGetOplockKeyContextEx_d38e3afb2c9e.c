__int64 __fastcall IoGetOplockKeyContextEx(__int64 a1)
{
  __int64 result; // rax

  result = IopGetFileObjectExtension(a1, 6LL, 0LL);
  if ( result )
    return result & -(__int64)((*(_BYTE *)(result + 2) & 3) != 0);
  return result;
}
