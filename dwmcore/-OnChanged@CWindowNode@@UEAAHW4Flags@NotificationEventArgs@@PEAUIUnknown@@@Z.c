__int64 __fastcall CWindowNode::OnChanged(__int64 a1, int a2, int (__fastcall ***a3)(_QWORD, GUID *, __int64 *))
{
  unsigned int v5; // edi
  __int64 *v6; // r14
  unsigned __int64 *v7; // rax
  __int64 v8; // r8
  unsigned __int64 *v9; // r14
  int v10; // eax
  FastRegion::Internal::CRgnData **v11; // rax
  int v12; // r8d
  int v13; // r10d
  __int64 v14; // r9
  __int64 i; // rax
  FastRegion::Internal::CRgnData *v16; // rcx
  int (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-29h] BYREF
  __int64 v19; // [rsp+28h] [rbp-21h] BYREF
  float v20[2]; // [rsp+30h] [rbp-19h] BYREF
  char v21[8]; // [rsp+38h] [rbp-11h] BYREF
  unsigned __int64 v22; // [rsp+40h] [rbp-9h]
  _DWORD *v23; // [rsp+48h] [rbp-1h]
  __int64 v24; // [rsp+50h] [rbp+7h]
  int v25; // [rsp+58h] [rbp+Fh]
  _DWORD v26[4]; // [rsp+68h] [rbp+1Fh]
  float v27[4]; // [rsp+78h] [rbp+2Fh] BYREF

  v5 = 4;
  if ( a2 == 5 )
  {
    CVisual::ClearContentTreeDataCaches((CVisual *)a1);
  }
  else
  {
    v18 = 0LL;
    if ( a2 == 1 && (*(_BYTE *)(a1 + 96) & 4) == 0 )
    {
      if ( a3 )
      {
        if ( *(_BYTE *)(a1 + 896) )
        {
          v6 = (__int64 *)(a1 + 784);
          if ( !*(_BYTE *)(a1 + 892)
            || (v7 = CPtrArrayBase::operator[]((__int64 *)(a1 + 784), 0LL),
                (unsigned int)CCompositionSurfaceBitmap::GetSizePreference((CCompositionSurfaceBitmap *)v7) != 1) )
          {
            v9 = CPtrArrayBase::operator[](v6, 0LL);
            if ( v8 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
            if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(
                        (__int64)v9,
                        &GUID_00000000_0000_0000_c000_000000000046,
                        &v18) >= 0
              && a3 == v18 )
            {
              v19 = 0LL;
              if ( (**a3)(a3, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec27, &v19) >= 0 )
              {
                v10 = *(_DWORD *)(a1 + 756) - *(_DWORD *)(a1 + 748);
                v20[0] = (float)(*(_DWORD *)(a1 + 752) - *(_DWORD *)(a1 + 744));
                v20[1] = (float)v10;
                v11 = (FastRegion::Internal::CRgnData **)(*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v19 + 24LL))(
                                                           v19,
                                                           v20);
                if ( v11 )
                {
                  FastRegion::Internal::CRgnData::BeginIterator(*v11, (struct FastRegion::CRegion::Iterator *)v21);
                  while ( (unsigned __int64)v23 < v22 )
                  {
                    v12 = *(_DWORD *)(a1 + 744);
                    v13 = *(_DWORD *)(a1 + 748);
                    v14 = 2 * v25;
                    v26[0] = v12 + *(_DWORD *)(v24 + 4 * v14);
                    v26[1] = v13 + *v23;
                    v26[2] = v12 + *(_DWORD *)(v24 + 4 * v14 + 4);
                    v26[3] = v13 + v23[2];
                    for ( i = 0LL; i < 4; ++i )
                      v27[i] = (float)(int)v26[i];
                    CVisual::AddAdditionalDirtyRect((CVisual *)a1, v27);
                    FastRegion::Internal::CRgnData::StepIterator(v16, (struct FastRegion::CRegion::Iterator *)v21);
                  }
                  v5 = 0;
                }
              }
              wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v19);
            }
          }
        }
      }
    }
    if ( !CWindowNode::ProcessReadyFlipExSurfaces((CWindowNode *)a1) && v5 )
      CVisual::PropagateFlags(a1, v5);
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v18);
  }
  return 0LL;
}
