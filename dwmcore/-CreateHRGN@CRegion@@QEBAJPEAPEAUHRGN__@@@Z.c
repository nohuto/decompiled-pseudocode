__int64 __fastcall CRegion::CreateHRGN(int **this, HRGN *a2)
{
  unsigned int RectangleCount; // ebp
  HRGN Region; // rbp
  signed int v6; // edi
  signed int v8; // eax
  __int64 v9; // rcx
  RGNDATA *v10; // rbx
  DWORD v11; // r12d
  RGNDATA *p_Data; // rdi
  RGNDATA *v13; // rax
  __int64 v14; // rcx
  _DWORD *v15; // r10
  _DWORD *v16; // rcx
  int v17; // eax
  FastRegion::Internal::CRgnData *v18; // rcx
  __int64 v19; // rdx
  signed int LastError; // eax
  __int64 v21; // rcx
  char v22[8]; // [rsp+30h] [rbp-198h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-190h]
  _DWORD *v24; // [rsp+40h] [rbp-188h]
  FastRegion::Internal::CRgnData *v25; // [rsp+48h] [rbp-180h]
  int v26; // [rsp+50h] [rbp-178h]
  RECT rect; // [rsp+60h] [rbp-168h] BYREF
  RGNDATA Data; // [rsp+70h] [rbp-158h] BYREF

  RectangleCount = FastRegion::CRegion::GetRectangleCount(this);
  if ( RectangleCount > 1 )
  {
    v10 = 0LL;
    v11 = 16 * RectangleCount + 32;
    if ( RectangleCount > 0x10 )
    {
      v13 = (RGNDATA *)DefaultHeap::Alloc(v11);
      v10 = v13;
      if ( !v13 )
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x5Fu, 0LL);
        return (unsigned int)v6;
      }
      p_Data = v13;
    }
    else
    {
      p_Data = &Data;
    }
    *(_QWORD *)&p_Data->rdh.rcBound.left = 0LL;
    *(_QWORD *)&p_Data->rdh.rcBound.right = 0LL;
    p_Data->rdh.dwSize = 32;
    p_Data->rdh.iType = 1;
    p_Data->rdh.nCount = RectangleCount;
    p_Data->rdh.nRgnSize = 16 * RectangleCount;
    FastRegion::Internal::CRgnData::BeginIterator(
      (FastRegion::Internal::CRgnData *)*this,
      (struct FastRegion::CRegion::Iterator *)v22);
    while ( 1 )
    {
      v16 = v24;
      if ( (unsigned __int64)v24 >= v23 )
        break;
      v15[1] = *v24;
      v17 = v16[2];
      v18 = v25;
      v15[3] = v17;
      v19 = 2 * v26;
      *v15 = *((_DWORD *)v18 + v19);
      v15[2] = *((_DWORD *)v18 + v19 + 1);
      FastRegion::Internal::CRgnData::StepIterator(v18, (struct FastRegion::CRegion::Iterator *)v22);
    }
    SetLastError(0);
    Region = ExtCreateRegion(0LL, v11, p_Data);
    if ( Region )
    {
      if ( v10 )
        operator delete(v10);
      goto LABEL_3;
    }
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    if ( v6 >= 0 )
      v6 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v6, 0x7Bu, 0LL);
    if ( v10 )
      operator delete(v10);
  }
  else
  {
    FastRegion::CRegion::GetBoundingRect(this, &rect);
    SetLastError(0);
    Region = CreateRectRgnIndirect(&rect);
    if ( Region )
    {
LABEL_3:
      v6 = 0;
      *a2 = Region;
      return (unsigned int)v6;
    }
    v8 = GetLastError();
    v6 = v8;
    if ( v8 > 0 )
      v6 = (unsigned __int16)v8 | 0x80070000;
    if ( v6 >= 0 )
      v6 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v6, 0x4Au, 0LL);
  }
  return (unsigned int)v6;
}
