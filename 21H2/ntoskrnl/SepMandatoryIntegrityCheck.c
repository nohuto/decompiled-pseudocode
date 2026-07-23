/*
 * XREFs of SepMandatoryIntegrityCheck @ 0x140359570
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14026AA50 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140358A30 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140372BC4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406922C0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExpAcquireResourceSharedLite @ 0x140356DB0 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceShared @ 0x14038F4D0 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14038FCBC (ExpAllocateOwnerEntryForLegacyShim.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepMandatoryIntegrityCheck(int *a1, __int64 a2, char a3, __int64 a4, char a5, char a6, __int64 a7)
{
  int v7; // eax
  char v8; // r15
  int v9; // ebx
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned int v14; // edx
  int v15; // eax
  unsigned __int16 *v16; // rsi
  __int64 v17; // rax
  _WORD **v18; // rax
  _WORD *v19; // r14
  int v20; // eax
  int v21; // eax
  unsigned __int16 v22; // bp
  unsigned __int16 v23; // r12
  int v24; // ecx
  int v25; // ecx
  int v26; // eax
  __int16 v27; // cx
  bool v28; // zf
  unsigned int v30; // edx
  unsigned int v31; // r14d
  char v32; // dl
  char v33; // si
  char v34; // r8
  char v35; // bp
  __int64 result; // rax
  __int64 v37; // rax
  char v38; // dl
  int v39; // esi
  int v40; // r11d
  int v41; // ecx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v43; // r14
  __int64 v44; // rcx
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *v46; // r8
  void *OwnerEntryForLegacyShim; // r12
  int v48; // ecx
  int v49; // r10d
  char v50; // [rsp+30h] [rbp-58h]
  char v51; // [rsp+38h] [rbp-50h]

  v7 = *(_DWORD *)(a4 + 212);
  v8 = 0;
  v9 = 0;
  v50 = 0;
  *(_DWORD *)(a7 + 8) = v7;
  if ( (v7 & 0xFFFFFFFD) != 0 )
  {
    if ( a3 )
      goto LABEL_47;
    v11 = *(_WORD *)(a2 + 2);
    if ( (v11 & 0x10) == 0 )
      goto LABEL_47;
    if ( v11 < 0 )
    {
      v37 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v37 )
        goto LABEL_47;
      v12 = a2 + v37;
    }
    else
    {
      v12 = *(_QWORD *)(a2 + 24);
    }
    if ( v12 )
    {
      v13 = v12 + 8;
      v14 = 0;
      if ( *(_WORD *)(v12 + 4) )
      {
        while ( *(_BYTE *)v13 != 17 )
        {
          ++v14;
          v13 += *(unsigned __int16 *)(v13 + 2);
          if ( v14 >= *(unsigned __int16 *)(v12 + 4) )
            goto LABEL_47;
        }
        if ( (*(_BYTE *)(v13 + 1) & 8) == 0 )
        {
          v15 = *(_DWORD *)(v13 + 4);
          v16 = (unsigned __int16 *)(v13 + 8);
          v51 = v15;
LABEL_11:
          if ( a5 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            v43 = *(_QWORD *)(a4 + 48);
            v44 = *(unsigned __int16 *)(v43 + 26);
            if ( (v44 & 0x41) == 1 )
              KeBugCheckEx(0x1C6u, 0xFuLL, v43, 0LL, 0LL);
            LOWORD(v44) = *(_WORD *)(v43 + 26) & 1;
            if ( (_WORD)v44 )
            {
              CurrentIrql = KeGetCurrentIrql();
              v46 = KeGetCurrentThread();
              if ( CurrentIrql > 1u )
                KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
              if ( (v46->ApcState.InProgressFlags & 2) != 0 )
                KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
              if ( !CurrentIrql && (v46->MiscFlags & 0x400) == 0 && !v46->WaitBlock[3].SpareLong )
                KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
            }
            if ( (_WORD)v44 )
            {
              OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(v44);
              if ( !(unsigned __int8)ExAcquireFastResourceShared(v43, (ULONG_PTR)OwnerEntryForLegacyShim) )
                ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
            }
            else
            {
              ExpAcquireResourceSharedLite(*(_QWORD *)(a4 + 48), 1);
            }
          }
          v17 = *(unsigned int *)(a4 + 208);
          if ( (_DWORD)v17 == -1 || (v18 = (_WORD **)(*(_QWORD *)(a4 + 152) + 16 * v17)) == 0LL )
            v19 = SeUntrustedMandatorySid;
          else
            v19 = *v18;
          if ( a6 )
            v19 = SepDefaultMandatorySid;
          if ( a5 )
          {
            ExReleaseResourceLite(*(PERESOURCE *)(a4 + 48));
            KeLeaveCriticalRegion();
          }
          v20 = *((unsigned __int8 *)v16 + 1);
          if ( (_BYTE)v20 )
            v21 = *(_DWORD *)&v16[2 * (v20 - 1) + 4];
          else
            v21 = 0;
          *(_DWORD *)(a7 + 12) = v21;
          v22 = *v16;
          v23 = *v19;
          if ( *v16 == *v19 && !memcmp(v16, v19, 4 * ((unsigned __int64)*v16 >> 8) + 8) )
            goto LABEL_50;
          v24 = *(_DWORD *)(v19 + 1);
          if ( !v24 )
            v24 = (unsigned __int16)v19[3] - 4096;
          if ( v24 )
            goto LABEL_92;
          v25 = *(_DWORD *)(v16 + 1);
          if ( !v25 )
            v25 = v16[3] - 4096;
          if ( v25 )
          {
LABEL_92:
            v34 = 0;
            v31 = -1073741811;
            v35 = 0;
LABEL_45:
            result = v31;
            *(_BYTE *)(a7 + 4) = v35;
            *(_DWORD *)a7 = v9;
            *(_BYTE *)(a7 + 5) = v8;
            *(_BYTE *)(a7 + 6) = v34;
            return result;
          }
          LOWORD(v26) = HIBYTE(v23);
          v27 = HIBYTE(v22);
          if ( v23 == v22
            && (v26 = memcmp(v19, v16, 4LL * HIBYTE(v23) + 8),
                LOBYTE(v27) = HIBYTE(v22),
                v28 = v26 == 0,
                LOBYTE(v26) = HIBYTE(v23),
                v28) )
          {
LABEL_50:
            v31 = 0;
          }
          else
          {
            if ( (_BYTE)v26 )
            {
              v30 = *(_DWORD *)&v19[2 * (unsigned __int8)v26 + 2];
              v31 = 0;
            }
            else
            {
              v31 = 0;
              v30 = 0;
            }
            if ( (_BYTE)v27 && v30 < *(_DWORD *)&v16[2 * (unsigned __int8)v27 + 2] )
            {
              v32 = 0;
LABEL_38:
              if ( (*(_DWORD *)(a7 + 8) & 1) != 0 && (v8 = 1, v9 = *a1 | ~*a1 & a1[2] | 0x120000, v32) )
              {
                v33 = 1;
                v50 = 1;
                v9 |= a1[3] | 0x11FFFFF;
              }
              else
              {
                v33 = 0;
              }
              v34 = v8;
              if ( v32 )
              {
                v35 = v50;
              }
              else
              {
                v38 = 0;
                if ( (v51 & 2) == 0 )
                  v38 = v8;
                if ( (v51 & 4) != 0 )
                  v34 = 0;
                v35 = 0;
                if ( (v51 & 1) == 0 )
                  v35 = v33;
                if ( (v51 & 2) != 0 )
                {
                  v39 = 0;
                  if ( v35 )
                    v39 = a1[1] | 0x10D0000;
                  v40 = *a1;
                  if ( v34 )
                    v39 |= ~v40 & a1[2] | 0x100000;
                  v9 &= v39 | ~(v40 | 0x20000);
                }
                if ( (v51 & 4) != 0 )
                {
                  v48 = 0;
                  if ( v35 )
                    v48 = a1[1] | 0x10D0000;
                  v49 = *a1;
                  if ( v38 )
                    v48 |= v49 | 0x20000;
                  v9 &= ~(~v48 & (~v49 & a1[2] | 0x100000));
                }
                v8 = v38;
                if ( (v51 & 1) != 0 )
                {
                  v41 = 0;
                  if ( v34 )
                    v41 = ~*a1 & a1[2] | 0x100000;
                  if ( v38 )
                    v41 |= *a1 | 0x20000;
                  v9 &= ~(~v41 & (a1[1] | 0x10D0000));
                }
              }
              if ( (*(_QWORD *)(a4 + 72) & 0x100000000LL) != 0 )
                v9 |= 0x80000u;
              goto LABEL_45;
            }
          }
          v32 = 1;
          goto LABEL_38;
        }
      }
    }
LABEL_47:
    v16 = (unsigned __int16 *)SepDefaultMandatorySid;
    v51 = 1;
    goto LABEL_11;
  }
  *(_DWORD *)a7 = a1[3];
  result = 0LL;
  *(_WORD *)(a7 + 4) = 257;
  *(_BYTE *)(a7 + 6) = 1;
  return result;
}
