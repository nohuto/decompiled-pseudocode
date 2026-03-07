void __fastcall PiSwBusRelationRemove(const wchar_t **P, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  const wchar_t ***v5; // rdx
  PVOID *v6; // rcx
  _QWORD *v7; // rdx
  void *v8; // rsi

  v3 = (char *)(P + 14);
  if ( (byte_140C0E10C & 8) != 0 )
    McTemplateK0zzz_EtwWriteTransfer(
      (__int64)P,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_RelationRemove,
      a3,
      P[1],
      P[2],
      *(const wchar_t **)(*(_QWORD *)v3 + 8LL));
  v5 = (const wchar_t ***)P[12];
  if ( v5[1] != P + 12 || (v6 = (PVOID *)P[13], *v6 != P + 12) )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = (const wchar_t **)v6;
  v7 = *(_QWORD **)v3;
  if ( *(_QWORD *)(*(_QWORD *)v3 + 16LL) == *(_QWORD *)v3 + 16LL )
  {
    v8 = (void *)v7[1];
    RtlDeleteElementGenericTableAvl(&PiSwBusRelationsTable, v7);
    if ( v8 )
      ExFreePoolWithTag(v8, 0x57706E50u);
  }
  *(_QWORD *)v3 = 0LL;
  PiSwDeviceDereference(P);
}
