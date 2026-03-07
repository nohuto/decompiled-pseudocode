__int64 __fastcall MiValidatePagefilePageHash(_QWORD *a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // r8
  unsigned int v3; // r15d
  __int64 v4; // rcx
  unsigned int v5; // ebp
  __int64 *v6; // r14
  signed __int64 v7; // r13
  unsigned __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  int PagingFileOffset; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  unsigned __int64 v23; // [rsp+20h] [rbp-158h]
  __int64 v24; // [rsp+28h] [rbp-150h]
  unsigned int v25; // [rsp+30h] [rbp-148h]
  _OWORD v27[16]; // [rsp+40h] [rbp-138h] BYREF

  v1 = (_QWORD *)a1[32];
  v2 = a1 + 34;
  v3 = 0;
  v4 = a1[11];
  if ( v1 )
    v2 = v1;
  v5 = 0;
  v25 = 0;
  v6 = v2 + 6;
  v7 = ((unsigned __int64)((*((_DWORD *)v2 + 8) + *((_DWORD *)v2 + 11)) & 0xFFF) + v4 + 4095) >> 12;
  v8 = (unsigned __int64)&v2[v7 + 6];
  v24 = 0LL;
  v23 = v8;
  while ( (unsigned __int64)v6 < v8 )
  {
    v9 = *v6;
    v10 = 48 * *v6 - 0x220000000000LL;
    if ( !MiInPageSkipPage(v10) )
    {
      v11 = (unsigned __int8)MiLockPageInline(v10);
      if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) == 0 )
      {
        v12 = *(_QWORD *)(v10 + 16);
        v13 = (v12 >> 5) & 0x1F;
        if ( (dword_140D1D1D0 & 1) == 0
          && (_DWORD)v13 != 31
          && ((unsigned int)v13 >> 3 == 3 && ((v12 >> 5) & 7) != 0 || (unsigned int)v13 >> 3 == 1)
          || (PagingFileOffset = MiGetPagingFileOffset((__int64 *)(v10 + 16))) == 0 )
        {
          v8 = v23;
        }
        else
        {
          v15 = v24;
          if ( !v24 )
          {
            v15 = *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL))
                            + 8LL * ((unsigned __int16)v12 >> 12)
                            + 17056);
            v24 = v15;
          }
          if ( v5 >= v25 )
          {
            v16 = (v7 * 8) >> 3;
            if ( (unsigned int)((v7 * 8) >> 3) > 0x10 )
              LODWORD(v16) = 16;
            v25 = v16;
            MiObtainPagefileHashes(v15, PagingFileOffset, v16, (__int64)v27);
            v5 = 0;
          }
          v8 = v23;
          if ( (unsigned int)MiArePagefileContentsCorrupted(v9, &v27[v5], 1LL) )
          {
            if ( v10 == a1[31] )
              v3 = -1073741761;
            *(_BYTE *)(v10 + 35) |= 0x10u;
          }
        }
      }
      if ( (_BYTE)v11 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v21 = (v20 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v20;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v11);
      }
    }
    ++v5;
    ++v6;
    --v7;
  }
  return v3;
}
