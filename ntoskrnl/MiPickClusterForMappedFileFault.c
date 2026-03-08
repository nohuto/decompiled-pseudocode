/*
 * XREFs of MiPickClusterForMappedFileFault @ 0x14028B0C0
 * Callers:
 *     MiResolveMappedFileFault @ 0x14028A780 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiStartingOffset @ 0x14028C530 (MiStartingOffset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiObtainFaultCharges @ 0x14031EEE0 (MiObtainFaultCharges.c)
 *     MiSufficientAvailablePages @ 0x1403643E4 (MiSufficientAvailablePages.c)
 */

__int64 __fastcall MiPickClusterForMappedFileFault(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  __int64 *v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rbx
  unsigned int v11; // r12d
  unsigned __int64 v12; // rsi
  __int64 v13; // r13
  struct _KTHREAD *CurrentThread; // rax
  int v15; // r14d
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // r10
  __int64 v19; // r9
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r15
  unsigned int v23; // r11d
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdi
  unsigned __int64 i; // r14
  __int64 v30; // rdx
  __int64 result; // rax
  __int64 v32; // rdx
  int v33; // ecx
  unsigned __int64 v34; // rdx
  struct _LIST_ENTRY *Flink; // r9
  __int64 v36; // rax
  __int64 v37; // r9
  struct _KTHREAD *v38; // [rsp+20h] [rbp-58h]
  __int64 v39; // [rsp+20h] [rbp-58h]
  __int64 *v40; // [rsp+28h] [rbp-50h]
  __int64 v41; // [rsp+30h] [rbp-48h]

  v8 = *(__int64 **)(a2 + 208);
  v9 = 0LL;
  v10 = *(_QWORD *)(a2 + 168);
  v11 = 1;
  v12 = *(_QWORD *)(a2 + 232);
  v13 = 1LL;
  CurrentThread = KeGetCurrentThread();
  v41 = *v8;
  v40 = v8;
  v38 = CurrentThread;
  if ( (v10 & 0x400) == 0 )
    goto LABEL_46;
  if ( BYTE5(CurrentThread[1].Queue) )
    goto LABEL_46;
  v15 = *(_DWORD *)(*v8 + 56);
  if ( (v15 & 8) != 0 || *(__int64 *)(a1 + 17280) < 160 )
    goto LABEL_46;
  if ( dword_140C692D8 )
  {
    --dword_140C692D8;
LABEL_46:
    i = v12;
    v22 = v12;
    goto LABEL_33;
  }
  if ( !(unsigned int)MiSufficientAvailablePages(a1, 320LL) )
    goto LABEL_46;
  v16 = a2;
  v17 = *(unsigned int *)(a2 + 184);
  if ( (_DWORD)v17 == 1 )
    goto LABEL_46;
  v18 = a4;
  v19 = a3;
  v20 = a4 - 8 + 8 * (*((unsigned int *)v8 + 11) - (unsigned __int64)(*((_DWORD *)v8 + 13) & 0x3FFFFFFF));
  if ( a3 )
    goto LABEL_11;
  if ( (v15 & 0x20) != 0 )
  {
    LODWORD(v17) = 4;
    if ( (v8[4] & 4) == 0 )
    {
LABEL_11:
      v39 = 8LL * (unsigned int)v17;
      v21 = v39 + v12 - 8;
      if ( v20 <= v21 )
        v21 = a4 - 8 + 8 * (*((unsigned int *)v8 + 11) - (unsigned __int64)(*((_DWORD *)v8 + 13) & 0x3FFFFFFF));
      v22 = v21;
      if ( a3 )
        goto LABEL_15;
      goto LABEL_14;
    }
    v21 = v12 + 56;
    v39 = 64LL;
    if ( v20 <= v12 + 56 )
      v21 = a4 - 8 + 8 * (*((unsigned int *)v8 + 11) - (unsigned __int64)(*((_DWORD *)v8 + 13) & 0x3FFFFFFF));
    v22 = v21;
  }
  else
  {
    if ( !(_DWORD)v17 )
      v17 = (unsigned int)(LODWORD(v38[1].WaitListEntry.Flink) + 1);
    v32 = 8 * v17;
    v21 = v32 + v12 - 8;
    v39 = v32;
    if ( v20 <= v21 )
      v21 = a4 - 8 + 8 * (*((unsigned int *)v8 + 11) - (unsigned __int64)(*((_DWORD *)v8 + 13) & 0x3FFFFFFF));
    v22 = v21;
  }
LABEL_14:
  if ( (v15 & 0x40000000) != 0 )
  {
    v23 = MiStartingOffset(v40, v12, a5);
    v16 = a2;
    v19 = a3;
    v18 = a4;
    v33 = v23 & (dword_140C69360 - 1);
    if ( v22 > v12 + 8 * (((unsigned __int64)(unsigned int)(dword_140C69360 - v33) >> 12) - 1) )
      v22 = v12 + 8 * (((unsigned __int64)(unsigned int)(dword_140C69360 - v33) >> 12) - 1);
    goto LABEL_16;
  }
LABEL_15:
  v23 = 0;
  v22 = v21;
LABEL_16:
  if ( v22 > (v12 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
    v22 = v12 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
  v24 = v22;
  if ( v22 > v12 )
  {
    do
    {
      v25 = *(_QWORD *)v24;
      if ( v24 >= 0xFFFFF6FB7DBED000uLL
        && v24 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v25 & 1) != 0
        && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v36 = *((_QWORD *)&Flink->Flink + ((v24 >> 3) & 0x1FF));
          v37 = v25 | 0x20;
          if ( (v36 & 0x20) == 0 )
            v37 = *(_QWORD *)v24;
          v25 = v37;
          if ( (v36 & 0x42) != 0 )
            v25 = v37 | 0x42;
        }
      }
      if ( v25 == v10 )
      {
        ++v13;
      }
      else if ( v24 == v22 )
      {
        v22 -= 8LL;
      }
      v24 -= 8LL;
    }
    while ( v24 > v12 );
    v16 = a2;
    v19 = a3;
  }
  v26 = v22 - v39 + 8;
  if ( v26 < v18 )
    v26 = v18;
  v27 = v12 & 0xFFFFFFFFFFFFF000uLL;
  if ( v26 >= (v12 & 0xFFFFFFFFFFFFF000uLL) )
    v27 = v26;
  if ( v19 || (*(_DWORD *)(v16 + 192) & 0x40) != 0 )
  {
    v28 = v12;
  }
  else
  {
    v28 = v27;
    if ( (*(_DWORD *)(v41 + 56) & 0x40000000) != 0 )
    {
      v34 = ((unsigned __int64)v23 >> 12) & ((unsigned __int64)(unsigned int)(dword_140C69360 - 1) >> 12);
      if ( v27 < v12 - 8 * v34 )
        v28 = v12 - 8 * v34;
    }
  }
  for ( i = v28; v28 < v12; v28 += 8LL )
  {
    if ( MI_READ_PTE_LOCK_FREE(v28) == v10 )
    {
      ++v13;
    }
    else if ( v28 == i )
    {
      i += 8LL;
    }
  }
  v9 = 0LL;
LABEL_33:
  v30 = v13 - 1;
  if ( a6 == -1 )
    v30 = v13;
  if ( v30 )
  {
    if ( a6 == -1 )
      v11 = 3;
    v9 = MiObtainFaultCharges(a1, v30, v11);
  }
  result = v9 + 1;
  if ( a6 == -1 )
    result = v9;
  *a7 = i;
  *a8 = v22;
  return result;
}
