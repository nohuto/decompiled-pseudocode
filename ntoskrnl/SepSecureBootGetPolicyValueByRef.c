/*
 * XREFs of SepSecureBootGetPolicyValueByRef @ 0x1409CDED0
 * Callers:
 *     SeQuerySecureBootPolicyValue @ 0x140861880 (SeQuerySecureBootPolicyValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSecureBootGetPolicyValueByRef(unsigned __int16 *a1, int a2, _QWORD *a3, int *a4)
{
  int v4; // eax
  unsigned int v5; // r11d
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax

  v4 = *a1;
  v5 = 0;
  if ( a2 != v4 )
    return 3221225524LL;
  v7 = v4 & 0x1F;
  if ( !v7 )
  {
    *a3 = a1 + 2;
    *a4 = a1[1];
    return v5;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    *a4 = 4;
    *a3 = a1 + 1;
    return v5;
  }
  v9 = v8 - 2;
  if ( !v9 )
  {
    *a3 = a1 + 4;
    v11 = 4 * a1[3];
    goto LABEL_12;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    *a4 = 8;
    *a3 = a1 + 1;
    return v5;
  }
  if ( v10 == 5 )
  {
    *a3 = a1 + 2;
    v11 = a1[1];
LABEL_12:
    *a4 = v11;
    return v5;
  }
  return (unsigned int)-1073741822;
}
