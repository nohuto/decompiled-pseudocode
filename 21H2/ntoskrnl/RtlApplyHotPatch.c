/*
 * XREFs of RtlApplyHotPatch @ 0x1409B3674
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1408C8F14 (MiApplyDriverHotPatch.c)
 *     MiApplyImageHotPatch @ 0x1408C96BC (MiApplyImageHotPatch.c)
 *     MiPerformImageHotPatch @ 0x1408CD024 (MiPerformImageHotPatch.c)
 *     MiApplyImageHotPatchDpc @ 0x1409B1820 (MiApplyImageHotPatchDpc.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402F5970 (RtlFindClearBitsAndSet.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     RtlGetHotPatchSize @ 0x14058FF3C (RtlGetHotPatchSize.c)
 *     RtlpDetermineHotPatchExtent @ 0x14091B47C (RtlpDetermineHotPatchExtent.c)
 *     RtlpCheckFunctionPatchAppliedInOriginalImage @ 0x1409B3A40 (RtlpCheckFunctionPatchAppliedInOriginalImage.c)
 */

__int64 __fastcall RtlApplyHotPatch(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        unsigned int a11,
        __int64 a12,
        _DWORD *a13,
        int *a14,
        char a15,
        PRTL_BITMAP BitMapHeader,
        __int64 a17,
        __int128 *a18,
        int a19,
        unsigned int a20,
        __int64 a21)
{
  __int128 *v21; // rdx
  int *v22; // rbx
  __int64 v23; // r14
  __int64 v24; // r12
  PRTL_BITMAP v25; // r15
  int HotPatchSize; // eax
  __int128 *v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // r10d
  int v31; // edi
  __int64 v32; // rsi
  int v33; // r13d
  int v34; // r14d
  int v35; // edi
  __int64 (__fastcall *v36)(__int64, _QWORD, _QWORD, char *); // r10
  __int64 result; // rax
  unsigned __int64 v38; // rax
  _QWORD *v39; // r9
  unsigned int *v40; // rdx
  _QWORD *v41; // rax
  _WORD *v42; // r9
  __int64 v43; // r10
  _DWORD *v44; // r11
  __int64 v45; // rdx
  _QWORD *v46; // r8
  int v47; // r8d
  __int64 v48; // rcx
  int v49; // eax
  ULONG i; // r8d
  unsigned int v51; // ecx
  ULONG ClearBitsAndSet; // eax
  __int64 v53; // [rsp+40h] [rbp-49h]
  __int64 v54; // [rsp+48h] [rbp-41h]
  __int64 v55; // [rsp+50h] [rbp-39h]
  int v56; // [rsp+58h] [rbp-31h]
  __int128 *v57; // [rsp+60h] [rbp-29h]
  __int128 v58; // [rsp+68h] [rbp-21h] BYREF
  __int64 v59; // [rsp+78h] [rbp-11h]

  a20 = 0;
  a19 = 0;
  v54 = 0LL;
  a21 = 0LL;
  a7 = 0;
  v56 = 0;
  v21 = &v58;
  v55 = 0LL;
  v22 = a14;
  v23 = a1;
  v24 = a17;
  v25 = BitMapHeader;
  v59 = 0LL;
  a6 = 0;
  v58 = 0LL;
  if ( a18 )
    v21 = a18;
  v57 = v21;
  v53 = 0LL;
  if ( !a14 )
    goto LABEL_46;
  HotPatchSize = RtlGetHotPatchSize(a13);
  LODWORD(a18) = HotPatchSize;
  while ( 1 )
  {
    v31 = *v22;
    if ( !*v22 )
      break;
    v32 = 0LL;
    LOBYTE(v33) = 0;
    if ( v31 < 0 )
    {
      if ( (a15 & 2) != 0 )
      {
        v28 = v23;
        v32 = a8;
        v54 = *((_QWORD *)v27 + 2);
        a21 = a10;
        a7 = a11;
        v56 = a9;
        v53 = v23;
        v55 = v29;
      }
    }
    else
    {
      v33 = a15 & 1;
      if ( (a15 & 1) != 0 )
      {
        v28 = a8;
        v54 = *((_QWORD *)v27 + 1);
        a21 = a3;
        v55 = a9;
        a7 = v30;
        v56 = v29;
        v53 = a8;
      }
      HotPatchSize = (int)a18;
      v32 = v23 & -(__int64)(v33 != 0);
    }
    ++v22;
    v34 = v31 & 0xFC000;
    v35 = v31 & 0xFFF;
    if ( !v32 )
    {
      v22 += (unsigned int)(v35 * HotPatchSize);
      goto LABEL_42;
    }
    if ( v35 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)v27 )
        {
          RtlpDetermineHotPatchExtent(v34, &a19, &a20);
          result = v36(v54, (unsigned int)(a19 + *v22), a20, &a6);
          if ( (int)result < 0 )
            return result;
          if ( !a6 )
            goto LABEL_40;
          v28 = v53;
        }
        v38 = (unsigned int)v22[1];
        v39 = (_QWORD *)(v32 + (unsigned int)*v22);
        switch ( v34 )
        {
          case 114688:
            v40 = 0LL;
            if ( (_DWORD)a18 != 2 )
              v40 = (unsigned int *)(v22 + 2);
            v41 = (_QWORD *)RtlpCheckFunctionPatchAppliedInOriginalImage(v32 + (unsigned int)*v22, v40, v28);
            if ( v41 == (_QWORD *)-1LL )
              return 3221225496LL;
            if ( v41 )
            {
              v45 = ((__int64)v41 - a21) >> 3;
              *v41 = v43;
            }
            else
            {
              v45 = (unsigned int)*v44;
              if ( (unsigned int)v45 >= a7 )
                return 3221226668LL;
              v46 = (_QWORD *)(a21 + 8 * v45);
              *v46 = v43;
              v47 = v56 + (_DWORD)v46 - v32;
              if ( v24 && (_BYTE)v33 )
              {
                v48 = 3 * v45;
                *(_DWORD *)(v24 + 2 * v48) = *v22;
                *(_WORD *)(v24 + 2 * v48 + 4) = *v42;
              }
              v49 = v56 + *v22;
              *(v42 - 3) = 9727;
              *v42 = -1813;
              *((_DWORD *)v42 - 1) = v47 - v49;
              ++*v44;
            }
            if ( v25 && (_BYTE)v33 )
              _bittestandset((signed __int32 *)v25->Buffer, v45);
            break;
          case 180224:
            *v39 = v38 + v55;
            break;
          case 376832:
            *v39 = *(_QWORD *)(v38 + v28);
            break;
          default:
            if ( v34 == 491520 && *(_BYTE *)v38 == 0xFF )
              *v39 += *(_QWORD *)(8 * v38);
            break;
        }
LABEL_40:
        --v35;
        v27 = v57;
        v28 = v53;
        v22 += (unsigned int)a18;
        if ( !v35 )
        {
          v29 = a2;
          v30 = a4;
          break;
        }
      }
    }
LABEL_42:
    v23 = a1;
    if ( !v22 )
      break;
    HotPatchSize = (int)a18;
  }
LABEL_46:
  if ( v25 )
  {
    for ( i = 0; ; i = ClearBitsAndSet )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(v25, 1u, i);
      if ( ClearBitsAndSet == -1 )
        break;
      v51 = *(_DWORD *)(v24 + 6LL * ClearBitsAndSet);
      if ( v51 )
      {
        *(_WORD *)(v51 + v23) = *(_WORD *)(v24 + 6LL * ClearBitsAndSet + 4);
        *(_DWORD *)(v24 + 6LL * ClearBitsAndSet) = 0;
      }
    }
  }
  return 0LL;
}
