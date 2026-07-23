/*
 * XREFs of RtlAllocateAndInitializeSid @ 0x18006E920
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 */

NTSTATUS __cdecl RtlAllocateAndInitializeSid(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        UCHAR SubAuthorityCount,
        ULONG SubAuthority0,
        ULONG SubAuthority1,
        ULONG SubAuthority2,
        ULONG SubAuthority3,
        ULONG SubAuthority4,
        ULONG SubAuthority5,
        ULONG SubAuthority6,
        ULONG SubAuthority7,
        PSID *Sid)
{
  int v11; // edi
  char *Heap; // rax

  v11 = SubAuthorityCount;
  if ( SubAuthorityCount > 8u )
    return -1073741704;
  Heap = (char *)RtlAllocateHeap(
                   NtCurrentPeb()->ProcessHeap,
                   NtdllBaseTag + 1310720,
                   4 * (unsigned int)SubAuthorityCount + 8);
  if ( Heap )
  {
    Heap[1] = v11;
    *Heap = 1;
    *(_DWORD *)(Heap + 2) = *(_DWORD *)IdentifierAuthority->Value;
    *((_WORD *)Heap + 3) = *(_WORD *)&IdentifierAuthority->Value[4];
    if ( v11 != 1 )
    {
      if ( v11 != 2 )
      {
        if ( v11 != 3 )
        {
          if ( v11 != 4 )
          {
            if ( v11 != 5 )
            {
              if ( v11 != 6 )
              {
                if ( v11 != 7 )
                {
                  if ( v11 != 8 )
                    goto LABEL_5;
                  *((_DWORD *)Heap + 9) = SubAuthority7;
                }
                *((_DWORD *)Heap + 8) = SubAuthority6;
              }
              *((_DWORD *)Heap + 7) = SubAuthority5;
            }
            *((_DWORD *)Heap + 6) = SubAuthority4;
          }
          *((_DWORD *)Heap + 5) = SubAuthority3;
        }
        *((_DWORD *)Heap + 4) = SubAuthority2;
      }
      *((_DWORD *)Heap + 3) = SubAuthority1;
    }
    *((_DWORD *)Heap + 2) = SubAuthority0;
LABEL_5:
    *Sid = Heap;
    return 0;
  }
  return -1073741801;
}
