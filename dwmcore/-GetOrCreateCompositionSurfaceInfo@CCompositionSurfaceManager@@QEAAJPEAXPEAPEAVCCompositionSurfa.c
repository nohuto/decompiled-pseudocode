__int64 __fastcall CCompositionSurfaceManager::GetOrCreateCompositionSurfaceInfo(
        CCompositionSurfaceManager *this,
        void *a2,
        struct CCompositionSurfaceInfo **a3)
{
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // ebx
  char v9; // si
  struct CCompositionSurfaceInfo *CompositionSurfaceInfoByLuid; // rax
  struct CCompositionSurfaceInfo *v11; // rdi
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v15; // ecx
  struct CCompositionSurfaceInfo *v16; // [rsp+70h] [rbp+18h] BYREF
  struct _LUID v17; // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0LL;
  v6 = NtValidateCompositionSurfaceHandle(a2, &v17);
  if ( v6 < 0 )
  {
    v8 = v6 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6 | 0x10000000, 0x2Au, 0LL);
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v8, 0x36u, 0LL);
      return (unsigned int)v8;
    }
  }
  else
  {
    v8 = 0;
  }
  v9 = 1;
  CompositionSurfaceInfoByLuid = CCompositionSurfaceManager::GetCompositionSurfaceInfoByLuid(this, v17);
  v16 = CompositionSurfaceInfoByLuid;
  v11 = CompositionSurfaceInfoByLuid;
  if ( CompositionSurfaceInfoByLuid )
  {
    (*(void (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)CompositionSurfaceInfoByLuid + 8LL))(CompositionSurfaceInfoByLuid);
  }
  else
  {
    v12 = CCompositionSurfaceInfo::Create(a2, v17, this, &v16);
    v8 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x46u, 0LL);
      goto LABEL_9;
    }
    v11 = v16;
    v9 = 0;
  }
  *a3 = v11;
  if ( v9 )
LABEL_9:
    CloseHandle(a2);
  return (unsigned int)v8;
}
