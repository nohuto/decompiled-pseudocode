/*
 * XREFs of MmRegisterHotPatches @ 0x140B7092C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     MmAcquireLoadLock @ 0x1407D2360 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407D2400 (MmReleaseLoadLock.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 *     VslDetermineHotPatchType @ 0x14093F108 (VslDetermineHotPatchType.c)
 *     MiAllocateHotPatchRecord @ 0x140A31AD8 (MiAllocateHotPatchRecord.c)
 *     MiAllocateSecureImageActivePatch @ 0x140A31B5C (MiAllocateSecureImageActivePatch.c)
 *     MiCompareHotPatchNodes @ 0x140A33944 (MiCompareHotPatchNodes.c)
 *     MiFindHotPatchRecord @ 0x140A33EBC (MiFindHotPatchRecord.c)
 *     MiInsertHotPatchRecord @ 0x140A34E80 (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x140A35124 (MiInsertSecureImageActivePatch.c)
 *     MiLoadHotPatch @ 0x140A352A0 (MiLoadHotPatch.c)
 *     MiLogHotPatchOperationStatus @ 0x140A36298 (MiLogHotPatchOperationStatus.c)
 */

__int64 __fastcall MmRegisterHotPatches(__int64 a1)
{
  int v2; // esi
  struct _KTHREAD *Lock; // r13
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  unsigned __int64 i; // rbx
  _QWORD *v8; // rcx
  signed int v9; // edi
  __int64 result; // rax
  _QWORD *v11; // rbx
  int v12; // edx
  int v13; // ecx
  _DWORD *HotPatchRecord; // rax
  UNICODE_STRING *SecureImageActivePatch; // rax
  _QWORD *v16; // rdi
  int v17; // eax
  _QWORD **v18; // rax
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rcx
  int v21; // eax
  char v22; // r15
  PVOID *v23; // rbx
  __int64 v24; // rcx
  _DWORD v25[16]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v26; // [rsp+B0h] [rbp+40h] BYREF
  int v27; // [rsp+B8h] [rbp+48h] BYREF
  int v28; // [rsp+C0h] [rbp+50h] BYREF

  v27 = 0;
  v26 = 0;
  v28 = 0;
  memset(v25, 0, sizeof(v25));
  v2 = 0;
  Lock = MmAcquireLoadLock();
  v4 = (_QWORD *)(*(_QWORD *)(a1 + 240) + 3784LL);
  v5 = (_QWORD *)*v4;
  if ( (_QWORD *)*v4 != v4 )
  {
    do
    {
      v12 = *((_DWORD *)v5 + 10);
      v13 = v2 + 1;
      if ( (v12 & 6) != 4 )
        v13 = v2;
      v2 = v13;
      if ( (v12 & 1) != 0 )
      {
        HotPatchRecord = MiAllocateHotPatchRecord(*((_DWORD *)v5 + 8), *((_DWORD *)v5 + 9), (const void **)v5 + 2);
        if ( !HotPatchRecord )
          goto LABEL_22;
        MiInsertHotPatchRecord((unsigned __int64 *)&xmmword_140C694B0, (unsigned __int64)HotPatchRecord, 0);
        MiLogHotPatchOperationStatus(*((_DWORD *)v5 + 8), *((_DWORD *)v5 + 9), (UNICODE_STRING *)v5 + 1, 0, 5);
        if ( (v5[5] & 2) != 0 )
        {
          SecureImageActivePatch = MiAllocateSecureImageActivePatch((PCUNICODE_STRING)v5 + 1);
          if ( !SecureImageActivePatch )
          {
LABEL_22:
            v9 = -1073741670;
            goto LABEL_8;
          }
          LODWORD(SecureImageActivePatch[1].Buffer) = *((_DWORD *)v5 + 8);
          HIDWORD(SecureImageActivePatch[1].Buffer) = *((_DWORD *)v5 + 9);
          *(_DWORD *)&SecureImageActivePatch[2].Length = *((_DWORD *)v5 + 18);
          *(_DWORD *)(&SecureImageActivePatch[2].MaximumLength + 1) = *((_DWORD *)v5 + 19);
          LODWORD(SecureImageActivePatch[2].Buffer) = *((_DWORD *)v5 + 17);
          MiInsertSecureImageActivePatch((unsigned __int64)SecureImageActivePatch);
          MiLogHotPatchOperationStatus(*((_DWORD *)v5 + 8), *((_DWORD *)v5 + 9), (UNICODE_STRING *)v5 + 1, 0, 6);
        }
        else
        {
          MiLogHotPatchOperationStatus(*((_DWORD *)v5 + 8), *((_DWORD *)v5 + 9), (UNICODE_STRING *)v5 + 1, 0, 7);
        }
      }
      v5 = (_QWORD *)*v5;
    }
    while ( v5 != (_QWORD *)(*(_QWORD *)(a1 + 240) + 3784LL) );
  }
  v6 = *(_QWORD **)&xmmword_140C694B0;
  i = 0LL;
  while ( v6 )
  {
    i = (unsigned __int64)v6;
    v6 = (_QWORD *)*v6;
  }
  while ( i )
  {
    v16 = (_QWORD *)qword_140C694C0;
    v25[6] = *(_DWORD *)(i + 24);
    v25[7] = *(_DWORD *)(i + 28);
    if ( !qword_140C694C0 )
      goto LABEL_57;
    do
    {
      v17 = MiCompareHotPatchNodes((__int64)v25, (__int64)v16);
      if ( v17 >= 0 )
      {
        if ( v17 <= 0 )
          break;
        v16 = (_QWORD *)v16[1];
      }
      else
      {
        v16 = (_QWORD *)*v16;
      }
    }
    while ( v16 );
    if ( !v16 )
    {
LABEL_57:
      v9 = VslDetermineHotPatchType(*(_DWORD *)(i + 24), *(_DWORD *)(i + 28), &v28);
      if ( v9 < 0 )
        goto LABEL_8;
      if ( (v28 & 3) != 0 )
      {
        v9 = MiLoadHotPatch((const void **)(i + 32), 2, &v27, &v26);
        if ( v9 < 0 )
          goto LABEL_8;
      }
    }
    v18 = *(_QWORD ***)(i + 8);
    v19 = i;
    if ( v18 )
    {
      v20 = *v18;
      for ( i = *(_QWORD *)(i + 8); v20; v20 = (_QWORD *)*v20 )
        i = (unsigned __int64)v20;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v19 )
          break;
        v19 = i;
      }
    }
  }
  v8 = (_QWORD *)(*(_QWORD *)(a1 + 240) + 3784LL);
  if ( (qword_140C69500 & 1) != 0 )
  {
    v11 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 != v8 )
    {
      do
      {
        if ( (v11[5] & 3) == 0 )
        {
          v25[6] = *((_DWORD *)v11 + 8);
          v25[7] = *((_DWORD *)v11 + 9);
          v21 = MiFindHotPatchRecord((__int64 *)&xmmword_140C694B0, 0, *((_DWORD *)v11 + 8), *((_DWORD *)v11 + 9), 0LL);
          v27 = *((_DWORD *)v11 + 8);
          v26 = *((_DWORD *)v11 + 9);
          v22 = 9;
          if ( v21 >= 0 )
            v22 = 12;
          v9 = MiLoadHotPatch((const void **)v11 + 2, v22, &v27, &v26);
          if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073740748 )
            goto LABEL_8;
          if ( (v22 & 1) != 0 )
            MiLogHotPatchOperationStatus(*((_DWORD *)v11 + 8), *((_DWORD *)v11 + 9), (UNICODE_STRING *)v11 + 1, v9, 5);
        }
        v11 = (_QWORD *)*v11;
      }
      while ( v11 != (_QWORD *)(*(_QWORD *)(a1 + 240) + 3784LL) );
    }
  }
  if ( v2 )
  {
    v23 = (PVOID *)PsLoadedModuleList;
    while ( v23 != &PsLoadedModuleList )
    {
      v24 = (__int64)v23;
      v23 = (PVOID *)*v23;
      if ( _bittest16((const signed __int16 *)(v24 + 110), 9u) )
        MiUnloadSystemImage(v24, -1);
    }
  }
  v9 = 0;
LABEL_8:
  MmReleaseLoadLock((__int64)Lock);
  result = (unsigned int)v9;
  byte_140C694F8 = 1;
  return result;
}
