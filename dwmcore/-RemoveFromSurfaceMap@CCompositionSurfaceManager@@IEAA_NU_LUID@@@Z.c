char __fastcall CCompositionSurfaceManager::RemoveFromSurfaceMap(CCompositionSurfaceManager *this, struct _LUID a2)
{
  struct _RTL_GENERIC_TABLE *v2; // rbx
  PVOID v3; // rax
  BOOLEAN v4; // al
  char v5; // bl
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = 0LL;
  v2 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
  Buffer[0] = a2;
  v3 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  if ( !v3 )
    return 0;
  v4 = RtlDeleteElementGenericTable(v2, v3);
  v5 = 1;
  if ( !v4 )
    RaiseFailFastException(0LL, 0LL, 1u);
  return v5;
}
