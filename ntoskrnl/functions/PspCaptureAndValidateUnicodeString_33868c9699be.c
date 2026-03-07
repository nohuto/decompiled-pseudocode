__int64 __fastcall PspCaptureAndValidateUnicodeString(_OWORD *a1, unsigned __int16 *a2)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rcx

  *(_OWORD *)a2 = *a1;
  v2 = *a2;
  if ( (v2 & 1) != 0 )
    return 3221225485LL;
  v3 = *((_QWORD *)a2 + 1);
  if ( v3 )
  {
    a2[1] = v2 + 2;
    if ( (unsigned __int16)(v2 + 2) >= (unsigned __int16)v2 )
      goto LABEL_4;
    return 3221225485LL;
  }
  if ( (_WORD)v2 )
    return 3221225485LL;
  a2[1] = 0;
LABEL_4:
  if ( (_WORD)v2 )
  {
    v4 = v3 + v2;
    if ( v4 > 0x7FFFFFFF0000LL || v4 < v3 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  return 0LL;
}
