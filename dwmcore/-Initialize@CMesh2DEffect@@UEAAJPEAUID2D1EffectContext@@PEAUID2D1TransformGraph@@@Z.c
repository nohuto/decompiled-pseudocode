/*
 * XREFs of ?Initialize@CMesh2DEffect@@UEAAJPEAUID2D1EffectContext@@PEAUID2D1TransformGraph@@@Z @ 0x1802BB7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMesh2DEffect::Initialize(
        CMesh2DEffect *this,
        struct ID2D1EffectContext *a2,
        struct ID2D1TransformGraph *a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v28; // [rsp+50h] [rbp+8h] BYREF
  __int64 v29; // [rsp+58h] [rbp+10h]

  *((_QWORD *)this + 17) = a2;
  v28 = 0LL;
  (*(void (__fastcall **)(struct ID2D1EffectContext *))(*(_QWORD *)a2 + 8LL))(a2);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 17) + 64LL))(
         *((_QWORD *)this + 17),
         0LL,
         0LL,
         &v28);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x8Bu, 0LL);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(struct ID2D1TransformGraph *, unsigned __int64))(*(_QWORD *)a3 + 40LL))(
           a3,
           ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x8Du, 0LL);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(struct ID2D1TransformGraph *, __int64))(*(_QWORD *)a3 + 40LL))(a3, v28);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x8Eu, 0LL);
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(struct ID2D1TransformGraph *, __int64, char *, _QWORD))(*(_QWORD *)a3 + 64LL))(
                a3,
                v28,
                (char *)this + 8,
                0LL);
        v7 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x8Fu, 0LL);
        }
        else
        {
          v14 = (*(__int64 (__fastcall **)(struct ID2D1TransformGraph *, char *))(*(_QWORD *)a3 + 56LL))(
                  a3,
                  (char *)this + 8);
          v7 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x90u, 0LL);
          }
          else
          {
            v16 = (*(__int64 (__fastcall **)(struct ID2D1TransformGraph *, _QWORD, __int64, _QWORD))(*(_QWORD *)a3 + 72LL))(
                    a3,
                    0LL,
                    v28,
                    0LL);
            v7 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x91u, 0LL);
            }
            else
            {
              v18 = (*(__int64 (__fastcall **)(_QWORD, GUID *, void *, __int64))(**((_QWORD **)this + 17) + 88LL))(
                      *((_QWORD *)this + 17),
                      &GUID_Mesh2D_PS,
                      &unk_1803C0B20,
                      876LL);
              v7 = v18;
              if ( v18 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x98u, 0LL);
              }
              else
              {
                v20 = (*(__int64 (__fastcall **)(_QWORD, GUID *, void *, __int64))(**((_QWORD **)this + 17) + 96LL))(
                        *((_QWORD *)this + 17),
                        &GUID_Mesh2D_VS,
                        &unk_1803C0200,
                        2304LL);
                v7 = v20;
                if ( v20 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x9Eu, 0LL);
                }
                else
                {
                  v22 = (*(__int64 (__fastcall **)(_QWORD, GUID *, _QWORD))(**((_QWORD **)this + 16) + 80LL))(
                          *((_QWORD *)this + 16),
                          &GUID_Mesh2D_PS,
                          0LL);
                  v7 = v22;
                  if ( v22 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xA1u, 0LL);
                  }
                  else
                  {
                    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 16) + 48LL))(
                      *((_QWORD *)this + 16),
                      3LL);
                    v24 = *((_QWORD *)this + 16);
                    v29 = 21LL;
                    v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v24 + 24LL))(v24, 0LL, 21LL);
                    v7 = v25;
                    if ( v25 < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xAFu, 0LL);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  return v7;
}
