__int64 __fastcall CTokenManager::FindTokenQueue(
        CTokenManager *this,
        struct CompositionSurfaceObject *a2,
        struct CTokenQueue **a3)
{
  struct CTokenQueue *v3; // rbx
  unsigned int v4; // edi
  PVOID v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v8[0] = a2;
  v3 = 0LL;
  v8[1] = 0LL;
  v4 = 0;
  v6 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 200), v8);
  if ( v6 )
    v3 = (struct CTokenQueue *)*((_QWORD *)v6 + 1);
  else
    v4 = -1073741275;
  *a3 = v3;
  return v4;
}
