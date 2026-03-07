ULONG __fastcall sub_1400A25A0(__int64 a1)
{
  ULONG result; // eax
  char *v2; // rbx
  char *v4; // rdi
  void (__fastcall *v5)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), __int64, __int64, char *); // rax

  result = (unsigned int)off_1400DF3B8;
  v2 = (char *)&unk_1400DF360;
  if ( off_1400DF3B8 != &unk_1400DF350 )
  {
    v4 = (char *)off_1400DF3B8 + 80;
    if ( *(_DWORD *)off_1400DF3B8 == 120 )
      v4 = (char *)off_1400DF3B8 + 120;
    while ( 1 )
    {
      while ( 1 )
      {
        result = (_DWORD)v2 + 8;
        if ( v2 + 8 > v4 || *(_QWORD *)v2 )
          break;
        v2 += 8;
      }
      if ( v2 < v4 )
      {
        result = (_DWORD)v2 + 80;
        if ( v2 + 80 > v4 || *(_DWORD *)v2 != 80 )
        {
          result = (_DWORD)v2 + 120;
          if ( v2 + 120 > v4 || *(_DWORD *)v2 != 120 )
            return DbgPrintEx(0x4Du, 0, "FxGetNextClassBindInfo failed\n");
        }
      }
      else
      {
        v2 = v4;
      }
      if ( !v2 )
        return DbgPrintEx(0x4Du, 0, "FxGetNextClassBindInfo failed\n");
      if ( v2 >= v4 )
        return result;
      v5 = (void (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), __int64, __int64, char *))*((_QWORD *)v2 + 8);
      if ( v5 )
        v5(WdfVersionUnbindClass, a1, qword_1400DF6A8, v2);
      else
        WdfVersionUnbindClass(a1, qword_1400DF6A8, v2);
      v2 += *(unsigned int *)v2;
    }
  }
  return result;
}
