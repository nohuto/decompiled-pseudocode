/*
 * XREFs of RtlStringCbCatNA @ 0x1C003F1A4
 * Callers:
 *     HUBACPI_EvaluateDsmMethod @ 0x1C0089C6C (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x1C008A174 (HUBACPI_EvalAcpiMethodEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCatNA(NTSTRSAFE_PSTR pszDest, size_t cbDest, STRSAFE_PCNZCH pszSrc, size_t cbToAppend)
{
  __int64 v4; // r10
  NTSTRSAFE_PSTR v5; // rax
  __int64 v6; // r11
  NTSTATUS result; // eax
  char *v8; // rcx
  __int64 v9; // rdx
  const char *v10; // r8
  char v11; // al
  char *v12; // rax

  v4 = 256LL;
  v5 = pszDest;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  v6 = (256 - v4) & -(__int64)(v4 != 0);
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
  {
    if ( cbToAppend <= 0x7FFFFFFE )
    {
      v8 = &pszDest[v6];
      v9 = 256 - v6;
      if ( 256 != v6 )
      {
        v10 = (const char *)(pszSrc - v8);
        do
        {
          if ( !cbToAppend )
            break;
          v11 = v8[(_QWORD)v10];
          if ( !v11 )
            break;
          *v8 = v11;
          --cbToAppend;
          ++v8;
          --v9;
        }
        while ( v9 );
      }
      v12 = v8 - 1;
      if ( v9 )
        v12 = v8;
      *v12 = 0;
      return v9 == 0 ? 0x80000005 : 0;
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
