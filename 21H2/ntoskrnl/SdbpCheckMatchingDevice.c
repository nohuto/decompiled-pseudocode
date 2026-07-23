/*
 * XREFs of SdbpCheckMatchingDevice @ 0x140964480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x140756740 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbpCheckMatchingDevice(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 (__fastcall *v6)(__int64); // rbp
  unsigned int v7; // ebx
  unsigned int FirstTag; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 StringTagPtr; // rax

  v6 = *(__int64 (__fastcall **)(__int64))(a2 + 1736);
  v7 = 0;
  *a1 = 0;
  if ( v6
    && (FirstTag = SdbFindFirstTag(a3, a5, 24577)) != 0
    && (StringTagPtr = SdbGetStringTagPtr(a3, FirstTag, v11, v12)) != 0 )
  {
    v7 = 1;
    *a1 = v6(StringTagPtr);
    if ( a6 )
      *(_DWORD *)(a6 + 80) = 1;
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return v7;
}
