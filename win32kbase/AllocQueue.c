/*
 * XREFs of AllocQueue @ 0x1C0078C60
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0076490 (xxxCreateThreadInfo.c)
 * Callees:
 *     ApiSetEditionIsGetKeyStateBlocked @ 0x1C0078EE8 (ApiSetEditionIsGetKeyStateBlocked.c)
 *     isInputVirtualizationEnabled @ 0x1C0079014 (isInputVirtualizationEnabled.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C009D8BC (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

_QWORD *__fastcall AllocQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r14
  __int64 v6; // rax
  NSInstrumentation::CLeakTrackingAllocator *v7; // rcx
  _QWORD *result; // rax
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int i; // ebx
  _BYTE *v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  __int128 v24; // xmm1
  __int64 v25; // rax

  v4 = (_QWORD *)a2;
  if ( a2 )
  {
    v9 = *(_DWORD *)(a2 + 400);
  }
  else
  {
    v6 = SGDGetUserSessionState(a1, 0LL, a3, a4);
    result = NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(v7, *(void **)(v6 + 16864));
    v4 = result;
    if ( !result )
      return result;
    result[60] = 0LL;
    v9 = 0;
    *result = 0LL;
    result[1] = 0LL;
    *((_DWORD *)result + 4) = 0;
  }
  memset(v4 + 3, 0, 0x1D8uLL);
  *((_DWORD *)v4 + 100) = v9;
  *((_DWORD *)v4 + 11) = 2;
  v4[8] = v4;
  *((_DWORD *)v4 + 104) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a1 )
  {
    v25 = *(_QWORD *)(a1 + 432);
    *(_OWORD *)((char *)v4 + 236) = *(_OWORD *)(v25 + 236);
    *(_OWORD *)((char *)v4 + 252) = *(_OWORD *)(v25 + 252);
    *(_OWORD *)((char *)v4 + 268) = *(_OWORD *)(v25 + 268);
    v24 = *(_OWORD *)(v25 + 284);
  }
  else
  {
    if ( (unsigned int)ApiSetEditionIsGetKeyStateBlocked() )
    {
      for ( i = 0; i < 256; ++i )
      {
        if ( (unsigned __int8)i >= 0x20u )
        {
          v11 = 0LL;
          v15 = &unk_1C028B418;
          while ( *v15 != (_BYTE)i )
          {
            v11 = (unsigned int)(v11 + 1);
            ++v15;
            if ( (unsigned int)v11 >= 0xE )
            {
              if ( (unsigned __int8)i <= 0xA5u && ((unsigned __int8)i < 0x5Du || (unsigned __int8)i >= 0xA0u) )
              {
                switch ( (char)i )
                {
                  case 91:
                  case 92:
                  case -96:
                  case -95:
                  case -94:
                  case -93:
                  case -92:
                  case -91:
                    goto LABEL_23;
                  default:
                    goto LABEL_14;
                }
              }
              goto LABEL_14;
            }
          }
        }
LABEL_23:
        v17 = (unsigned __int64)(unsigned __int8)i >> 2;
        v18 = i & 3;
        v19 = *(unsigned __int8 *)(v17 + SGDGetUserSessionState(v11, v10, v12, v13) + 13992);
        if ( ((unsigned __int8)v19 & (unsigned __int8)(1 << (2 * v18))) != 0 )
          *((_BYTE *)v4 + v17 + 236) |= 1 << (2 * v18);
        v22 = SGDGetUserSessionState((unsigned int)(2 * v18), v19, v20, v21);
        v11 = (unsigned int)(2 * v18 + 1);
        v10 = *(unsigned __int8 *)(v17 + v22 + 13992);
        if ( ((unsigned __int8)v10 & (unsigned __int8)(1 << (2 * v18 + 1))) != 0 )
          *((_BYTE *)v4 + v17 + 236) |= 1 << (2 * v18 + 1);
LABEL_14:
        ;
      }
      goto LABEL_15;
    }
    v23 = SGDGetUserSessionState(v11, v10, v12, v13);
    *(_OWORD *)((char *)v4 + 236) = *(_OWORD *)(v23 + 13992);
    *(_OWORD *)((char *)v4 + 252) = *(_OWORD *)(v23 + 14008);
    *(_OWORD *)((char *)v4 + 268) = *(_OWORD *)(v23 + 14024);
    v24 = *(_OWORD *)(v23 + 14040);
  }
  *(_OWORD *)((char *)v4 + 284) = v24;
LABEL_15:
  if ( (gdwGTERMFlags & 1) == 0 )
    --*((_DWORD *)v4 + 98);
  if ( !(unsigned __int8)isInputVirtualizationEnabled() || (v16 = qword_1C02CC528, gbRootPartition) )
    v16 = qword_1C02CC978;
  if ( qword_1C02D66E0 )
    qword_1C02D66E0(v4, v16);
  return v4;
}
