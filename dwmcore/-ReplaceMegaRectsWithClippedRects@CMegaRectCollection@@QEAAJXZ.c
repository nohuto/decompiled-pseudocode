__int64 __fastcall CMegaRectCollection::ReplaceMegaRectsWithClippedRects(CMegaRectCollection *this)
{
  unsigned int v1; // ebx
  bool v2; // cf
  int v5; // eax
  unsigned int v6; // ecx
  __int64 v7; // rdi
  __int64 v8; // r14
  CMegaRect *v9; // rcx
  int updated; // eax
  unsigned int v11; // ecx
  CMegaRectCollection *v12[2]; // [rsp+38h] [rbp-9h] BYREF
  __int128 v13; // [rsp+48h] [rbp+7h]
  __int128 v14; // [rsp+58h] [rbp+17h]
  __int128 v15; // [rsp+68h] [rbp+27h]
  __int128 v16; // [rsp+78h] [rbp+37h]
  __int128 v17; // [rsp+88h] [rbp+47h]

  v1 = 0;
  *(_OWORD *)v12 = 0LL;
  v2 = *((_QWORD *)this + 4) < 2uLL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( !v2 )
  {
    v5 = CMegaRectCollection::PrepMegaRectData(this);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1C4u, 0LL);
    }
    else
    {
      CMegaRectCollection::OccludeRegions(this);
      v7 = *((_QWORD *)this + 3);
      v8 = v7 + *((_QWORD *)this + 4);
      while ( v7 != v8 )
      {
        v9 = *(CMegaRect **)(*((_QWORD *)this + 1) + 8 * (v7 & (*((_QWORD *)this + 2) - 1LL)));
        if ( *((_QWORD *)v9 + 1) )
        {
          updated = CMegaRect::UpdatePrimitive(v9, (struct CMegaRect::UpdatePrimitiveWorkingBuffers *)v12);
          v1 = updated;
          if ( updated < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, updated, 0x1CFu, 0LL);
            break;
          }
        }
        ++v7;
      }
    }
  }
  if ( *((_QWORD *)&v16 + 1) )
  {
    std::_Deallocate<16,0>(*((_QWORD *)&v16 + 1), 2 * ((__int64)(*((_QWORD *)&v17 + 1) - *((_QWORD *)&v16 + 1)) >> 1));
    *((_QWORD *)&v16 + 1) = 0LL;
    v17 = 0LL;
  }
  if ( (_QWORD)v15 )
  {
    std::_Deallocate<16,0>(v15, v16 - v15);
    *(_QWORD *)&v16 = 0LL;
    v15 = 0LL;
  }
  if ( *((_QWORD *)&v13 + 1) )
  {
    std::_Deallocate<16,0>(*((_QWORD *)&v13 + 1), *((_QWORD *)&v14 + 1) - *((_QWORD *)&v13 + 1));
    *((_QWORD *)&v13 + 1) = 0LL;
    v14 = 0LL;
  }
  if ( v12[0] )
    std::_Deallocate<16,0>(v12[0], (v13 - (unsigned __int64)v12[0]) & 0xFFFFFFFFFFFFFFF0uLL);
  return v1;
}
