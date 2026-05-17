/*
 * XREFs of RtlGetCurrentDirectory_U @ 0x18005E790
 * Callers:
 *     LdrpMakeUnicodeStringFromPathElement @ 0x1800D00E4 (LdrpMakeUnicodeStringFromPathElement.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlpReferenceCurrentDirectory @ 0x18005E870 (RtlpReferenceCurrentDirectory.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 */

__int64 __fastcall RtlGetCurrentDirectory_U(__int64 a1, char *a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rbx
  wchar_t *Buffer; // rdx
  unsigned int Length; // edi
  __int64 v10; // rdi
  size_t v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx

  v3 = (unsigned int)a1;
  LOBYTE(a1) = 1;
  v5 = RtlpReferenceCurrentDirectory(a1, a2, a3);
  v7 = v5;
  if ( v5 )
  {
    Buffer = *(wchar_t **)(v5 + 32);
    Length = *(unsigned __int16 *)(v5 + 24);
  }
  else
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    Buffer = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    Length = ProcessParameters->CurrentDirectory.DosPath.Length;
  }
  v10 = Length >> 1;
  if ( (unsigned int)v10 < 2 || Buffer[(unsigned int)(v10 - 2)] == 58 )
  {
    v11 = 2 * v10;
    if ( v3 > 2 * v10 )
      goto LABEL_6;
    if ( v5 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v5 + 8));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
      }
    }
    else
    {
      RtlLeaveCriticalSection((__int64)&FastPebLock, (__int64)Buffer, v6);
    }
    return (unsigned int)(2 * v10 + 2);
  }
  else
  {
    v11 = 2 * v10;
    if ( v3 >= 2 * v10 )
    {
LABEL_6:
      memmove(a2, Buffer, v11);
      if ( v7 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
        {
          NtClose(*(HANDLE *)(v7 + 8));
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
        }
      }
      else
      {
        RtlLeaveCriticalSection((__int64)&FastPebLock, v12, v13);
      }
      if ( (unsigned int)v10 > 1 && *(_WORD *)&a2[2 * (unsigned int)(v10 - 2)] == 58 )
      {
        *(_WORD *)&a2[v11] = 0;
      }
      else
      {
        LODWORD(v10) = v10 - 1;
        *(_WORD *)&a2[2 * (unsigned int)v10] = 0;
      }
      return (unsigned int)(2 * v10);
    }
    if ( v5 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v5 + 8));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
      }
    }
    else
    {
      RtlLeaveCriticalSection((__int64)&FastPebLock, (__int64)Buffer, v6);
    }
    return (unsigned int)v11;
  }
}
