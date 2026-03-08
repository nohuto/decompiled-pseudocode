/*
 * XREFs of TranslateBridgeRequirements @ 0x1C00977A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TranslateBridgeRequirements(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 *a5)
{
  __int64 Pool2; // rax
  PVOID *v9; // rdi
  unsigned int v10; // ebx
  ULONGLONG v11; // rax
  unsigned int v12; // r11d
  __int64 v13; // rdx
  ULONGLONG v14; // rbp
  __int64 v15; // r9
  ULONGLONG v16; // rax
  signed __int64 v17; // r10
  signed __int64 v18; // rcx
  _OWORD *v19; // rax
  unsigned __int64 MaximumAddress[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+50h] [rbp+8h] BYREF

  MinimumAddress = 0LL;
  MaximumAddress[0] = 0LL;
  Pool2 = ExAllocatePool2(256LL, 32LL, 1383097153LL);
  v9 = (PVOID *)a5;
  *a5 = Pool2;
  if ( Pool2 )
  {
    v11 = RtlIoDecodeMemIoResource((PIO_RESOURCE_DESCRIPTOR)a2, 0LL, &MinimumAddress, MaximumAddress);
    v12 = *(_DWORD *)(a1 + 8);
    v13 = 0LL;
    v14 = v11;
    if ( v12 )
    {
      v15 = *(_QWORD *)(a1 + 16);
      while ( 1 )
      {
        if ( (*(_DWORD *)(v15 + 40 * v13 + 32) & 2) != 0 && *(_BYTE *)(v15 + 40 * v13 + 1) == *(_BYTE *)(a2 + 1) )
        {
          v16 = *(_QWORD *)(v15 + 40 * v13 + 24);
          if ( v14 <= v16 )
          {
            v17 = *(_QWORD *)(v15 + 40 * v13 + 16);
            v18 = v17 + v16;
            if ( ((__int64)MinimumAddress >= v17 || (__int64)MaximumAddress[0] >= v17)
              && ((__int64)MinimumAddress <= v18 || (__int64)MaximumAddress[0] <= v18) )
            {
              break;
            }
          }
        }
        v13 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v13 >= v12 )
          goto LABEL_15;
      }
      v19 = *v9;
      *v19 = *(_OWORD *)a2;
      v19[1] = *(_OWORD *)(a2 + 16);
      *a4 = 1;
      *((_BYTE *)*v9 + 1) = *(_BYTE *)(v15 + 40 * v13);
      *((_QWORD *)*v9 + 2) = MinimumAddress + *(_QWORD *)(v15 + 40 * v13 + 8) - v17;
      *((_QWORD *)*v9 + 3) = MaximumAddress[0] + *(_QWORD *)(v15 + 40 * v13 + 8) - v17;
    }
LABEL_15:
    if ( (unsigned int)v13 < *(_DWORD *)(a1 + 8) )
      return 288LL;
    *a4 = 0;
    v10 = -1073479626;
  }
  else
  {
    v10 = -1073741670;
  }
  if ( *v9 )
  {
    ExFreePoolWithTag(*v9, 0);
    *v9 = 0LL;
  }
  return v10;
}
