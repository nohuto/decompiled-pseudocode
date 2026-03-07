struct tagPROCESS_HID_REQUEST *__fastcall SearchProcessHidRequest(
        struct tagPROCESSINFO *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned int *a4)
{
  struct tagPROCESS_HID_REQUEST *result; // rax
  __int16 v5; // dx
  __int16 v6; // r8
  _DWORD *v7; // r9
  __int64 v8; // r10
  int v9; // r11d

  if ( !*((_QWORD *)a1 + 103) )
    return 0LL;
  result = SearchProcessHidRequestInclusion(*((struct tagPROCESS_HID_TABLE **)a1 + 103), a2, a3);
  if ( result )
  {
    *v7 = 1;
  }
  else
  {
    if ( !v6 )
    {
      for ( result = *(struct tagPROCESS_HID_REQUEST **)(v8 + 32);
            result != (struct tagPROCESS_HID_REQUEST *)(v8 + 32);
            result = *(struct tagPROCESS_HID_REQUEST **)result )
      {
        if ( *((_WORD *)result + 8) == v5 )
        {
          if ( !result )
            break;
          *v7 = 2;
          return result;
        }
      }
    }
    for ( result = *(struct tagPROCESS_HID_REQUEST **)(v8 + 48); ; result = *(struct tagPROCESS_HID_REQUEST **)result )
    {
      if ( result == (struct tagPROCESS_HID_REQUEST *)(v8 + 48) )
        goto LABEL_6;
      if ( *((_WORD *)result + 8) == v5 && *((_WORD *)result + 9) == v6 )
        break;
    }
    if ( !result )
    {
LABEL_6:
      *v7 = v9;
      return 0LL;
    }
    *v7 = 3;
  }
  return result;
}
