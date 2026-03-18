/*
 * XREFs of SmRegistrationCtxStart @ 0x140861560
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140261354 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmGetRegistrationInfo @ 0x14085E9A0 (SmGetRegistrationInfo.c)
 *     SmcCacheCreatePrepare @ 0x1409D4AF4 (SmcCacheCreatePrepare.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     SmCreateEvent @ 0x1408615B8 (SmCreateEvent.c)
 */

__int64 __fastcall SmRegistrationCtxStart(_QWORD *a1)
{
  int v2; // ebx
  void *v3; // rcx
  void *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = SmCreateEvent(a1, &v5);
  if ( v2 < 0 )
  {
    v3 = v5;
  }
  else
  {
    v3 = 0LL;
    *a1 = v5;
    v2 = 0;
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v2;
}
