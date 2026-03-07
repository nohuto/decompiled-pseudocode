__int64 __fastcall CResource::RegisterNotifier(CResource *this, struct CResource *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r8
  unsigned __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // ecx

  v3 = 0;
  if ( a2 )
  {
    v4 = *((_QWORD *)a2 + 3);
    if ( (v4 & 2) != 0 )
      v5 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v5 = *((_QWORD *)a2 + 3) & 1LL;
    v6 = CPtrArrayBase::InsertAt((struct CResource *)((char *)a2 + 24), (unsigned __int64)this, v5);
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x9Bu, 0LL);
    else
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)a2 + 8LL))(a2);
  }
  return v3;
}
