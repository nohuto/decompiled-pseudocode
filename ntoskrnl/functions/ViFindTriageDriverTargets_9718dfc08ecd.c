_DWORD *__fastcall ViFindTriageDriverTargets(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbx

  v2 = &ViVerifyTriageRules;
  while ( 1 )
  {
    if ( v2 >= (_DWORD *)((char *)&ViVerifyTriageRules + a2) )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: no `targets' rule found.\n");
      return 0LL;
    }
    if ( (*v2 & 0x70000) == 0 )
      break;
    if ( (HIWORD(*v2) & 7) == 1 )
    {
      v2 = (_DWORD *)((char *)v2 + ((unsigned __int64)(unsigned int)*v2 >> 19) + 8);
    }
    else if ( (HIWORD(*v2) & 7) == 2 )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: found a `targets' rule.\n");
      return v2;
    }
  }
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: zeroed rules structure (hit an invalid type rule).\n");
  return 0LL;
}
