/*
 * XREFs of RtlCopyContext @ 0x1407EE220
 * Callers:
 *     PspGetSetContextInternal @ 0x1406EA840 (PspGetSetContextInternal.c)
 *     PspWow64GetContextThread @ 0x14077BF00 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x14077C1CC (PspWow64SetContextThread.c)
 *     PspInitializeThunkContext @ 0x1407EDF4C (PspInitializeThunkContext.c)
 *     PspSetContextState @ 0x1409B51B8 (PspSetContextState.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1403650A0 (RtlpValidateContextFlags.c)
 *     RtlpGetContextFlagsLocation @ 0x140365178 (RtlpGetContextFlagsLocation.c)
 *     RtlpCopyLegacyContext @ 0x14036519C (RtlpCopyLegacyContext.c)
 *     RtlpCopyXStateChunk @ 0x1403D1A88 (RtlpCopyXStateChunk.c)
 *     RtlpCopyKernelCetChunk @ 0x1405A89CC (RtlpCopyKernelCetChunk.c)
 */

__int64 __fastcall RtlCopyContext(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 result; // rax
  int v9; // edx
  int *v10; // rax
  int *v11; // r8
  int v12; // r12d
  int v13; // ebp
  int v14; // ebp
  unsigned int v15; // ebx
  char v16; // bp
  int v17; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *ContextFlagsLocation; // [rsp+38h] [rbp-30h]
  int v19; // [rsp+88h] [rbp+20h] BYREF

  v17 = 0;
  v19 = 0;
  v6 = 0LL;
  v7 = 0LL;
  result = RtlpValidateContextFlags(a2, 0LL);
  if ( (int)result >= 0 )
  {
    ContextFlagsLocation = (_DWORD *)RtlpGetContextFlagsLocation(a1, a2);
    v10 = (int *)RtlpGetContextFlagsLocation(a3, v9);
    v12 = *v11;
    v13 = *v10;
    result = RtlpValidateContextFlags(a2 | *v10 | (unsigned int)*v11, 0LL);
    if ( (int)result >= 0 )
    {
      v14 = a2 & v13;
      result = RtlpValidateContextFlags(v14, &v17);
      if ( (int)result >= 0 )
      {
        result = RtlpValidateContextFlags(v12, &v19);
        v15 = result;
        if ( (int)result >= 0 )
        {
          if ( (~v19 & v17) != 0 )
          {
            return 2147483653LL;
          }
          else
          {
            RtlpCopyLegacyContext(1, a1, v14, a3);
            *ContextFlagsLocation |= v12;
            if ( (v19 & 0xFFFFFFFE) != 0 )
            {
              if ( (v14 & 0x10000) != 0 )
              {
                v7 = a3 + 716;
                v6 = a1 + 716;
                if ( (v12 & 0x10020) != 65568 && (v14 & 0x10020) == 65568 )
                  *(_DWORD *)(a1 + 728) = 716;
              }
              else if ( (a2 & 0x100000) != 0 )
              {
                v7 = a3 + 1232;
                v6 = a1 + 1232;
              }
              else if ( (a2 & 0x200000) != 0 )
              {
                v7 = a3 + 416;
                v6 = a1 + 416;
              }
              else if ( (a2 & 0x400000) != 0 )
              {
                v7 = a3 + 912;
                v6 = a1 + 912;
              }
            }
            v16 = v17;
            if ( (v17 & 2) == 0 || (result = RtlpCopyXStateChunk(1, v6, v6, v7, v7), v15 = result, (int)result >= 0) )
            {
              if ( (v16 & 4) == 0 )
                return v15;
              result = RtlpCopyKernelCetChunk(1, v6, v6, v7, v7);
              v15 = result;
              if ( (int)result >= 0 )
                return v15;
            }
          }
        }
      }
    }
  }
  return result;
}
