__int64 __fastcall CVisual::AddLight(_QWORD *a1, __int64 a2, int a3, char a4)
{
  unsigned int v5; // esi
  _QWORD *v6; // rcx
  _QWORD *i; // rax
  unsigned __int64 Count; // rax
  CPtrArrayBase *v11; // rcx
  int v12; // eax
  unsigned int v13; // ecx
  _OWORD *v14; // rdx
  _OWORD *v16; // rdx
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  v6 = a1 + 38;
  if ( a3 )
  {
    v16 = (_OWORD *)a1[39];
    *(_QWORD *)&v17 = a2;
    BYTE8(v17) = a4;
    if ( v16 == (_OWORD *)a1[40] )
    {
      std::vector<CVisual::LightEntry>::_Emplace_reallocate<CVisual::LightEntry>(v6, v16, &v17);
    }
    else
    {
      *v16 = v17;
      a1[39] += 16LL;
    }
    CPtrArrayBase::Remove((CPtrArrayBase *)(a2 + 24), (unsigned __int64)a1);
  }
  else
  {
    for ( i = (_QWORD *)*v6; i != (_QWORD *)v6[1]; i += 2 )
    {
      if ( *i == a2 )
        goto LABEL_5;
    }
    Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(a2 + 24));
    v12 = CPtrArrayBase::InsertAt(v11, (unsigned __int64)a1, Count);
    v5 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x45Bu, 0LL);
      return v5;
    }
LABEL_5:
    v14 = (_OWORD *)a1[36];
    *(_QWORD *)&v17 = a2;
    BYTE8(v17) = a4;
    if ( v14 == (_OWORD *)a1[37] )
    {
      std::vector<CVisual::LightEntry>::_Emplace_reallocate<CVisual::LightEntry>(a1 + 35, v14, &v17);
    }
    else
    {
      *v14 = v17;
      a1[36] += 16LL;
    }
  }
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 5LL);
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 72LL))(a1, *(_BYTE *)(a2 + 169) != 0 ? 1 : 11, a2);
  return v5;
}
