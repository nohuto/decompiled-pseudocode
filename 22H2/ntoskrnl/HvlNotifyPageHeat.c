/*
 * XREFs of HvlNotifyPageHeat @ 0x1405C95C0
 * Callers:
 *     MiNotifyPageHeat @ 0x14055FD04 (MiNotifyPageHeat.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1404FA974 (HvlpHvToNtStatus.c)
 *     KeWaitPhysicalFaultCompletion @ 0x140523E9C (KeWaitPhysicalFaultCompletion.c)
 */

__int64 __fastcall HvlNotifyPageHeat(int a1, char a2, unsigned int a3, __int64 a4)
{
  int v4; // r12d
  __int64 v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // r15
  _QWORD *v10; // r14
  int v11; // edi
  _QWORD *v12; // rax
  unsigned int v13; // edx
  _QWORD *v14; // rcx
  unsigned int v15; // r10d
  _QWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r11
  __int64 v20; // rax
  __int64 v21; // r9
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  unsigned __int16 v24; // bx
  _QWORD *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  unsigned int v28; // edi
  __int64 *v29; // rbx
  __int64 v30; // [rsp+20h] [rbp-60h]
  __int16 v31; // [rsp+34h] [rbp-4Ch]
  _QWORD *v32; // [rsp+38h] [rbp-48h]
  _OWORD v33[2]; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v34[2]; // [rsp+60h] [rbp-20h] BYREF

  v4 = 0;
  memset(v33, 0, sizeof(v33));
  memset(v34, 0, sizeof(v34));
  if ( !a1 )
  {
    if ( (HvlEnlightenments & 0x400000) != 0 )
    {
      v7 = 0LL;
      goto LABEL_9;
    }
    return 3221225659LL;
  }
  if ( a1 != 1 )
    return 3221225485LL;
  if ( (HvlEnlightenments & 0x200000) == 0 )
    return 3221225659LL;
  v7 = 1LL;
LABEL_9:
  v8 = 0;
  if ( a2 && (HvlpFlags & 0x200000) != 0 )
  {
    v30 = a4;
    v9 = a4;
    v10 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v34, 2, 0LL, 0LL);
    v11 = 32774;
  }
  else
  {
    v9 = 0LL;
    v30 = 0LL;
    v10 = 0LL;
    v11 = 32771;
  }
  v12 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v33, 1, 0LL, 0LL);
  v13 = a3;
  v14 = v12;
  v32 = v12;
  *v12 = v7;
  do
  {
    v15 = 0;
    if ( v13 >= 0x1FF )
      v13 = 511;
    if ( v13 )
    {
      v16 = v14 + 1;
      do
      {
        v17 = v15 + v4;
        *v16 = 0LL;
        v18 = *(_QWORD *)(a4 + 8 * v17) & 0x3FFLL;
        v19 = (unsigned int)v17;
        *v16 = v18;
        v20 = *(_QWORD *)(a4 + 8 * v17);
        if ( (v20 & 0xC00) != 0 )
        {
          v21 = v18 | 0x800;
          *v16 = v21;
          v22 = v21 | *(_QWORD *)(a4 + 8 * v19) & 0xFFFFFFFFFFE00000uLL;
          *v16 = v22;
          if ( (*(_DWORD *)(a4 + 8 * v19) & 0xC00) == 0x800LL )
            *v16 = v22 | 0x1000;
        }
        else
        {
          *v16 = v18 | v20 & 0xFFFFFFFFFFFFF000uLL;
        }
        ++v15;
        ++v16;
      }
      while ( v15 < v13 );
      v9 = v30;
    }
    v23 = HvcallInitiateHypercall(v11);
    v31 = WORD2(v23);
    v24 = v23;
    if ( (_WORD)v23 )
      break;
    if ( v10 && (v23 & 0xFFF00000000LL) != 0 )
    {
      v25 = v10;
      v26 = WORD2(v23) & 0xFFF;
      do
      {
        if ( *v25 )
        {
          v27 = v8++;
          *(_QWORD *)(v9 + 8 * v27) = *v25;
        }
        ++v25;
        --v26;
      }
      while ( v26 );
    }
    v14 = v32;
    v4 += v31 & 0xFFF;
    v13 = a3 - v4;
  }
  while ( a3 != v4 );
  HvlpReleaseHypercallPage((__int64)v33);
  if ( v10 )
    HvlpReleaseHypercallPage((__int64)v34);
  if ( v24 )
    v28 = HvlpHvToNtStatus(v24);
  else
    v28 = 0;
  if ( v8 )
  {
    v29 = (__int64 *)(v9 + 8LL * v8);
    do
    {
      KeWaitPhysicalFaultCompletion(*--v29);
      --v8;
    }
    while ( v8 );
  }
  return v28;
}
