int __fastcall IVMeasureRimCompleteFrame(
        struct RIMCOMPLETEFRAME *a1,
        const struct CPointerRawData **a2,
        struct _UNICODE_STRING *a3,
        struct CIVTouchSerializer *a4)
{
  __int64 v4; // rsi
  int result; // eax

  v4 = *((_QWORD *)a4 + 2);
  result = CIVSerializer::Serialize(a4, (struct _UNICODE_STRING *)v4, a3, 1);
  if ( result >= 0 )
  {
    result = CIVTouchSerializer::Serialize(
               a4,
               (struct _IVRIMPOINTERRAWDATA **)(v4 + 208),
               a2[29],
               *((_DWORD *)a1 + 7),
               1);
    if ( result >= 0 )
    {
      *((_DWORD *)a4 + 2) += 176 * *((_DWORD *)a1 + 6);
      return 0;
    }
  }
  return result;
}
