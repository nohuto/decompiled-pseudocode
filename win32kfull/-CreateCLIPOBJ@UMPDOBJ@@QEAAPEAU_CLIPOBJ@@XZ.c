/*
 * XREFs of ?CreateCLIPOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@XZ @ 0x1C029B458
 * Callers:
 *     NtGdiEngCreateClip @ 0x1C02CBB20 (NtGdiEngCreateClip.c)
 * Callees:
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C029BC38 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 */

struct _CLIPOBJ *__fastcall UMPDOBJ::CreateCLIPOBJ(UMPDOBJ *this)
{
  CLIPOBJ *v2; // rbx
  void *Clip; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 17) )
    return 0LL;
  Clip = EngCreateClip();
  v2 = (CLIPOBJ *)Clip;
  if ( !Clip )
    return 0LL;
  if ( !(unsigned int)UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 128), &Clip, 0x18u, 0LL) )
  {
    EngDeleteClip(v2);
    return 0LL;
  }
  return (struct _CLIPOBJ *)Clip;
}
