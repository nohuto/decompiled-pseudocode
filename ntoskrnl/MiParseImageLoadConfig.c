/*
 * XREFs of MiParseImageLoadConfig @ 0x1407F4AEC
 * Callers:
 *     MiRelocateImage @ 0x1407F2760 (MiRelocateImage.c)
 * Callees:
 *     RtlCreateFunctionOverrideFixupInfo @ 0x140300A2C (RtlCreateFunctionOverrideFixupInfo.c)
 *     MiReferenceControlAreaFile @ 0x140344094 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1403441A0 (MiDereferenceControlAreaFile.c)
 *     MiFreeImageCfgContext @ 0x140369018 (MiFreeImageCfgContext.c)
 *     MiIsImportOptimizationEnabled @ 0x140369044 (MiIsImportOptimizationEnabled.c)
 *     MiIsRetpolineEnabled @ 0x14036905C (MiIsRetpolineEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiLogRelocationRva @ 0x1407F4A00 (MiLogRelocationRva.c)
 *     MiFreeImageRetpolineContext @ 0x1407F5140 (MiFreeImageRetpolineContext.c)
 *     MiCaptureImageCfgContext @ 0x1407F5190 (MiCaptureImageCfgContext.c)
 *     MiInitializeRvaStates @ 0x1407F555C (MiInitializeRvaStates.c)
 *     RtlCreateRvaList @ 0x1407F55D0 (RtlCreateRvaList.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x1407F5778 (LdrCaptureDynamicRelocationTableHeader.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1407F5944 (MiCaptureRetpolineRelocationTables.c)
 *     MiCreateRetpolineRelocationInformation @ 0x1407F5B50 (MiCreateRetpolineRelocationInformation.c)
 *     MiFreeImageLoadConfig @ 0x140A47684 (MiFreeImageLoadConfig.c)
 */

__int64 __fastcall MiParseImageLoadConfig(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  bool v7; // r15
  __int64 v8; // rbx
  __int64 v9; // r12
  int RetpolineRelocationInformation; // edi
  __int64 v11; // r9
  unsigned int *v12; // r10
  __int64 v13; // rdx
  unsigned int v14; // ebx
  __int16 *v15; // r12
  __int16 v16; // ax
  unsigned int v17; // eax
  unsigned int *v18; // rdx
  unsigned int v19; // ecx
  __int64 v20; // r13
  __int64 v21; // rax
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int16 v28; // r12
  unsigned int v29; // r9d
  unsigned int v30; // ebx
  int v31; // eax
  int v33; // eax
  int Src; // [rsp+20h] [rbp-3E8h]
  __int64 v35; // [rsp+28h] [rbp-3E0h]
  int v36; // [rsp+28h] [rbp-3E0h]
  __int64 v38; // [rsp+60h] [rbp-3A8h]
  unsigned int v40; // [rsp+70h] [rbp-398h] BYREF
  __int64 v41; // [rsp+78h] [rbp-390h]
  unsigned int v42; // [rsp+80h] [rbp-388h]
  unsigned int v43; // [rsp+90h] [rbp-378h]
  int v44; // [rsp+A0h] [rbp-368h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-360h]
  int v46; // [rsp+B0h] [rbp-358h]
  int v47; // [rsp+B4h] [rbp-354h]
  __int64 v48; // [rsp+B8h] [rbp-350h]
  __int64 v49; // [rsp+C0h] [rbp-348h]
  __int64 v50; // [rsp+C8h] [rbp-340h]
  _QWORD *v51; // [rsp+D8h] [rbp-330h]
  __int64 v52; // [rsp+E0h] [rbp-328h]
  __int64 v53; // [rsp+E8h] [rbp-320h]
  __int64 v54; // [rsp+F0h] [rbp-318h]
  __int64 v55; // [rsp+F8h] [rbp-310h]
  unsigned int *v56; // [rsp+100h] [rbp-308h]
  _QWORD v57[3]; // [rsp+108h] [rbp-300h] BYREF
  _QWORD *v58; // [rsp+120h] [rbp-2E8h]
  __int64 v59; // [rsp+128h] [rbp-2E0h]
  __int64 v60; // [rsp+130h] [rbp-2D8h]
  int v61[80]; // [rsp+140h] [rbp-2C8h] BYREF
  _BYTE v62[320]; // [rsp+280h] [rbp-188h] BYREF

  v41 = a2;
  v51 = a1;
  v58 = a1;
  v52 = a2;
  v59 = a2;
  v53 = a3;
  v60 = a3;
  v43 = a4;
  v46 = a4;
  v54 = a5;
  memset(v62, 0, sizeof(v62));
  v57[0] = 0LL;
  v40 = 0;
  v7 = 0;
  v8 = *a1;
  v47 = *(_DWORD *)(*(_QWORD *)(v8 + 56) + 64LL);
  v9 = 0LL;
  v38 = 0LL;
  v44 = 0;
  RetpolineRelocationInformation = 0;
  memset(v61, 0, sizeof(v61));
  v11 = *(_QWORD *)(v8 + 56);
  v48 = v11;
  v49 = v11;
  v45 = *(_QWORD *)a3;
  v50 = v45;
  v12 = (unsigned int *)(a3 + 96);
  v56 = (unsigned int *)(a3 + 96);
  v13 = *(unsigned int *)(a3 + 96);
  if ( !(_DWORD)v13 )
    goto LABEL_26;
  v14 = *(_DWORD *)(a3 + 100);
  v15 = (__int16 *)(a3 + 48);
  v55 = a3 + 48;
  v16 = *(_WORD *)(a3 + 48);
  if ( v16 == 523 )
  {
    v17 = 148;
  }
  else
  {
    if ( v16 != 267 )
      goto LABEL_51;
    v17 = 92;
  }
  v42 = v17;
  if ( (unsigned int)v13 + v17 <= (unsigned int)v13 )
    goto LABEL_51;
  v57[2] = a3 + 16;
  if ( (unsigned int)v13 + v17 > *(_DWORD *)(a3 + 16) )
    goto LABEL_51;
  v18 = (unsigned int *)(v41 + v13);
  v57[1] = v18;
  if ( v14 >= v17 )
    goto LABEL_7;
  if ( *(_WORD *)(v11 + 48) != 332 )
  {
LABEL_51:
    v9 = 0LL;
    goto LABEL_26;
  }
  if ( v14 > 4 )
    v14 = *v18;
  if ( v14 < v17 )
    goto LABEL_25;
LABEL_7:
  if ( v14 >= 0x140 )
    v14 = 320;
  v19 = *v12 + v14;
  if ( v19 <= *v12 || v19 > *(_DWORD *)(a3 + 16) )
    goto LABEL_25;
  memmove(v62, v18, v14);
  v38 = MiReferenceControlAreaFile((__int64)a1);
  MiLogRelocationRva(*v56, v14, v38, (__int64)a1);
  *(_QWORD *)v61 = v58;
  *(_QWORD *)&v61[2] = v38;
  *(_QWORD *)&v61[4] = v59;
  *(_QWORD *)&v61[6] = v45;
  v61[8] = v46;
  v61[9] = 0;
  *(_QWORD *)&v61[10] = v60;
  *(_QWORD *)&v61[12] = v62;
  v61[14] = v14;
  v35 = a3;
  v20 = (__int64)a1;
  RetpolineRelocationInformation = MiCaptureImageCfgContext(
                                     (_DWORD)a1,
                                     v38,
                                     v41,
                                     v45,
                                     a4,
                                     v35,
                                     (__int64)v62,
                                     v14,
                                     (__int64)&v44,
                                     (__int64)&v61[16]);
  if ( RetpolineRelocationInformation >= 0 )
  {
    *(_DWORD *)a5 |= v44;
    v21 = v48;
    *(_WORD *)(a5 + 4) = *(_WORD *)(v48 + 48) == 452;
    *(_WORD *)(a5 + 6) = *(_WORD *)(v21 + 48);
    MiInitializeRvaStates(a5, &v61[38], &v61[32], &v61[36]);
    if ( !v61[36]
      || (RetpolineRelocationInformation = RtlCreateRvaList((int)v61, v22, v23, v61[36], &v61[32], v36, a5 + 8),
          RetpolineRelocationInformation >= 0) )
    {
      if ( MiIsRetpolineEnabled() || MiIsImportOptimizationEnabled() )
        v7 = *v15 == 523;
      v28 = *v15;
      if ( v7 || v28 == 523 )
      {
        v29 = v14;
        v30 = a4;
        v31 = LdrCaptureDynamicRelocationTableHeader(
                v41,
                a4,
                (unsigned int)v62,
                v29,
                v45,
                v28,
                (__int64)&v40,
                (__int64)v57);
        RetpolineRelocationInformation = v31;
        if ( v31 == -1073741637 )
        {
          RetpolineRelocationInformation = 0;
        }
        else if ( v31 < 0 )
        {
LABEL_25:
          v9 = v38;
LABEL_26:
          v20 = (__int64)a1;
          goto LABEL_27;
        }
      }
      else
      {
        v30 = a4;
      }
      if ( !v7 )
        goto LABEL_22;
      v27 = v40;
      if ( !v40 )
        goto LABEL_22;
      v33 = MiCaptureRetpolineRelocationTables(v41, v30, v47, v40, (__int64)v57, v36, (__int64)&v61[24]);
      RetpolineRelocationInformation = v33;
      if ( v33 == -1073741637 )
      {
        RetpolineRelocationInformation = 0;
      }
      else
      {
        if ( v33 < 0 )
          goto LABEL_25;
        RetpolineRelocationInformation = MiCreateRetpolineRelocationInformation(
                                           &v61[24],
                                           (unsigned int)v61[22],
                                           v30,
                                           a5 + 16);
        if ( RetpolineRelocationInformation < 0 )
          goto LABEL_25;
      }
LABEL_22:
      if ( v40 && v28 == 523 )
        RetpolineRelocationInformation = RtlCreateFunctionOverrideFixupInfo(
                                           v25,
                                           v24,
                                           v26,
                                           v27,
                                           Src,
                                           v36,
                                           (_QWORD *)(a5 + 24));
      if ( RetpolineRelocationInformation >= 0 )
        RetpolineRelocationInformation = 0;
      goto LABEL_25;
    }
  }
  v9 = v38;
LABEL_27:
  if ( RetpolineRelocationInformation < 0 )
    MiFreeImageLoadConfig(a5);
  if ( v9 )
    MiDereferenceControlAreaFile(v20, v9);
  MiFreeImageCfgContext((__int64)&v61[16]);
  MiFreeImageRetpolineContext(&v61[24]);
  return (unsigned int)RetpolineRelocationInformation;
}
