_DWORD *__fastcall ViFindTriageRule(_DWORD *a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // r9
  _DWORD *v4; // rbx
  unsigned __int64 v5; // rcx

  v3 = (unsigned __int64)a1 + a2;
  v4 = a1;
  if ( a1 < (_DWORD *)((char *)a1 + a2) )
  {
    while ( 1 )
    {
      v5 = (unsigned int)*v4;
      if ( (*v4 & 0x70000) == 0 )
      {
        DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: zeroed rules structure (hit an invalid type rule).\n");
        return 0LL;
      }
      if ( (HIWORD(*v4) & 7) == 1 )
        break;
      if ( (HIWORD(*v4) & 7) == 2 )
        goto LABEL_7;
LABEL_8:
      if ( (unsigned __int64)v4 >= v3 )
        goto LABEL_9;
    }
    if ( (unsigned __int16)a3 == (unsigned __int16)v5 )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: rule was found for crash code %X.\n", a3);
      return v4;
    }
LABEL_7:
    v4 = (_DWORD *)((char *)v4 + (v5 >> 19) + 8);
    goto LABEL_8;
  }
LABEL_9:
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: no rule found for crash code %X.\n", a3);
  return 0LL;
}
