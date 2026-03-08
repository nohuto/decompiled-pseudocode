/*
 * XREFs of ObpLookupDirectoryEntry @ 0x14076161C
 * Callers:
 *     ObpCreateSymbolicLinkName @ 0x1407612D4 (ObpCreateSymbolicLinkName.c)
 *     ObpCloseHandle @ 0x1407C2500 (ObpCloseHandle.c)
 *     ObpDeleteNameCheck @ 0x1407D85E0 (ObpDeleteNameCheck.c)
 *     ObCreateObjectTypeEx @ 0x14080CB20 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140B403CC (ObInitSystem.c)
 * Callees:
 *     NLS_UPCASE @ 0x140267AD0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     ObpLookupDirectoryUsingHash @ 0x14076174C (ObpLookupDirectoryUsingHash.c)
 */

__int64 __fastcall ObpLookupDirectoryEntry(unsigned __int16 *a1, unsigned int a2, __int64 *a3)
{
  unsigned __int16 *v4; // rdi
  unsigned int v6; // r11d
  unsigned __int64 v8; // rbx
  __int64 v9; // r9
  unsigned int v10; // r10d
  struct _LIST_ENTRY *v11; // rax
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // ax
  int v14; // r10d
  unsigned int v15; // edx
  int v16; // r10d
  __int64 v17; // rcx
  __int64 v19; // r10
  unsigned int v20; // edx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 v22; // dx
  __int128 v23; // rt0

  v4 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  v6 = *a1 >> 1;
  if ( v6 < 4 )
  {
    v10 = 0;
  }
  else
  {
    v8 = 0LL;
    do
    {
      v9 = *(_QWORD *)v4;
      if ( (*(_QWORD *)v4 & 0xFF80FF80FF80FF80uLL) != 0 )
      {
        v19 = 4LL;
        do
        {
          v20 = (unsigned __int16)v9;
          if ( (unsigned __int16)v9 >= 0x61u )
          {
            if ( (unsigned __int16)v9 <= 0x7Au )
            {
              v20 = (unsigned __int16)v9 - 32;
            }
            else
            {
              CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
              v20 = NLS_UPCASE((__int64)CurrentServerSiloGlobals[77].Flink, v22);
            }
          }
          *(_QWORD *)&v23 = v9;
          *((_QWORD *)&v23 + 1) = v20;
          v9 = v23 >> 16;
          --v19;
        }
        while ( v19 );
      }
      else
      {
        v9 &= 0xFFDFFFDFFFDFFFDFuLL;
      }
      v4 += 4;
      v6 -= 4;
      v8 = v9 + (v8 >> 1) + 3 * v8;
    }
    while ( v6 >= 4 );
    v10 = v8 + HIDWORD(v8);
  }
  while ( v6 )
  {
    v15 = *v4;
    v16 = (v10 >> 1) + 3 * v10;
    ++v4;
    --v6;
    if ( v15 < 0x61 )
      goto LABEL_12;
    if ( v15 > 0x7A )
    {
      v11 = PsGetCurrentServerSiloGlobals();
      v13 = NLS_UPCASE((__int64)v11[77].Flink, v12);
      v10 = v13 + v14;
    }
    else
    {
      v16 -= 32;
LABEL_12:
      v10 = v15 + v16;
    }
  }
  *((_DWORD *)a3 + 4) = v10;
  v17 = *a3;
  *((_BYTE *)a3 + 20) = v10 % 0x25;
  return ObpLookupDirectoryUsingHash(v17, a1, a3, a2);
}
