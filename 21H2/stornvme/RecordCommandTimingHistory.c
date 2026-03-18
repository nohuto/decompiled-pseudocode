/*
 * XREFs of RecordCommandTimingHistory @ 0x1C0025214
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0002000 (NVMeCompletionDpcRoutine.c)
 * Callees:
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     CalculateTimeDurationIn100ns @ 0x1C00179B4 (CalculateTimeDurationIn100ns.c)
 */

void __fastcall RecordCommandTimingHistory(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v5; // edx
  unsigned int v6; // r8d
  __int64 v7; // rbx
  __int64 SrbExtension; // rax
  __int64 v9; // r11
  _QWORD *v10; // r10
  _DWORD *v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  int v14; // eax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  int v17; // eax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  int v20; // eax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  int v23; // eax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  int v26; // eax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  int v29; // eax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  int v32; // eax
  __int64 v33; // r11

  v5 = *(_DWORD *)(a1 + 3876);
  if ( v5 )
  {
    if ( *(_QWORD *)(a1 + 3888) )
    {
      v6 = *(_DWORD *)(a1 + 3880);
      *(_DWORD *)(a1 + 3880) = v6 + 1 < v5 ? v6 + 1 : 0;
      v7 = 3LL * (v6 < v5 ? v6 : 0);
      SrbExtension = GetSrbExtension(a2);
      v10 = (_QWORD *)SrbExtension;
      if ( *(_QWORD *)(SrbExtension + 4160) )
      {
        v11 = (_DWORD *)(a2 + 60);
        if ( *(_BYTE *)(a2 + 2) != 40 )
          v11 = (_DWORD *)(a2 + 16);
        *(_DWORD *)(v9 + 8 * v7) = *v11;
        v12 = *(_QWORD *)(SrbExtension + 4168);
        v13 = *(_QWORD *)(SrbExtension + 4160);
        if ( v12 < v13 )
        {
          *(_DWORD *)(v9 + 8 * v7 + 4) = 195935983;
        }
        else
        {
          v14 = CalculateTimeDurationIn100ns(v12 - v13, a3);
          *(_DWORD *)(v9 + 8 * v7 + 4) = v14;
        }
        v15 = v10[522];
        if ( v15 )
        {
          v16 = v10[521];
          if ( v15 < v16 )
            v17 = v16 - v15 > 0x100 ? 0xBADBEEF : 0;
          else
            v17 = CalculateTimeDurationIn100ns(v15 - v16, a3);
          *(_DWORD *)(v9 + 8 * v7 + 8) = v17;
          v18 = v10[522];
          v19 = v10[520];
          if ( v18 < v19 )
            v20 = 195935983;
          else
            v20 = CalculateTimeDurationIn100ns(v18 - v19, a3);
          *(_DWORD *)(v9 + 8 * v7 + 12) = v20;
          v21 = v10[523];
          v22 = v10[522];
          if ( v21 < v22 )
          {
            v23 = v22 - v21 > 0x100 ? 0xBADBEEF : 0;
LABEL_26:
            *(_DWORD *)(v9 + 8 * v7 + 16) = v23;
            goto LABEL_28;
          }
        }
        else
        {
          v24 = v10[523];
          v25 = v10[521];
          if ( v24 < v25 )
            v26 = 195935983;
          else
            v26 = CalculateTimeDurationIn100ns(v24 - v25, a3);
          *(_DWORD *)(v9 + 8 * v7 + 8) = v26;
          v27 = v10[523];
          v28 = v10[520];
          if ( v27 < v28 )
            v29 = 195935983;
          else
            v29 = CalculateTimeDurationIn100ns(v27 - v28, a3);
          *(_DWORD *)(v9 + 8 * v7 + 12) = v29;
          v21 = v10[523];
          v22 = v10[521];
          if ( v21 < v22 )
          {
            *(_DWORD *)(v9 + 8 * v7 + 16) = 195935983;
LABEL_28:
            v30 = v10[524];
            v31 = v10[523];
            if ( v30 < v31 )
            {
              *(_DWORD *)(v9 + 8 * v7 + 20) = 195935983;
            }
            else
            {
              v32 = CalculateTimeDurationIn100ns(v30 - v31, a3);
              *(_DWORD *)(v33 + 8 * v7 + 20) = v32;
            }
            return;
          }
        }
        v23 = CalculateTimeDurationIn100ns(v21 - v22, a3);
        goto LABEL_26;
      }
    }
  }
}
