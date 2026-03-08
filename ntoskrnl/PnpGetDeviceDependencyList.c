/*
 * XREFs of PnpGetDeviceDependencyList @ 0x1409519F8
 * Callers:
 *     PiControlGetPropertyData @ 0x1406C44A0 (PiControlGetPropertyData.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140244A08 (RtlStringCchCopyExW.c)
 *     RtlStringCchLengthW @ 0x140247080 (RtlStringCchLengthW.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     PiListEntryToDependencyEdge @ 0x140394734 (PiListEntryToDependencyEdge.c)
 *     PiGetDependentList @ 0x1406819C8 (PiGetDependentList.c)
 *     PiGetProviderList @ 0x1406CB884 (PiGetProviderList.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406CB90C (PnpAcquireDependencyRelationsLock.c)
 *     PnpUnicodeStringToWstr @ 0x1406D07D4 (PnpUnicodeStringToWstr.c)
 *     PnpUnicodeStringToWstrFree @ 0x1406D08F4 (PnpUnicodeStringToWstrFree.c)
 */

__int64 __fastcall PnpGetDeviceDependencyList(__int64 a1, int a2, wchar_t *a3, unsigned int a4, unsigned int *a5)
{
  __int64 v5; // r15
  unsigned int v6; // esi
  int v7; // ebx
  int v8; // r13d
  size_t v9; // rdi
  wchar_t *v10; // r14
  __int64 *DependentList; // rax
  __int64 *v12; // r15
  __int64 *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r11
  __int64 v18; // r11
  _QWORD *v19; // r13
  _QWORD *v20; // r12
  unsigned __int16 *v21; // r12
  wchar_t *v22; // r15
  __int64 v23; // rax
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+30h] [rbp-38h] BYREF
  size_t pcchRemaining; // [rsp+38h] [rbp-30h] BYREF
  STRSAFE_PCNZWCH psz; // [rsp+40h] [rbp-28h] BYREF
  __int64 *v28; // [rsp+48h] [rbp-20h]
  _QWORD *v29; // [rsp+50h] [rbp-18h]
  __int64 *v30; // [rsp+58h] [rbp-10h]
  size_t pcchLength; // [rsp+B0h] [rbp+48h] BYREF
  int v32; // [rsp+B8h] [rbp+50h]
  wchar_t *v33; // [rsp+C0h] [rbp+58h]
  unsigned int v34; // [rsp+C8h] [rbp+60h]

  v34 = a4;
  v33 = a3;
  v32 = a2;
  v5 = *(_QWORD *)(a1 + 32);
  pcchLength = 0LL;
  v6 = 0;
  pcchRemaining = a4;
  v7 = 0;
  psz = 0LL;
  v8 = a2;
  v9 = a4;
  v10 = a3;
  ppszDestEnd = a3;
  PnpAcquireDependencyRelationsLock(0);
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      v7 = -1073741811;
      goto LABEL_34;
    }
    DependentList = PiGetDependentList(v5);
  }
  else
  {
    DependentList = PiGetProviderList(v5);
  }
  v12 = (__int64 *)*DependentList;
  v13 = DependentList;
  v28 = DependentList;
  if ( v12 != DependentList )
  {
    do
    {
      v14 = PiListEntryToDependencyEdge((__int64)v12, v8);
      v12 = (__int64 *)*v12;
      v30 = v12;
      if ( v8 )
        v15 = *(_QWORD *)(v14 + 40);
      else
        v15 = *(_QWORD *)(v14 + 32);
      v16 = *(_QWORD *)(v15 + 48);
      if ( v16 && (v17 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL)) != 0 && *(_QWORD *)(v17 + 48) )
      {
        v7 = RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)(v17 + 48), 0xC8uLL, &pcchLength);
        if ( v7 < 0 )
          goto LABEL_34;
        v6 += ++pcchLength;
        if ( pcchLength <= v9 )
        {
          v7 = RtlStringCchCopyExW(v10, v9, *(NTSTRSAFE_PCWSTR *)(v18 + 48), &ppszDestEnd, &pcchRemaining, 0x800u);
          if ( v7 < 0 )
            goto LABEL_34;
          v10 = ppszDestEnd + 1;
          v9 = pcchRemaining - 1;
          ++ppszDestEnd;
          --pcchRemaining;
        }
      }
      else
      {
        v19 = *(_QWORD **)(v15 + 56);
        v29 = (_QWORD *)(v15 + 56);
        if ( v19 != (_QWORD *)(v15 + 56) )
        {
          while ( 1 )
          {
            v20 = v19;
            v19 = (_QWORD *)*v19;
            v21 = (unsigned __int16 *)(v20 + 2);
            v7 = PnpUnicodeStringToWstr(&psz, 0LL, v21);
            if ( v7 < 0 )
              goto LABEL_34;
            v22 = (wchar_t *)psz;
            v7 = RtlStringCchLengthW(psz, 0x7FFFuLL, &pcchLength);
            if ( v7 < 0 )
              goto LABEL_29;
            v6 += ++pcchLength;
            if ( pcchLength <= v9 )
            {
              v7 = RtlStringCchCopyExW(v10, v9, v22, &ppszDestEnd, &pcchRemaining, 0x800u);
              if ( v7 < 0 )
              {
LABEL_29:
                PnpUnicodeStringToWstrFree(v22, (__int64)v21);
                goto LABEL_34;
              }
              v10 = ppszDestEnd + 1;
              v9 = pcchRemaining - 1;
              ++ppszDestEnd;
              --pcchRemaining;
            }
            PnpUnicodeStringToWstrFree(v22, (__int64)v21);
            if ( v19 == v29 )
            {
              v12 = v30;
              v13 = v28;
              break;
            }
          }
        }
        if ( v7 < 0 )
          goto LABEL_34;
        v8 = v32;
      }
    }
    while ( v12 != v13 );
    if ( v7 < 0 )
      goto LABEL_34;
  }
  v23 = v6++;
  if ( v6 <= v34 )
    v33[v23] = 0;
  else
    v7 = -1073741789;
LABEL_34:
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  if ( (int)(v7 + 0x80000000) < 0 || v7 == -1073741789 )
  {
    if ( a5 )
      *a5 = v6;
  }
  return (unsigned int)v7;
}
