void __fastcall MiQueuePinDriverAddressLog(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r13
  unsigned __int8 CurrentIrql; // bp
  unsigned int v6; // edi
  unsigned int v7; // esi
  unsigned int v8; // r8d
  int v9; // edx
  int v10; // r9d
  __int64 v11; // r10
  unsigned int v12; // r11d
  unsigned int v13; // ecx
  __int64 *v14; // rdi
  __int64 i; // rax
  int v16; // ebx
  unsigned __int64 v17; // r12
  int v18; // ecx
  unsigned int v19; // ecx
  int v20; // edx
  int v21; // esi
  unsigned __int64 v22; // rax
  unsigned __int8 v23; // cl
  _DWORD *SchedulerAssist; // r9
  __int64 v25; // rdx
  int v26; // edx
  char *v27; // rdx
  unsigned __int8 v28; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v30; // r8
  int v31; // eax
  bool v32; // zf
  __int64 v33; // [rsp+20h] [rbp-48h]
  __int64 v34; // [rsp+78h] [rbp+10h] BYREF
  int v35; // [rsp+88h] [rbp+20h]

  v34 = a2;
  v4 = a3;
  if ( !PoAllProcIntrDisabled && (KiBugCheckActive & 3) == 0 && !KdEnteredDebugger )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 2u )
    {
      v23 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v23 == 2 )
            LODWORD(v25) = 4;
          else
            v25 = (-1LL << (v23 + 1)) & 4;
          SchedulerAssist[5] |= v25;
        }
      }
    }
    v6 = -1;
    if ( (word_140C12F12 & 1) != 0 )
    {
      while ( 1 )
      {
        v7 = v6 + 1;
        v8 = v7 < dword_140C12DA0 ? v7 : 0;
        v9 = dword_140C12DA0 - 1;
        v10 = (qword_140C12DA8 & 4) != 0 ? 0x20 : 0;
        v11 = qword_140C12DA8 - ((qword_140C12DA8 & 4) != 0 ? 4 : 0);
        while ( 1 )
        {
          v35 = 0;
          v12 = v10 + v9;
          v13 = v10 + v8;
          if ( v9 - v8 != -1 )
            break;
          v6 = -1;
LABEL_58:
          if ( !v8 )
            goto LABEL_15;
          v26 = v7 + 1;
          if ( v7 + 1 > dword_140C12DA0 )
            v26 = dword_140C12DA0;
          v9 = v26 - 1;
          v8 = 0;
        }
        v14 = (__int64 *)(v11 + 8 * ((unsigned __int64)v13 >> 6));
        for ( i = ((1LL << (v13 & 0x3F)) - 1) | *v14; i == -1; i = *v14 )
        {
          if ( (unsigned __int64)++v14 > v11 + 8 * ((unsigned __int64)v12 >> 6) )
            goto LABEL_40;
        }
        _BitScanForward64((unsigned __int64 *)&i, ~i);
        v6 = i + ((unsigned int)(((__int64)v14 - v11) >> 3) << 6);
        v35 = i;
        if ( v6 > v12 )
        {
LABEL_40:
          v6 = -1;
          goto LABEL_58;
        }
        if ( v6 == -1 )
          goto LABEL_58;
        v6 -= v10;
LABEL_15:
        if ( v6 == -1 )
          break;
        if ( (unsigned int)RtlInterlockedSetClearRun(&dword_140C12DA0, v6, 1LL) )
        {
          if ( v6 >= 0x800 )
            break;
          v16 = MiFlags;
          v17 = a1 & 0xFFFFFFFFFFFFF000uLL;
          HIDWORD(v33) = HIDWORD(v17);
          if ( (((unsigned int)MiFlags >> 4) & 3) != 0 )
          {
            if ( (((unsigned int)MiFlags >> 4) & 3) == 1 )
              v18 = (v17 ^ (v17 ^ (2 * v4)) & 2) & 0xFFFFFCFE | 0x101;
            else
              v18 = (v17 ^ (v17 ^ (2 * v4)) & 2) & 0xFFFFFCFE | 0x201;
          }
          else
          {
            v18 = (v17 ^ (v17 ^ (2 * v4)) & 2) & 0xFFFFFCFE | 1;
          }
          if ( CurrentIrql < 2u )
          {
            v19 = v18 & 0xFFFFFF3F;
          }
          else if ( CurrentIrql == 2 )
          {
            v19 = v18 & 0xFFFFFF3F | 0x40;
          }
          else
          {
            v19 = v18 & 0xFFFFFF3F | 0x80;
          }
          if ( (_BYTE)KdDebuggerEnabled )
          {
            if ( (_BYTE)KdDebuggerNotPresent )
              v19 = v19 & 0xFFFFF3FF | 0x400;
            else
              v19 = v19 & 0xFFFFF3FF | 0x800;
          }
          if ( (v34 & 1) != 0 )
          {
            v20 = v19 | 8;
            if ( (((unsigned __int64)v34 >> 11) & 1) == 0 )
              v20 = v19;
            LODWORD(v33) = v20;
            if ( v34 >= 0 )
              LODWORD(v33) = v20 | 0x10;
            v21 = v20 | 0x10;
            if ( v34 < 0 )
              v21 = v20;
            v22 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v34) >> 12) & 0xFFFFFFFFFFLL;
            if ( (v16 & 0x20000000) != 0
              && v22 <= qword_140C65820
              && _bittest64((const signed __int64 *)(48 * v22 - 0x21FFFFFFFFD8LL), 0x36u)
              && *(_WORD *)(48 * v22 - 0x21FFFFFFFFE0LL) > 1u )
            {
              LODWORD(v33) = v21 | 0x20;
            }
          }
          else
          {
            LODWORD(v33) = v19 | 4;
          }
          MiPinDriverAddressLog[v6] = v33;
          goto LABEL_38;
        }
      }
    }
    v27 = (char *)&unk_140C12EB8;
    if ( !(_BYTE)KdDebuggerEnabled )
      v27 = (char *)&unk_140C12EB0;
    _InterlockedAdd((volatile signed __int32 *)&v27[32 * v4 + (CurrentIrql > 2u ? 0x10 : 0)], 1u);
LABEL_38:
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
      {
        v28 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v28 - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v30 = CurrentPrcb->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v32 = (v31 & v30[5]) == 0;
          v30[5] &= v31;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
  }
}
