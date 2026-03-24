/*
 * XREFs of IoQueuesFreeResources @ 0x1C000C684
 * Callers:
 *     IoQueuesCreation @ 0x1C000BFD8 (IoQueuesCreation.c)
 *     IoQueuesCreationAsync @ 0x1C000C15C (IoQueuesCreationAsync.c)
 *     NVMeControllerRemove @ 0x1C000E434 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000E85C (NVMeControllerStop.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C0005AAC (NVMeFreeDmaBuffer.c)
 */

__int64 __fastcall IoQueuesFreeResources(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 result; // rax
  unsigned __int16 v7; // si
  __int64 v8; // rbp
  __int64 *v9; // r8
  unsigned __int16 v10; // si
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned int i; // ebp
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8

  v5 = 16 * *(unsigned __int16 *)(a1 + 286);
  result = *(unsigned __int16 *)(a1 + 286) << 6;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    if ( *(_QWORD *)(a1 + 776) )
    {
      v7 = 0;
      if ( *(_WORD *)(a1 + 288) )
      {
        v8 = (unsigned int)result;
        do
        {
          v9 = (__int64 *)(*(_QWORD *)(a1 + 776) + 136LL * v7);
          result = NVMeFreeDmaBuffer(a1, v8, v9, v9[1]);
          ++v7;
        }
        while ( v7 < *(_WORD *)(a1 + 288) );
      }
    }
    if ( *(_QWORD *)(a1 + 784) )
    {
      v10 = 0;
      if ( *(_WORD *)(a1 + 290) )
      {
        v11 = v5;
        do
        {
          v12 = 344LL * v10;
          v13 = *(_QWORD *)(a1 + 784);
          if ( *(_BYTE *)(v12 + v13 + 200) && *(_QWORD *)(v12 + v13 + 208) )
          {
            for ( i = 0;
                  i < *(unsigned __int16 *)(a1 + 218);
                  StorPortExtendedFunction(
                    91LL,
                    a1,
                    *(_QWORD *)(*(_QWORD *)(v12 + *(_QWORD *)(a1 + 784) + 208) + 8LL * i++),
                    1LL) )
            {
              ;
            }
            v13 = *(_QWORD *)(a1 + 784);
            v15 = *(_QWORD *)(v12 + v13 + 208);
            if ( v15 )
            {
              StorPortExtendedFunction(1LL, a1, v15, a4);
              v13 = *(_QWORD *)(a1 + 784);
            }
          }
          result = NVMeFreeDmaBuffer(a1, v11, (__int64 *)(v12 + v13), *(_QWORD *)(v12 + v13 + 8));
          ++v10;
        }
        while ( v10 < *(_WORD *)(a1 + 290) );
      }
    }
    v16 = *(_QWORD *)(a1 + 776);
    if ( v16 )
    {
      if ( *(_QWORD *)(v16 + 24) )
      {
        StorPortExtendedFunction(1LL, a1, *(_QWORD *)(v16 + 24), a4);
        v16 = *(_QWORD *)(a1 + 776);
      }
      result = *(_QWORD *)(v16 + 32);
      if ( result )
      {
        result = StorPortExtendedFunction(1LL, a1, *(_QWORD *)(v16 + 32), a4);
        v16 = *(_QWORD *)(a1 + 776);
      }
      if ( v16 )
        result = StorPortExtendedFunction(1LL, a1, v16, a4);
    }
    v17 = *(_QWORD *)(a1 + 784);
    if ( v17 )
    {
      result = *(_QWORD *)(v17 + 192);
      if ( result )
      {
        result = StorPortExtendedFunction(1LL, a1, *(_QWORD *)(v17 + 192), a4);
        v17 = *(_QWORD *)(a1 + 784);
      }
      if ( v17 )
        result = StorPortExtendedFunction(1LL, a1, v17, a4);
    }
  }
  *(_QWORD *)(a1 + 784) = 0LL;
  *(_QWORD *)(a1 + 776) = 0LL;
  *(_DWORD *)(a1 + 288) = 0;
  return result;
}
