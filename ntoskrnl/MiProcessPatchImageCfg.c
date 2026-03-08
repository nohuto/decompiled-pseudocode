/*
 * XREFs of MiProcessPatchImageCfg @ 0x140A383A8
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x140A32920 (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiVadDeleted @ 0x14031F750 (MiVadDeleted.c)
 *     MiLockVad @ 0x14034CF60 (MiLockVad.c)
 *     MiUnlockVad @ 0x14034D51C (MiUnlockVad.c)
 *     MiPopulateCfgBitMap @ 0x14075C600 (MiPopulateCfgBitMap.c)
 *     MiSelectCfgBitMap @ 0x1407D2C08 (MiSelectCfgBitMap.c)
 *     RtlEnumerateHotPatchPatches @ 0x140A73774 (RtlEnumerateHotPatchPatches.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiProcessPatchImageCfg(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // r15
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned int v11; // edx
  _QWORD *v12; // r14
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v16; // [rsp+28h] [rbp-28h]
  PVOID P[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int *v18; // [rsp+40h] [rbp-10h]
  unsigned int v19; // [rsp+88h] [rbp+38h] BYREF

  v19 = 0;
  v18 = 0LL;
  *(_OWORD *)P = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( *(_QWORD *)(*(_QWORD *)(Process + 1680) + 432LL) )
  {
    RtlEnumerateHotPatchPatches(a2, a3, MiFillPatchCallTargets, P);
    v19 = (unsigned int)P[0];
    if ( LODWORD(P[0]) )
    {
      P[1] = MiAllocatePool(256, 16LL * LODWORD(P[0]), 0x63486D4Du);
      if ( !P[1] )
        return (unsigned int)-1073741670;
      LODWORD(P[0]) = 0;
      RtlEnumerateHotPatchPatches(a2, a3, MiFillPatchCallTargets, P);
    }
    MiLockVad((__int64)CurrentThread, a1);
    if ( (unsigned int)MiVadDeleted(a1) )
    {
      v8 = -1073741800;
    }
    else
    {
      v9 = MiSelectCfgBitMap(
             Process,
             (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12,
             **(_QWORD **)(a1 + 72));
      v11 = 0;
      v12 = (_QWORD *)v9;
      if ( v19 )
      {
        while ( 1 )
        {
          v10 = 2LL * v11;
          if ( (*((_DWORD *)P[1] + 4 * v11) & 0xF) != (unsigned __int64)*(unsigned int *)(v9 + 24) )
            break;
          ++v11;
          *((_QWORD *)P[1] + v10 + 1) = 1LL;
          if ( v11 >= v19 )
            goto LABEL_12;
        }
        v8 = -1073741654;
      }
      else
      {
LABEL_12:
        v8 = MiPopulateCfgBitMap(
               (_QWORD *)v9,
               1uLL,
               v10,
               0,
               (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12,
               (((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF)
             - (unsigned int)(dword_140C694FC - 1));
        if ( v8 >= 0 )
        {
          if ( !v19
            || (v13 = *(unsigned __int8 *)(a1 + 33),
                v14 = *(unsigned __int8 *)(a1 + 32),
                v19 = 0,
                v18 = &v19,
                v16 = (((*(unsigned int *)(a1 + 28) | (unsigned __int64)(v13 << 32)) << 12) | 0xFFF)
                    - (unsigned int)(dword_140C694FC - 1),
                v8 = MiPopulateCfgBitMap(
                       v12,
                       (unsigned __int64)P,
                       v16,
                       1,
                       (*(unsigned int *)(a1 + 24) | (unsigned __int64)(v14 << 32)) << 12,
                       v16),
                v8 >= 0) )
          {
            v8 = 0;
          }
        }
      }
    }
    MiUnlockVad((__int64)CurrentThread, a1);
  }
  else
  {
    v8 = 0;
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  return (unsigned int)v8;
}
