/*
 * XREFs of MmQueryBadAddresses @ 0x140A2D108
 * Callers:
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiGetListOfPendingBadPages @ 0x140627BD8 (MiGetListOfPendingBadPages.c)
 *     MiUpdateBadPfnIdentity @ 0x140628ED0 (MiUpdateBadPfnIdentity.c)
 *     MiLocateSharedPageViews @ 0x1406340C0 (MiLocateSharedPageViews.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     MiDeleteTrimViewInfoList @ 0x14085BDD4 (MiDeleteTrimViewInfoList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmQueryBadAddresses(
        _KPROCESS *BugCheckParameter1,
        KPROCESSOR_MODE a2,
        int a3,
        unsigned __int64 *a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  _QWORD *v9; // rsi
  unsigned __int64 v10; // rdi
  int ListOfPendingBadPages; // ebx
  _QWORD *Pool; // rax
  unsigned __int64 v13; // rdx
  _QWORD *v14; // r14
  __int64 v15; // rax
  unsigned __int64 *v16; // r13
  unsigned int v17; // r12d
  unsigned __int64 *v18; // rdi
  int Flink; // r10d
  unsigned __int64 v20; // r13
  int v21; // r11d
  unsigned __int64 v22; // r9
  __int64 v23; // r14
  __int64 v24; // rdx
  _QWORD *v25; // rdx
  _QWORD *j; // rcx
  PVOID v27; // rcx
  __int64 v28; // rax
  unsigned __int64 i; // [rsp+28h] [rbp-F0h]
  unsigned __int64 *v30; // [rsp+30h] [rbp-E8h]
  int v31; // [rsp+40h] [rbp-D8h]
  int v32; // [rsp+44h] [rbp-D4h]
  PVOID P[2]; // [rsp+50h] [rbp-C8h] BYREF
  int v34; // [rsp+60h] [rbp-B8h]
  int v35; // [rsp+64h] [rbp-B4h]
  unsigned __int64 v36; // [rsp+68h] [rbp-B0h]
  int v37; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v38; // [rsp+78h] [rbp-A0h]
  __int64 v39; // [rsp+80h] [rbp-98h] BYREF
  PVOID v40; // [rsp+88h] [rbp-90h]
  unsigned __int64 v41; // [rsp+90h] [rbp-88h]
  _QWORD *v42; // [rsp+98h] [rbp-80h]
  $115DCDF994C6370D29323EAB0E0C9502 v43; // [rsp+A0h] [rbp-78h] BYREF
  unsigned __int64 v45; // [rsp+140h] [rbp+28h]

  v42 = a6;
  v39 = 0LL;
  LODWORD(v40) = 0;
  memset(&v43, 0, sizeof(v43));
  v35 = 0;
  v36 = 0LL;
  v34 = 0;
  if ( a3 == 13 && !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a2) )
    return 3221225569LL;
  P[1] = P;
  P[0] = P;
  v32 = 0;
  v9 = 0LL;
  v10 = 0LL;
  ListOfPendingBadPages = 0;
  if ( qword_140C66F88 )
  {
    if ( KeGetCurrentThread()->ApcState.Process != BugCheckParameter1 )
    {
      KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v43);
      v32 = 1;
    }
    v45 = a5 >> 4;
    v41 = v45;
    ListOfPendingBadPages = MiGetListOfPendingBadPages((__int64)P);
    if ( v34 < 0 )
    {
      ListOfPendingBadPages = v34;
      goto LABEL_51;
    }
    if ( !v36 )
    {
      ListOfPendingBadPages = 0;
      goto LABEL_51;
    }
    if ( v36 <= 0xAAAAAAAAAAAAAAALL )
    {
      Pool = MiAllocatePool(64, 24 * v36, 0x6C42694Du);
      v9 = Pool;
      if ( Pool )
      {
        v30 = Pool;
        v13 = 0LL;
        for ( i = 0LL; ; v13 = i )
        {
          v14 = P[0];
          if ( P[0] == P )
            break;
          v15 = *(_QWORD *)P[0];
          if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v15 + 8) != P[0] )
LABEL_60:
            __fastfail(3u);
          P[0] = *(PVOID *)P[0];
          *(_QWORD *)(v15 + 8) = P;
          v16 = (unsigned __int64 *)v14[3];
          v17 = 0;
          v18 = v30;
          while ( (unsigned __int64)v17 < v14[2] )
          {
            if ( (unsigned int)MiUpdateBadPfnIdentity(*v16, v18) )
            {
              ++i;
              v18 += 3;
            }
            ++v16;
            ++v17;
          }
          v30 = v18;
          ExFreePoolWithTag(v14, 0);
          v10 = 0LL;
        }
        Flink = (int)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
        v31 = Flink;
        v37 = Flink;
        v20 = 0LL;
        v21 = a3;
        while ( 1 )
        {
          v38 = v20;
          if ( v20 >= v13 )
            goto LABEL_51;
          v22 = v9[3 * v20 + 1];
          if ( v22 != -1LL && (v21 == 13 || (v9[3 * v20] & 0xF) != 0xE) )
            break;
LABEL_50:
          ++v20;
        }
        v23 = (v9[3 * v20] >> 7) & 1LL;
        v24 = v9[3 * v20] & 0xFLL;
        if ( v24 == 14 )
        {
          if ( v10 >= v45 || !v45 )
            goto LABEL_34;
          *a4 = v22;
          a4[1] = v23 | 2;
        }
        else
        {
          if ( (unsigned __int64)(v24 - 1) <= 1 || v24 == 8 )
          {
            LODWORD(v39) = Flink;
            if ( (int)MiLocateSharedPageViews(v22, (__int64)&v39) < 0 )
              goto LABEL_12;
            v25 = v40;
            for ( j = v40; j; j = (_QWORD *)*j )
            {
              if ( v10 < v45 && v45 )
              {
                *a4 = j[2];
                a4[1] = v23;
                a4 += 2;
              }
              ++v10;
            }
            MiDeleteTrimViewInfoList(v25);
            Flink = v31;
            v21 = a3;
            goto LABEL_49;
          }
          if ( Flink != ((v9[3 * v20] >> 9) & 0xFFFFFFFFFFFFLL) )
          {
LABEL_49:
            v13 = i;
            goto LABEL_50;
          }
          if ( v10 >= v45 || !v45 )
          {
LABEL_34:
            ++v10;
            goto LABEL_49;
          }
          *a4 = v9[3 * v20 + 2];
          a4[1] = v23;
        }
        a4 += 2;
        goto LABEL_34;
      }
    }
LABEL_12:
    ListOfPendingBadPages = -1073741670;
  }
LABEL_51:
  if ( v32 )
    KiUnstackDetachProcess(&v43);
  if ( ListOfPendingBadPages >= 0 && v42 )
    *v42 = 16 * v10;
  while ( 1 )
  {
    v27 = P[0];
    if ( P[0] == P )
      break;
    v28 = *(_QWORD *)P[0];
    if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v28 + 8) != P[0] )
      goto LABEL_60;
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v28 + 8) = P;
    ExFreePoolWithTag(v27, 0);
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)ListOfPendingBadPages;
}
