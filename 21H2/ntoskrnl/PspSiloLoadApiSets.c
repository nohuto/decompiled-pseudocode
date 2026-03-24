/*
 * XREFs of PspSiloLoadApiSets @ 0x140906D14
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140906470 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140252E18 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x140264010 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140264030 (PsAttachSiloToCurrentThread.c)
 *     ApiSetReleaseSchema @ 0x1405BE588 (ApiSetReleaseSchema.c)
 *     PspQueryForwardersEnabled @ 0x1407A8C18 (PspQueryForwardersEnabled.c)
 *     PspApiSetCopyToSystemSpace @ 0x140905D28 (PspApiSetCopyToSystemSpace.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x14095E984 (ApiSetLoadSchemaWithExtensions.c)
 */

__int64 __fastcall PspSiloLoadApiSets(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *v2; // r14
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD *v6; // r9
  _QWORD *ServerSiloGlobals; // rbx
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v10[3]; // [rsp+28h] [rbp-18h] BYREF
  void *Src; // [rsp+68h] [rbp+28h] BYREF
  size_t Size; // [rsp+70h] [rbp+30h] BYREF
  struct _DMA_ADAPTER *v13; // [rsp+78h] [rbp+38h] BYREF

  v9 = 0LL;
  v13 = 0LL;
  Src = 0LL;
  Size = 0LL;
  v10[1] = L"\\SystemRoot\\System32\\ApiSetSchema.dll";
  v10[0] = 4980810LL;
  v2 = PsAttachSiloToCurrentThread(a1);
  v3 = ApiSetLoadSchemaWithExtensions(v10, &Src, &Size);
  if ( v3 >= 0 )
  {
    v3 = PspApiSetCopyToSystemSpace(Src, Size, &v13, &v9);
    if ( v3 >= 0 )
    {
      ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
      ServerSiloGlobals[129] = v13;
      ServerSiloGlobals[130] = v9;
      *((_BYTE *)ServerSiloGlobals + 1048) = PspQueryForwardersEnabled();
    }
    if ( Src )
      ApiSetReleaseSchema((ULONG_PTR)Src, v4, v5, v6);
  }
  PsDetachSiloFromCurrentThread(v2);
  return (unsigned int)v3;
}
