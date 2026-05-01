/*
 * XREFs of CrmStateMonitorSizeGet @ 0x180037F00
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x18002AFC8 (CrmRegisterToStateMonitor.c)
 *     CrmActivityStart @ 0x1800302D0 (CrmActivityStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateMonitorSizeGet(int a1)
{
  unsigned int v1; // edx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  bool v11; // zf

  v1 = 0;
  if ( a1 > 23 )
  {
    if ( a1 > 29 )
    {
      v7 = a1 - 30;
      if ( !v7 )
        return 80;
      v8 = v7 - 1;
      if ( !v8 )
        return 120;
      v9 = v8 - 1;
      if ( !v9 )
        return 80;
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 == 1;
        goto LABEL_33;
      }
    }
    else
    {
      if ( a1 == 29 )
        return 112;
      v3 = a1 - 24;
      if ( !v3 )
        return 120;
      v4 = v3 - 1;
      if ( !v4 )
        return 120;
      v5 = v4 - 1;
      if ( !v5 )
        return 112;
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
          return v1;
        return 64;
      }
    }
    return 96;
  }
  if ( a1 >= 22 )
    return 80;
  if ( a1 > 12 )
  {
    if ( a1 <= 18 )
      return 80;
    if ( a1 == 19 )
      return 184;
    if ( a1 == 20 )
      return 192;
    return 120;
  }
  if ( a1 == 12 )
    return 80;
  if ( a1 >= 0 )
  {
    if ( a1 > 1 )
    {
      if ( a1 == 2 )
        return 128;
      if ( a1 <= 8 )
        return 72;
      if ( a1 != 9 )
      {
        if ( a1 != 10 )
        {
          v11 = a1 == 11;
LABEL_33:
          if ( !v11 )
            return v1;
          return 80;
        }
        return 64;
      }
    }
    return 80;
  }
  return v1;
}
