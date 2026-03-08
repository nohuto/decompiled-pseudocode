/*
 * XREFs of PspDeleteServerSiloGlobals @ 0x1409A9EC0
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x1409A9C14 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x1409AA08C (PspDeleteSilo.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14020E5C8 (MiRemoveFromSystemSpace.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ExpDeleteSiloState @ 0x140606BA0 (ExpDeleteSiloState.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ObCleanupSiloState @ 0x140977DD0 (ObCleanupSiloState.c)
 *     EtwCleanupSiloState @ 0x1409DEED0 (EtwCleanupSiloState.c)
 *     ExWnfCleanupServerSiloState @ 0x140A03430 (ExWnfCleanupServerSiloState.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PspDeleteServerSiloGlobals(char *P)
{
  void *v2; // rcx
  _QWORD *v3; // rdx
  void *v4; // rcx
  void *v5; // rcx
  ULONG_PTR v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  struct _KEVENT *v11; // rcx
  void *v12; // rcx

  v2 = (void *)*((_QWORD *)P + 124);
  if ( v2 )
  {
    ObfDereferenceObjectWithTag(v2, 0x6B676244u);
    *((_QWORD *)P + 124) = 0LL;
  }
  ObCleanupSiloState((volatile __int64 *)P);
  v3 = P + 784;
  if ( *((_QWORD *)P + 99) || *((_QWORD *)P + 101) || *v3 )
    KeBugCheckEx(0x29u, (ULONG_PTR)v3, (ULONG_PTR)"minkernel\\ntos\\se\\rmmain.c", 0x6D1uLL, 0LL);
  ExWnfCleanupServerSiloState(P + 912);
  v4 = (void *)*((_QWORD *)P + 108);
  if ( v4 )
  {
    EtwCleanupSiloState(v4);
    *((_QWORD *)P + 108) = 0LL;
  }
  if ( *((_QWORD *)P + 161) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)P + 80);
    *((_QWORD *)P + 161) = 0LL;
  }
  v5 = (void *)*((_QWORD *)P + 129);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *((_QWORD *)P + 129) = 0LL;
  }
  v6 = *((_QWORD *)P + 130);
  if ( v6 )
  {
    MiRemoveFromSystemSpace(v6, 1);
    *((_QWORD *)P + 130) = 0LL;
  }
  v7 = (void *)*((_QWORD *)P + 128);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x6C537350u);
    *((_QWORD *)P + 128) = 0LL;
  }
  if ( *((_QWORD *)P + 166) )
  {
    MiRemoveFromSystemSpace(*((_QWORD *)P + 165), 1);
    v8 = (void *)*((_QWORD *)P + 166);
    *((_QWORD *)P + 165) = 0LL;
    ObfDereferenceObject(v8);
    *((_QWORD *)P + 166) = 0LL;
  }
  v9 = (void *)*((_QWORD *)P + 113);
  if ( v9 )
  {
    ExpDeleteSiloState(v9);
    *((_QWORD *)P + 113) = 0LL;
  }
  v10 = (void *)*((_QWORD *)P + 156);
  if ( v10 )
  {
    ZwClose(v10);
    *((_QWORD *)P + 156) = 0LL;
  }
  v11 = (struct _KEVENT *)*((_QWORD *)P + 164);
  if ( v11 )
  {
    KeSetEvent(v11, 0, 0);
    ObfDereferenceObjectWithTag(*((PVOID *)P + 164), 0x65446953u);
    *((_QWORD *)P + 164) = 0LL;
  }
  v12 = (void *)*((_QWORD *)P + 157);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  ExFreePoolWithTag(P, 0x476C6953u);
}
