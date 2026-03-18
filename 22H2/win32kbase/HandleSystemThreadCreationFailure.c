/*
 * XREFs of HandleSystemThreadCreationFailure @ 0x1C01350E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1C00B2914 (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 */

__int64 __fastcall HandleSystemThreadCreationFailure(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KEVENT *v3; // rcx
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  v6 = 0LL;
  if ( (PVOID)PsGetCurrentProcess(a1, a2, a3) == gpepCSRSS )
  {
    if ( (unsigned int)CSTPop(&v5, &v6) )
    {
      if ( v5 == 4 )
      {
        v3 = (struct _KEVENT *)*((_QWORD *)v6 + 1);
        if ( v3 )
          KeSetEvent(v3, 1, 0);
      }
    }
  }
  return 1LL;
}
