__int64 __fastcall CGenericInk::GetBounds(__int64 a1, __int64 a2, float *a3)
{
  unsigned int v3; // edi
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  struct CD2DGenericInk *v11; // [rsp+30h] [rbp-28h] BYREF
  __int128 v12; // [rsp+38h] [rbp-20h] BYREF

  v3 = 0;
  if ( !*(_DWORD *)(a1 - 168) )
  {
    *(_OWORD *)a3 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    goto LABEL_9;
  }
  v11 = 0LL;
  v12 = 0LL;
  v6 = CDeviceResourceTable<CD2DGenericInk,CGenericInk>::FindOrCreateResourceNoRef((_QWORD *)(a1 - 280), 0LL, &v11);
  v3 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x114u, 0LL);
    return v3;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)v11 + 10) + 32LL))(*((_QWORD *)v11 + 10), &v12);
  v3 = v8;
  if ( v8 >= 0 )
  {
    *(_OWORD *)a3 = v12;
LABEL_9:
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, (float *)(a1 - 360));
    return v3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x115u, 0LL);
  return v3;
}
