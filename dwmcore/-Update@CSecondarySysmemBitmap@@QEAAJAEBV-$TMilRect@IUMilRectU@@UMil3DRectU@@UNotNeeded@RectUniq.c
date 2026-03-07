__int64 __fastcall CSecondarySysmemBitmap::Update(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v6; // ebx
  _DWORD *v7; // rdx
  __int64 v8; // rcx
  int v9; // r15d
  __int64 (__fastcall ***v10)(_QWORD, _BYTE *); // rcx
  unsigned int v11; // r12d
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-68h]
  _BYTE v16[8]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v17[16]; // [rsp+38h] [rbp-50h] BYREF

  v6 = 0;
  if ( !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain(a1 + 32, (__int64)a2)
    || TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v7) )
  {
    v6 = -2147024809;
    v15 = 170;
    goto LABEL_13;
  }
  v9 = *(_DWORD *)(a1 + 132);
  v10 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))((char *)a3 + *(int *)(a3[1] + 8LL) + 8);
  if ( *(_DWORD *)(**v10)(v10, v17) != v9 )
  {
    v6 = -2003292288;
    v15 = 175;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v6, v15, 0LL);
    return v6;
  }
  v11 = *(_DWORD *)(a1 + 128) * a2[1] + *a2 * (GetPixelFormatSize(v9) >> 3);
  if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a3 + 8LL))(a3, v16) != DisplayId::None
    || (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a3 + 16LL))(a3) )
  {
    memset_0((void *)(v11 + *(_QWORD *)(a1 + 144)), 0, *(unsigned int *)(a1 + 152) - (unsigned __int64)v11);
    *(_BYTE *)(a1 + 156) = 1;
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD *, _DWORD *, _QWORD, _QWORD, _QWORD))(*a3 + 24LL))(
            a3,
            a2,
            *(unsigned int *)(a1 + 128),
            *(_DWORD *)(a1 + 152) - v11,
            v11 + *(_QWORD *)(a1 + 144));
    v6 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC1u, 0LL);
      return v6;
    }
  }
  CSecondaryBitmap::AddValidRect(a1 + 32, a2);
  return v6;
}
