/*
 * XREFs of IoQueuesFreeResources @ 0x1C000ADC4
 * Callers:
 *     IoQueuesCreation @ 0x1C000A5E8 (IoQueuesCreation.c)
 *     IoQueuesCreationAsync @ 0x1C000A774 (IoQueuesCreationAsync.c)
 *     NVMeControllerRemove @ 0x1C000E18C (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000EBA8 (NVMeControllerStop.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C000EE04 (NVMeFreeDmaBuffer.c)
 */

__int64 __fastcall IoQueuesFreeResources(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 result; // rax
  unsigned __int16 v7; // si
  __int64 v8; // rbp
  __int64 v9; // r8
  unsigned __int16 v10; // si
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned int i; // ebp
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // r8

  v5 = 16 * *(unsigned __int16 *)(a1 + 334);
  result = *(unsigned __int16 *)(a1 + 334) << 6;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    if ( *(_QWORD *)(a1 + 872) )
    {
      v7 = 0;
      if ( *(_WORD *)(a1 + 336) )
      {
        v8 = (unsigned int)result;
        do
        {
          v9 = *(_QWORD *)(a1 + 872) + 136LL * v7;
          NVMeFreeDmaBuffer(a1, v8, v9, *(_QWORD *)(v9 + 8));
          ++v7;
        }
        while ( v7 < *(_WORD *)(a1 + 336) );
      }
    }
    if ( *(_QWORD *)(a1 + 880) )
    {
      v10 = 0;
      if ( *(_WORD *)(a1 + 338) )
      {
        v11 = v5;
        do
        {
          v12 = 392LL * v10;
          v13 = *(_QWORD *)(a1 + 880);
          if ( *(_BYTE *)(v12 + v13 + 248) && *(_QWORD *)(v12 + v13 + 256) )
          {
            for ( i = 0;
                  i < *(unsigned __int16 *)(a1 + 242);
                  StorPortExtendedFunction(
                    91LL,
                    a1,
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 880) + v12 + 256) + 8LL * i++),
                    1LL) )
            {
              ;
            }
            v15 = *(_QWORD *)(*(_QWORD *)(a1 + 880) + v12 + 256);
            if ( v15 )
              StorPortExtendedFunction(1LL, a1, v15, a4);
          }
          NVMeFreeDmaBuffer(a1, v11, v12 + *(_QWORD *)(a1 + 880), *(_QWORD *)(v12 + *(_QWORD *)(a1 + 880) + 8));
          ++v10;
        }
        while ( v10 < *(_WORD *)(a1 + 338) );
      }
    }
    v16 = *(_QWORD *)(a1 + 872);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 24);
      if ( v17 )
        StorPortExtendedFunction(1LL, a1, v17, a4);
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 872) + 32LL);
      if ( v18 )
        StorPortExtendedFunction(1LL, a1, v18, a4);
      v19 = *(_QWORD *)(a1 + 872);
      if ( v19 )
        StorPortExtendedFunction(1LL, a1, v19, a4);
    }
    result = *(_QWORD *)(a1 + 880);
    if ( result )
    {
      v20 = *(_QWORD *)(result + 192);
      if ( v20 )
        StorPortExtendedFunction(1LL, a1, v20, a4);
      result = *(_QWORD *)(a1 + 880);
      v21 = *(_QWORD *)(result + 224);
      if ( v21 )
        result = StorPortExtendedFunction(1LL, a1, v21, a4);
      v22 = *(_QWORD *)(a1 + 880);
      if ( v22 )
        result = StorPortExtendedFunction(1LL, a1, v22, a4);
    }
  }
  *(_QWORD *)(a1 + 880) = 0LL;
  *(_QWORD *)(a1 + 872) = 0LL;
  *(_DWORD *)(a1 + 336) = 0;
  return result;
}
