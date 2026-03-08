/*
 * XREFs of HvpGrowDirtyVectors @ 0x1402B32C4
 * Callers:
 *     HvpAddBin @ 0x14072F9F0 (HvpAddBin.c)
 *     HvpPerformLogFileRecovery @ 0x1407FBCAC (HvpPerformLogFileRecovery.c)
 * Callees:
 *     RtlCopyBitMap @ 0x1402B3480 (RtlCopyBitMap.c)
 *     RtlClearBits @ 0x14030DE60 (RtlClearBits.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall HvpGrowDirtyVectors(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  __int64 v3; // r12
  ULONG v4; // r15d
  unsigned int v5; // r14d
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int *v11; // r13
  unsigned int *v12; // rax
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-20h] BYREF
  RTL_BITMAP v17; // [rsp+30h] [rbp-10h] BYREF
  ULONG StartingIndex; // [rsp+80h] [rbp+40h]
  ULONG NumberToClear; // [rsp+88h] [rbp+48h]
  unsigned int *v20; // [rsp+90h] [rbp+50h]

  v2 = 0;
  v3 = a1 + 88;
  v4 = *(_DWORD *)(a1 + 88);
  v5 = a2 >> 9;
  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  *(&v17.SizeOfBitMap + 1) = 0;
  v7 = ((a2 >> 12) + 3) & 0xFFFFFFFC;
  StartingIndex = v4;
  if ( *(_DWORD *)(a1 + 108) < v7 )
  {
    v11 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 24))(v7, 0LL, 959532355LL);
    if ( v11 )
    {
      v12 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 24))(v7, 0LL, 959532355LL);
      v20 = v12;
      if ( v12 )
      {
        v17.Buffer = v12;
        BitMapHeader.SizeOfBitMap = v5;
        BitMapHeader.Buffer = v11;
        v17.SizeOfBitMap = v5;
        NumberToClear = v5 - v4;
        if ( *(_QWORD *)(a1 + 96) )
        {
          RtlCopyBitMap(v3, &BitMapHeader, 0LL);
          RtlClearBits(&BitMapHeader, v4, NumberToClear);
        }
        else
        {
          memset(v11, 0, v7);
        }
        if ( *(_QWORD *)(a1 + 120) )
        {
          v13 = a1 + 112;
          RtlCopyBitMap(a1 + 112, &v17, 0LL);
          RtlClearBits(&v17, StartingIndex, NumberToClear);
        }
        else
        {
          memset(v20, 0, v7);
          v13 = a1 + 112;
        }
        v14 = *(_QWORD *)(a1 + 96);
        if ( v14 )
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v14, *(unsigned int *)(a1 + 108));
        v15 = *(_QWORD *)(a1 + 120);
        if ( v15 )
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v15, *(unsigned int *)(a1 + 108));
        *(_DWORD *)v3 = v5;
        *(_QWORD *)(v3 + 8) = v11;
        *(_QWORD *)(v13 + 8) = v20;
        *(_DWORD *)v13 = v5;
        *(_DWORD *)(a1 + 108) = v7;
      }
      else
      {
        v2 = -1073741670;
        (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 32))(v11, v7);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 96);
    *(_DWORD *)v3 = v5;
    *(_QWORD *)(a1 + 96) = v8;
    RtlClearBits((PRTL_BITMAP)(a1 + 88), v4, v5 - v4);
    v9 = *(_QWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 112) = v5;
    *(_QWORD *)(a1 + 120) = v9;
    RtlClearBits((PRTL_BITMAP)(a1 + 112), v4, v5 - v4);
  }
  return v2;
}
