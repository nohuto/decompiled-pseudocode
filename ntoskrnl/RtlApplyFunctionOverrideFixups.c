/*
 * XREFs of RtlApplyFunctionOverrideFixups @ 0x140679570
 * Callers:
 *     MiPerformFixups @ 0x14069F3D0 (MiPerformFixups.c)
 * Callees:
 *     ?RtlpGetFunctionOverrideIndex@@YAPEBU_RTL_FUNCTION_OVERRIDE_INDEX@@PEBU_RTL_FUNCTION_OVERRIDE_INFORMATION@@K@Z @ 0x140679548 (-RtlpGetFunctionOverrideIndex@@YAPEBU_RTL_FUNCTION_OVERRIDE_INDEX@@PEBU_RTL_FUNCTION_OVERRIDE_IN.c)
 */

unsigned __int64 __fastcall RtlApplyFunctionOverrideFixups(
        const struct _RTL_FUNCTION_OVERRIDE_INFORMATION *a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        char a5)
{
  char v5; // di
  unsigned __int64 result; // rax
  char v10; // si
  unsigned int *v11; // r12
  unsigned int v12; // ebp
  unsigned int v13; // r14d
  unsigned __int16 v14; // r11
  __int16 v15; // r13
  unsigned __int16 v16; // r11
  __int64 v17; // rcx
  unsigned __int16 v18; // r10
  __int16 v19; // dx
  int v20; // r9d
  unsigned int v21; // edi
  unsigned int v22; // r8d
  __int64 v23; // r8
  unsigned int v24; // edi
  unsigned int v25; // r9d
  unsigned __int16 v26; // cx
  __int64 v27; // rax

  v5 = a4;
  result = (unsigned __int64)RtlpGetFunctionOverrideIndex(a1, a2);
  v10 = 0;
  v11 = (unsigned int *)result;
  v12 = 0;
  if ( *(_DWORD *)result )
  {
    v13 = a2 << 12;
    do
    {
      v14 = v11[2 * v12 + 1];
      v15 = v14 >> 12;
      v16 = v14 & 0xFFF;
      v17 = v11[2 * v12 + 2];
      v18 = HIWORD(v11[2 * v12 + 1]) & 7;
      v19 = (HIWORD(v11[2 * v12 + 1]) >> 3) & 7;
      v20 = *((_DWORD *)a1 + 3 * v17 + 8);
      if ( a5 )
        result = *((unsigned int *)a1 + 3 * v17 + 10);
      else
        result = *((unsigned int *)a1 + 3 * v17 + 9);
      if ( !v5 )
        v20 = result;
      v21 = v13 + v16;
      if ( v18 )
      {
        v22 = v21 + v18;
      }
      else
      {
        v22 = v21 + 4;
        if ( !v19 )
          goto LABEL_12;
      }
      v10 = 1;
LABEL_12:
      if ( v15 != 1 )
      {
        if ( v15 == 2 )
        {
          result = *(_DWORD *)(v16 + a3) ^ (*(_DWORD *)(v16 + a3) ^ ((int)(v20 - v21) / 4)) & 0x3FFFFFFu;
          *(_DWORD *)(v16 + a3) = result;
        }
        else if ( v15 == 3 )
        {
          if ( (!v10 || v19)
            && (v23 = v16,
                v24 = v21 & 0xFFFFF000,
                v16 += 4,
                result = ((int)(v20 - v24) >> 12) & 0x1FFFFC,
                *(_DWORD *)(v23 + a3) = *(_DWORD *)(v23 + a3) & 0x9F00001F | (8
                                                                            * (result | ((((int)(v20 - v24) >> 12) & 3) << 26))),
                !v10)
            || v18 )
          {
            result = *(unsigned int *)(v16 + a3);
            *(_DWORD *)(v16 + a3) = result ^ (result ^ (v20 << 10)) & 0x3FFC00;
          }
        }
        v10 = 0;
        goto LABEL_21;
      }
      v25 = v20 - v22;
      v10 = 0;
      if ( v18 )
      {
        v25 >>= 8 * (4 - v18);
      }
      else
      {
        if ( !v19 )
          goto LABEL_32;
        v18 = (HIWORD(v11[2 * v12 + 1]) >> 3) & 7;
      }
      if ( v18 != 4 )
      {
        v26 = 0;
        do
        {
          v27 = v26++;
          result = v16 + v27;
          *(_BYTE *)(result + a3) = v25;
          v25 >>= 8;
        }
        while ( v26 < v18 );
        goto LABEL_21;
      }
LABEL_32:
      result = v16;
      *(_DWORD *)(v16 + a3) = v25;
LABEL_21:
      v5 = a4;
      ++v12;
    }
    while ( v12 < *v11 );
  }
  return result;
}
