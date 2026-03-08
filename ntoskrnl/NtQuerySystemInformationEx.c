/*
 * XREFs of NtQuerySystemInformationEx @ 0x140770840
 * Callers:
 *     <none>
 * Callees:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

int __fastcall NtQuerySystemInformationEx(
        int a1,
        void *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  int v8; // ecx
  int v9; // edx
  unsigned __int64 v10; // rcx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx

  if ( !a2 || !a3 )
    return -1073741811;
  if ( a1 > 175 )
  {
    if ( a1 <= 211 )
    {
      if ( a1 != 211 )
      {
        v15 = a1 - 178;
        if ( v15 )
        {
          v16 = v15 - 2;
          if ( !v16 )
            goto LABEL_7;
          v27 = v16 - 1;
          if ( v27 )
          {
            v28 = v27 - 13;
            if ( !v28 )
              goto LABEL_7;
            v29 = v28 - 15;
            if ( v29 )
            {
              if ( v29 == 1 )
                goto LABEL_7;
              return -1073741821;
            }
          }
        }
      }
    }
    else
    {
      v12 = a1 - 222;
      if ( !v12 )
        goto LABEL_7;
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 7;
        if ( v14 )
        {
          v30 = v14 - 1;
          if ( !v30 )
            goto LABEL_7;
          v31 = v30 - 1;
          if ( v31 )
          {
            if ( v31 != 6 )
              return -1073741821;
          }
        }
      }
    }
LABEL_19:
    v9 = 8;
    goto LABEL_8;
  }
  if ( a1 == 175 )
    goto LABEL_19;
  if ( a1 <= 100 )
  {
    if ( a1 != 100 )
    {
      v17 = a1 - 8;
      if ( v17 )
      {
        v18 = v17 - 15;
        if ( v18 )
        {
          v19 = v18 - 19;
          if ( v19 )
          {
            v20 = v19 - 19;
            if ( v20 )
            {
              v21 = v20 - 11;
              if ( !v21 )
                goto LABEL_7;
              v22 = v21 - 1;
              if ( v22 )
              {
                if ( v22 != 10 )
                  return -1073741821;
              }
            }
          }
        }
      }
    }
    goto LABEL_31;
  }
  v8 = a1 - 107;
  if ( v8 )
  {
    v23 = v8 - 1;
    if ( v23 )
    {
      v24 = v23 - 13;
      if ( v24 )
      {
        v25 = v24 - 20;
        if ( v25 )
        {
          v26 = v25 - 19;
          if ( v26 )
          {
            if ( v26 == 5 )
              goto LABEL_19;
            return -1073741821;
          }
        }
      }
    }
LABEL_31:
    v9 = 2;
    goto LABEL_8;
  }
LABEL_7:
  v9 = 4;
LABEL_8:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((v9 - 1) & (unsigned int)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (unsigned __int64)a2 + a3;
    if ( v10 > 0x7FFFFFFF0000LL || v10 < (unsigned __int64)a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  return ExpQuerySystemInformation(a1, a2, a3, a4, a5, a6);
}
