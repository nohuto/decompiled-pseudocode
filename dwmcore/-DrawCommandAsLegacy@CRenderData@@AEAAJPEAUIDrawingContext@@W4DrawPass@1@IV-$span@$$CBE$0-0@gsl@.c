__int64 __fastcall CRenderData::DrawCommandAsLegacy(__int64 a1, __int64 *a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v5; // ebx
  int v8; // r9d
  int v9; // r9d
  int v10; // eax
  unsigned int v11; // ecx
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // r9d
  __int64 v24; // r8
  __int64 v25; // rax
  int v26; // eax
  unsigned int v27; // ecx
  int v28; // r9d
  __int64 v29; // r9
  __int64 (__fastcall *v30)(__int64 *, _QWORD, __int128 *, __int64, int); // r11
  int v31; // xmm2_4
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  unsigned int v35; // ecx
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  unsigned int v39; // ecx
  __int128 v40; // [rsp+30h] [rbp-20h] BYREF

  v5 = 0;
  v8 = a4 - 443;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v13 = v9 - 2;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            v23 = v15 - 1;
            if ( v23 )
            {
              v28 = v23 - 1;
              if ( v28 )
              {
                if ( v28 == 1 )
                  (*(void (__fastcall **)(__int64 *, _QWORD))(*a2 + 88))(
                    a2,
                    *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)));
                else
                  return (unsigned int)-2003303421;
              }
              else
              {
                v29 = *(_QWORD *)(a5 + 8);
                v30 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *, __int64, int))(*a2 + 40);
                v31 = *(_DWORD *)(v29 + 24);
                v32 = *(unsigned int *)(v29 + 4);
                v33 = *(_QWORD *)(a1 + 136);
                v40 = *(_OWORD *)(v29 + 8);
                v34 = v30(a2, *(_QWORD *)(v33 + 8 * v32), &v40, v29 + 28, v31);
                v5 = v34;
                if ( v34 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x343u, 0LL);
              }
            }
            else
            {
              v24 = *(_QWORD *)(a5 + 8);
              v25 = *a2;
              v40 = *(_OWORD *)(v24 + 4);
              v26 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64))(v25 + 16))(a2, &v40, v24 + 20);
              v5 = v26;
              if ( v26 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x339u, 0LL);
            }
          }
          else
          {
            v16 = *(_QWORD *)(a5 + 8);
            v17 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(v16 + 4));
            v18 = *a2;
            v40 = *(_OWORD *)(v16 + 8);
            v19 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64))(v18 + 8))(a2, &v40, v17);
            v5 = v19;
            if ( v19 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x330u, 0LL);
          }
        }
        else
        {
          v38 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a2 + 80))(
                  a2,
                  *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)),
                  *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 8LL)));
          v5 = v38;
          if ( v38 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x36Bu, 0LL);
        }
      }
      else
      {
        v36 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(*a2 + 24))(
                a2,
                *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)),
                *(_QWORD *)(a5 + 8) + 8LL);
        v5 = v36;
        if ( v36 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x34Du, 0LL);
      }
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a2 + 32))(
              a2,
              *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)),
              *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 8LL)));
      v5 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x361u, 0LL);
    }
  }
  else
  {
    v21 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a2 + 48))(
            a2,
            *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)));
    v5 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x356u, 0LL);
  }
  return v5;
}
