/*
 * XREFs of IoNotifyDump @ 0x14054E4A0
 * Callers:
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 *     IoShutdownSystem @ 0x140A96AB4 (IoShutdownSystem.c)
 *     PopRestoreHiberContext @ 0x140AA139C (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140AA1810 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IoNotifyDump(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( qword_140C6A8D0 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( v3 )
        {
          v4 = v3 - 1;
          if ( v4 )
          {
            if ( v4 != 1 )
              return result;
            v5 = 9LL;
          }
          else
          {
            v5 = 7LL;
          }
        }
        else
        {
          v5 = 5LL;
        }
      }
      else
      {
        v5 = 4LL;
      }
    }
    else
    {
      v5 = 3LL;
    }
    return ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))qword_140C6A8D0)(v5, 0LL, 0LL);
  }
  return result;
}
