/*
 * XREFs of RtlApplyHotPatch @ 0x140A6BF28
 * Callers:
 *     MiApplyHotPatchToDriverDataPages @ 0x140971708 (MiApplyHotPatchToDriverDataPages.c)
 *     MiApplyImageHotPatch @ 0x140971B68 (MiApplyImageHotPatch.c)
 *     MiApplyImageHotPatchRequest @ 0x140971DC0 (MiApplyImageHotPatchRequest.c)
 *     MiApplyImageHotPatchDpc @ 0x140A6A480 (MiApplyImageHotPatchDpc.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     RtlGetHotPatchSize @ 0x1405EF8CC (RtlGetHotPatchSize.c)
 *     RtlGetHpatEntryAddress @ 0x1405EF8E4 (RtlGetHpatEntryAddress.c)
 *     RtlRevertFunctionPatchFromUndoEntry @ 0x1405EFA7C (RtlRevertFunctionPatchFromUndoEntry.c)
 *     RtlpApplyFunctionPatch @ 0x1405EFA90 (RtlpApplyFunctionPatch.c)
 *     RtlpCheckFunctionPatchAppliedInOriginalImage @ 0x1405EFAB0 (RtlpCheckFunctionPatchAppliedInOriginalImage.c)
 *     RtlpPopulateHpatEntry @ 0x1405EFB34 (RtlpPopulateHpatEntry.c)
 *     RtlpDetermineHotPatchExtent @ 0x140A6C408 (RtlpDetermineHotPatchExtent.c)
 */

__int64 __fastcall RtlApplyHotPatch(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        char a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        unsigned int a12,
        unsigned int *a13,
        unsigned int a14,
        _DWORD *a15,
        unsigned int *a16,
        char a17,
        unsigned __int16 a18,
        PRTL_BITMAP BitMapHeader,
        __int64 a20,
        __int128 *a21,
        unsigned int a22,
        __int64 a23,
        __int64 a24,
        int a25)
{
  unsigned int *v25; // r13
  __int128 *v26; // rdx
  unsigned int v27; // r14d
  unsigned int *v28; // rbx
  PRTL_BITMAP v29; // r15
  __int64 v30; // rsi
  __int128 *v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r10
  int HotPatchSize; // r11d
  int v36; // edi
  __int64 v37; // r12
  unsigned int v38; // r14d
  int v39; // edi
  __int64 (__fastcall *v40)(__int64, _QWORD, _QWORD, char *); // rsi
  __int64 result; // rax
  __int64 v42; // rax
  char *v43; // r10
  __int64 v44; // rsi
  _BYTE *v45; // rdx
  unsigned int v46; // eax
  __int64 HpatEntryAddress; // rax
  __int64 v48; // r8
  __int64 v49; // r9
  _WORD *v50; // r10
  __int64 v51; // r11
  __int64 v52; // rcx
  __int64 v53; // rdx
  unsigned int v54; // r11d
  ULONG ClearBitsAndSet; // r8d
  __int64 v56; // rbx
  unsigned int *v57; // rdx
  __int64 v58; // rax
  int v59; // [rsp+38h] [rbp-61h]
  __int64 v60; // [rsp+58h] [rbp-41h]
  __int64 v61; // [rsp+60h] [rbp-39h]
  __int64 v62; // [rsp+68h] [rbp-31h]
  __int128 *v63; // [rsp+70h] [rbp-29h]
  __int128 v64; // [rsp+78h] [rbp-21h] BYREF
  __int64 v65; // [rsp+88h] [rbp-11h]

  a22 = 0;
  a8 = 0;
  v61 = 0LL;
  v25 = 0LL;
  a14 = 0;
  a24 = 0LL;
  v26 = &v64;
  v62 = 0LL;
  v27 = a4;
  v28 = a16;
  v29 = BitMapHeader;
  v65 = 0LL;
  v30 = a1;
  a6 = 0;
  v64 = 0LL;
  if ( a21 )
    v26 = a21;
  a23 = 0LL;
  v63 = v26;
  v60 = 0LL;
  if ( !a16 )
    goto LABEL_60;
  HotPatchSize = RtlGetHotPatchSize(a15);
  LODWORD(a21) = HotPatchSize;
  while ( 1 )
  {
    v36 = *v28;
    if ( !*v28 )
      break;
    v37 = 0LL;
    LOBYTE(a25) = 0;
    if ( v36 < 0 )
    {
      if ( (a17 & 2) != 0 )
      {
        v33 = v30;
        v32 = a11;
        v25 = a13;
        v37 = a9;
        v61 = *((_QWORD *)v31 + 2);
        a14 = a12;
        a24 = a10;
        a23 = a11;
        v60 = v30;
        v62 = v34;
      }
    }
    else
    {
      a25 = a17 & 1;
      if ( (a17 & 1) != 0 )
      {
        v32 = a3;
        v33 = a9;
        v25 = a5;
        v61 = *((_QWORD *)v31 + 1);
        v62 = a10;
        a23 = a3;
        a14 = v27;
        a24 = v34;
        v60 = a9;
      }
      v37 = v30 & -(__int64)((a17 & 1) != 0);
    }
    ++v28;
    v38 = v36 & 0xFC000;
    v39 = v36 & 0xFFF;
    if ( !v37 )
    {
      v28 += (unsigned int)(v39 * HotPatchSize);
      goto LABEL_55;
    }
    if ( v39 )
    {
      while ( 1 )
      {
        v40 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *))v31;
        if ( *(_QWORD *)v31 )
        {
          RtlpDetermineHotPatchExtent(v38, a18, &a8, &a22);
          result = v40(v61, *v28 + a8, a22, &a6);
          if ( (int)result < 0 )
            return result;
          if ( !a6 )
          {
            --v39;
            if ( v38 == 114688 && v25 )
              ++*v25;
            goto LABEL_53;
          }
          v32 = a23;
          v33 = v60;
          HotPatchSize = (int)a21;
        }
        v42 = v28[1];
        v43 = (char *)(v37 + *v28);
        v44 = v42 + v62;
        switch ( v38 )
        {
          case 0x1C000u:
            v45 = 0LL;
            if ( HotPatchSize != 2 )
              v45 = v28 + 2;
            v46 = RtlpCheckFunctionPatchAppliedInOriginalImage(v43, v45, v32, v33, v32);
            if ( v46 == -1 )
              return 3221225496LL;
            if ( v46 == -2 )
            {
              if ( *v25 >= a14 )
                return 3221226668LL;
              HpatEntryAddress = RtlGetHpatEntryAddress(a23, *v25);
              RtlpPopulateHpatEntry(
                HpatEntryAddress,
                (_QWORD *)(HpatEntryAddress + 4096),
                v44,
                HpatEntryAddress + a24 - v37,
                v37,
                0,
                v59,
                a18,
                a17);
              v52 = a20;
              if ( a20 && (_BYTE)a25 )
              {
                v53 = 3 * v51;
                *(_DWORD *)(a20 + 2 * v53) = *v28;
                *(_WORD *)(v52 + 2 * v53 + 4) = *v50;
              }
              RtlpApplyFunctionPatch(v50, a24 + *v28, v48, v49, v49);
              ++*v25;
            }
            else
            {
              if ( v46 >= a14 )
                return 3221225496LL;
              *(_QWORD *)(RtlGetHpatEntryAddress(a23, v46) + 4096) = v44;
            }
            if ( v29 && (_BYTE)a25 )
              _bittestandset((signed __int32 *)v29->Buffer, v54);
            break;
          case 0x2C000u:
            if ( a18 == 0x8664 || a18 == 0xAA64 )
              *(_QWORD *)v43 = v44;
            else
              *(_DWORD *)v43 = v44;
            break;
          case 0x5C000u:
            if ( a18 == 0x8664 || a18 == 0xAA64 )
              *(_QWORD *)v43 = *(_QWORD *)(v42 + v33);
            else
              *(_DWORD *)v43 = *(_DWORD *)(v42 + v33);
            break;
          case 0x78000u:
            if ( a7 == -1 )
              return 3221225520LL;
            if ( a7 && *(_BYTE *)(v42 + a7) == 0xFF )
              *(_QWORD *)v43 += *(_QWORD *)(8 * v42);
            break;
        }
        --v39;
LABEL_53:
        HotPatchSize = (int)a21;
        v31 = v63;
        v32 = a23;
        v33 = v60;
        v28 += (unsigned int)a21;
        if ( !v39 )
        {
          v30 = a1;
          v34 = a2;
          break;
        }
      }
    }
LABEL_55:
    if ( !v28 )
      break;
    v27 = a4;
  }
LABEL_60:
  if ( v29 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(v29, 1u, 0);
    if ( ClearBitsAndSet != -1 )
    {
      v56 = a20;
      do
      {
        v57 = (unsigned int *)(v56 + 6LL * ClearBitsAndSet);
        v58 = *v57;
        if ( (_DWORD)v58 )
          RtlRevertFunctionPatchFromUndoEntry((_WORD *)(v30 + v58), (__int64)v57);
        ClearBitsAndSet = RtlFindClearBitsAndSet(v29, 1u, ClearBitsAndSet);
      }
      while ( ClearBitsAndSet != -1 );
    }
  }
  return 0LL;
}
