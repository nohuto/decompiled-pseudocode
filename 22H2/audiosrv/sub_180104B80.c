/*
 * XREFs of sub_180104B80 @ 0x180104B80
 * Callers:
 *     sub_18010063C @ 0x18010063C (sub_18010063C.c)
 *     sub_180104BE0 @ 0x180104BE0 (sub_180104BE0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180104B80(HANDLE *a1)
{
  unsigned int v1; // ebx
  signed int LastError; // eax

  v1 = 0;
  if ( *a1 )
  {
    if ( AvRevertMmThreadCharacteristics(*a1) )
    {
      *a1 = 0LL;
    }
    else
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        return (unsigned __int16)LastError | 0x80070000;
      else
        return (unsigned int)LastError;
    }
  }
  return v1;
}
