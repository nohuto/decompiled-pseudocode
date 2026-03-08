/*
 * XREFs of EtwpGetEventNameFromEventMetadata @ 0x140462A96
 * Callers:
 *     EtwpTraceLostEventOld @ 0x14040C2E0 (EtwpTraceLostEventOld.c)
 *     EtwpApplyEventNameFilter @ 0x140462256 (EtwpApplyEventNameFilter.c)
 *     EtwpTraceLostEvent @ 0x1405F9F94 (EtwpTraceLostEvent.c)
 * Callees:
 *     strnlen @ 0x1403D5A40 (strnlen.c)
 */

const char *__fastcall EtwpGetEventNameFromEventMetadata(__int64 a1, unsigned int a2, _WORD *a3)
{
  const char *v4; // rbx
  const char *v5; // rdi
  char *v6; // rax
  unsigned __int16 v7; // di
  __int16 v8; // ax

  *a3 = 0;
  if ( a2 >= 3 )
  {
    v4 = (const char *)(a1 + 2);
    v5 = (const char *)(a1 + a2);
    while ( 1 )
    {
      v6 = (char *)v4;
      if ( v4 == v5 )
        break;
      ++v4;
      if ( *v6 >= 0 )
      {
        if ( v4 == v5 )
          return 0LL;
        v7 = (_WORD)v5 - (_WORD)v4;
        if ( v4 )
          v8 = strnlen(v4, v7);
        else
          v8 = 0;
        *a3 = v8;
        if ( v8 == v7 )
        {
          *a3 = 0;
          return 0LL;
        }
        return v4;
      }
    }
  }
  return 0LL;
}
