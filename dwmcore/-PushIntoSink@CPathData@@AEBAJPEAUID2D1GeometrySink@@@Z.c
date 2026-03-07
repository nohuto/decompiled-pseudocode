__int64 __fastcall CPathData::PushIntoSink(CPathData *this, struct ID2D1GeometrySink *a2)
{
  unsigned __int8 *v2; // rbx
  unsigned __int8 *v4; // rdi
  unsigned int v5; // r14d
  __int64 v6; // rax
  int v7; // xmm1_4
  __int64 v8; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  bool v12; // zf
  int v13; // xmm0_4
  unsigned __int8 *v14; // [rsp+30h] [rbp-40h] BYREF
  __int128 v15; // [rsp+38h] [rbp-38h] BYREF
  int v16; // [rsp+48h] [rbp-28h]
  BOOL v17; // [rsp+4Ch] [rbp-24h]
  BOOL v18; // [rsp+50h] [rbp-20h]
  __int128 v19; // [rsp+58h] [rbp-18h] BYREF

  v2 = (unsigned __int8 *)*((_QWORD *)this + 2);
  v4 = (unsigned __int8 *)*((_QWORD *)this + 3);
  v5 = 0;
  v14 = v2;
  while ( v2 != v4 )
  {
    if ( (v2[1] & 0x80u) != 0 )
    {
      v10 = v2[1];
      LODWORD(v10) = v10 & 0xFFFFFF7F;
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a2 + 32LL))(a2, v10);
    }
    if ( *v2 )
    {
      switch ( *v2 )
      {
        case 1u:
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, bool))(*(_QWORD *)a2 + 64LL))(a2, v2[2] != 0);
          break;
        case 2u:
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a2 + 80LL))(a2, *((_QWORD *)v2 + 1));
          break;
        case 3u:
          v12 = v2[2] == 0;
          v15 = *(_OWORD *)(v2 + 8);
          v13 = *((_DWORD *)v2 + 6);
          v17 = !v12;
          v12 = v2[3] == 0;
          v16 = v13;
          v18 = !v12;
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int128 *))(*(_QWORD *)a2 + 112LL))(a2, &v15);
          break;
        case 4u:
          v11 = *(_QWORD *)a2;
          v19 = *(_OWORD *)(v2 + 8);
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int128 *))(v11 + 96))(a2, &v19);
          break;
        case 5u:
          v6 = *(_QWORD *)a2;
          v7 = *((_DWORD *)v2 + 7);
          v15 = *(_OWORD *)(v2 + 8);
          v16 = *((_DWORD *)v2 + 6);
          v17 = v7;
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int128 *))(v6 + 88))(a2, &v15);
          break;
        default:
          v5 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)*v2 - 4, 0LL, 0, -2147024809, 0x1CCu, 0LL);
          return v5;
      }
    }
    else
    {
      if ( (v2[2] & 0x80u) != 0 )
      {
        v8 = v2[2];
        LODWORD(v8) = v8 & 0xFFFFFF7F;
        (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a2 + 24LL))(a2, v8);
      }
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD, bool))(*(_QWORD *)a2 + 40LL))(
        a2,
        *((_QWORD *)v2 + 1),
        v2[3] != 0);
    }
    Path::SegmentCollection::const_iterator::operator++(&v14);
    v2 = v14;
  }
  return v5;
}
