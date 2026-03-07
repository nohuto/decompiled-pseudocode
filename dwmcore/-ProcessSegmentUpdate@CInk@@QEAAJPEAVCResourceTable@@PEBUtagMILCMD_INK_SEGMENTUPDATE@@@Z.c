__int64 __fastcall CInk::ProcessSegmentUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INK_SEGMENTUPDATE *a3)
{
  int v3; // xmm0_4
  int v5; // xmm1_4
  struct ID2D1Ink *v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // rcx
  unsigned int v10; // r15d
  __int64 v12; // rdx
  int v13; // xmm1_4
  __int64 v14; // r13
  __int64 v15; // r14
  int ID2D1InkAndInkStyle; // eax
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  bool v21; // cf
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int128 v28; // [rsp+30h] [rbp-30h]
  __int128 v29; // [rsp+40h] [rbp-20h]
  int v30; // [rsp+50h] [rbp-10h]
  struct ID2D1InkStyle *v31; // [rsp+A0h] [rbp+40h] BYREF
  struct ID2D1Ink *v32; // [rsp+A8h] [rbp+48h] BYREF

  v32 = a2;
  v3 = *((_DWORD *)a3 + 5);
  v5 = *((_DWORD *)a3 + 3);
  v6 = 0LL;
  v7 = *((unsigned int *)a3 + 2);
  v8 = 0;
  v9 = *((_QWORD *)this + 18);
  v10 = 0;
  v31 = 0LL;
  DWORD2(v28) = v3;
  v12 = 9 * v7;
  LODWORD(v28) = v5;
  DWORD1(v28) = *((_DWORD *)a3 + 4);
  HIDWORD(v28) = *((_DWORD *)a3 + 6);
  DWORD1(v29) = *((_DWORD *)a3 + 8);
  v30 = *((_DWORD *)a3 + 11);
  LODWORD(v29) = *((_DWORD *)a3 + 7);
  v13 = *((_DWORD *)a3 + 9);
  HIDWORD(v29) = *((_DWORD *)a3 + 10);
  v32 = 0LL;
  DWORD2(v29) = v13;
  *(_OWORD *)(v9 + 4 * v12) = v28;
  *(_OWORD *)(v9 + 4 * v12 + 16) = v29;
  *(_DWORD *)(v9 + 4 * v12 + 32) = v30;
  v14 = (__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3;
  if ( (_DWORD)v14 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(v15 + *((_QWORD *)this + 11)), &v32, &v31);
      v8 = ID2D1InkAndInkStyle;
      if ( ID2D1InkAndInkStyle < 0 )
        break;
      v6 = v32;
      v18 = (*(__int64 (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v32 + 80LL))(v32);
      v19 = *((unsigned int *)a3 + 2);
      v20 = 36 * v19;
      v21 = (unsigned int)v19 < v18;
      v22 = *(_QWORD *)v6;
      if ( v21 )
      {
        v23 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, __int64, __int64, __int64))(v22 + 64))(
                v6,
                v19,
                *((_QWORD *)this + 18) + v20,
                1LL);
        v8 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xCFu, 0LL);
          goto LABEL_12;
        }
      }
      else
      {
        v25 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, __int64, __int64))(v22 + 48))(
                v6,
                v20 + *((_QWORD *)this + 18),
                1LL);
        v8 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xD6u, 0LL);
          goto LABEL_12;
        }
      }
      ReleaseInterface<ID2D1Ink>((__int64 *)&v32);
      ReleaseInterface<ID2D1InkStyle>((__int64 *)&v31);
      ++v10;
      v15 += 8LL;
      if ( v10 >= (unsigned int)v14 )
      {
        v6 = v32;
        goto LABEL_11;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, ID2D1InkAndInkStyle, 0xCAu, 0LL);
    v6 = v32;
  }
  else
  {
LABEL_11:
    (*(void (__fastcall **)(CInk *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  }
LABEL_12:
  if ( v6 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v31 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v31 + 16LL))(v31);
  return v8;
}
