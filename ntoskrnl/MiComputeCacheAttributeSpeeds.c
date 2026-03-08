/*
 * XREFs of MiComputeCacheAttributeSpeeds @ 0x140811138
 * Callers:
 *     MiInitializeZeroEngines @ 0x140729A34 (MiInitializeZeroEngines.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiZeroEngineMemory @ 0x1402758F0 (MiZeroEngineMemory.c)
 *     MiInitializePageColorBase @ 0x14028B040 (MiInitializePageColorBase.c)
 *     MiGetNextPageColor @ 0x1402A6DC8 (MiGetNextPageColor.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiChangePageAttribute @ 0x14036CE40 (MiChangePageAttribute.c)
 *     MiLockAndInsertPageInFreeList @ 0x140387CB4 (MiLockAndInsertPageInFreeList.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiComputeCacheAttributeSpeeds(int *a1)
{
  char result; // al
  __int64 v3; // rcx
  __int64 v4; // r11
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // rdi
  unsigned int NextPageColor; // eax
  __int64 v11; // r11
  __int64 Page; // rax
  __int64 v13; // rsi
  __int64 v14; // r14
  unsigned __int64 *v15; // r8
  __int64 v16; // r11
  unsigned __int64 v17; // r10
  _QWORD *v18; // r9
  unsigned __int64 v19; // rax
  unsigned __int64 *v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 *v22; // r13
  int v23; // esi
  unsigned int v24; // r15d
  unsigned __int64 v25; // r12
  __int64 v26; // r13
  LARGE_INTEGER v27; // rbx
  void *v28; // rdi
  LARGE_INTEGER v29; // rax
  int v30; // edi
  unsigned __int64 *v31; // r13
  __int64 v32; // r14
  KIRQL v33; // al
  bool v34; // zf
  KIRQL v35; // bl
  int v36; // r10d
  _QWORD *v37; // r9
  __int64 v38; // r13
  int *v39; // r11
  __int64 v40; // rdi
  __int128 v41; // xmm1
  __int64 v42; // rcx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v50; // eax
  signed __int32 v51[8]; // [rsp+8h] [rbp-100h] BYREF
  int v52; // [rsp+28h] [rbp-E0h] BYREF
  int v53; // [rsp+2Ch] [rbp-DCh]
  __int64 v54; // [rsp+30h] [rbp-D8h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-D0h] BYREF
  LARGE_INTEGER v56; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 *v57; // [rsp+48h] [rbp-C0h]
  __int64 v58; // [rsp+50h] [rbp-B8h]
  __int64 v59; // [rsp+58h] [rbp-B0h]
  __int64 v60; // [rsp+60h] [rbp-A8h]
  _DWORD *v61; // [rsp+68h] [rbp-A0h]
  __int64 v62; // [rsp+70h] [rbp-98h]
  __int64 v63; // [rsp+78h] [rbp-90h]
  __int64 v64; // [rsp+80h] [rbp-88h]
  __int64 v65; // [rsp+88h] [rbp-80h]
  _QWORD v66[15]; // [rsp+90h] [rbp-78h] BYREF

  v61 = a1;
  LOBYTE(v52) = 0;
  *(_OWORD *)v66 = 0LL;
  memset(&v66[3], 0, 0x60uLL);
  result = byte_140C65818;
  if ( (byte_140C65818 & 1) != 0 )
    return result;
  v3 = *a1;
  v4 = *((_QWORD *)a1 + 21);
  result = -(byte_140C65818 & 4);
  v65 = v3;
  v5 = 2 - ((byte_140C65818 & 4) != 0);
  v6 = *(unsigned int *)(v4 + 56);
  v7 = (v3 + 3) << 6;
  v8 = qword_140C65720 + 376 * v6;
  v63 = v8;
  v64 = v7;
  if ( *(_QWORD *)(v8 + v7) )
    return result;
  v9 = 96 * v3;
  v59 = *(_QWORD *)(v8 + 368);
  MiInitializePageColorBase(0LL, v6 + 1, (__int64)v66);
  NextPageColor = MiGetNextPageColor((__int64)v66);
  Page = MiGetPage(v11, NextPageColor, 0);
  v60 = Page;
  if ( Page == -1 )
  {
    v13 = v5;
  }
  else
  {
    v13 = v5;
    v14 = 48 * Page - 0x220000000000LL;
    if ( 48 * Page != 0x220000000000LL )
    {
      if ( *(_BYTE *)(v14 + 34) >= 0x40u )
        MiChangePageAttribute(v14, 0, 0);
      v15 = &v66[7];
      v16 = 2LL;
      v62 = v5;
      v17 = *(_QWORD *)(v9 + v59 + 64) * *(unsigned int *)(v9 + v59 + 56);
      v18 = *(_QWORD **)(v9 + v59 + 80);
      do
      {
        v19 = (*v18 << 21) / v17;
        if ( v5 )
        {
          v20 = v15;
          v21 = v5;
          do
          {
            *v20 = v19;
            v20 += 4;
            --v21;
          }
          while ( v21 );
        }
        ++v18;
        v15 += 2;
        --v16;
      }
      while ( v16 );
      v53 = 1;
      if ( v5 )
      {
        v58 = v5;
        v22 = &v66[8];
        v23 = v53;
        do
        {
          LODWORD(v54) = 0;
          v57 = v22;
          do
          {
            v24 = v54;
            v25 = 0LL;
            v53 = 0;
            v26 = v60;
            do
            {
              PerformanceFrequency.QuadPart = 0LL;
              v27 = KeQueryPerformanceCounter(&PerformanceFrequency);
              if ( PerformanceFrequency.QuadPart != 10000000 )
                v27.QuadPart = 10000000 * v27.QuadPart / PerformanceFrequency.QuadPart;
              _InterlockedOr(v51, 0);
              MiChangePageAttribute(v14, v23, 0);
              v28 = (void *)MiMapPageInHyperSpaceWorker(v26, (unsigned __int8 *)&v52, 0x80000000);
              MiZeroEngineMemory(v61, v24, v28, 0x1000uLL);
              MiUnmapPageInHyperSpaceWorker((unsigned __int64)v28, v52);
              MiChangePageAttribute(v14, 0, 0);
              _InterlockedOr(v51, 0);
              v56.QuadPart = 0LL;
              v29 = KeQueryPerformanceCounter(&v56);
              if ( v56.QuadPart != 10000000 )
                v29.QuadPart = 10000000 * v29.QuadPart / v56.QuadPart;
              v30 = ++v53;
              if ( v29.QuadPart < (unsigned __int64)v27.QuadPart )
                v29 = v27;
              v25 += v29.QuadPart - v27.QuadPart;
            }
            while ( v25 < 0x1F4 );
            v31 = v57;
            *v57 = (v25 << 21) / (unsigned int)(v30 << 12);
            v22 = v31 + 2;
            v57 = v22;
            LODWORD(v54) = v24 + 1;
          }
          while ( (int)(v24 + 1) < 2 );
          ++v23;
          --v58;
        }
        while ( v58 );
        v13 = v62;
        v8 = v63;
        v7 = v64;
      }
      MiLockAndInsertPageInFreeList(v14);
      goto LABEL_27;
    }
  }
  v43 = 1LL;
  v44 = &v66[8];
  do
  {
    v45 = 2LL;
    v46 = MiUnmeasuredTimeToZeroOneLargePage[v43];
    do
    {
      *(v44 - 1) = v46;
      *v44 = -1LL;
      v44 += 2;
      --v45;
    }
    while ( v45 );
    ++v43;
  }
  while ( v43 <= v13 );
LABEL_27:
  v32 = v59;
  v33 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v59 + 48));
  v34 = *(_QWORD *)(v8 + v7) == 0LL;
  v35 = v33;
  LOBYTE(v52) = v33;
  if ( v34 )
  {
    v36 = 1;
    if ( v13 >= 1 )
    {
      v37 = &v66[8];
      v38 = 2 * v65;
      v39 = (int *)(v8 + 116);
      do
      {
        v40 = 2LL;
        v41 = *(_OWORD *)(v37 + 1);
        v42 = 32 * (v38 + (unsigned int)(v36 - 1));
        *(_OWORD *)(v42 + v8 + 176) = *(_OWORD *)(v37 - 1);
        *(_OWORD *)(v42 + v8 + 192) = v41;
        do
        {
          if ( *v37 < 9 * (*(v37 - 1) / 0xAuLL) )
            *v39 = v36;
          v37 += 2;
          --v40;
        }
        while ( v40 );
        ++v36;
        ++v39;
        --v13;
      }
      while ( v13 );
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v32 + 48));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v35 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v35 = v52;
      v50 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v52 + 1));
      v34 = (v50 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v50;
      if ( v34 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  result = v35;
  __writecr8(v35);
  return result;
}
