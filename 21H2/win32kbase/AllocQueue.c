/*
 * XREFs of AllocQueue @ 0x1C002CFE0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 * Callees:
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C008B020 (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     ApiSetEditionIsGetKeyStateBlocked @ 0x1C0097FB4 (ApiSetEditionIsGetKeyStateBlocked.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

_QWORD *__fastcall AllocQueue(NSInstrumentation::CLeakTrackingAllocator *a1, __int64 a2)
{
  _QWORD *v2; // rsi
  _QWORD *result; // rax
  int v5; // ebx
  int i; // r8d
  unsigned int v7; // ecx
  _BYTE *v8; // rax
  char v9; // al
  __int64 v10; // rdx
  char v11; // r9
  unsigned __int64 v12; // r11
  unsigned __int8 v13; // r10
  __int128 v14; // xmm1
  __int64 v15; // rax

  v2 = (_QWORD *)a2;
  if ( a2 )
  {
    v5 = *(_DWORD *)(a2 + 392);
  }
  else
  {
    result = NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(a1, QLookaside);
    v2 = result;
    if ( !result )
      return result;
    result[59] = 0LL;
    v5 = 0;
    *result = 0LL;
    result[1] = 0LL;
    *((_DWORD *)result + 4) = 0;
  }
  memset(v2 + 3, 0, 0x1D0uLL);
  *((_DWORD *)v2 + 98) = v5;
  *((_DWORD *)v2 + 11) = 2;
  v2[7] = v2;
  *((_DWORD *)v2 + 102) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a1 )
  {
    v15 = *((_QWORD *)a1 + 54);
    *(_OWORD *)((char *)v2 + 228) = *(_OWORD *)(v15 + 228);
    *(_OWORD *)((char *)v2 + 244) = *(_OWORD *)(v15 + 244);
    *(_OWORD *)((char *)v2 + 260) = *(_OWORD *)(v15 + 260);
    v14 = *(_OWORD *)(v15 + 276);
  }
  else
  {
    if ( (unsigned int)ApiSetEditionIsGetKeyStateBlocked() )
    {
      for ( i = 0; i < 256; ++i )
      {
        if ( (unsigned __int8)i >= 0x20u )
        {
          v7 = 0;
          v8 = &unk_1C02533C8;
          while ( *v8 != (_BYTE)i )
          {
            ++v7;
            ++v8;
            if ( v7 >= 0xE )
            {
              if ( (unsigned __int8)i > 0xA5u
                || (unsigned __int8)i >= 0x5Du && (unsigned __int8)i < 0xA0u
                || (unsigned __int8)i < 0x5Bu
                || (unsigned __int8)i > 0x5Cu && (unsigned __int8)(i + 96) > 5u )
              {
                goto LABEL_14;
              }
              break;
            }
          }
        }
        v11 = i & 3;
        v12 = (unsigned __int64)(unsigned __int8)i >> 2;
        v13 = *((_BYTE *)&gafAsyncKeyState + v12);
        if ( ((unsigned __int8)(1 << (2 * (i & 3))) & v13) != 0 )
        {
          *((_BYTE *)v2 + v12 + 228) |= 1 << (2 * v11);
          v13 = *((_BYTE *)&gafAsyncKeyState + v12);
        }
        if ( ((unsigned __int8)(1 << (2 * v11 + 1)) & v13) != 0 )
          *((_BYTE *)v2 + v12 + 228) |= 1 << (2 * v11 + 1);
LABEL_14:
        ;
      }
      goto LABEL_15;
    }
    *(_OWORD *)((char *)v2 + 228) = gafAsyncKeyState;
    *(_OWORD *)((char *)v2 + 244) = xmmword_1C0294E60;
    *(_OWORD *)((char *)v2 + 260) = xmmword_1C0294E70;
    v14 = xmmword_1C0294E80;
  }
  *(_OWORD *)((char *)v2 + 276) = v14;
LABEL_15:
  if ( (gdwGTERMFlags & 1) == 0 )
    --*((_DWORD *)v2 + 96);
  v9 = isChildPartition();
  v10 = qword_1C0291CC8;
  if ( v9 )
    v10 = qword_1C0291878;
  if ( qword_1C029BE38 )
    qword_1C029BE38(v2, v10);
  return v2;
}
