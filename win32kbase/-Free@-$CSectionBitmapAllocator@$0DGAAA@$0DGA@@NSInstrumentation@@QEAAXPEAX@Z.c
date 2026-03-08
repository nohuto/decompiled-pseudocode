/*
 * XREFs of ?Free@?$CSectionBitmapAllocator@$0DGAAA@$0DGA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00A5C3C
 * Callers:
 *     ?Free@?$CTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00A5AC0 (-Free@-$CTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<221184,864>::Free(__int64 *a1, void *a2)
{
  __int64 v2; // rbx
  ULONG v5; // edi

  if ( a2 )
  {
    v2 = *a1;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2, 0LL);
    v5 = ((unsigned __int16)a2 & 0xFFFu) / 0x360
       + 4 * ((unsigned int)((_DWORD)a2 - (*((_DWORD *)a1 + 4) ^ *((_DWORD *)a1 + 2))) >> 12);
    RtlClearBit((PRTL_BITMAP)(a1[2] ^ a1[3]), v5);
    memset(a2, 0, 0x360uLL);
    *((_DWORD *)a1 + 8) = v5;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
