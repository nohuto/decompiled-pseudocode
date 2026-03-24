/*
 * XREFs of NtQuerySystemInformationEx @ 0x1406C7760
 * Callers:
 *     <none>
 * Callees:
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtQuerySystemInformationEx(int a1, unsigned __int64 a2, unsigned int a3)
{
  int v5; // ecx
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx

  if ( !a2 || !a3 )
    return 3221225485LL;
  if ( a1 <= 121 )
  {
    if ( a1 != 121 )
    {
      if ( a1 <= 73 )
      {
        if ( a1 != 73 && a1 != 8 && a1 != 23 && a1 != 42 && a1 != 61 )
        {
          if ( a1 != 72 )
            return 3221225475LL;
          goto LABEL_19;
        }
      }
      else
      {
        v9 = a1 - 83;
        if ( v9 )
        {
          v10 = v9 - 17;
          if ( v10 )
          {
            v11 = v10 - 7;
            if ( !v11 )
              goto LABEL_19;
            if ( v11 != 1 )
              return 3221225475LL;
          }
        }
      }
    }
    goto LABEL_25;
  }
  if ( a1 <= 180 )
  {
    if ( a1 == 180 )
      goto LABEL_19;
    v14 = a1 - 141;
    if ( v14 )
    {
      v15 = v14 - 19;
      if ( v15 )
      {
        v16 = v15 - 5;
        if ( v16 )
        {
          v17 = v16 - 10;
          if ( v17 )
          {
            if ( v17 != 3 )
              return 3221225475LL;
          }
        }
        goto LABEL_6;
      }
    }
LABEL_25:
    v6 = 1LL;
    goto LABEL_7;
  }
  v5 = a1 - 181;
  if ( v5 )
  {
    v12 = v5 - 28;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 != 1 )
          return 3221225475LL;
        goto LABEL_6;
      }
LABEL_19:
      v6 = 3LL;
      goto LABEL_7;
    }
  }
LABEL_6:
  v6 = 7LL;
LABEL_7:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (v6 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = a2 + a3;
    if ( v7 > 0x7FFFFFFF0000LL || v7 < a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  return ExpQuerySystemInformation((unsigned int)a1, a2);
}
