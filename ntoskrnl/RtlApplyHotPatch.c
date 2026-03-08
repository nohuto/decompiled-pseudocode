/*
 * XREFs of RtlApplyHotPatch @ 0x140AAA600
 * Callers:
 *     MiApplyHotPatchToDriverDataPages @ 0x140A32268 (MiApplyHotPatchToDriverDataPages.c)
 *     MiApplyImageHotPatch @ 0x140A326C8 (MiApplyImageHotPatch.c)
 *     MiApplyImageHotPatchRequest @ 0x140A32920 (MiApplyImageHotPatchRequest.c)
 *     MiApplyImageHotPatchDpc @ 0x140AA9FE0 (MiApplyImageHotPatchDpc.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14030CEE0 (RtlFindClearBitsAndSet.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     RtlGetHotPatchSize @ 0x1406786D8 (RtlGetHotPatchSize.c)
 *     RtlGetHpatEntryAddress @ 0x1406786F0 (RtlGetHpatEntryAddress.c)
 *     RtlPopulateHpatEntry @ 0x140678894 (RtlPopulateHpatEntry.c)
 *     RtlRevertFunctionPatchFromUndoEntry @ 0x1406788F8 (RtlRevertFunctionPatchFromUndoEntry.c)
 *     RtlpApplyFunctionPatch @ 0x14067890C (RtlpApplyFunctionPatch.c)
 *     RtlpCheckFunctionPatchAppliedInOriginalImage @ 0x14067892C (RtlpCheckFunctionPatchAppliedInOriginalImage.c)
 *     RtlpDetermineHotPatchExtent @ 0x140AAAB14 (RtlpDetermineHotPatchExtent.c)
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
  __int64 v26; // rbx
  unsigned int *v27; // rdi
  __int128 *v28; // rdx
  unsigned int v29; // r15d
  __int64 v30; // r14
  __int128 *v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r10
  int HotPatchSize; // r11d
  int v36; // esi
  __int64 v37; // r12
  unsigned int v38; // r15d
  int v39; // esi
  __int64 (__fastcall *v40)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, char *); // rbx
  __int64 result; // rax
  __int64 v42; // rax
  _WORD *v43; // rbx
  __int64 v44; // r10
  _BYTE *v45; // rdx
  unsigned int v46; // eax
  __int64 HpatEntryAddress; // rax
  __int64 v48; // r10
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r11
  __int64 v52; // rcx
  __int64 v53; // rdx
  unsigned int v54; // r11d
  __int64 v55; // rax
  __int64 v56; // r10
  _BYTE *v57; // rcx
  RTL_BITMAP *v58; // rbx
  ULONG ClearBitsAndSet; // r8d
  __int64 v60; // rdi
  unsigned int *v61; // rdx
  __int64 v62; // rax
  int v63; // [rsp+38h] [rbp-61h]
  __int64 v64; // [rsp+58h] [rbp-41h]
  __int64 v65; // [rsp+60h] [rbp-39h]
  int v66; // [rsp+68h] [rbp-31h]
  __int128 *v67; // [rsp+70h] [rbp-29h]
  __int128 v68; // [rsp+78h] [rbp-21h] BYREF
  __int64 v69; // [rsp+88h] [rbp-11h]

  a22 = 0;
  a8 = 0;
  v65 = 0LL;
  a14 = 0;
  v25 = 0LL;
  v66 = 0;
  v26 = a2;
  v27 = a16;
  v28 = &v68;
  v69 = 0LL;
  v29 = a4;
  a6 = 0;
  a23 = 0LL;
  if ( a21 )
    v28 = a21;
  a24 = 0LL;
  v67 = v28;
  v30 = a1;
  v64 = 0LL;
  v68 = 0LL;
  if ( !a16 )
    goto LABEL_61;
  HotPatchSize = RtlGetHotPatchSize(a15);
  LODWORD(a21) = HotPatchSize;
  while ( 1 )
  {
    v36 = *v27;
    if ( !*v27 )
      break;
    v37 = 0LL;
    LOBYTE(a25) = 0;
    if ( v36 < 0 )
    {
      if ( (a17 & 2) != 0 )
      {
        v33 = v30;
        v32 = a11;
        v34 = v26;
        v25 = a13;
        v37 = a9;
        v65 = *((_QWORD *)v31 + 2);
        a14 = a12;
        v66 = a10;
        a23 = a11;
        a24 = v30;
        v64 = v26;
      }
    }
    else
    {
      a25 = a17 & 1;
      if ( (a17 & 1) != 0 )
      {
        v32 = a3;
        v33 = a9;
        v34 = a10;
        v25 = a5;
        v65 = *((_QWORD *)v31 + 1);
        a23 = a3;
        a24 = a9;
        v64 = a10;
        a14 = v29;
        v66 = v26;
      }
      v37 = v30 & -(__int64)((a17 & 1) != 0);
    }
    ++v27;
    v38 = v36 & 0xFC000;
    v39 = v36 & 0xFFF;
    if ( !v37 )
    {
      v27 += (unsigned int)(v39 * HotPatchSize);
      goto LABEL_56;
    }
    if ( v39 )
    {
      while ( 1 )
      {
        v40 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, char *))v31;
        if ( *(_QWORD *)v31 )
        {
          RtlpDetermineHotPatchExtent(v38, a18, &a8, &a22);
          result = v40(v65, a8 + *v27, v27[1], a22, v38, &a6);
          if ( (int)result < 0 )
            return result;
          if ( !a6 )
          {
            --v39;
            if ( v38 == 114688 && v25 )
              ++*v25;
            goto LABEL_54;
          }
          v32 = a23;
          v33 = a24;
          v34 = v64;
          HotPatchSize = (int)a21;
        }
        v42 = v27[1];
        v43 = (_WORD *)(v37 + *v27);
        v44 = v42 + v34;
        switch ( v38 )
        {
          case 0x1C000u:
            if ( HotPatchSize == 2 )
              v45 = 0LL;
            else
              v45 = v27 + 2;
            v46 = RtlpCheckFunctionPatchAppliedInOriginalImage((char *)(v37 + *v27), v45, v32, v33, v32);
            if ( v46 == -1 )
              return 3221225496LL;
            if ( v46 == -2 )
            {
              if ( *v25 >= a14 )
                return 3221226668LL;
              HpatEntryAddress = RtlGetHpatEntryAddress(a23, *v25);
              RtlPopulateHpatEntry(
                HpatEntryAddress,
                (_QWORD *)(HpatEntryAddress + 4096),
                v48,
                HpatEntryAddress + v66 - v37,
                v37,
                0,
                v63,
                a18,
                a17);
              v52 = a20;
              if ( a20 && (_BYTE)a25 )
              {
                v53 = 3 * v51;
                *(_DWORD *)(a20 + 2 * v53) = *v27;
                *(_WORD *)(v52 + 2 * v53 + 4) = *v43;
              }
              RtlpApplyFunctionPatch(v43, v66 + *v27, v49, v50, v50);
              ++*v25;
            }
            else
            {
              if ( v46 >= a14 )
                return 3221225496LL;
              v55 = RtlGetHpatEntryAddress(a23, v46);
              *(_QWORD *)(v55 + 4096) = v56;
            }
            if ( BitMapHeader && (_BYTE)a25 )
            {
              v57 = (char *)BitMapHeader->Buffer + ((unsigned __int64)v54 >> 3);
              *v57 |= 1 << (v54 & 7);
            }
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
LABEL_54:
        HotPatchSize = (int)a21;
        v31 = v67;
        v32 = a23;
        v33 = a24;
        v34 = v64;
        v27 += (unsigned int)a21;
        if ( !v39 )
        {
          v30 = a1;
          v26 = a2;
          break;
        }
      }
    }
LABEL_56:
    if ( !v27 )
      break;
    v29 = a4;
  }
LABEL_61:
  v58 = BitMapHeader;
  if ( BitMapHeader )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(BitMapHeader, 1u, 0);
    if ( ClearBitsAndSet != -1 )
    {
      v60 = a20;
      do
      {
        v61 = (unsigned int *)(v60 + 6LL * ClearBitsAndSet);
        v62 = *v61;
        if ( (_DWORD)v62 )
          RtlRevertFunctionPatchFromUndoEntry((_WORD *)(v30 + v62), (__int64)v61);
        ClearBitsAndSet = RtlFindClearBitsAndSet(v58, 1u, ClearBitsAndSet);
      }
      while ( ClearBitsAndSet != -1 );
    }
  }
  return 0LL;
}
