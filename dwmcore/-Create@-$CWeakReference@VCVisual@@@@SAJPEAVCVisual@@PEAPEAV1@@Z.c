__int64 __fastcall CWeakReference<CVisual>::Create(struct CResource *a1, struct CWeakResourceReference **a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  struct CWeakResourceReference *v6; // rcx
  struct CWeakResourceReference *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v3 = CWeakResourceReference::Get(a1, &v8);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x94u, 0LL);
    v6 = v8;
  }
  else
  {
    v6 = 0LL;
    *a2 = v8;
  }
  if ( v6 )
    (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v6 + 8LL))(v6);
  return v5;
}
