/*
 * XREFs of KiGetNextTimer2ExpirationDueTime @ 0x1402DD25C
 * Callers:
 *     KiGetNextTimerExpirationDueTime @ 0x140328330 (KiGetNextTimerExpirationDueTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetNextTimer2ExpirationDueTime(char a1, unsigned __int64 *a2, unsigned __int64 *a3, _BYTE *a4)
{
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // rbx
  __int64 v6; // r10
  __int64 result; // rax
  unsigned __int64 v8; // rcx

  v4 = -1LL;
  *a4 = 0;
  v5 = -1LL;
  v6 = a1 != 0 ? 4LL : 2LL;
  while ( 1 )
  {
    while ( 1 )
    {
      result = 3 * v6;
      v8 = qword_140C41F50[3 * v6];
      if ( v6 != 2 )
        break;
      v6 = 3LL;
      if ( v8 < v4 )
        v4 = v8;
    }
    if ( v8 < v5 )
    {
      v5 = qword_140C41F50[3 * v6];
      if ( v6 == 4 )
        break;
    }
    if ( ++v6 > 4 )
      goto LABEL_6;
  }
  *a4 = 1;
LABEL_6:
  *a3 = v5;
  *a2 = v4;
  return result;
}
