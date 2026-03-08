/*
 * XREFs of HandleSystemThreadCreationFailure @ 0x1C015CEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1C008E8E4 (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 */

__int64 __fastcall HandleSystemThreadCreationFailure(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KEVENT *v4; // rcx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v7 = 0LL;
  if ( (PVOID)PsGetCurrentProcess(a1, a2, a3, a4) == gpepCSRSS )
  {
    if ( (unsigned int)CSTPop(&v6, &v7) )
    {
      if ( v6 == 4 )
      {
        v4 = (struct _KEVENT *)*((_QWORD *)v7 + 1);
        if ( v4 )
          KeSetEvent(v4, 1, 0);
      }
    }
  }
  return 1LL;
}
