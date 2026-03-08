/*
 * XREFs of MiInitializePrivateFixupBitmap @ 0x14072E1E0
 * Callers:
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1403A6104 (MiAddPrivateFixupEntryForSystemImage.c)
 *     MiInitializeFixupVad @ 0x14072E14C (MiInitializeFixupVad.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 *     RtlClearAllBits @ 0x1402B24A0 (RtlClearAllBits.c)
 *     RtlDoesRequireFunctionOverrideFixups @ 0x140679788 (RtlDoesRequireFunctionOverrideFixups.c)
 */

__int64 __fastcall MiInitializePrivateFixupBitmap(RTL_BITMAP *a1, _QWORD *a2, char a3)
{
  _QWORD *v3; // rbp
  __int64 v4; // rsi
  unsigned int v7; // r9d
  unsigned int v8; // r9d
  __int64 v9; // r14
  __int64 v10; // r10
  unsigned __int64 i; // r10
  __int64 *v12; // r8
  __int64 v13; // rbx
  unsigned int v14; // r11d
  __int64 v15; // rcx
  _BYTE *v16; // rdx
  const struct _RTL_FUNCTION_OVERRIDE_INFORMATION *v18; // rcx

  v3 = a2 + 16;
  v4 = a2[12];
  v7 = *(_DWORD *)(*a2 + 8LL);
  a1->Buffer = &a1[1].SizeOfBitMap;
  a1->SizeOfBitMap = v7;
  RtlClearAllBits(a1);
  v8 = 0;
  v9 = 0LL;
  do
  {
    v10 = 8LL * *((unsigned int *)v3 + 11);
    if ( v3[1] < (unsigned __int64)(v10 + v3[1]) )
    {
      for ( i = ((unsigned __int64)(v10 - 1) >> 3) + 1; i; --i )
      {
        v12 = *(__int64 **)(v4 + 32);
        v13 = *v12;
        if ( (a3 & 1) != 0 && v8 < *((_DWORD *)v12 + 14) )
        {
          v14 = v8;
          while ( !*(_QWORD *)(v13 + 8LL * v14) )
          {
            v15 = v12[11];
            if ( v15 )
            {
              if ( *(_QWORD *)(v15 + 8LL * v14 + 56) )
                break;
            }
            v18 = (const struct _RTL_FUNCTION_OVERRIDE_INFORMATION *)v12[12];
            if ( v18 )
            {
              if ( RtlDoesRequireFunctionOverrideFixups(v18, v14) )
                break;
            }
            if ( (a3 & 2) != 0 && (unsigned int)PdcCreateWatchdogAroundClientCall() )
              break;
            if ( ++v14 != v8 )
              goto LABEL_18;
          }
          v16 = (char *)a1->Buffer + ((unsigned __int64)v8 >> 3);
          *v16 |= 1 << (v8 & 7);
        }
        else
        {
LABEL_18:
          if ( (v3[4] & 0xA) != 0xA )
            goto LABEL_12;
        }
        ++v9;
LABEL_12:
        ++v8;
      }
    }
    v3 = (_QWORD *)v3[2];
  }
  while ( v3 );
  return v9;
}
