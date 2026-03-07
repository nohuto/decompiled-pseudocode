void __fastcall CLegacyRenderTarget::AddInvalidRects(
        CLegacyRenderTarget *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3)
{
  __int64 v6; // rbx
  char v7; // r14
  __int64 i; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v11; // r8
  _DWORD **v12; // rbx
  FastRegion::Internal::CRgnData *v13; // rcx
  char v14; // al
  char *v15; // rbx
  float v16; // xmm2_4
  CDirectFlipInfo *v17; // rcx
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  bool v23; // al
  char v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  FastRegion::Internal::CRgnData *v27; // rcx
  int v28; // [rsp+20h] [rbp-89h]
  _OWORD v29[4]; // [rsp+30h] [rbp-79h] BYREF
  int v30; // [rsp+70h] [rbp-39h]
  _BYTE v31[8]; // [rsp+80h] [rbp-29h] BYREF
  unsigned __int64 v32; // [rsp+88h] [rbp-21h]
  _DWORD *v33; // [rsp+90h] [rbp-19h]
  __int64 v34; // [rsp+98h] [rbp-11h]
  int v35; // [rsp+A0h] [rbp-9h]
  __int64 v36; // [rsp+B0h] [rbp+7h] BYREF
  int v37; // [rsp+B8h] [rbp+Fh]
  int v38; // [rsp+BCh] [rbp+13h]
  __int128 v39; // [rsp+C0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  if ( !*((_QWORD *)this + 14) )
    return;
  v6 = *(_QWORD *)((char *)this + 18388);
  v7 = 0;
  v36 = v6;
  EnterCriticalSection(&stru_1803E7020);
  for ( i = qword_1803E7048; i != (_QWORD)xmmword_1803E7050; i += 16LL )
  {
    if ( __PAIR64__(HIDWORD(v36), v6) == *(_QWORD *)(*(_QWORD *)i + 896LL) )
    {
      if ( i && !*(_BYTE *)(*(_QWORD *)i + 452LL) && !byte_1803E7060 && *(_DWORD *)(*(_QWORD *)i + 448LL) )
        v7 = 1;
      break;
    }
  }
  LeaveCriticalSection(&stru_1803E7020);
  v9 = *((_QWORD *)this + 14) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 12LL);
  if ( v7 != (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9) )
  {
    LOBYTE(v10) = v7;
    if ( (*(int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 14) + 256LL))(*((_QWORD *)this + 14), v10) < 0 )
      goto LABEL_12;
    *((_BYTE *)this + 69) = 1;
  }
  *((_BYTE *)this + 18408) = v7;
LABEL_12:
  if ( *((_BYTE *)this + 69) )
  {
    if ( *((_BYTE *)this + 18348) )
    {
      CDirtyRegion::SetFullDirty(a3);
      *((_BYTE *)this + 69) = 0;
    }
    else
    {
      CRenderTarget::AddInvalidRects(this, a2, a3);
    }
    v12 = (_DWORD **)((char *)this + 18512);
  }
  else
  {
    v12 = (_DWORD **)((char *)this + 18512);
    v13 = (FastRegion::Internal::CRgnData *)*((_QWORD *)this + 2314);
    if ( *(_DWORD *)v13 )
    {
      FastRegion::Internal::CRgnData::BeginIterator(v13, (struct FastRegion::CRegion::Iterator *)v31);
      while ( (unsigned __int64)v33 < v32 )
      {
        HIDWORD(v36) = *v33;
        v38 = v33[2];
        v26 = 2 * v35;
        LODWORD(v36) = *(_DWORD *)(v34 + 4 * v26);
        v37 = *(_DWORD *)(v34 + 4 * v26 + 4);
        CDirtyRegion::Add(a3, &v36);
        FastRegion::Internal::CRgnData::StepIterator(v27, (struct FastRegion::CRegion::Iterator *)v31);
      }
    }
  }
  **v12 = 0;
  if ( *((_BYTE *)this + 11153) || (v14 = 1, !*((_BYTE *)this + 18350)) )
    v14 = 0;
  *((_BYTE *)a3 + 4421) |= v14;
  v15 = (char *)this + 18144;
  v16 = 1.0
      / (float)((float)(*((float *)this + 4541) * *((float *)this + 4536))
              - (float)(*((float *)this + 4540) * *((float *)this + 4537)));
  if ( v16 > *((float *)a3 + 1104) )
    *((float *)a3 + 1104) = v16;
  v17 = (CDirectFlipInfo *)*((_QWORD *)this + 1412);
  if ( v17 )
    CDirectFlipInfo::AddOverdrawToDirtyRegion(v17, a3, (CLegacyRenderTarget *)((char *)this + 18144));
  v18 = *((_QWORD *)this - 7);
  if ( *(_DWORD *)(v18 + 1224) && (*(_BYTE *)(v18 + 1277) || !CDirtyRegion::IsEmpty(a3)) )
  {
    *((_BYTE *)a3 + 4425) = 1;
    *(_BYTE *)(*((_QWORD *)this - 7) + 1277LL) = 0;
  }
  if ( *(_DWORD *)(*((_QWORD *)this - 7) + 1232LL) )
    *((_BYTE *)a3 + 4426) = 1;
  LOBYTE(v11) = *((_BYTE *)this + 11153);
  if ( (_BYTE)v11 )
    v15 = (char *)this + 18280;
  v19 = *(_OWORD *)v15;
  v20 = *((_OWORD *)v15 + 1);
  v30 = *((_DWORD *)v15 + 16);
  v29[0] = v19;
  v21 = *((_OWORD *)v15 + 2);
  v29[1] = v20;
  v22 = *((_OWORD *)v15 + 3);
  v29[2] = v21;
  v29[3] = v22;
  v23 = Windows::Foundation::Numerics::invert(
          (Windows::Foundation::Numerics *)v29,
          (const struct Windows::Foundation::Numerics::float4x4 *)v29,
          v11);
  LOWORD(v30) = v30 & 0xC003;
  v30 = v23 ? v30 : 0;
  if ( v24 )
  {
    *((_QWORD *)&v39 + 1) = *(_QWORD *)((char *)this + 18132);
    *(_QWORD *)&v39 = 0LL;
  }
  else
  {
    v39 = *(_OWORD *)((char *)this + 18116);
  }
  v25 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, __int128 *, struct CDirtyRegion *))(**((_QWORD **)this + 14) + 320LL))(
          *((_QWORD *)this + 14),
          v29,
          &v39,
          a3);
  if ( v25 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x40D,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\legacyrendertarget.cpp",
      (const char *)(unsigned int)v25,
      v28);
}
