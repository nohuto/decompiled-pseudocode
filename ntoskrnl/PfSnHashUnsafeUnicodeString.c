/*
 * XREFs of PfSnHashUnsafeUnicodeString @ 0x1407895F0
 * Callers:
 *     PfSnScanCommandLine @ 0x1407E4F40 (PfSnScanCommandLine.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfSnHashUnsafeUnicodeString(unsigned __int16 *a1, __int64 *a2)
{
  __int64 v3; // r9
  unsigned __int64 v4; // r8
  unsigned __int8 *v5; // r8
  __int64 v6; // rdx
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d

  v3 = *a1;
  if ( (_WORD)v3 )
  {
    v4 = *((_QWORD *)a1 + 1);
    if ( (v4 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v4 + v3 > 0x7FFFFFFF0000LL || v4 + v3 < v4 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v5 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v6 = 314159LL;
  while ( v3 >= 8 )
  {
    v6 = 37 * (37 * (37 * (37 * (37 * (37 * (37 * (*v5 + 37 * v6) + v5[1]) + v5[2]) + v5[3]) + v5[4]) + v5[5]) + v5[6])
       + v5[7];
    v5 += 8;
    v3 -= 8LL;
  }
  if ( v3 >= 1 )
  {
    v7 = v3 - 1;
    if ( !v7 )
    {
LABEL_22:
      v6 = *v5 + 37 * v6;
      goto LABEL_25;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
LABEL_21:
      v6 = *v5++ + 37 * v6;
      goto LABEL_22;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
LABEL_20:
      v6 = *v5++ + 37 * v6;
      goto LABEL_21;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
LABEL_19:
      v6 = *v5++ + 37 * v6;
      goto LABEL_20;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
LABEL_18:
      v6 = *v5++ + 37 * v6;
      goto LABEL_19;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
LABEL_17:
      v6 = *v5++ + 37 * v6;
      goto LABEL_18;
    }
    if ( v12 == 1 )
    {
      v6 = *v5++ + 37 * v6;
      goto LABEL_17;
    }
  }
LABEL_25:
  *a2 = v6;
  return 0LL;
}
