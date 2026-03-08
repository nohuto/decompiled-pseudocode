/*
 * XREFs of ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C0183370
 * Callers:
 *     GreExtCreateRegion @ 0x1C0019830 (GreExtCreateRegion.c)
 * Callees:
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0043670 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0044250 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0053220 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0055304 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C0183B20 (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 */

__int64 __fastcall RGNOBJ::bCreate(RGNOBJ *this, struct EPATHOBJ *a2, struct EXFORMOBJ *a3)
{
  unsigned int v6; // ebx
  PVOID v8; // [rsp+30h] [rbp+8h] BYREF

  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v8, *(_DWORD *)(*(_QWORD *)this + 48LL));
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v8);
  v6 = 0;
  if ( v8 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v8, this);
    v6 = RGNOBJ::bOutline((RGNOBJ *)&v8, a2, a3);
  }
  else
  {
    EngSetLastError(8u);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP(&v8);
  return v6;
}
