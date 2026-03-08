/*
 * XREFs of PspSiloLoadApiSets @ 0x1409AAA20
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409AA0D0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x1402993A0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402993C0 (PsDetachSiloFromCurrentThread.c)
 *     ApiSetReleaseSchema @ 0x140612300 (ApiSetReleaseSchema.c)
 *     PspQueryForwardersEnabled @ 0x140812AAC (PspQueryForwardersEnabled.c)
 *     PspApiSetCopyToSystemSpace @ 0x1409A98F8 (PspApiSetCopyToSystemSpace.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x140A0717C (ApiSetLoadSchemaWithExtensions.c)
 */

__int64 __fastcall PspSiloLoadApiSets(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *v2; // r14
  int v3; // esi
  _QWORD *ServerSiloGlobals; // rbx
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v7[3]; // [rsp+28h] [rbp-18h] BYREF
  void *Src; // [rsp+68h] [rbp+28h] BYREF
  size_t Size; // [rsp+70h] [rbp+30h] BYREF
  __int64 v10; // [rsp+78h] [rbp+38h] BYREF

  v6 = 0LL;
  v10 = 0LL;
  Src = 0LL;
  Size = 0LL;
  v7[1] = L"\\SystemRoot\\System32\\ApiSetSchema.dll";
  v7[0] = 4980810LL;
  v2 = PsAttachSiloToCurrentThread(a1);
  v3 = ApiSetLoadSchemaWithExtensions(v7, &Src, &Size);
  if ( v3 >= 0 )
  {
    v3 = PspApiSetCopyToSystemSpace(Src, Size, &v10, &v6);
    if ( v3 >= 0 )
    {
      ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
      ServerSiloGlobals[129] = v10;
      ServerSiloGlobals[130] = v6;
      *((_BYTE *)ServerSiloGlobals + 1048) = PspQueryForwardersEnabled();
    }
    if ( Src )
      ApiSetReleaseSchema(Src);
  }
  PsDetachSiloFromCurrentThread(v2);
  return (unsigned int)v3;
}
