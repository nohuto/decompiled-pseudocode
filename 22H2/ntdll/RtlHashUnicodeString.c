/*
 * XREFs of RtlHashUnicodeString @ 0x18001CCB0
 * Callers:
 *     RtlpFindUnicodeStringInSection @ 0x18001CA18 (RtlpFindUnicodeStringInSection.c)
 *     LdrpHashUnicodeString @ 0x180061070 (LdrpHashUnicodeString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlHashUnicodeString(unsigned __int16 *a1, char a2, unsigned int a3, int *a4)
{
  int v4; // r10d
  unsigned __int16 *v6; // r11
  int v7; // r9d
  unsigned __int64 v8; // rax
  int v10; // ecx

  v4 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  v6 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  *a4 = 0;
  v7 = *a1 >> 1;
  if ( a3 > 1 )
    return 3221225485LL;
  if ( v7 )
  {
    if ( a2 )
    {
      do
      {
        v8 = *v6++;
        --v7;
        if ( (unsigned int)v8 >= 0x61 )
        {
          if ( (unsigned int)v8 > 0x7A )
          {
            if ( Nls844UnicodeUpcaseTable )
            {
              if ( (unsigned __int16)v8 >= 0xC0u )
                LOWORD(v8) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                      + 2
                                      * ((v8 & 0xF)
                                       + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                             + 2LL
                                                             * (((unsigned __int8)v8 >> 4)
                                                              + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                                  + 2 * (v8 >> 8))))))
                           + v8;
            }
          }
          else
          {
            LOWORD(v8) = v8 - 32;
          }
        }
        v4 = (unsigned __int16)v8 + 65599 * v4;
      }
      while ( v7 );
    }
    else
    {
      do
      {
        v10 = *v6++;
        v4 = v10 + 65599 * v4;
        --v7;
      }
      while ( v7 );
    }
  }
  *a4 = v4;
  return 0LL;
}
