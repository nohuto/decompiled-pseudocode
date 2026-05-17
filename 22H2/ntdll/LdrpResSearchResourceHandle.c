/*
 * XREFs of LdrpResSearchResourceHandle @ 0x1800E45FC
 * Callers:
 *     LdrResSearchResource @ 0x1800554B0 (LdrResSearchResource.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlLcidToLocaleName @ 0x18003B2F0 (RtlLcidToLocaleName.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x180056708 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrResFallbackLangList @ 0x180057BE8 (LdrResFallbackLangList.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     memset @ 0x1800A4600 (memset.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E1624 (LdrpTraceLoadMUIDll.c)
 *     LdrpResFileSize @ 0x1800E4060 (LdrpResFileSize.c)
 *     LdrpResReadFile @ 0x1800E4548 (LdrpResReadFile.c)
 *     LdrpResSetFilePointer @ 0x1800E4CE8 (LdrpResSetFilePointer.c)
 */

__int64 __fastcall LdrpResSearchResourceHandle(
        char *Handle,
        int a2,
        __int64 a3,
        int a4,
        unsigned __int64 *a5,
        _QWORD *a6,
        void *a7,
        __int64 a8)
{
  __int16 v8; // r14
  __int64 v10; // r13
  __int64 v11; // rcx
  int v12; // ebx
  __int64 result; // rax
  int File; // edi
  __int64 Heap; // rax
  unsigned int v16; // r14d
  unsigned int v17; // ebx
  unsigned int v18; // eax
  int v19; // ecx
  unsigned __int16 v20; // cx
  unsigned int v21; // r15d
  unsigned int v22; // edi
  _DWORD *v23; // rbx
  int v24; // edx
  unsigned int v25; // ecx
  unsigned __int64 v26; // r14
  char *v27; // r15
  _DWORD *v28; // r15
  __int64 v29; // r14
  int v30; // [rsp+70h] [rbp-4D8h]
  unsigned __int16 v31; // [rsp+74h] [rbp-4D4h] BYREF
  _QWORD v32[2]; // [rsp+78h] [rbp-4D0h] BYREF
  int v33; // [rsp+88h] [rbp-4C0h]
  int v34; // [rsp+8Ch] [rbp-4BCh]
  int v35; // [rsp+90h] [rbp-4B8h]
  __int64 v36; // [rsp+98h] [rbp-4B0h] BYREF
  HANDLE Handlea; // [rsp+A0h] [rbp-4A8h]
  __int64 v38; // [rsp+A8h] [rbp-4A0h]
  void *v39; // [rsp+B0h] [rbp-498h]
  _QWORD *v40; // [rsp+B8h] [rbp-490h]
  unsigned __int64 *v41; // [rsp+C0h] [rbp-488h]
  __int64 v42; // [rsp+C8h] [rbp-480h]
  int v43; // [rsp+D0h] [rbp-478h] BYREF
  const wchar_t *v44; // [rsp+D8h] [rbp-470h]
  char v45[2]; // [rsp+E0h] [rbp-468h] BYREF
  __int16 v46; // [rsp+E2h] [rbp-466h]
  _WORD *v47; // [rsp+E8h] [rbp-460h]
  int v48; // [rsp+F0h] [rbp-458h] BYREF
  unsigned __int16 v49; // [rsp+F4h] [rbp-454h]
  unsigned __int16 v50; // [rsp+F6h] [rbp-452h]
  unsigned __int16 v51; // [rsp+104h] [rbp-444h]
  __int16 v52; // [rsp+108h] [rbp-440h]
  unsigned int v53; // [rsp+164h] [rbp-3E4h]
  unsigned int v54; // [rsp+174h] [rbp-3D4h]
  unsigned int v55; // [rsp+178h] [rbp-3D0h]
  int v56; // [rsp+17Ch] [rbp-3CCh]
  unsigned int v57; // [rsp+188h] [rbp-3C0h]
  int v58; // [rsp+18Ch] [rbp-3BCh]
  __int16 v59[30]; // [rsp+200h] [rbp-348h] BYREF
  unsigned int v60; // [rsp+23Ch] [rbp-30Ch]
  unsigned __int16 v61[264]; // [rsp+240h] [rbp-308h] BYREF
  _WORD Src[88]; // [rsp+450h] [rbp-F8h] BYREF

  v34 = a4;
  v38 = a3;
  v8 = a2;
  v33 = a2;
  Handlea = Handle;
  v41 = a5;
  v40 = a6;
  v39 = a7;
  v42 = a8;
  LODWORD(v32[0]) = 4456514;
  v32[1] = L"LdrpResSearchResourceHandle Enter";
  v43 = 4325440;
  v44 = L"LdrpResSearchResourceHandle Exit";
  memset(Src, 0, 0xACuLL);
  v10 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v11 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v11 = 2147353477LL;
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    RtlGetCurrentServiceSessionId();
    LdrpTraceLoadMUIDll((unsigned __int16 *)v32);
  }
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    File = -1073741811;
    v30 = -1073741811;
    Heap = 0LL;
    goto LABEL_52;
  }
  v12 = v8 & 0x1000;
  v35 = v12;
  result = LdrpResFileSize((__int64)Handle, &v36);
  if ( (int)result < 0 && (v8 & 0x1000) != 0 )
    return result;
  result = LdrpResReadFile(Handle, 0LL, (__int64)v59, 64);
  if ( (int)result < 0 )
    return result;
  if ( v59[0] != 23117 )
    goto LABEL_11;
  v16 = v60;
  if ( v12 )
  {
    if ( (unsigned __int64)v60 + 264 < v60 )
      goto LABEL_11;
    if ( v60 > 0x10000000 )
      goto LABEL_11;
    if ( v60 + 264 <= v60 )
      goto LABEL_11;
    v17 = v36;
    if ( (unsigned __int64)v60 + 264 >= (unsigned int)v36 )
      goto LABEL_11;
  }
  else
  {
    v17 = v36;
  }
  result = LdrpResReadFile(Handle, v60, (__int64)&v48, 264);
  if ( (int)result < 0 )
    return result;
  if ( v48 != 17744 )
    goto LABEL_11;
  if ( v52 == 267 )
  {
    v18 = v49;
    if ( v49 != 332 )
    {
      if ( (unsigned __int16)(v49 - 448) > 4u )
        goto LABEL_11;
      v19 = 21;
      LOWORD(v18) = v49 - 448;
      if ( !_bittest(&v19, v18) )
        goto LABEL_11;
    }
    if ( v53 > 2 && v56 )
    {
      v20 = v51;
      if ( v51 >= 0x78u )
      {
        v21 = v55;
        goto LABEL_38;
      }
      goto LABEL_11;
    }
LABEL_27:
    File = -1073741687;
    goto LABEL_12;
  }
  if ( v52 != 523 || v49 != 512 && v49 != 0x8664 )
    goto LABEL_11;
  if ( v54 <= 2 || !v58 )
    goto LABEL_27;
  v20 = v51;
  if ( v51 >= 0x88u )
  {
    v21 = v57;
LABEL_38:
    if ( !v21 )
      return 3221225609LL;
    if ( !v50 )
      goto LABEL_11;
    v22 = 40 * v50;
    if ( v16 + v22 + v20 + 24 > v17 )
      goto LABEL_11;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v22);
    v32[0] = Heap;
    if ( !Heap )
    {
      File = -1073741801;
      v30 = -1073741801;
      goto LABEL_52;
    }
    File = LdrpResReadFile((char *)Handlea, v16 + v51 + 24, Heap, v22);
    v30 = File;
    if ( File >= 0 )
    {
      v23 = (_DWORD *)v32[0];
      v24 = 0;
      if ( v50 )
      {
        do
        {
          v25 = v23[3];
          if ( v21 >= v25 && v21 < v23[4] + v25 )
            break;
          v23 += 10;
          ++v24;
        }
        while ( v24 < v50 );
      }
      if ( v24 < v50 && (v26 = v21 + (unsigned int)v23[5] - (unsigned __int64)(unsigned int)v23[3]) != 0 )
      {
        v27 = (char *)Handlea;
        File = LdrpResSetFilePointer(Handlea, v26);
        v30 = File;
        if ( File >= 0 )
        {
          if ( v34 == 3 )
          {
            v61[0] = 0;
            if ( (v33 & 0x20) != 0 )
            {
              v61[0] = 1;
              v61[2] = 0;
            }
            else
            {
              File = LdrResFallbackLangList(0LL, 0, *(_WORD *)(v38 + 16), v33, v61);
              v30 = File;
              if ( File < 0 && v35 )
                goto LABEL_51;
            }
          }
          v31 = 0;
          File = LdrpResSearchResourceInsideDirectory(
                   0LL,
                   v27,
                   (unsigned int)v36,
                   v26,
                   (__int64)&v48,
                   (__int64)v23,
                   v38,
                   v34,
                   (__int64)v61,
                   v41,
                   v40,
                   v33,
                   &v31);
          v30 = File;
          if ( File >= 0 )
          {
            v28 = (_DWORD *)v42;
            if ( v42 )
            {
              if ( !v31 )
              {
                LODWORD(v29) = 0;
                goto LABEL_76;
              }
              v47 = Src;
              v46 = 172;
              File = RtlLcidToLocaleName(v31, (__int64)v45, 2, 0);
              v30 = File;
              if ( File >= 0 )
              {
                v29 = -1LL;
                do
                  ++v29;
                while ( Src[v29] );
LABEL_76:
                if ( (unsigned int)v29 < *v28 && v39 )
                {
                  memmove(v39, Src, 2LL * (unsigned int)v29);
                  *v28 = v29 + 1;
                  *((_WORD *)v39 + (unsigned int)v29) = 0;
                  Heap = v32[0];
                }
                else
                {
                  *v28 = v29 + 1;
                  File = -1073741789;
                  v30 = -1073741789;
                  Heap = v32[0];
                }
                goto LABEL_52;
              }
            }
          }
        }
      }
      else
      {
        File = -1073741701;
        v30 = -1073741701;
      }
    }
LABEL_51:
    Heap = v32[0];
    goto LABEL_52;
  }
LABEL_11:
  File = -1073741701;
LABEL_12:
  v30 = File;
  Heap = 0LL;
LABEL_52:
  if ( Heap )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    File = v30;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v10 = (__int64)NtCurrentPeb()->SharedData + 555;
    File = v30;
  }
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      File = v30;
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v43);
  }
  return (unsigned int)File;
}
