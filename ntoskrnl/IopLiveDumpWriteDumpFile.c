/*
 * XREFs of IopLiveDumpWriteDumpFile @ 0x14094C514
 * Callers:
 *     IoCaptureLiveDump @ 0x140948A78 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140949354 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     MmFreePagesFromMdl @ 0x1402C0DB0 (MmFreePagesFromMdl.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SecureDump_Get_SecureDumpHeader @ 0x14055BBE0 (SecureDump_Get_SecureDumpHeader.c)
 *     RtlNumberOfSetBitsEx @ 0x1405A6770 (RtlNumberOfSetBitsEx.c)
 *     MmFreeIndependentPages @ 0x14087B250 (MmFreeIndependentPages.c)
 *     IopLiveDumpCheckTermination @ 0x14094AF74 (IopLiveDumpCheckTermination.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14094B0B8 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpFreeIoSpaceRanges @ 0x14094B2F4 (IopLiveDumpFreeIoSpaceRanges.c)
 *     IopLiveDumpWriteBuffer @ 0x14094C450 (IopLiveDumpWriteBuffer.c)
 *     IopLiveDumpWriteSecondaryData @ 0x14094D248 (IopLiveDumpWriteSecondaryData.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopLiveDumpWriteDumpFile(__int64 a1)
{
  __int64 v1; // r14
  void *v2; // r13
  void *v4; // r12
  LARGE_INTEGER v5; // rax
  unsigned __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int SecureDumpHeader; // edi
  ULONG v9; // r8d
  struct _MDL *v10; // rcx
  __int64 v11; // rax
  struct _MDL *v12; // rdi
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  struct _MDL *Next; // r15
  unsigned int v16; // edx
  unsigned __int64 j; // rcx
  struct _MDL *v18; // rdi
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  struct _MDL *v21; // r15
  unsigned int v22; // edx
  unsigned __int64 k; // rcx
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rsi
  __int128 v27; // xmm0
  int v28; // ecx
  __int128 v29; // xmm0
  int v30; // ecx
  LARGE_INTEGER v31; // rdx
  _DWORD *v32; // rax
  ULONG v33; // r8d
  LARGE_INTEGER ByteOffset; // [rsp+38h] [rbp-39h] BYREF
  struct _KTHREAD *i; // [rsp+40h] [rbp-31h]
  __int64 v37; // [rsp+48h] [rbp-29h]
  __int128 v38; // [rsp+50h] [rbp-21h] BYREF
  __int128 v39; // [rsp+60h] [rbp-11h]
  __int64 v40; // [rsp+70h] [rbp-1h]
  __int128 v41; // [rsp+78h] [rbp+7h] BYREF
  __int128 v42; // [rsp+88h] [rbp+17h]
  __int64 v43; // [rsp+98h] [rbp+27h]

  v1 = *(_QWORD *)(a1 + 560);
  v2 = *(void **)(a1 + 64);
  v37 = 0LL;
  v4 = 0LL;
  v40 = 0LL;
  v38 = 0LL;
  v43 = 0LL;
  v39 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  if ( *(_BYTE *)(a1 + 984) )
    v5.QuadPart = *(_QWORD *)(v1 + 8224) + *(unsigned int *)(a1 + 992);
  else
    v5 = *(LARGE_INTEGER *)(v1 + 8224);
  ByteOffset = v5;
  v6 = 0LL;
  CurrentThread = KeGetCurrentThread();
  for ( i = CurrentThread; v6 < *(_QWORD *)(a1 + 736); ++v6 )
  {
    SecureDumpHeader = IopLiveDumpCheckTermination(a1, (__int64)CurrentThread);
    if ( SecureDumpHeader < 0 )
      goto LABEL_54;
    v9 = v6 >= *(_QWORD *)(a1 + 736) - 1LL ? *(_DWORD *)(a1 + 720) << 12 : BufferChunkSizeInBytes;
    SecureDumpHeader = IopLiveDumpWriteBuffer(v2, *(PVOID *)(*(_QWORD *)(a1 + 752) + 8 * v6), v9, &ByteOffset, a1, 0);
    if ( SecureDumpHeader < 0 )
      goto LABEL_54;
    v10 = *(struct _MDL **)(*(_QWORD *)(a1 + 760) + 8 * v6);
    if ( v10 )
    {
      MmFreePagesFromMdl(v10);
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 760) + 8 * v6), 0x706D644Cu);
      *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v6) = 0LL;
      v11 = *(_QWORD *)(a1 + 760);
    }
    else
    {
      v12 = *(struct _MDL **)(a1 + 816);
      if ( v12 )
      {
        v13 = *(_QWORD *)(a1 + 808);
        if ( v13 )
        {
          v14 = *(_QWORD *)(a1 + 800);
          if ( v6 >= v14 )
          {
            if ( v6 - v14 + 1 == v13 )
            {
              do
              {
                Next = v12->Next;
                if ( (v12->MdlFlags & 1) != 0 )
                  MmUnmapLockedPages(v12->MappedSystemVa, v12);
                ExFreePoolWithTag(v12, 0x706D644Cu);
                v12 = Next;
              }
              while ( Next );
              v16 = *(_DWORD *)(a1 + 832);
              *(_QWORD *)(a1 + 816) = 0LL;
              IopLiveDumpFreeIoSpaceRanges((PVOID *)(a1 + 824), v16);
              for ( j = *(_QWORD *)(a1 + 800); j < v6; *(_QWORD *)(a1 + 800) = j )
              {
                *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * j) = 0LL;
                j = *(_QWORD *)(a1 + 800) + 1LL;
              }
              *(_QWORD *)(a1 + 808) = 0LL;
            }
            goto LABEL_36;
          }
        }
      }
      v18 = *(struct _MDL **)(a1 + 856);
      if ( v18 )
      {
        v19 = *(_QWORD *)(a1 + 848);
        if ( v19 )
        {
          v20 = *(_QWORD *)(a1 + 840);
          if ( v6 >= v20 )
          {
            if ( v6 - v20 + 1 == v19 )
            {
              do
              {
                v21 = v18->Next;
                if ( (v18->MdlFlags & 1) != 0 )
                  MmUnmapLockedPages(v18->MappedSystemVa, v18);
                ExFreePoolWithTag(v18, 0x706D644Cu);
                v18 = v21;
              }
              while ( v21 );
              v22 = *(_DWORD *)(a1 + 872);
              *(_QWORD *)(a1 + 856) = 0LL;
              IopLiveDumpFreeIoSpaceRanges((PVOID *)(a1 + 864), v22);
              for ( k = *(_QWORD *)(a1 + 840); k < v6; *(_QWORD *)(a1 + 840) = k )
              {
                *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * k) = 0LL;
                k = *(_QWORD *)(a1 + 840) + 1LL;
              }
              *(_QWORD *)(a1 + 848) = 0LL;
            }
            goto LABEL_36;
          }
        }
      }
      MmFreeIndependentPages(*(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v6), (unsigned int)BufferChunkSizeInBytes);
      v11 = *(_QWORD *)(a1 + 752);
    }
    *(_QWORD *)(v11 + 8 * v6) = 0LL;
LABEL_36:
    CurrentThread = i;
  }
  v24 = RtlNumberOfSetBitsEx((_QWORD *)(a1 + 544));
  v25 = *(_DWORD *)(a1 + 1088);
  v26 = v24;
  if ( v25 )
  {
    v27 = *(_OWORD *)(a1 + 1064);
    *(_QWORD *)&v39 = *(_QWORD *)(a1 + 1080);
    v40 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = &v38;
    v38 = v27;
    DWORD2(v39) = v25;
  }
  v28 = *(_DWORD *)(a1 + 1040);
  if ( v28 )
  {
    v29 = *(_OWORD *)(a1 + 1016);
    *(_QWORD *)&v42 = *(_QWORD *)(a1 + 1032);
    v43 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = &v41;
    v41 = v29;
    DWORD2(v42) = v28;
  }
  SecureDumpHeader = IopLiveDumpWriteSecondaryData(v2, a1);
  if ( SecureDumpHeader >= 0 )
  {
    *(_QWORD *)(v1 + 4000) = ByteOffset.QuadPart - *(unsigned int *)(a1 + 992);
    v30 = *(_DWORD *)(v1 + 4176) | 0x10;
    *(_DWORD *)(v1 + 4176) = v30;
    if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
      *(_DWORD *)(v1 + 4176) = v30 | 0x4000;
    *(_DWORD *)(v1 + 0x2000) = 1347241043;
    *(_DWORD *)(v1 + 8196) = 1347245380;
    *(_QWORD *)(v1 + 8232) = v26;
    if ( *(_BYTE *)(a1 + 984) )
    {
      v31.QuadPart = *(unsigned int *)(a1 + 992);
      ByteOffset = v31;
      v32 = (_DWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))ExAllocatePool2)(
                        64LL,
                        (LARGE_INTEGER)v31.QuadPart,
                        1886217292LL);
      v4 = v32;
      if ( !v32 )
      {
        SecureDumpHeader = -1073741670;
        goto LABEL_54;
      }
      SecureDumpHeader = SecureDump_Get_SecureDumpHeader(v1, v32, *(_DWORD *)(a1 + 992));
      if ( SecureDumpHeader < 0 )
      {
LABEL_53:
        ExFreePoolWithTag(v4, 0);
        goto LABEL_54;
      }
    }
    else
    {
      ByteOffset.QuadPart = 0LL;
    }
    SecureDumpHeader = IopLiveDumpWriteBuffer(v2, (PVOID)v1, *(_DWORD *)(v1 + 8224), &ByteOffset, a1, 0);
    if ( *(_BYTE *)(a1 + 984) )
    {
      v33 = *(_DWORD *)(a1 + 992);
      ByteOffset.QuadPart = 0LL;
      SecureDumpHeader = IopLiveDumpWriteBuffer(v2, v4, v33, &ByteOffset, a1, 1);
    }
    if ( v4 )
      goto LABEL_53;
  }
LABEL_54:
  IopLiveDumpFreeDumpBuffers(a1);
  return (unsigned int)SecureDumpHeader;
}
