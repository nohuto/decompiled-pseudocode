/*
 * XREFs of RecordCommandTimingHistory @ 0x1C00251C0
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C00023F0 (NVMeCompletionDpcRoutine.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     CalculateTimeDurationIn100ns @ 0x1C0007370 (CalculateTimeDurationIn100ns.c)
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 */

_UNKNOWN **__fastcall RecordCommandTimingHistory(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _UNKNOWN **result; // rax
  unsigned int v5; // r9d
  unsigned int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // r10
  _QWORD *v10; // rdi
  __int64 v11; // r11
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  int v14; // eax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  int v17; // eax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  int v20; // eax
  unsigned __int64 v21; // rax
  unsigned __int64 *v22; // rsi
  _UNKNOWN **v23; // rcx
  int v24; // eax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  int v27; // eax
  unsigned __int64 v28; // rax
  int v29; // eax
  unsigned __int64 v30; // rcx
  __int64 v31; // r11
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  _DWORD *v33; // [rsp+40h] [rbp+8h] BYREF

  result = &retaddr;
  v33 = 0LL;
  v5 = *(_DWORD *)(a1 + 4076);
  if ( v5 )
  {
    if ( *(_QWORD *)(a1 + 4088) )
    {
      v7 = *(_DWORD *)(a1 + 4080);
      *(_DWORD *)(a1 + 4080) = v7 + 1 < v5 ? v7 + 1 : 0;
      v8 = 3LL * (v7 < v5 ? v7 : 0);
      result = (_UNKNOWN **)GetSrbExtension(a2);
      v10 = result;
      if ( result[520] )
      {
        GetSrbDataBuffer(v9, &v33);
        *(_DWORD *)(v11 + 8 * v8) = *v33;
        v12 = v10[521];
        v13 = v10[520];
        if ( v12 < v13 )
        {
          *(_DWORD *)(v11 + 8 * v8 + 4) = 195935983;
        }
        else
        {
          v14 = CalculateTimeDurationIn100ns(v12 - v13, a3);
          *(_DWORD *)(v11 + 8 * v8 + 4) = v14;
        }
        v15 = v10[522];
        if ( v15 )
        {
          v16 = v10[521];
          if ( v15 < v16 )
            v17 = v16 - v15 > 0x100 ? 0xBADBEEF : 0;
          else
            v17 = CalculateTimeDurationIn100ns(v15 - v16, a3);
          *(_DWORD *)(v11 + 8 * v8 + 8) = v17;
          v18 = v10[522];
          v19 = v10[520];
          if ( v18 < v19 )
          {
            *(_DWORD *)(v11 + 8 * v8 + 12) = 195935983;
          }
          else
          {
            v20 = CalculateTimeDurationIn100ns(v18 - v19, a3);
            *(_DWORD *)(v11 + 8 * v8 + 12) = v20;
          }
          v21 = v10[522];
          v22 = v10 + 523;
          v23 = (_UNKNOWN **)v10[523];
          if ( (unsigned __int64)v23 < v21 )
          {
            v24 = v21 - (unsigned __int64)v23 > 0x100 ? 0xBADBEEF : 0;
LABEL_24:
            *(_DWORD *)(v11 + 8 * v8 + 16) = v24;
            goto LABEL_26;
          }
        }
        else
        {
          v25 = v10[521];
          v22 = v10 + 523;
          v26 = v10[523];
          if ( v26 < v25 )
          {
            *(_DWORD *)(v11 + 8 * v8 + 8) = 195935983;
          }
          else
          {
            v27 = CalculateTimeDurationIn100ns(v26 - v25, a3);
            *(_DWORD *)(v11 + 8 * v8 + 8) = v27;
          }
          v28 = v10[520];
          if ( *v22 < v28 )
          {
            *(_DWORD *)(v11 + 8 * v8 + 12) = 195935983;
          }
          else
          {
            v29 = CalculateTimeDurationIn100ns(*v22 - v28, a3);
            *(_DWORD *)(v11 + 8 * v8 + 12) = v29;
          }
          v23 = (_UNKNOWN **)*v22;
          v21 = v10[521];
          if ( *v22 < v21 )
          {
            *(_DWORD *)(v11 + 8 * v8 + 16) = 195935983;
LABEL_26:
            v30 = v10[524];
            result = (_UNKNOWN **)*v22;
            if ( v30 < *v22 )
            {
              *(_DWORD *)(v11 + 8 * v8 + 20) = 195935983;
            }
            else
            {
              result = (_UNKNOWN **)CalculateTimeDurationIn100ns(v30 - (_QWORD)result, a3);
              *(_DWORD *)(v31 + 8 * v8 + 20) = (_DWORD)result;
            }
            return result;
          }
        }
        v24 = CalculateTimeDurationIn100ns((unsigned __int64)v23 - v21, a3);
        goto LABEL_24;
      }
    }
  }
  return result;
}
