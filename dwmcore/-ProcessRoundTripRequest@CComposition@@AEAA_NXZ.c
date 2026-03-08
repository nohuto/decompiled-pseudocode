/*
 * XREFs of ?ProcessRoundTripRequest@CComposition@@AEAA_NXZ @ 0x1800536A4
 * Callers:
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x180052E70 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800EB548 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x1801B229C (McTemplateU0qqx_EventWriteTransfer.c)
 */

char __fastcall CComposition::ProcessRoundTripRequest(CComposition *this, unsigned int a2)
{
  char v2; // r14
  unsigned int i; // esi
  __int64 v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rax
  int v11; // eax
  __int64 v12; // r9
  unsigned int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE v18[20]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+44h] [rbp-14h]

  v2 = 0;
  for ( i = 0; i < *((_DWORD *)this + 150); ++i )
  {
    v6 = *((_QWORD *)this + 72);
    v7 = 2LL * i;
    LODWORD(v8) = *(_DWORD *)(v6 + 16LL * i + 4);
    if ( (_DWORD)v8 )
    {
      LODWORD(v8) = v8 - 1;
      if ( (_DWORD)v8 )
      {
        if ( (_DWORD)v8 == 1 )
        {
          v9 = *((_QWORD *)this + 61);
          if ( !v9
            || (v10 = *(_QWORD **)(v9 + 8), v8 = *(_QWORD *)(v6 + 16LL * i + 8), v10[11] >= v8)
            || v10[7] > v8 && *(_QWORD *)((char *)v10 + 76) < v8 )
          {
            *(_DWORD *)v18 = 8;
            v19 = 0LL;
            v11 = *(_DWORD *)(v6 + 16LL * i);
            *(_OWORD *)&v18[4] = 0LL;
            *(_DWORD *)&v18[8] = v11;
            CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)v18);
            *(_DWORD *)(v6 + 16LL * i + 4) = 0;
            *(_QWORD *)(v6 + 16LL * i + 8) = 0LL;
            LODWORD(v8) = *((_DWORD *)this + 150);
            *(_OWORD *)v18 = *(_OWORD *)(v6 + 16LL * i);
            if ( i >= (unsigned int)v8 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x19Cu, 0LL);
            }
            else
            {
              v12 = *((_QWORD *)this + 72);
              v13 = i;
              if ( i < (int)v8 - 1 )
              {
                do
                {
                  a2 = v13 + 1;
                  v17 = 2LL * v13;
                  v8 = 2LL * (v13 + 1);
                  v13 = a2;
                  *(_OWORD *)(v12 + 8 * v17) = *(_OWORD *)(v12 + 8 * v8);
                  LODWORD(v8) = *((_DWORD *)this + 150);
                }
                while ( a2 < (int)v8 - 1 );
              }
              *((_DWORD *)this + 150) = v8 - 1;
            }
            if ( i )
              --i;
            goto LABEL_20;
          }
        }
      }
      else
      {
        *(_DWORD *)(v6 + 16LL * i + 4) = 2;
        v14 = *((_QWORD *)this + 61);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 8);
          if ( *((_DWORD *)this + 118) == 1 )
            v16 = *(_QWORD *)(v15 + 88);
          else
            v16 = *(_QWORD *)(v15 + 76);
          *(_QWORD *)(v6 + 16LL * i + 8) = v16 + 1;
        }
      }
    }
    *(_OWORD *)v18 = *(_OWORD *)(v6 + 16LL * i);
LABEL_20:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0qqx_EventWriteTransfer(v8, a2, *(_DWORD *)&v18[4], *(_DWORD *)v18, v18[8]);
    v2 |= *(_DWORD *)(v6 + 8 * v7 + 4) == 2;
  }
  return v2;
}
