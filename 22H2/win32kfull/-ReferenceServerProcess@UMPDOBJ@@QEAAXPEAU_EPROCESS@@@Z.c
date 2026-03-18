/*
 * XREFs of ?ReferenceServerProcess@UMPDOBJ@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C013F2A8
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C02CDAA0 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007E800 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0080520 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

void __fastcall UMPDOBJ::ReferenceServerProcess(UMPDOBJ *this, struct _EPROCESS *a2)
{
  void *v4; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v5, (UMPDOBJ *)((char *)this + 384));
  v4 = (void *)*((_QWORD *)this + 49);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *((_QWORD *)this + 49) = 0LL;
  }
  if ( a2 )
  {
    ObfReferenceObject(a2);
    *((_QWORD *)this + 49) = a2;
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v5);
}
