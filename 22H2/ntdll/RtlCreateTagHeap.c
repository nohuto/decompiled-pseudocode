/*
 * XREFs of RtlCreateTagHeap @ 0x18007DA40
 * Callers:
 *     CsrClientConnectToServer @ 0x180008E20 (CsrClientConnectToServer.c)
 *     TpInitializePackage @ 0x18007D99C (TpInitializePackage.c)
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 *     RtlDebugCreateTagHeap @ 0x1800F9074 (RtlDebugCreateTagHeap.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlStringCbCopyW @ 0x18003BC7C (RtlStringCbCopyW.c)
 *     RtlpAllocateTags @ 0x1800F3320 (RtlpAllocateTags.c)
 *     RtlDebugCreateTagHeap @ 0x1800F9074 (RtlDebugCreateTagHeap.c)
 */

__int64 __fastcall RtlCreateTagHeap(void *Src, int a2, __int64 a3, _WORD *a4)
{
  __int64 v5; // r13
  int v7; // edx
  __int64 v8; // rdx
  unsigned int TagHeap; // esi
  int v10; // esi
  __int16 v11; // ax
  __int16 *v12; // rdi
  const wchar_t *v13; // r14
  __int16 *v14; // rax
  __int16 v15; // cx
  __int64 Tags; // rax
  __int64 v17; // rbx
  const wchar_t *v18; // r8
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rax
  _WORD *v21; // r12
  char v23; // [rsp+20h] [rbp-78h]
  __int64 v25; // [rsp+A0h] [rbp+8h]

  v5 = 0LL;
  v23 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0LL;
  if ( !RtlpGlobalTagHeap )
  {
    RtlpGlobalTagHeap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 704LL);
    if ( !RtlpGlobalTagHeap )
      return 0LL;
  }
  if ( Src && (*((_DWORD *)Src + 4) == -571548178 || (*((_DWORD *)Src + 29) & 0x1000000) != 0) )
    return 0LL;
  if ( !Src )
  {
LABEL_13:
    v10 = 0;
    v8 = 0LL;
    v11 = 33;
    v12 = a4;
    if ( *a4 == 33 )
    {
      v13 = a4 + 1;
      while ( 1 )
      {
        ++v12;
        if ( !v11 )
          break;
        v11 = *v12;
      }
    }
    else
    {
      v13 = 0LL;
    }
    v14 = v12;
    while ( 1 )
    {
      v15 = *v14;
      if ( !*v14 )
        break;
      while ( 1 )
      {
        ++v14;
        if ( !v15 )
          break;
        v15 = *v14;
      }
      v8 = (unsigned int)(v8 + 1);
    }
    if ( !(_DWORD)v8 || (Tags = RtlpAllocateTags(Src), (v17 = Tags) == 0) )
    {
LABEL_47:
      TagHeap = v10 << 18;
      goto LABEL_48;
    }
    v25 = 23LL;
    v10 = *(unsigned __int16 *)(Tags + 16);
    if ( *(_WORD *)(Tags + 16) )
    {
      if ( v10 != 2048 )
        goto LABEL_32;
      v18 = L"GlobalTags";
    }
    else
    {
      if ( !v13 )
      {
LABEL_31:
        v17 += 72LL;
        v10 = *(unsigned __int16 *)(v17 + 16);
LABEL_32:
        if ( !a3 )
          goto LABEL_40;
        v19 = -1LL;
        do
          ++v19;
        while ( *(_WORD *)(a3 + 2 * v19) );
        v20 = v19;
        if ( v19 )
        {
          if ( v19 < 0x13 )
            v25 = 23 - v19;
          else
            v19 = 0LL;
          v5 = a3 & -(__int64)(v20 < 0x13);
        }
        else
        {
LABEL_40:
          v19 = 0LL;
        }
        while ( *v12 )
        {
          v21 = (_WORD *)(v17 + 20);
          if ( v5 )
          {
            RtlStringCbCopyW((_WORD *)(v17 + 20), 2 * v25, v5);
            v21 += v19;
          }
          RtlStringCbCopyW(v21, 2 * (v25 - v19), (__int64)v12);
          while ( *v12++ )
            ;
          v17 += 72LL;
        }
        goto LABEL_47;
      }
      v18 = v13;
    }
    RtlStringCbCopyW((_WORD *)(Tags + 20), 0x2EuLL, (__int64)v18);
    goto LABEL_31;
  }
  v7 = *((_DWORD *)Src + 29) | a2;
  if ( (v7 & 0x61000000) == 0 || (v7 & 0x10000000) != 0 )
  {
    if ( (v7 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v23 = 1;
    }
    goto LABEL_13;
  }
  TagHeap = RtlDebugCreateTagHeap(Src);
LABEL_48:
  if ( v23 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44), v8, a3);
  return TagHeap;
}
