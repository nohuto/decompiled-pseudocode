/*
 * XREFs of MiCaptureAllocateMapExtendedParameters @ 0x1407282D0
 * Callers:
 *     MiMapViewOfSectionExCommon @ 0x140727CDC (MiMapViewOfSectionExCommon.c)
 *     MmAllocateVirtualMemory @ 0x140728160 (MmAllocateVirtualMemory.c)
 *     MiAllocateUserPhysicalPages @ 0x140A3D6E8 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiCaptureAllocateMapExtendedParameters(
        unsigned __int64 *Address,
        ULONGLONG ullMultiplicand,
        char a3,
        int a4,
        _QWORD *a5)
{
  ULONGLONG v7; // rsi
  NTSTATUS v9; // ecx
  ULONGLONG v11; // r14
  int v12; // esi
  char *v13; // r14
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  unsigned __int64 v17; // rcx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  ULONGLONG pullResult; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 *v28; // [rsp+40h] [rbp-38h]
  char *v29; // [rsp+50h] [rbp-28h]
  unsigned __int64 v30; // [rsp+58h] [rbp-20h]

  v7 = (unsigned int)ullMultiplicand;
  pullResult = 0LL;
  memset(a5, 0, 0x48uLL);
  if ( (_DWORD)v7 )
  {
    if ( Address )
    {
      v11 = v7;
      v9 = RtlULongLongMult(v7, 0x10uLL, &pullResult);
      if ( v9 >= 0 )
      {
        v12 = 0;
        if ( a3 )
          ProbeForWrite(Address, pullResult, 8u);
        v28 = Address;
        v13 = (char *)&Address[2 * v11];
        v29 = v13;
        while ( Address < (unsigned __int64 *)v13 )
        {
          v14 = (unsigned __int8)*(_DWORD *)Address;
          if ( (unsigned int)(v14 - 1) > 5 || *Address >= 0x100 )
            return (unsigned int)-1073741811;
          v15 = 1 << v14;
          if ( ((1 << v14) & a4) == 0 )
            return (unsigned int)-1073741811;
          if ( (v15 & v12) != 0 )
            return (unsigned int)-1073741811;
          v12 |= v15;
          v16 = v14 - 1;
          if ( v16 )
          {
            v18 = v16 - 1;
            if ( v18 )
            {
              v19 = v18 - 1;
              if ( v19 )
              {
                v20 = v19 - 1;
                if ( v20 )
                {
                  v21 = v20 - 1;
                  if ( v21 )
                  {
                    if ( v21 != 1 )
                      return (unsigned int)-1073741811;
                    v23 = Address[1];
                    if ( v23 > 0xFFFF )
                      return (unsigned int)-1073741811;
                    *((_WORD *)a5 + 25) = v23;
                  }
                  else
                  {
                    v22 = Address[1];
                    a5[7] = v22;
                    if ( (v22 & 0xFFFFFF40) != 0 )
                      return (unsigned int)-1073741811;
                  }
                }
                else
                {
                  a5[5] = Address[1];
                  *((_BYTE *)a5 + 48) = 1;
                }
              }
              else
              {
                v24 = Address[1];
                a5[3] = v24;
                if ( !v24 )
                  return (unsigned int)-1073741811;
              }
            }
            else
            {
              v25 = Address[1];
              if ( (unsigned __int64)v25 > 0xFFFFFFFF )
              {
                v26 = Address[1];
                if ( v25 < 0 )
                {
                  v25 &= ~0x8000000000000000uLL;
                  v26 = v25;
                  *((_BYTE *)a5 + 49) = 1;
                }
                if ( v26 > 0xFFFFFFFF )
                  return (unsigned int)-1073741811;
              }
              *((_DWORD *)a5 + 8) = v25;
              if ( (_DWORD)v25 == -1 )
                return (unsigned int)-1073741811;
              *((_DWORD *)a5 + 8) = v25 + 1;
            }
          }
          else
          {
            v17 = Address[1];
            v30 = v17;
            if ( a3 )
            {
              if ( (v17 & 7) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v17 + 24 > 0x7FFFFFFF0000LL || v17 + 24 < v17 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            *a5 = *(_QWORD *)v17;
            a5[1] = *(_QWORD *)(v17 + 8);
            a5[2] = *(_QWORD *)(v17 + 16);
          }
          Address += 2;
          v28 = Address;
        }
        *((_DWORD *)a5 + 13) = v12;
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return Address != 0LL ? 0xC000000D : 0;
  }
  return (unsigned int)v9;
}
