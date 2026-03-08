/*
 * XREFs of ParseNameTail @ 0x1C005BA08
 * Callers:
 *     ParseName @ 0x1C005B860 (ParseName.c)
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     RtlStringCchCopyA @ 0x1C000B07C (RtlStringCchCopyA.c)
 *     RtlStringCchCopyNA @ 0x1C002BADC (RtlStringCchCopyNA.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 */

__int64 __fastcall ParseNameTail(__int64 a1, const char **a2, _BYTE *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r11
  const char *v8; // r8
  char v9; // al
  unsigned __int8 *v10; // rax
  int v11; // edi
  int v12; // r10d

  v3 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( a3[v5] );
  v8 = *a2;
  v9 = **a2;
  if ( v9 )
  {
    if ( v9 == 47 )
    {
      v10 = (unsigned __int8 *)(v8 + 1);
      *a2 = v8 + 1;
      v8 += 2;
      v11 = *v10;
      *a2 = v8;
      if ( v11 )
        goto LABEL_11;
    }
    else
    {
      if ( v9 == 46 )
      {
        ++v8;
        v11 = 2;
        *a2 = v8;
      }
      else
      {
        v11 = 1;
      }
LABEL_11:
      while ( (unsigned __int64)(unsigned int)v5 + 4 < 0x100 )
      {
        RtlStringCchCopyNA(&a3[(unsigned int)v5], (unsigned int)(256 - v5), v8, 4uLL);
        LODWORD(v5) = v5 + 4;
        v8 = *a2 + 4;
        *a2 = v8;
        if ( --v11 && (unsigned int)(v5 + 1) < 0x100 )
        {
          RtlStringCchCopyA(&a3[(unsigned int)v5], (unsigned int)(256 - v5), ".");
          v8 = *a2;
          LODWORD(v5) = v12;
        }
        else if ( !v11 )
        {
          break;
        }
      }
      if ( v11 )
      {
        LogError(-1073741562);
        AcpiDiagTraceAmlError(a1, -1073741562);
        PrintDebugMessage(130, a3, 0LL, 0LL, 0LL);
        return (unsigned int)-1073741562;
      }
    }
  }
  else
  {
    *a2 = v8 + 1;
  }
  return v3;
}
