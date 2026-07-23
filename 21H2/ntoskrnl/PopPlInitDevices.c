/*
 * XREFs of PopPlInitDevices @ 0x1408F98D8
 * Callers:
 *     PopPlInitPowerPlane @ 0x1408F9A54 (PopPlInitPowerPlane.c)
 * Callees:
 *     PopPlInitDevice @ 0x1408F97BC (PopPlInitDevice.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopPlInitDevices(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        _QWORD *a7)
{
  _QWORD *PoolWithTag; // rsi
  unsigned __int64 v8; // rdi
  __int64 v11; // r14
  int inited; // ebx
  unsigned __int64 v14; // r15
  unsigned __int64 i; // rbp
  __int64 v16; // r14
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rax
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF

  v20 = 0LL;
  PoolWithTag = 0LL;
  v8 = 0LL;
  v11 = a2;
  if ( a3 )
  {
    if ( a2 + 44 * a3 <= a5 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * a3, 0x6C506F50u);
      if ( PoolWithTag )
      {
        inited = 0;
        v14 = 0LL;
        if ( a3 )
        {
          while ( 1 )
          {
            inited = PopPlInitDevice(a1, v11, a4, a5, &v20);
            if ( inited < 0 )
              break;
            ++v14;
            PoolWithTag[v8] = v20;
            v11 += 44LL;
            ++v8;
            if ( v14 >= a3 )
              goto LABEL_18;
          }
          for ( i = 0LL; i < v8; ++i )
          {
            v16 = PoolWithTag[i];
            v17 = 0LL;
            if ( *(_QWORD *)(v16 + 72) )
            {
              do
              {
                ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v16 + 80) + 8 * v17), 0x6C506F50u);
                v18 = *(_QWORD *)(v16 + 72);
                ++v17;
              }
              while ( v17 < v18 );
              if ( v18 )
                ExFreePoolWithTag(*(PVOID *)(v16 + 80), 0x6C506F50u);
            }
            ExFreePoolWithTag((PVOID)v16, 0x6C506F50u);
          }
          ExFreePoolWithTag(PoolWithTag, 0x6C506F50u);
          PoolWithTag = 0LL;
          v8 = 0LL;
        }
      }
      else
      {
        inited = -1073741670;
      }
    }
    else
    {
      inited = -1073741306;
    }
  }
  else
  {
    inited = -1073741811;
  }
LABEL_18:
  *a7 = PoolWithTag;
  *a6 = v8;
  return (unsigned int)inited;
}
