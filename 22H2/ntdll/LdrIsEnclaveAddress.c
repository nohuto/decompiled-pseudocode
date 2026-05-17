/*
 * XREFs of LdrIsEnclaveAddress @ 0x1800CCDB0
 * Callers:
 *     RtlGuardCheckImageBase @ 0x180075B68 (RtlGuardCheckImageBase.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x18002FA14 (LdrpObtainLockedEnclave.c)
 *     ZwQueryVirtualMemory @ 0x18009D940 (ZwQueryVirtualMemory.c)
 *     LdrpDereferenceEnclave @ 0x1800CD300 (LdrpDereferenceEnclave.c)
 */

char __fastcall LdrIsEnclaveAddress(unsigned __int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  bool v5; // bl
  __int64 *v6; // rdi
  __int64 v7; // rax
  char v9; // [rsp+3Ch] [rbp-2Ch]

  v2 = LdrpObtainLockedEnclave(a1, 0);
  v5 = 0;
  v6 = v2;
  if ( v2 )
  {
    if ( *((_DWORD *)v2 + 14) == 16 )
    {
      v7 = v2[14];
      if ( v7 )
      {
        if ( a1 == *(_QWORD *)(v7 + 184) && (int)ZwQueryVirtualMemory() >= 0 )
          v5 = (v9 & 0x40) != 0;
      }
    }
    RtlLeaveCriticalSection((__int64)(v6 + 2), v3, v4);
    LdrpDereferenceEnclave(v6);
    LOBYTE(v2) = v5;
  }
  return (char)v2;
}
