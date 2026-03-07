__int64 __fastcall CInteractionProcessor::ProcessHandledInteractions(
        __int64 a1,
        struct IManipulationResource *a2,
        __int64 a3,
        bool a4,
        int a5,
        struct ManipulationThreadTelemetryData *a6,
        struct IDCompositionInteractionStats *a7,
        _DWORD *a8)
{
  int v8; // r12d
  bool v12; // r15
  char v13; // cl
  __int64 v14; // rbx
  bool v15; // r9
  struct IDCompositionInteractionStats *v16; // r15
  bool v17; // r9
  bool v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h]
  _DWORD v24[4]; // [rsp+58h] [rbp-A8h] BYREF
  int v25; // [rsp+68h] [rbp-98h]
  __int128 v26; // [rsp+70h] [rbp-90h] BYREF
  __int128 v27; // [rsp+80h] [rbp-80h]
  __int128 v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+A0h] [rbp-60h]
  int v30; // [rsp+A8h] [rbp-58h]
  _BYTE v31[64]; // [rsp+B0h] [rbp-50h] BYREF

  v8 = 0;
  v23 = a3;
  if ( a8 )
    *a8 = 1;
  v12 = (*(_BYTE *)(a1 + 808) & 0x20) != 0 && *(_DWORD *)(a1 + 784) != 1
     || (*(unsigned __int8 (__fastcall **)(struct IManipulationResource *))(*(_QWORD *)a2 + 48LL))(a2);
  if ( !(*(unsigned int (__fastcall **)(struct IManipulationResource *))(*(_QWORD *)a2 + 40LL))(a2)
    || (*(unsigned int (__fastcall **)(struct IManipulationResource *))(*(_QWORD *)a2 + 40LL))(a2) == 2
    && *(_DWORD *)(a1 + 788) == 3
    || v12
    || *(_DWORD *)(a1 + 788) == 6 )
  {
    if ( a8 )
      *a8 = 2;
    v13 = *(_BYTE *)(a1 + 808);
    if ( (v13 & 0x10) == 0 )
    {
      *(_BYTE *)(a1 + 808) = (16 * a4) | v13 & 0xEF;
      if ( !a5 )
      {
        v22 = 0LL;
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v22);
        CInteractionProcessor::GetInteractionContext((CInteractionProcessor *)a1, *(_DWORD *)(a1 + 788), &v22);
        v14 = v22;
        if ( v22 )
        {
          v29 = 0LL;
          v30 = 0;
          v26 = 0LL;
          v27 = 0LL;
          v28 = 0LL;
          if ( a4 )
          {
            if ( (*(_BYTE *)(a1 + 808) & 0x20) != 0
              && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v22 + 112LL))(v22) )
            {
              if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 120LL))(v14, 0LL) )
              {
                v16 = a7;
                if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, __int64, __int128 *))(*(_QWORD *)v14 + 144LL))(
                       v14,
                       *(_QWORD *)(a1 + 832),
                       v23,
                       a1 + 1180,
                       &v26) )
                {
                  CInteractionProcessor::ProcessOutput(
                    (CInteractionProcessor *)a1,
                    a2,
                    a4,
                    v15,
                    a6,
                    a7,
                    (struct InteractionOutput *)&v26);
                }
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 152LL))(v14);
              }
              else
              {
                v16 = a7;
              }
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 104LL))(v14, 0LL);
            }
            else
            {
              v16 = a7;
            }
            v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v14 + 80LL))(v14, a1 + 1180, &v26);
            if ( v8 < 0 )
              goto LABEL_34;
            v18 = a4;
          }
          else
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 120LL))(v22, 0LL) )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 152LL))(v14);
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 104LL))(v14, 0LL);
            }
            v19 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 40LL))(v14, v31);
            v16 = a7;
            v18 = 0;
            v26 = *(_OWORD *)v19;
            v27 = *(_OWORD *)(v19 + 16);
            v28 = *(_OWORD *)(v19 + 32);
            v29 = *(_QWORD *)(v19 + 48);
            v30 = *(_DWORD *)(v19 + 56);
          }
          CInteractionProcessor::ProcessOutput(
            (CInteractionProcessor *)a1,
            a2,
            v18,
            v17,
            a6,
            v16,
            (struct InteractionOutput *)&v26);
        }
LABEL_34:
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v22);
        return (unsigned int)v8;
      }
      v24[1] = *(_DWORD *)(a1 + 812);
      v24[2] = *(_DWORD *)(a1 + 816);
      v24[3] = *(_DWORD *)(a1 + 820);
      v24[0] = 3;
      v25 = (unsigned __int8)CInteractionProcessor::GetRailsEnabled(a1, 0) | 4;
      v25 = v25 & 0xFD | (unsigned __int8)(2 * CInteractionProcessor::GetRailsEnabled(a1, 1));
      (*(void (__fastcall **)(struct IManipulationResource *, _DWORD *))(*(_QWORD *)a2 + 32LL))(a2, v24);
      if ( a5 == 2 )
      {
        v20 = *(_QWORD *)a2;
        v24[0] = 0;
        (*(void (__fastcall **)(struct IManipulationResource *, _DWORD *))(v20 + 32))(a2, v24);
      }
      *(_DWORD *)(a1 + 1268) = a5;
    }
  }
  return (unsigned int)v8;
}
