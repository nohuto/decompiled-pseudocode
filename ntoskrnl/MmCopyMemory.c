/*
 * XREFs of MmCopyMemory @ 0x1402A1CE0
 * Callers:
 *     <none>
 * Callees:
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiGetEffectivePagePriorityThread @ 0x14028A260 (MiGetEffectivePagePriorityThread.c)
 *     MiTranslatePageForCopy @ 0x1402A1FD4 (MiTranslatePageForCopy.c)
 *     MiCopySinglePage @ 0x1402A2358 (MiCopySinglePage.c)
 *     MiUnlockSystemVa @ 0x1402A2820 (MiUnlockSystemVa.c)
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiPrefetchVirtualMemory @ 0x140363970 (MiPrefetchVirtualMemory.c)
 *     MiGetSessionVm @ 0x14036C17C (MiGetSessionVm.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwReadVirtualMemoryEx @ 0x1404151B0 (ZwReadVirtualMemoryEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiCheckPhysicalAddressRange @ 0x1406415CC (MiCheckPhysicalAddressRange.c)
 */

__int64 __fastcall MmCopyMemory(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4, _QWORD *a5)
{
  unsigned __int64 v9; // r14
  __int64 *v10; // rax
  int v11; // ecx
  int v12; // edi
  unsigned __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rax
  int v17; // r8d
  __int64 v18; // r12
  char EffectivePagePriorityThread; // al
  unsigned int v21; // edi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 SessionVm; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C0h]
  __int64 *v32; // [rsp+48h] [rbp-B8h]
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+58h] [rbp-A8h]
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-90h]
  _KPROCESS *Process; // [rsp+78h] [rbp-88h]
  __int64 *v39; // [rsp+80h] [rbp-80h]
  _QWORD *v40; // [rsp+88h] [rbp-78h]
  __int128 v41; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v42[16]; // [rsp+A0h] [rbp-60h] BYREF

  v31 = a1;
  v40 = a5;
  memset(v42, 0, sizeof(v42));
  v34 = 0LL;
  *a5 = 0LL;
  if ( !a4 || (a4 & 0xFFFFFFFC) != 0 || ((a4 - 1) & a4) != 0 || KeGetCurrentIrql() > 1u )
    return 3221225714LL;
  if ( (a4 & 1) == 0 )
  {
    if ( a3 + a2 > a2 )
    {
      if ( a2 <= 0x7FFFFFFEFFFFLL )
      {
        if ( a3 + a2 <= 0x7FFFFFFEFFFFLL )
          return ZwReadVirtualMemoryEx(-1LL, a2, a1, a3, a5, 1);
      }
      else if ( a2 >= 0xFFFF800000000000uLL )
      {
        goto LABEL_9;
      }
    }
    return 3221225496LL;
  }
  if ( !(unsigned int)MiCheckPhysicalAddressRange(a2, a3) )
    return 3221225496LL;
LABEL_9:
  v9 = ((a2 & 0xFFF) + a3 + 4095) >> 12;
  if ( v9 >= 0x100000000LL )
    return 3221225713LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v10 = (__int64 *)MiReservePtes(&qword_140C695C0, (unsigned int)v9);
  v11 = a4 & 1;
  v12 = 0;
  v39 = v10;
  v13 = a2 & 0xFFF;
  v32 = v10;
  v14 = (__int64)v10;
  v15 = 4096 - v13;
  if ( 4096 - v13 > a3 )
    v15 = a3;
  if ( (a4 & 1) != 0 )
    v16 = a2 >> 12;
  else
    v16 = -1LL;
  v30 = v16;
  if ( a3 )
  {
    while ( 1 )
    {
      v33 = 0LL;
      v35 = 0LL;
      if ( v11 )
        break;
      v12 = MiTranslatePageForCopy(a2, v42, &v30, &v33, &v35);
      if ( v12 >= 0 )
      {
        v36 = v42[3];
        if ( v12 == 273 )
        {
          MiUnlockSystemVa(v42);
          v12 = 0;
          v28 = v15;
          if ( v15 )
          {
            v29 = v31 - v13;
            do
            {
              *(_BYTE *)(v29 + v13) = *((_BYTE *)&v35 + (v13 & 7));
              ++v13;
              --v28;
            }
            while ( v28 );
          }
        }
        else
        {
          v14 = (__int64)v32;
LABEL_19:
          v17 = v13;
          v18 = v30;
          v12 = MiCopySinglePage(v31, v30, v17, v15, v14, a4);
          if ( v36 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(48 * v18 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v33 )
              MiUnlockProtoPoolPage(v33, 2u);
            MiUnlockSystemVa(v42);
          }
          if ( v12 < 0 )
            goto LABEL_29;
        }
        v34 += v15;
        a3 -= v15;
        v31 += v15;
        a2 += v15;
        ++v30;
        v14 = (__int64)v32;
        v15 = a3;
        if ( a3 > 0x1000 )
          v15 = 4096LL;
        v13 = 0LL;
        if ( v32 )
          v14 = (__int64)++v32;
        goto LABEL_28;
      }
      if ( v12 != -1073741608 )
        goto LABEL_29;
      v41 = 0LL;
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
      *(_QWORD *)&v41 = a2;
      v33 = 1LL;
      v21 = EffectivePagePriorityThread & 7 | 0x80B8;
      v22 = a3;
      if ( a3 > 0x200000 - (a2 & 0x1FFFFF) )
        v22 = 0x200000 - (a2 & 0x1FFFFF);
      *((_QWORD *)&v41 + 1) = v22;
      if ( (unsigned int)MiGetSystemRegionType(a2) == 1 )
      {
        if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
        {
          v12 = -1073741819;
          goto LABEL_29;
        }
        SessionVm = MiGetSessionVm(v24, v23, v25, v26);
      }
      else
      {
        SessionVm = v33;
      }
      if ( a2 >= qword_140C6A1D8 && a2 <= qword_140C66CF0 )
      {
        v12 = -1073741585;
        goto LABEL_29;
      }
      v12 = MiPrefetchVirtualMemory(1LL, &v41, SessionVm, v21);
      if ( v12 < 0 )
        goto LABEL_29;
      v14 = (__int64)v32;
LABEL_28:
      if ( !a3 )
        goto LABEL_29;
      v11 = a4 & 1;
    }
    v36 = 0LL;
    goto LABEL_19;
  }
LABEL_29:
  if ( v39 )
    MiReleasePtes((__int64)&qword_140C695C0, v39, v9);
  *v40 += v34;
  return (unsigned int)v12;
}
