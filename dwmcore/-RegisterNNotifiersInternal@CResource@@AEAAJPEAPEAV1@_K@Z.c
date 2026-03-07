__int64 __fastcall CResource::RegisterNNotifiersInternal(CResource *this, struct CResource **a2, unsigned __int64 a3)
{
  unsigned int v3; // edi
  unsigned __int64 v4; // rbx
  int v8; // eax
  unsigned int v9; // ecx

  v3 = 0;
  v4 = 0LL;
  if ( a3 )
  {
    while ( 1 )
    {
      v8 = CResource::RegisterNotifier(this, a2[v4]);
      v3 = v8;
      if ( v8 < 0 )
        break;
      if ( ++v4 >= a3 )
        return v3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x104u, 0LL);
    CResource::UnRegisterNNotifiersInternal(this, a2, v4);
  }
  return v3;
}
