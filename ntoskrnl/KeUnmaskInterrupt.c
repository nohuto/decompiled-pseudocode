/*
 * XREFs of KeUnmaskInterrupt @ 0x1403D1EFC
 * Callers:
 *     IopUnmaskInterrupt @ 0x1403D1E7C (IopUnmaskInterrupt.c)
 * Callees:
 *     KiIsInterruptTypeSecondary @ 0x140290340 (KiIsInterruptTypeSecondary.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x14056F948 (KiUnmaskSecondaryInterruptInternal.c)
 */

__int64 __fastcall KeUnmaskInterrupt(__int64 a1, unsigned __int8 a2, _DWORD *a3)
{
  char IsInterruptTypeSecondary; // al
  unsigned int v7; // ebx
  __int64 v8; // r9
  _BOOL8 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax

  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  v7 = 0;
  LOBYTE(v8) = 0;
  v9 = IsInterruptTypeSecondary != 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(a1 + 8LL * (unsigned __int8)v8);
      _m_prefetchw((const void *)(v10 + 104));
      if ( (_InterlockedAnd((volatile signed __int32 *)(v10 + 104), 0xFFFFFFFE) & 1) == 0 )
        break;
      LOBYTE(v8) = v8 + 1;
      if ( (unsigned __int8)v8 >= a2 )
        goto LABEL_4;
    }
    v12 = 295;
  }
  else
  {
LABEL_4:
    if ( a3[2] )
      return v7;
    v11 = (unsigned int)a3[16];
    if ( v9 )
      v12 = KiUnmaskSecondaryInterruptInternal(*(unsigned int *)(*(_QWORD *)a1 + 88LL), (unsigned int)v11);
    else
      v12 = ((__int64 (__fastcall *)(__int64, _QWORD, _BOOL8, __int64))off_140C01B88[0])(v11, 0LL, v9, v8);
  }
  if ( v12 != 296 )
    return v12;
  return v7;
}
