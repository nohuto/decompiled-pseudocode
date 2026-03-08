/*
 * XREFs of CmQueryLayeredKey @ 0x1402F262C
 * Callers:
 *     CmQueryKey @ 0x1407AE5C0 (CmQueryKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KCBNeedsVirtualImage_0 @ 0x140614000 (KCBNeedsVirtualImage_0.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140614E8C (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpInitializeKcbStack @ 0x14078361C (CmpInitializeKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1407836C4 (CmpCleanupKcbStack.c)
 *     CmpInitializeKeyNodeStack @ 0x1407836E4 (CmpInitializeKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x140783738 (CmpCleanupKeyNodeStack.c)
 *     CmGetKeyFlags @ 0x14079C210 (CmGetKeyFlags.c)
 *     CmpIsKeyStackSymlink @ 0x1407A9830 (CmpIsKeyStackSymlink.c)
 *     CmpUnlockKcbStack @ 0x1407ABFF8 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407AF294 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpConstructNameWithStatus @ 0x1407AF2E0 (CmpConstructNameWithStatus.c)
 *     CmpLockKcbStackShared @ 0x1407AF490 (CmpLockKcbStackShared.c)
 *     CmpGetKcbAtLayerHeight @ 0x1407AF600 (CmpGetKcbAtLayerHeight.c)
 *     SeCaptureSubjectContextEx @ 0x1407C9AF0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140A1D69C (CmpStartKeyNodeStackFromKcbStack.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF21E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF24F0 (CmpPerformKeyBodyDeletionCheck.c)
 */

__int64 __fastcall CmQueryLayeredKey(__int64 a1, int a2, unsigned int *a3, unsigned int a4, unsigned int *a5)
{
  __int64 v9; // r12
  signed int started; // ebx
  unsigned int v11; // ebx
  const void **v12; // r9
  unsigned int v13; // ecx
  char v15; // al
  int v16; // ebx
  char v17; // al
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // ebx
  int v21; // eax
  unsigned int v22; // esi
  unsigned int v23; // eax
  __int64 KcbAtLayerHeight; // rax
  __int16 v25; // dx
  __int64 v26; // rbx
  int v27; // r9d
  int v28; // eax
  char v29; // [rsp+30h] [rbp-128h]
  PVOID P; // [rsp+40h] [rbp-118h] BYREF
  _OWORD v31[2]; // [rsp+48h] [rbp-110h] BYREF
  __int128 v32; // [rsp+68h] [rbp-F0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+98h] [rbp-C0h] BYREF
  _BYTE v34[80]; // [rsp+C0h] [rbp-98h] BYREF

  memset(v31, 0, sizeof(v31));
  memset(v34, 0, 0x4AuLL);
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CmpInitializeKcbStack(v31);
  v29 = 0;
  CmpInitializeKeyNodeStack(v34);
  P = 0LL;
  v32 = 0LL;
  v9 = *(_QWORD *)(a1 + 8);
  started = CmpStartKcbStackForTopLayerKcb(v31, v9);
  if ( started < 0 )
    goto LABEL_11;
  CmpLockKcbStackShared(v31);
  v29 = 1;
  if ( a2 == 3 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) && (*(_DWORD *)(a1 + 48) & 1) != 0 )
    {
      started = -1073740763;
    }
    else
    {
      started = CmpConstructNameWithStatus(v9, &P);
      if ( started >= 0 )
      {
        v11 = *(unsigned __int16 *)P + 4;
        *a5 = v11;
        if ( a4 >= 4 )
        {
          v12 = (const void **)P;
          *a3 = *(unsigned __int16 *)P;
          v13 = a4 - 4;
          if ( a4 - 4 >= *(unsigned __int16 *)v12 )
            v13 = *(unsigned __int16 *)v12;
          memmove(a3 + 1, v12[1], v13);
          if ( v11 > a4 )
            started = -2147483643;
          else
            started = (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) != 0 ? 0xC000017C : 0;
        }
        else
        {
          started = -1073741789;
        }
      }
    }
    goto LABEL_11;
  }
  started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( started < 0 )
    goto LABEL_11;
  if ( a2 == 6 )
  {
    SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->Process, &SubjectContext);
    v15 = KCBNeedsVirtualImage_0(v9, &SubjectContext);
    v16 = (v15 != 0) | v32 & 0xFFFFFFFE;
    v17 = KCBNeedsVirtualImage_0(v9, &SubjectContext);
    v18 = *(_DWORD *)(v9 + 184);
    if ( !v17 || (v19 = 2, (v18 & 0x20) != 0) )
      v19 = 0;
    v20 = v19 | v16 & 0xFFFFFFFD;
    if ( !CmpVEEnabled || (v21 = 4, (v18 & 0x1000000) == 0) )
      v21 = 0;
    v22 = v21 & 0xFFFFFFE7 | v20 & 0xFFFFFFE3 | ((HIWORD(v18) & 0x80 | (v18 >> 19) & 0x40) >> 3);
    SeReleaseSubjectContext(&SubjectContext);
    *a5 = 4;
    if ( a4 < 4 )
    {
      started = -1073741789;
      goto LABEL_11;
    }
    *a3 = v22;
    goto LABEL_30;
  }
  if ( a2 == 8 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 4112LL) & 1) != 0 )
      v23 = v32 & 0xFFFFFFFE;
    else
      v23 = v32 | 1;
    *a5 = 4;
    if ( a4 < 4 )
    {
      started = -1073741789;
      goto LABEL_11;
    }
    *a3 = v23;
    goto LABEL_30;
  }
  if ( *(__int16 *)(v9 + 66) < 0 )
  {
LABEL_43:
    v26 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v31);
      if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
        break;
      if ( (__int16)(v25 - 1) < 0 )
        goto LABEL_43;
    }
    v26 = KcbAtLayerHeight;
  }
  if ( a2 == 5 )
  {
    LODWORD(v32) = CmGetKeyFlags(v26, 0LL);
    DWORD1(v32) = *(int *)(v26 + 40) < 0;
    if ( (unsigned __int8)CmpIsKeyStackSymlink(v31) )
      DWORD1(v32) = v27 | 2;
    v28 = (*(_DWORD *)(v26 + 184) >> 4) & 0xF;
    *a5 = 12;
    if ( a4 < 0xC )
    {
      started = -1073741789;
      goto LABEL_11;
    }
    *(_QWORD *)a3 = v32;
    a3[2] = v28;
LABEL_30:
    started = 0;
    goto LABEL_11;
  }
  started = CmpStartKeyNodeStackFromKcbStack(v34, v31, a1);
  if ( started >= 0 )
  {
    started = CmpQueryKeyDataFromKeyNodeStack((unsigned int)v34, a2, (_DWORD)a3, a4, (__int64)a5);
    if ( started >= 0 )
      started = 0;
  }
LABEL_11:
  CmpCleanupKeyNodeStack(v34);
  if ( P )
    ExFreePoolWithTag(P, 0x624E4D43u);
  if ( v29 )
    CmpUnlockKcbStack(v31);
  CmpCleanupKcbStack(v31);
  return (unsigned int)started;
}
