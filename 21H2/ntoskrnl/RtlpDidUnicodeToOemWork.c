/*
 * XREFs of RtlpDidUnicodeToOemWork @ 0x140759798
 * Callers:
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406E7B60 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1407591C0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1407596C0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x1407CDA20 (RtlpIsUtf8Process.c)
 */

char __fastcall RtlpDidUnicodeToOemWork(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int16 *v2; // rdi
  char v3; // bl
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned int v6; // r10d
  __int64 v7; // r15
  __int16 v8; // r14
  __int16 v9; // bp
  unsigned int v10; // ecx
  unsigned int v11; // r9d
  unsigned int v12; // r11d
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  bool v16; // zf
  signed __int32 v18[14]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a1;
  v3 = 1;
  LOBYTE(a1) = 1;
  if ( !(unsigned __int8)RtlpIsUtf8Process(a1) )
  {
    _InterlockedOr(v18, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v6 = *v2;
    v7 = CurrentServerSiloGlobals[152];
    v8 = *((_WORD *)CurrentServerSiloGlobals + 566);
    v9 = *((_WORD *)CurrentServerSiloGlobals + 568);
    if ( *((_WORD *)CurrentServerSiloGlobals + 570) )
    {
      v11 = 0;
      v12 = 0;
      if ( *v2 )
      {
        v13 = *((_QWORD *)v2 + 1);
        while ( 1 )
        {
          v14 = *(unsigned __int8 *)(v11 + v13);
          if ( *(_WORD *)(v7 + 2 * v14) && (v15 = v11 + 1, (unsigned int)v15 < v6) )
          {
            ++v11;
            v16 = ((char)v14 << 8) + *(unsigned __int8 *)(v15 + v13) == v8;
          }
          else
          {
            v16 = (char)v14 == (unsigned __int8)v8;
          }
          if ( v16 && *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v12) != v9 )
            break;
          ++v11;
          ++v12;
          if ( v11 >= v6 )
            return v3;
        }
        return 0;
      }
    }
    else
    {
      v10 = 0;
      if ( *v2 )
      {
        while ( *(char *)(v10 + *((_QWORD *)v2 + 1)) != (unsigned __int8)v8
             || *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v10) == v9 )
        {
          if ( ++v10 >= v6 )
            return v3;
        }
        return 0;
      }
    }
  }
  return v3;
}
