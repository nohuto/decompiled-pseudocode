/*
 * XREFs of MiCountSystemImageCommitment @ 0x1402B0C2C
 * Callers:
 *     MiSessionUpdateImageCharges @ 0x14036C724 (MiSessionUpdateImageCharges.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x140229790 (MiGetWsleContents.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402B0EB0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x1403005CC (MiFreePrivateFixupEntryForSystemImage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14032E710 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 *     MiGetSubsectionDriverProtos @ 0x1403443A4 (MiGetSubsectionDriverProtos.c)
 *     MiGetSessionVm @ 0x14036C17C (MiGetSessionVm.c)
 */

unsigned __int64 __fastcall MiCountSystemImageCommitment(__int64 a1)
{
  ULONG_PTR v2; // rbp
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char *SessionVm; // rax
  int v11; // r13d
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 SharedVm; // rbx
  KIRQL v18; // al
  __int64 v19; // rbx
  __int64 v20; // r12
  int v21; // edx
  unsigned __int64 v22; // rbp
  unsigned int v23; // r14d
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+20h] [rbp-58h]
  KIRQL v31; // [rsp+80h] [rbp+8h]
  __int64 v32; // [rsp+88h] [rbp+10h]
  char *v33; // [rsp+90h] [rbp+18h]
  __int64 v34; // [rsp+98h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  if ( (*(_DWORD *)(a1 + 196) & 0x12) != 0 )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(a1 + 48)) )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  v3 = *(_QWORD *)(a1 + 112);
  if ( !v3 )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  v4 = MiSectionControlArea(v3);
  if ( !*(_QWORD *)(v4 + 144) )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  v30 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = v30;
  if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
    SessionVm = (char *)MiGetSessionVm(v7, v6, v8, v9);
  else
    SessionVm = MiGetAnyMultiplexedVm(1);
  v33 = SessionVm;
  v11 = *(_DWORD *)(v4 + 56) & 0x800;
  v12 = (__int64)SessionVm;
  v13 = 0LL;
  v34 = MiFreePrivateFixupEntryForSystemImage(v2);
  SharedVm = MiGetSharedVm(v12, v14, v15, v16);
  v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v19 = v4 + 128;
  v31 = v18;
  v32 = v4 + 128;
  if ( v4 != -128 )
  {
    v20 = v34;
    while ( 1 )
    {
      v21 = *(_DWORD *)(v19 + 52) & 0x3FFFFFFF;
      v22 = (unsigned int)(*(_DWORD *)(v19 + 44) - v21);
      if ( (*(_BYTE *)(v19 + 32) & 0x3Eu) >= 8 )
      {
        v5 += 8LL * (unsigned int)(*(_DWORD *)(v19 + 44) - v21);
      }
      else
      {
        if ( !MiGetSubsectionDriverProtos(v19) )
        {
          v23 = 0;
          if ( !v22 )
            goto LABEL_21;
          while ( 1 )
          {
            v24 = v13;
            if ( v20
              && ((*(char *)(((unsigned __int64)(unsigned int)((v5 - v30) >> 3) >> 3)
                           + *(_QWORD *)(*(_QWORD *)(v20 + 40) + 8LL)) >> (((v5 - v30) >> 3) & 7)) & 1) != 0 )
            {
              goto LABEL_29;
            }
            v25 = MI_READ_PTE_LOCK_FREE(v5);
            v34 = v25;
            if ( v25 )
              break;
LABEL_19:
            ++v23;
            v5 += 8LL;
            if ( v23 >= v22 )
            {
              v19 = v32;
              goto LABEL_21;
            }
          }
          if ( !v11 )
          {
            if ( (v25 & 1) != 0 )
            {
              MI_READ_PTE_LOCK_FREE(&v34);
              if ( (MiGetWsleContents(0xFFFFFFFFFFLL, v5 << 25 >> 16) & 0xF) != 9 )
              {
                v28 = *(_QWORD *)(v27 + 40);
                if ( v28 < 0 )
                {
                  if ( (v28 & 0x10000000000LL) != 0 || (v29 = *(_QWORD *)(v27 + 8), v29 < 0) || !v29 )
                  {
                    if ( (*(_DWORD *)(v27 + 16) & 0x400LL) != 0 )
                      goto LABEL_19;
                  }
                }
              }
            }
            else if ( (v25 & 0x400) != 0 )
            {
              ++v13;
              if ( !(unsigned __int8)MI_PROTO_FORMAT_COMBINED(v25) )
                v13 = v24;
              goto LABEL_19;
            }
          }
LABEL_29:
          ++v13;
          goto LABEL_19;
        }
        v5 += 8 * v22;
      }
      v13 += v22;
LABEL_21:
      v19 = *(_QWORD *)(v19 + 16);
      v32 = v19;
      if ( !v19 )
      {
        v12 = (__int64)v33;
        v18 = v31;
        break;
      }
    }
  }
  MiUnlockWorkingSetExclusive(v12, v18);
  return v13;
}
