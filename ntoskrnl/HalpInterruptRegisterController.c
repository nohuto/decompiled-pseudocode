/*
 * XREFs of HalpInterruptRegisterController @ 0x140373AE4
 * Callers:
 *     HalpPicDiscover @ 0x140374634 (HalpPicDiscover.c)
 *     HalpApicRegisterIoUnit @ 0x1403A8208 (HalpApicRegisterIoUnit.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x14028EEE0 (HalpInterruptLookupController.c)
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     HalpIsPartitionCpuManager @ 0x1403732F8 (HalpIsPartitionCpuManager.c)
 *     HalpInterruptBuildKnownResourceIdString @ 0x140373E60 (HalpInterruptBuildKnownResourceIdString.c)
 *     HalpMmAllocateMemoryInternal @ 0x14037A7A8 (HalpMmAllocateMemoryInternal.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall HalpInterruptRegisterController(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // eax
  int v4; // ecx
  __int64 v5; // rdx
  __int16 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int16 Length; // bp
  unsigned int v10; // r14d
  void *MemoryInternal; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax
  const void *v16; // rdx
  __int64 *v17; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-D8h] BYREF
  WCHAR SourceString[80]; // [rsp+30h] [rbp-C8h] BYREF

  v1 = 0;
  DestinationString = 0LL;
  if ( HalpInterruptRegistrationAllowed )
  {
    if ( !a1 )
      return (unsigned int)-1073741811;
    if ( *(_DWORD *)a1 != 1 )
      return (unsigned int)-1073741811;
    if ( *(_DWORD *)(a1 + 4) != 256 )
      return (unsigned int)-1073741811;
    if ( (*(_DWORD *)(a1 + 236) & 0xFFFFF000) != 0 )
      return (unsigned int)-1073741811;
    v3 = *(_DWORD *)(a1 + 228);
    if ( !v3 )
      return (unsigned int)-1073741811;
    if ( (unsigned int)(v3 - 1) > 1 )
      return (unsigned int)-1073741637;
    v4 = *(_DWORD *)(a1 + 232);
    if ( v4 == -1 )
      return (unsigned int)-1073741811;
    if ( HalpInterruptLookupController(v4) )
      return (unsigned int)-1073741635;
    if ( *(_QWORD *)(a1 + 88)
      && *(_QWORD *)(a1 + 96)
      && !*(_QWORD *)(a1 + 64)
      && ((v6 & 1) == 0 || *(_QWORD *)(a1 + 8))
      && *(_QWORD *)(a1 + 16)
      && ((v6 & 2) == 0 || *(_QWORD *)(a1 + 24) && *(_DWORD *)(a1 + 240))
      && (!*(_DWORD *)(a1 + 252) || *(_QWORD *)(a1 + 128) && *(_QWORD *)(a1 + 136))
      && ((v6 & 0x400) == 0 || *(_QWORD *)(a1 + 176)) )
    {
      HalpInterruptBuildKnownResourceIdString(a1, v5, SourceString);
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( (*(_DWORD *)(a1 + 236) & 0x100) != 0 && HalpIsPartitionCpuManager(v8, v7) && qword_140C62148 )
        *(_DWORD *)(a1 + 236) ^= 0x100u;
      Length = DestinationString.Length;
      v10 = (((*(_DWORD *)(a1 + 224) + 383) & 0xFFFFFFF8) + DestinationString.Length + 9) & 0xFFFFFFF8;
      MemoryInternal = (void *)HalpMmAllocateMemoryInternal(v10, 1LL);
      v12 = (__int64)MemoryInternal;
      if ( MemoryInternal )
      {
        memset(MemoryInternal, 0, v10);
        v13 = (v12 + 383) & 0xFFFFFFFFFFFFFFF8uLL;
        *(_QWORD *)(v12 + 16) = v13;
        v14 = *(unsigned int *)(a1 + 224) + 7LL + v13;
        *(_QWORD *)(v12 + 272) = v12 + 264;
        *(_QWORD *)(v12 + 264) = v12 + 264;
        *(_QWORD *)(v12 + 288) = v12 + 280;
        *(_QWORD *)(v12 + 280) = v12 + 280;
        *(_QWORD *)(v12 + 360) = v14 & 0xFFFFFFFFFFFFFFF8uLL;
        *(_DWORD *)(v12 + 24) = *(_DWORD *)(a1 + 224);
        *(_OWORD *)(v12 + 32) = *(_OWORD *)(a1 + 8);
        *(_OWORD *)(v12 + 48) = *(_OWORD *)(a1 + 24);
        *(_OWORD *)(v12 + 64) = *(_OWORD *)(a1 + 40);
        *(_OWORD *)(v12 + 80) = *(_OWORD *)(a1 + 56);
        *(_OWORD *)(v12 + 96) = *(_OWORD *)(a1 + 72);
        *(_OWORD *)(v12 + 112) = *(_OWORD *)(a1 + 88);
        *(_OWORD *)(v12 + 128) = *(_OWORD *)(a1 + 104);
        *(_OWORD *)(v12 + 144) = *(_OWORD *)(a1 + 120);
        *(_OWORD *)(v12 + 160) = *(_OWORD *)(a1 + 136);
        *(_OWORD *)(v12 + 176) = *(_OWORD *)(a1 + 152);
        *(_OWORD *)(v12 + 192) = *(_OWORD *)(a1 + 168);
        *(_OWORD *)(v12 + 208) = *(_OWORD *)(a1 + 184);
        *(_OWORD *)(v12 + 224) = *(_OWORD *)(a1 + 200);
        *(_DWORD *)(v12 + 244) = *(_DWORD *)(a1 + 236);
        *(_DWORD *)(v12 + 240) = *(_DWORD *)(a1 + 228);
        *(_DWORD *)(v12 + 252) = *(_DWORD *)(a1 + 240);
        *(_DWORD *)(v12 + 256) = *(_DWORD *)(a1 + 232);
        *(_DWORD *)(v12 + 304) = *(_DWORD *)(a1 + 244);
        *(_DWORD *)(v12 + 308) = *(_DWORD *)(a1 + 248);
        *(_QWORD *)(v12 + 296) = 0LL;
        *(_DWORD *)(v12 + 312) = *(_DWORD *)(a1 + 252);
        v15 = *(_DWORD *)(a1 + 224);
        if ( v15 )
        {
          v16 = *(const void **)(a1 + 216);
          if ( v16 )
            memmove(*(void **)(v12 + 16), v16, v15);
        }
        *(_WORD *)(v12 + 352) = 0;
        *(_WORD *)(v12 + 354) = Length + 2;
        RtlCopyUnicodeString((PUNICODE_STRING)(v12 + 352), &DestinationString);
        v17 = (__int64 *)qword_140C63B78;
        if ( *(ULONG_PTR **)qword_140C63B78 != &HalpRegisteredInterruptControllers )
          __fastfail(3u);
        ++HalpInterruptControllerCount;
        *(_QWORD *)v12 = &HalpRegisteredInterruptControllers;
        *(_QWORD *)(v12 + 8) = v17;
        *v17 = v12;
        qword_140C63B78 = v12;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v1;
}
