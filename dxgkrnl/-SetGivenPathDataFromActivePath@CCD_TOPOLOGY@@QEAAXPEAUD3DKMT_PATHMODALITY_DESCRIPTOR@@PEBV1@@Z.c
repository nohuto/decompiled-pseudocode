/*
 * XREFs of ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C03B74A0
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C01C4274 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C03B6954 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall CCD_TOPOLOGY::SetGivenPathDataFromActivePath(
        CCD_TOPOLOGY *this,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        const struct CCD_TOPOLOGY *a3)
{
  __int64 v5; // rdi
  unsigned int v6; // ecx
  __int64 v7; // rsi
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r10
  unsigned int v13; // ecx
  unsigned int v14; // edx
  bool v15; // cf
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 v20; // [rsp+70h] [rbp+8h]

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  v5 = *((_QWORD *)a3 + 8);
  v6 = 0;
  if ( *(_WORD *)(v5 + 20) )
  {
    while ( 1 )
    {
      v7 = 296LL * v6;
      if ( *((_DWORD *)a2 + 4) == *(_DWORD *)(v7 + v5 + 72)
        && *((_DWORD *)a2 + 5) == *(_DWORD *)(v7 + v5 + 76)
        && *((_DWORD *)a2 + 6) == *(_DWORD *)(v7 + v5 + 80)
        && *((_DWORD *)a2 + 7) == *(_DWORD *)(v7 + v5 + 84) )
      {
        break;
      }
      if ( ++v6 >= *(unsigned __int16 *)(v5 + 20) )
        return;
    }
    v8 = *(_QWORD *)a2;
    if ( (*(_QWORD *)a2 & 2) == 0
      || *((_DWORD *)a2 + 13) == *(_DWORD *)(v7 + v5 + 108) && *((_DWORD *)a2 + 14) == *(_DWORD *)(v7 + v5 + 112) )
    {
      v9 = *(_QWORD *)(v7 + v5 + 56);
      if ( (v9 & 4) == 0 || *(_DWORD *)(v7 + v5 + 136) == 1 )
      {
        if ( (v8 & 0x1000000) != 0 )
        {
          if ( (v9 & 0x800000000LL) != 0 )
          {
            v10 = *(_QWORD *)(v7 + v5 + 108);
            if ( ((*(_DWORD *)(v7 + v5 + 136) >> 3) & 0x3F) != 0 )
            {
              LODWORD(v20) = *(_QWORD *)(v7 + v5 + 108);
              HIDWORD(v20) = ((*(_DWORD *)(v7 + v5 + 136) >> 3) & 0x3F) * HIDWORD(v10);
              v10 = v20;
            }
            v11 = *((unsigned int *)a2 + 56);
            v12 = *((unsigned int *)a2 + 57);
            if ( v12 * (unsigned __int64)*(unsigned int *)(v7 + v5 + 288) > v11
                                                                          * (unsigned __int64)*(unsigned int *)(v7 + v5 + 292)
              || v12 * (unsigned __int64)(unsigned int)v10 < v11
                                                           * (unsigned __int64)(unsigned int)(*((_DWORD *)a2 + 60)
                                                                                            * HIDWORD(v10)) )
            {
              return;
            }
          }
          else if ( *((_DWORD *)a2 + 56) != *(_DWORD *)(v7 + v5 + 280)
                 || *((_DWORD *)a2 + 57) != *(_DWORD *)(v7 + v5 + 284)
                 || *((_DWORD *)a2 + 60) != *(_DWORD *)(v7 + v5 + 296) )
          {
            return;
          }
        }
        v13 = *(_DWORD *)(v7 + v5 + 152);
        if ( v13 <= *(_DWORD *)(v7 + v5 + 100) )
        {
          v14 = *(_DWORD *)(v7 + v5 + 156);
          if ( v14 <= *(_DWORD *)(v7 + v5 + 104) && *(_DWORD *)(v7 + v5 + 188) == 1 )
          {
            if ( ((*((_DWORD *)a2 + 33) - 2) & 0xFFFFFFFD) != 0 )
            {
              if ( v13 < *((_DWORD *)a2 + 38) )
                return;
              v15 = v14 < *((_DWORD *)a2 + 39);
            }
            else
            {
              if ( v13 < *((_DWORD *)a2 + 39) )
                return;
              v15 = v14 < *((_DWORD *)a2 + 38);
            }
            if ( !v15 )
            {
              if ( (v8 & 0x100) != 0 )
              {
                WdLogSingleEntry1(1LL, 1153LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"(GivenPathDescriptor->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_SMI_VALID) == 0",
                  1153LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( (*(_BYTE *)a2 & 1) != 0 )
              {
                WdLogSingleEntry1(1LL, 1154LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"(GivenPathDescriptor->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_TMI_ACTIVE_SIZE_VALID) == 0",
                  1154LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( (*((_DWORD *)a2 + 2) & 0x100LL) != 0 )
              {
                WdLogSingleEntry1(1LL, 1155LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"(GivenPathDescriptor->FixedFlags & D3DKMT_PATHMODALITY_DESCRIPTOR_SMI_FIXED) == 0",
                  1155LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v16 = *((_QWORD *)a2 + 1);
              if ( (v16 & 1) != 0 )
              {
                WdLogSingleEntry1(1LL, 1156LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"(GivenPathDescriptor->FixedFlags & D3DKMT_PATHMODALITY_DESCRIPTOR_TMI_ACTIVE_SIZE_FIXED) == 0",
                  1156LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v16 = *((_QWORD *)a2 + 1);
              }
              v17 = *(_QWORD *)a2;
              *((_OWORD *)a2 + 6) = *(_OWORD *)(v7 + v5 + 152);
              *((_OWORD *)a2 + 7) = *(_OWORD *)(v7 + v5 + 168);
              *((_DWORD *)a2 + 11) = *(_DWORD *)(v7 + v5 + 100);
              *((_DWORD *)a2 + 12) = *(_DWORD *)(v7 + v5 + 104);
              if ( (v17 & 2) == 0 )
              {
                *(_QWORD *)((char *)a2 + 52) = *(_QWORD *)(v7 + v5 + 108);
                *((_DWORD *)a2 + 20) ^= (*((_DWORD *)a2 + 20) ^ *(_DWORD *)(v7 + v5 + 136)) & 0x1F8;
                v17 |= 2uLL;
              }
              v18 = v17 | 0x10000000000101LL;
              *((_QWORD *)a2 + 1) = v16 | 0x101;
              *(_QWORD *)a2 = v18;
              v19 = *(_DWORD *)(v7 + v5 + 56) & 0x400 | (unsigned __int64)v18;
              *(_QWORD *)a2 = v19;
              if ( (v19 & 0x1000000) == 0 )
              {
                *((_QWORD *)a2 + 28) = *(_QWORD *)(v7 + v5 + 280);
                *((_DWORD *)a2 + 60) = *(_DWORD *)(v7 + v5 + 296);
                *(_QWORD *)a2 = v19 | 0x1000000;
              }
            }
          }
        }
      }
    }
  }
}
