__int64 __fastcall COcclusionContext::DrawImage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  _QWORD v11[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+40h] [rbp-38h]
  char v13; // [rsp+50h] [rbp-28h]

  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 56LL))(a2, 18LL) )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v11[0] = *(_QWORD *)(a1 + 1192);
    v12 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v11[1] = a2;
    v13 = 0;
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 208LL))(v6, v11);
  }
  v7 = COcclusionContext::DrawImage(a1, a2, a3, 0LL);
  v9 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x3B4u, 0LL);
  return v9;
}
