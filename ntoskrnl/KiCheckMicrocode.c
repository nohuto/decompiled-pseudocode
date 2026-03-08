/*
 * XREFs of KiCheckMicrocode @ 0x140A89B04
 * Callers:
 *     KiRestoreFeatureBits @ 0x140574114 (KiRestoreFeatureBits.c)
 *     KiInitializeKernel @ 0x140A89160 (KiInitializeKernel.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __fastcall KiCheckMicrocode(__int64 a1)
{
  char v2; // al
  unsigned int v8; // r10d
  unsigned __int64 v9; // rax
  unsigned int v10; // r9d
  unsigned __int64 v11; // r11
  __int64 v12; // rdx
  char *i; // rcx
  ULONG_PTR v14; // rdx
  __int64 v15; // rcx

  if ( KiMicrocodeTrackerEnabled
    && (!KiBootProcessorsStarted || *(_DWORD *)(a1 + 36) < (unsigned int)KiBootProcessorCount) )
  {
    v2 = *(_BYTE *)(a1 + 141);
    if ( v2 == 1 )
    {
      v11 = 0LL;
      v10 = __readmsr(0x8Bu);
      _RAX = 1LL;
      __asm { cpuid }
      v8 = _RAX;
    }
    else
    {
      if ( v2 != 2 )
        return;
      __writemsr(0x8Bu, 0LL);
      _RAX = 1LL;
      __asm { cpuid }
      v8 = _RAX;
      v9 = __readmsr(0x8Bu);
      v10 = HIDWORD(v9);
      v11 = __readmsr(0x17u);
    }
    v12 = 0LL;
    for ( i = (char *)&unk_140D1F434; ; i += 24 )
    {
      if ( !*((_DWORD *)i - 1) )
      {
        v15 = 3 * v12;
        *((_DWORD *)&KiMicrocodeTracker + 2 * v15) = 1;
        *((_DWORD *)&KiMicrocodeTracker + 2 * v15 + 1) = v8;
        *((_QWORD *)&KiMicrocodeTracker + v15 + 1) = v11;
        *((_DWORD *)&KiMicrocodeTracker + 2 * v15 + 4) = v10;
        return;
      }
      if ( *(_DWORD *)i == v8 && *(_QWORD *)(i + 4) == v11 )
        break;
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= 4 )
        return;
    }
    v14 = *((unsigned int *)&KiMicrocodeTracker + 6 * v12 + 4);
    if ( (_DWORD)v14 != v10 )
      KeBugCheckEx(0x17Eu, v8, v14, v10, *(unsigned int *)(a1 + 36));
  }
}
