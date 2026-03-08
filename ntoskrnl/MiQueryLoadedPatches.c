/*
 * XREFs of MiQueryLoadedPatches @ 0x140A38650
 * Callers:
 *     NtManageHotPatch @ 0x140784740 (NtManageHotPatch.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     RtlCopySid @ 0x1406D4890 (RtlCopySid.c)
 *     MiFindUserSidHotPatchContext @ 0x140A3420C (MiFindUserSidHotPatchContext.c)
 */

__int64 __fastcall MiQueryLoadedPatches(PSID SourceSid, _QWORD *a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  struct _KTHREAD *CurrentThread; // r13
  _DWORD *v6; // r14
  _QWORD *v7; // r15
  int *v9; // rdi
  unsigned __int64 j; // rbx
  __int64 v11; // rsi
  _QWORD *UserSidHotPatchContext; // rax
  unsigned __int64 v13; // rdx
  unsigned int v14; // esi
  _QWORD *v15; // rax
  unsigned __int64 i; // rcx
  unsigned __int64 v17; // r8
  _QWORD **v18; // rax
  _QWORD *v19; // r8
  unsigned int v20; // ebx
  int v21; // r12d
  _DWORD *Pool; // rax
  _DWORD *v23; // rdi
  __int64 v24; // rax
  UNICODE_STRING *v25; // r15
  _DWORD *v26; // r14
  char *v27; // rsi
  wchar_t *v28; // rbp
  unsigned __int16 v29; // ax
  unsigned __int64 v30; // rcx
  _QWORD **v31; // rax
  _QWORD *v32; // rcx
  bool v33; // zf

  CurrentThread = KeGetCurrentThread();
  v6 = a3;
  v7 = a2;
  v9 = 0LL;
  j = 0LL;
  --CurrentThread->SpecialApcDisable;
  v11 = KeAbPreAcquire((__int64)&xmmword_140C694C8, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&xmmword_140C694C8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&xmmword_140C694C8, 0, v11, (__int64)&xmmword_140C694C8);
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  if ( !SourceSid )
  {
    v9 = &xmmword_140C694B0;
    v13 = 96LL;
    v14 = 0;
LABEL_11:
    v15 = *(_QWORD **)v9;
    j = 0LL;
    while ( v15 )
    {
      j = (unsigned __int64)v15;
      v15 = (_QWORD *)*v15;
    }
    i = j;
    while ( i )
    {
      ++v14;
      v17 = i;
      v13 += *(unsigned __int16 *)(i + 32) + 24LL;
      v18 = *(_QWORD ***)(i + 8);
      if ( v18 )
      {
        v19 = *v18;
        for ( i = *(_QWORD *)(i + 8); v19; v19 = (_QWORD *)*v19 )
          i = (unsigned __int64)v19;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v17 )
            break;
          v17 = i;
        }
      }
    }
    goto LABEL_23;
  }
  UserSidHotPatchContext = MiFindUserSidHotPatchContext(SourceSid);
  if ( UserSidHotPatchContext )
    v9 = (int *)(UserSidHotPatchContext + 3);
  v13 = 96LL;
  v14 = 0;
  if ( v9 )
    goto LABEL_11;
LABEL_23:
  if ( a5 >= v13 )
  {
    v21 = v13;
    Pool = MiAllocatePool(256, (unsigned int)v13, 0x71486D4Du);
    v23 = Pool;
    if ( !Pool )
    {
      v20 = -1073741670;
      goto LABEL_44;
    }
    *Pool = 2;
    if ( SourceSid )
      RtlCopySid(0x44u, Pool + 1, SourceSid);
    if ( v14 )
    {
      v24 = v14;
      v25 = (UNICODE_STRING *)(v23 + 24);
      *((_QWORD *)v23 + 10) = v23 + 24;
      v26 = &v23[4 * v14 + 24];
      v27 = (char *)v23 - a4;
      *((_QWORD *)v23 + 11) = v26;
      v28 = (wchar_t *)&v26[2 * v24];
      while ( j )
      {
        *v26 = *(_DWORD *)(j + 24);
        v26[1] = *(_DWORD *)(j + 28);
        v29 = *(_WORD *)(j + 32);
        v25->Length = v29;
        v25->MaximumLength = v29;
        v25->Buffer = v28;
        RtlCopyUnicodeString(v25, (PCUNICODE_STRING)(j + 32));
        v25->Buffer = (wchar_t *)((char *)v25->Buffer - v27);
        v26 += 2;
        ++v23[18];
        v30 = j;
        v28 = (wchar_t *)((char *)v28 + v25->Length);
        ++v25;
        v31 = *(_QWORD ***)(j + 8);
        if ( v31 )
        {
          v32 = *v31;
          for ( j = *(_QWORD *)(j + 8); v32; v32 = (_QWORD *)*v32 )
            j = (unsigned __int64)v32;
        }
        else
        {
          while ( 1 )
          {
            j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !j || *(_QWORD *)j == v30 )
              break;
            v30 = j;
          }
        }
      }
      *((_QWORD *)v23 + 11) -= v27;
      *((_QWORD *)v23 + 10) -= v27;
      v6 = a3;
      v7 = a2;
    }
    *v7 = v23;
    *v6 = v21;
  }
  else
  {
    if ( v13 > 0xFFFFFFFF )
    {
      v20 = -1073741675;
      goto LABEL_44;
    }
    *v7 = 0LL;
    *v6 = v13;
  }
  v20 = 0;
LABEL_44:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&xmmword_140C694C8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&xmmword_140C694C8);
  KeAbPostRelease((ULONG_PTR)&xmmword_140C694C8);
  v33 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v33 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v20;
}
