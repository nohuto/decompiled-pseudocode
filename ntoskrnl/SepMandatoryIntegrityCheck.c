/*
 * XREFs of SepMandatoryIntegrityCheck @ 0x140263A50
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140206FC0 (SepCommonAccessCheckEx.c)
 *     SeAccessCheckWithHint @ 0x1402653A0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14033BB40 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x14025DED0 (ExpAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExpReleaseResourceForThreadLite @ 0x14033ABF0 (ExpReleaseResourceForThreadLite.c)
 *     ExpFastResourceLegacyAcquireShared @ 0x1403C33D4 (ExpFastResourceLegacyAcquireShared.c)
 *     ExpFastResourceLegacyRelease @ 0x1403C5290 (ExpFastResourceLegacyRelease.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall SepMandatoryIntegrityCheck(_DWORD *a1, __int64 a2, char a3, __int64 a4, char a5, __int64 a6)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v10; // edi
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // edx
  unsigned __int16 *v16; // rcx
  struct _KTHREAD *v17; // rax
  ULONG_PTR v18; // r10
  __int16 v19; // cx
  __int16 v20; // ax
  unsigned __int8 v21; // cl
  struct _KTHREAD *v22; // rdx
  int v23; // eax
  unsigned __int8 v24; // dl
  struct _KTHREAD *v25; // r8
  __int64 v26; // rax
  __int16 **v27; // rax
  __int16 *v28; // r13
  ULONG_PTR v29; // r8
  __int16 v30; // cx
  __int16 v31; // ax
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 v34; // al
  struct _KTHREAD *v35; // rcx
  unsigned __int16 *v36; // r9
  int v37; // eax
  int v38; // eax
  __int16 v39; // cx
  unsigned __int16 v40; // r12
  __int16 v41; // bp
  __int16 v42; // si
  unsigned int v43; // edx
  char v44; // dl
  char v45; // r9
  char v46; // r8
  char v47; // al
  char v48; // r9
  char v49; // r10
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  __int64 result; // rax
  char v54; // [rsp+30h] [rbp-68h]
  char v55; // [rsp+34h] [rbp-64h]
  char v56; // [rsp+38h] [rbp-60h]
  __int16 v57; // [rsp+3Ch] [rbp-5Ch]
  char v58; // [rsp+40h] [rbp-58h]
  unsigned __int16 *Buf1; // [rsp+48h] [rbp-50h]

  v6 = *(_DWORD *)(a4 + 212);
  v7 = 0;
  v56 = 0;
  v10 = 0;
  v55 = 0;
  *(_DWORD *)(a6 + 8) = v6;
  if ( (v6 & 0xFFFFFFFD) != 0 )
  {
    if ( a3 )
      goto LABEL_12;
    v11 = *(_WORD *)(a2 + 2);
    if ( (v11 & 0x10) == 0 )
      goto LABEL_12;
    if ( v11 >= 0 )
    {
      v13 = *(_QWORD *)(a2 + 24);
    }
    else
    {
      v12 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v12 )
        goto LABEL_12;
      v13 = a2 + v12;
    }
    if ( v13 )
    {
      v14 = v13 + 8;
      v15 = 0;
      if ( *(_WORD *)(v13 + 4) )
      {
        while ( *(_BYTE *)v14 != 17 )
        {
          ++v15;
          v14 += *(unsigned __int16 *)(v14 + 2);
          if ( v15 >= *(unsigned __int16 *)(v13 + 4) )
            goto LABEL_12;
        }
        if ( (*(_BYTE *)(v14 + 1) & 8) == 0 )
        {
          v23 = *(_DWORD *)(v14 + 4);
          v16 = (unsigned __int16 *)(v14 + 8);
          v58 = v23;
LABEL_13:
          Buf1 = v16;
          if ( !a5 )
          {
LABEL_36:
            v26 = *(unsigned int *)(a4 + 208);
            if ( (_DWORD)v26 == -1 || (v27 = (__int16 **)(*(_QWORD *)(a4 + 152) + 16 * v26)) == 0LL )
              v28 = (__int16 *)SeUntrustedMandatorySid;
            else
              v28 = *v27;
            if ( !a5 )
            {
LABEL_59:
              v36 = Buf1;
              v37 = *((unsigned __int8 *)Buf1 + 1);
              if ( (_BYTE)v37 )
                v38 = *(_DWORD *)&Buf1[2 * (v37 - 1) + 4];
              else
                v38 = 0;
              *(_DWORD *)(a6 + 12) = v38;
              v39 = *v28;
              v40 = *Buf1;
              v41 = HIBYTE(*v28);
              v42 = HIBYTE(*Buf1);
              v57 = *v28;
              if ( *Buf1 == *v28 )
              {
                if ( !memcmp(Buf1, v28, 4 * ((unsigned __int64)*Buf1 >> 8) + 8) )
                  goto LABEL_78;
                v39 = v57;
                v36 = Buf1;
              }
              if ( *(_DWORD *)(v28 + 1) || v28[3] != 4096 || *(_DWORD *)(v36 + 1) || v36[3] != 4096 )
              {
                v45 = 0;
                v7 = -1073741811;
LABEL_108:
                *(_BYTE *)(a6 + 4) = v56;
                *(_BYTE *)(a6 + 5) = v55;
                result = v7;
                *(_DWORD *)a6 = v10;
                *(_BYTE *)(a6 + 6) = v45;
                return result;
              }
              if ( v39 == v40 )
              {
                if ( !memcmp(v28, v36, 4LL * (unsigned __int8)v41 + 8) )
                  goto LABEL_78;
                v36 = Buf1;
              }
              if ( (_BYTE)v41 )
                v43 = *(_DWORD *)&v28[2 * (unsigned __int8)v41 + 2];
              else
                v43 = 0;
              if ( (_BYTE)v42 && v43 < *(_DWORD *)&v36[2 * (unsigned __int8)v42 + 2] )
              {
                v44 = 0;
                goto LABEL_79;
              }
LABEL_78:
              v44 = 1;
LABEL_79:
              if ( (*(_DWORD *)(a6 + 8) & 1) != 0 )
              {
                v45 = 1;
                v55 = 1;
                v10 = *a1 | ~*a1 & a1[2] | 0x120000;
                if ( v44 )
                {
                  v56 = 1;
                  v10 |= a1[3] | 0x11FFFFF;
                  v54 = 1;
                  goto LABEL_104;
                }
              }
              else
              {
                v45 = 0;
              }
              v46 = v45;
              v47 = v45;
              if ( v44 )
                goto LABEL_105;
              v48 = 0;
              v49 = 0;
              if ( (v58 & 2) == 0 )
                v48 = v47;
              v55 = v48;
              if ( (v58 & 4) == 0 )
                v49 = v46;
              v54 = v49;
              v56 = 0;
              if ( (v58 & 2) != 0 )
              {
                if ( v49 )
                  v50 = ~*a1 & a1[2] | 0x100000;
                else
                  v50 = 0;
                v10 &= v50 | ~(*a1 | 0x20000);
              }
              if ( (v58 & 4) != 0 )
              {
                if ( v48 )
                  v51 = *a1 | 0x20000;
                else
                  v51 = 0;
                v10 &= ~(~v51 & (a1[2] & ~*a1 | 0x100000));
              }
              if ( (v58 & 1) != 0 )
              {
                v52 = 0;
                if ( v49 )
                  v52 = a1[2] & ~*a1 | 0x100000;
                if ( v48 )
                  v52 |= *a1 | 0x20000;
                v55 = v48;
                v54 = v49;
                v10 &= ~(~v52 & (a1[1] | 0x10D0000));
              }
LABEL_104:
              v45 = v54;
LABEL_105:
              if ( _bittest64((const signed __int64 *)(a4 + 72), 0x20u) )
                v10 |= 0x80000u;
              goto LABEL_108;
            }
            v29 = *(_QWORD *)(a4 + 48);
            v30 = *(_WORD *)(v29 + 26);
            v31 = v30 & 0x41;
            if ( FeatureFastResource2 )
            {
              if ( v31 != 1 )
              {
                if ( (v30 & 1) == 0 )
                  goto LABEL_57;
                CurrentIrql = KeGetCurrentIrql();
                CurrentThread = KeGetCurrentThread();
                if ( CurrentIrql > 2u )
                  KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
                if ( CurrentIrql || (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->WaitBlock[3].SpareLong )
                {
                  if ( (v30 & 1) != 0 )
                  {
LABEL_49:
                    ExpFastResourceLegacyRelease(*(_QWORD *)(a4 + 48));
LABEL_58:
                    KeLeaveCriticalRegion();
                    goto LABEL_59;
                  }
LABEL_57:
                  ExpReleaseResourceForThreadLite(*(_QWORD *)(a4 + 48), (ULONG_PTR)KeGetCurrentThread());
                  goto LABEL_58;
                }
LABEL_117:
                KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
              }
            }
            else if ( v31 != 1 )
            {
              if ( (v30 & 1) == 0 )
                goto LABEL_57;
              v34 = KeGetCurrentIrql();
              v35 = KeGetCurrentThread();
              if ( v34 > 2u )
                KeBugCheckEx(0x1C6u, 0LL, v34, 2uLL, 0LL);
              if ( v34 || (v35->MiscFlags & 0x400) != 0 || v35->WaitBlock[3].SpareLong )
                goto LABEL_49;
              goto LABEL_117;
            }
            KeBugCheckEx(0x1C6u, 0xFuLL, v29, 0LL, 0LL);
          }
          v17 = KeGetCurrentThread();
          --v17->KernelApcDisable;
          v18 = *(_QWORD *)(a4 + 48);
          v19 = *(_WORD *)(v18 + 26);
          v20 = v19 & 0x41;
          if ( FeatureFastResource2 )
          {
            if ( v20 != 1 )
            {
              if ( (v19 & 1) == 0 )
                goto LABEL_35;
              v21 = KeGetCurrentIrql();
              v22 = KeGetCurrentThread();
              if ( v21 > 1u )
                KeBugCheckEx(0x1C6u, 0LL, v21, 1uLL, 0LL);
              if ( (v22->ApcState.InProgressFlags & 2) == 0 )
              {
                if ( !v21 && (v22->MiscFlags & 0x400) == 0 && !v22->WaitBlock[3].SpareLong )
                  goto LABEL_117;
                v19 = *(_WORD *)(v18 + 26);
                goto LABEL_33;
              }
              goto LABEL_113;
            }
          }
          else if ( v20 != 1 )
          {
            if ( (v19 & 1) == 0 )
              goto LABEL_35;
            v24 = KeGetCurrentIrql();
            v25 = KeGetCurrentThread();
            if ( v24 > 1u )
              KeBugCheckEx(0x1C6u, 0LL, v24, 1uLL, 0LL);
            if ( (v25->ApcState.InProgressFlags & 2) == 0 )
            {
              if ( !v24 && (v25->MiscFlags & 0x400) == 0 && !v25->WaitBlock[3].SpareLong )
                goto LABEL_117;
LABEL_33:
              if ( (v19 & 1) != 0 )
              {
                ExpFastResourceLegacyAcquireShared(*(_QWORD *)(a4 + 48));
                goto LABEL_36;
              }
LABEL_35:
              ExpAcquireResourceSharedLite(*(_QWORD *)(a4 + 48), 1);
              goto LABEL_36;
            }
LABEL_113:
            KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
          }
          KeBugCheckEx(0x1C6u, 0xFuLL, v18, 0LL, 0LL);
        }
      }
    }
LABEL_12:
    v16 = (unsigned __int16 *)SepDefaultMandatorySid;
    v58 = 1;
    goto LABEL_13;
  }
  *(_DWORD *)a6 = a1[3];
  result = 0LL;
  *(_WORD *)(a6 + 4) = 257;
  *(_BYTE *)(a6 + 6) = 1;
  return result;
}
